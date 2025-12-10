#include <iostream>
#include "Skoriy.h"
#include "Ostrover.h"
#include "Troxim.h"
#include "Nazaryk.h"
#include <windows.h>
#include <limits> 

int registr;

using namespace std;
static void Menu()
{
    cout << "\n\n\n" << endl;
    //Main menu
    cout << "Меню:" <<endl;
    cout << "1. Авторизація" << endl;
    cout << "2. Перегляд розкладу" << endl;
    cout << "3. Звернення до адміністрації" << endl;
    cout << "4. Вийти" << endl;
    if (This_is_registr())
        cout << "                                                <(Ви у системі)>"<<endl;

    int a;
    cin >> a;
    cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    switch (a)
    {
    case 1:
        Ostrover();
        break;
    case 2:
        Skoriy();
        break;
    case 3:
        Nazaryk();
        break;
    case 4:
        Troxim();
        break;

    default:
        cout << "Enter other num";
        break;
    }
}
int main()
{
    SetConsoleOutputCP(1251); //Українська мова у терміналі
    SetConsoleCP(1251);
    do
    {
        Menu();

    } while (true);
    
    
}
