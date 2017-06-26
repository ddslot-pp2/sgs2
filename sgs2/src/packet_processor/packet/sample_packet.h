
struct imessage
{
    virtual ~imessage()
    {

    }
};

struct CS_LOGIN : imessage
{
    virtual ~CS_LOGIN() {}
    int age;
};