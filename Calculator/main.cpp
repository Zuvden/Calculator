#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "������� 1-e �����: ";
	cin>> a;
	
	int b;
	cout << "������� 2-e �����: ";
	cin >> b;
	
	int action;
    cout << "�������� ��������" << endl <<
		"1. ��������" << endl <<
		"2. ���������" << endl <<
		"3. ���������" << endl <<
		"4. �������: ";
	cin >> action;
	
	switch (action)
	{
	case 1:
		cout<< "�����: "<< a + b << endl;
		break;
	case 2:
		cout << "�����: "<< a - b << endl;
		break;
	case 3:
		cout << "�����: " << a * b << endl;
		break;
	case 4:
		cout << "�����: " << (float) a / b << endl;
		break;
	}

}