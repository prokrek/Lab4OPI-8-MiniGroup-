#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
string names;
string mails;
struct User
{
public:
    string Name;
    string Age;
    string Mail;
    string Number;
    string Password;
    bool Registr = false;
};

User Object;
User Yaroslav;
User Artem;
User Tramp;
void Ostrover()
{//
    //Yaroslav
    Object.Name = "";
    Object.Age = "";
    Object.Mail = "";
    Object.Number = "";
    Object.Password = "";
    //Yaroslav
    Yaroslav.Name = "Yaroslav";
    Yaroslav.Age = "18";
    Yaroslav.Mail = "Yaroslav@gmail.com";
    Yaroslav.Number = "0967579200";
    Yaroslav.Password = "12345";
    //Artem
    Artem.Name = "Artem";
    Artem.Age = "18";
    Artem.Mail = "Yaroslav@gmail.com";
    Artem.Number = "0968479488";
    Artem.Password = "12345";
    //Tramp
    Tramp.Name = "Tramp";
    Tramp.Age = "18";
    Tramp.Mail = "Tramp@gmail.com";
    Tramp.Number = "0967893678";
    Tramp.Password = "12345";

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    cout << "Уведіть ваше ім'я: ";
    getline(cin, Object.Name);

    cout << "Уведіть ваш вік: ";
    getline(cin, Object.Age);


    cout << "Уведіть вашу почту: ";
    getline(cin, Object.Mail);

    cout << "Уведіть ваш номер: ";
    getline(cin, Object.Number);

    cout << "Уведіть ваш пароль: ";
    getline(cin, Object.Password);
    if ((Object.Name == Yaroslav.Name && Object.Password == Yaroslav.Password) || (Object.Name == Artem.Name && Object.Password == Artem.Password) || (Object.Name == Tramp.Name && Object.Password == Tramp.Password))
    {
        
        Object.Registr = true;   
    }
    else
    {
        cout << "ВАС НЕ ЗНАЙДЕНО У СИСТЕМІ !!!! ";
    }
}

int This_is_registr()
{
    if(Object.Registr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return Object.Registr ? 1 : 0;
}

