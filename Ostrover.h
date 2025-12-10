
#pragma once
#include <string>
using namespace std;
void Ostrover();
int This_is_registr();
struct User
{
    string Name;
    string Age;
    string Mail;
    string Number;
    string Password;
    bool Registr = false;
};
extern User Object;
