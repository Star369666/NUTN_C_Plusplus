#include "Administrator.h"

int Administrator::Login()
{
    int back;

    back = Security::validate(admin.getUserName(), admin.getPassword());

    return back;
}

void Administrator::setAdmin(string name, string word)
{
    admin.setPassword(word);
    admin.setUserName(name);
}

Security Administrator::getAdmin(void) const
{
    return admin;
}