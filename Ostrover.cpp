#include "Ostrover.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <Windows.h>
using namespace std;
bool hasLetter(const string& s) 
{
    return any_of(s.begin(), s.end(), ::isalpha);
}

class User
{
private:
    string Name="";
    string Age = "";
    string Mail = "";
    string Number = "";
    bool Registr = 0;
public:
    //Name
    void setName(const string& newName)
    {
        Name = newName;
        Registr = 1;
    }
    string getName() const
    {
        return Name;
    }
    //Age
    void setAge(const string& newAge)
    {
        Age = newAge;
        Registr = 1;
    }
    string getAge() const
    {
        return Age;
    }
    //mail
    void setMail(const string& newMail)
    {
        Mail = newMail;
        Registr = 1;
    }
    string getMail() const
    {
        return Mail;
    }
    //Number
    void setNumber(const string& newNumber)
    {
        Number = newNumber;
        Registr = 1;
    }
    string getNumber() const
    {
        return Number;
    }
    //Registr
    bool getRegistr() const
    {
        return Registr;
    }
};
User Object;
void Ostrover()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Авторизація
    //Name
    cout << "Уведіть ваше ім'я: " << endl;
    string Name;
    getline(cin, Name);
    Object.setName(Name);
    //Age
    cout << "Уведіть ваш вік: " << endl;
    string Age;
    getline(cin, Age);
    Object.setAge(Age);
    //Mail
    cout << "Уведіть вашу почту: " << endl;
    string Mail;
    getline(cin, Mail);
    Object.setMail(Mail);
    //Number
    cout << "Уведіть ваш номер: " << endl;
    string Number;
    getline(cin, Number);
    Object.setNumber(Number);
}

int This_is_registr() 
{
    if(Object.getRegistr()==1)
    {

        return 1;

    }
    else
    {
        return 0;
    }
}
void get_registr_user()
{
    cout << "Name: '" << Object.getName() << "'" << endl;
    cout << "Age: '" << Object.getAge() << "'" << endl; 
    cout << "Mail: '" << Object.getMail() << "'" << endl;
    cout << "Number: '" << Object.getNumber() << "'" << endl;
}