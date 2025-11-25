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
		cout << "Напишіть ваше ім'я та дату через пробіл" << endl;
		string name_and_data; //Строковий тип дати
		getline(cin, name_and_data); //Запис у змінну 


		ofstream file("C:/Users/termo/Desktop/ticket.txt", ios::out); // шлях до файлу
		if (file.is_open())  //якщо файл відкритий
		{         
			file << problem<<"\n"; //Запис у файл тікету та перенос на іншу строку
			file << name_and_data << "\n";//Запис у файл дати та перенос на іншу строку
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
