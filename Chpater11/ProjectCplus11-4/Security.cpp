#include "Security.h"

int Security::validate(string username, string password)
{
    if ((username == "abbott") && (password == "monday")) return 1;
    if ((username == "costello") && (password == "tuesday")) return 2;
    return 0;
}

void Security::setUserName(string user)
{
    username = user;
}

void Security::setPassword(string word)
{
    password = word;
}

string Security::getUserName(void) const
{
    return username;
}

string Security::getPassword(void) const
{
    return password;
}