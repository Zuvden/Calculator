#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "Введите 1-e число: ";
	cin>> a;
	
	int b;
	cout << "Введите 2-e число: ";
	cin >> b;
	
	int action;
    cout << "Выберите действие" << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление: ";
	cin >> action;
	
	switch (action)
	{
	case 1:
		cout<< "Ответ: "<< a + b << endl;
		break;
	case 2:
		cout << "Ответ: "<< a - b << endl;
		break;
	case 3:
		cout << "Ответ: " << a * b << endl;
		break;
	case 4:
		cout << "Ответ: " << (float) a / b << endl;
		break;
	}

}