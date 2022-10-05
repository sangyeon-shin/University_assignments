#include <iostream>
using namespace std;

int main() 
{
	cout << "학번 : 202134-154071 이름 : 신상연입니다." << endl;
	int a = 10, b = 20;
	int &aRef = a;
	cout << "a의 값 : " << a << endl;
	cout << "aRef가 참조하는 값 : " << aRef << endl << endl;
	aRef = 100;
	cout << "a의 값 : " << a << endl;
	aRef = b;
	cout << "a의 값 : " << a << endl;
	return 0;	
}