#include <iostream>
#include "Ostrover.h"
#include <windows.h>
#include <limits> 
#include <string>
#include <fstream>

using namespace std;

void Nazaryk() //Початок функції
{
	if (This_is_registr()) // Чи увійшов користувач у систему
	{

		cout << "----Бланк для звернення----" << endl;  
		cout << "Опишіть вашу проблему" << endl;
		string problem;	//Строковий тип тікету
		getline(cin, problem);//Запис у змінну 
		cout << problem << endl; 
		
		

		ofstream file("C:/Users/termo/Desktop/ticket.txt", ios::out); // шлях до файлу
		if (file.is_open())  //якщо файл відкритий
		{         
			file << problem<<"\n"; //Запис у файл тікету та перенос на іншу строку
			file << "\n"; 
			file << "Дані користувача: " << "\n";
			file << Object.Name << "\n";//Запис у файл інформації про користувача
			file << Object.Mail << "\n";//Запис у файл інформації про користувача
			file.close();            //закриття файлу
		}
		else 
		{
			cout << "Не вдалося відкрити файл!" << endl;
		}
	}
	else 
	{
		cout << "Спочатку увійдіть в систему"<<endl;
		
	}
}
