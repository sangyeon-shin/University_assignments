#include <iostream>
using namespace std;

int main() 
{
	cout << "�й� : 202134-154071 �̸� : �Ż��Դϴ�." << endl;
	int a = 10, b = 20;
	int &aRef = a;
	cout << "a�� �� : " << a << endl;
	cout << "aRef�� �����ϴ� �� : " << aRef << endl << endl;
	aRef = 100;
	cout << "a�� �� : " << a << endl;
	aRef = b;
	cout << "a�� �� : " << a << endl;
	return 0;	
}