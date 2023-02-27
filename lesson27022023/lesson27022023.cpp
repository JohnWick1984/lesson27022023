// lesson27022023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<iomanip>
#include<time.h>
#include<cstring>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string fullName, nickName, address;
	string greeting("Здравствуйте, ");
	cout << " Введите ваше имя: " << "\n";
	getline(cin, fullName);

	string s1 = " В лесу родилась елочка";
	int findStr = 0;
	findStr = s1.find("елочка"); // поиск по всему массиву
	findStr = s1.find_first_of("елочка"); // поиск по первому вхождению
	findStr = s1.find_first_not_of("елочка"); //поиск по последующим вхождениям подстроки

	cout << " Елочка найдена" << findStr << "\n";
	cout << "Ваше имя : " << fullName << "\n";








	/*const int DAYS = 7;
	const int max = 12;

	string str3 = " Ель";
	string str4 = ("Сосна");

	cout <<  "Деревья" + str3+ " и " + str4 + " хвойные"<< "\n";

	char days[DAYS][max] = {
		"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресение"
	};
	for (int i = 0; i < DAYS; i++)
	{
		cout << days[i] << "\n";
	}*/

	/*const int maxSize = 80;
	char str[] = "Я памятнег сибе ваздвиг нерукотворный";
	char str2[maxSize];
	strcpy_s(str2, str);

	cout << str2;*/

	/*for (int i = 0; i <= strlen(str); i++)
	{
		str2[i] = str[i];
		
	}
	cout << str2;*/

	

	/*char str[maxSize];

	cout << "Введите строку :" << "\n";

	cin.get(str, maxSize, '$');

	cout << " Вы ввели:" << str << "\n";*/
}

