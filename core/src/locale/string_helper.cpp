#include "string_helper.h"
#include <vector>
#ifndef __linux__
#include <windows.h>
#endif

namespace core
{

    std::wstring utf8_to_wstring(const char* utf8_string)
    {
#ifndef __linux__
        auto len = ::MultiByteToWideChar(CP_UTF8, 0, utf8_string, static_cast<int>(strlen(utf8_string)), nullptr, 0);

        if (len <= 0)
        {
            return L"";
        }

        std::vector<WCHAR> tmp;
        tmp.resize(len);

        std::wstring converted_string;
        ::MultiByteToWideChar(CP_UTF8, 0, utf8_string, static_cast<int>(strlen(utf8_string)), &tmp[0], len);

        for (const auto i : tmp)
        {
            converted_string.push_back(i);
        }

        return converted_string;
#endif
    }

}
