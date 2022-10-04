#include <iostream>
using namespace std;

int main() 
{
	cout << "학번 : 202134-154071 이름 : 신상연입니다." << endl;
	char* sPtr;
	int maxSlen;
	cout << "단어의 최대 길이를 입력하시오 : ";
	cin >> maxSlen;
	sPtr = new char[maxSlen + 1];
	cout << "단어를 입력하시오 : ";
	cin >> sPtr;
	for (char* p = sPtr; *p; p++)
		if (*p >= 'a' && *p <= 'z') *p += 'A' - 'a';
	cout << sPtr << endl;
	delete[] sPtr;
}