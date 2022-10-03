#include <iostream>
using namespace std;

int main() 
{
	cout << "학번 : 202134-154071 이름 : 신상연입니다." << endl;

	int a = 10, b = 100;
	int *ptr = &a;

	cout << "ptr이 가르키는 곳의 값 : " << *ptr << endl;
	*ptr = 20;
	cout << "변수 a의 값 : " << a << endl;
	ptr = &b;
	cout << "변수 b의 값 : " << *ptr << endl;
	return 0;
}
