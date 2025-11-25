#include "Skoriy.h"
#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

void Skoriy()
{
    SetConsoleOutputCP(CP_UTF8); //Кодування для виводу укр мови з файлу
    SetConsoleCP(CP_UTF8);
    ifstream file("C:/Users/termo/Desktop/rozklad.txt"); // відкриваємо файл для читання
    if (!file) 
    {
        cerr << "Не вдалося відкрити файл!\n";
    }

    string line;
    while (getline(file, line)) //вивід построчно
    {   
        cout << line << endl;        
    }

    file.close(); //закриття файлу
    SetConsoleOutputCP(1251); //Українська мова у терміналі як і було до
    SetConsoleCP(1251);
}
