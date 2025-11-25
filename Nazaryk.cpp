#include <iostream>
#include "Skoriy.h"
#include "Ostrover.h"
#include "Troxim.h"
#include "Nazaryk.h"
#include <windows.h>
#include <limits> 
#include <string>
#include <fstream>

using namespace std;

void Nazaryk()
{
	if (This_is_registr())
	{

		cout << "----Бланк для звернення----" << endl;
		cout << "Опишіть вашу проблему" << endl;
		string problem;
		getline(cin, problem);
		cout << problem << endl;
		cout << "Напишіть ваше ім'я та дату через пробіл" << endl;
		string name_and_data;
		getline(cin, name_and_data);


		ofstream file("C:/Users/termo/Desktop/ticket.txt", ios::out);
		if (file.is_open()) 
		{         
			file << problem<<"\n";
			file << name_and_data << "\n";
			file.close();            
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
