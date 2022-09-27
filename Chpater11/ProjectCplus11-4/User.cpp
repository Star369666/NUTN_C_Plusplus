#include "User.h"

int User::Login()
{
    int back;

    back = Security::validate(user.getUserName(), user.getPassword());

    return back;
}

void User::setUser(string name, string word)
{
    user.setPassword(word);
    user.setUserName(name);
}

Security User::getUser(void) const 
{
    return user;
}