#include <iostream>
using namespace std;

int main() 
{
	cout << "�й� : 202134-154071 �̸� : �Ż��Դϴ�." << endl;
	char* sPtr;
	int maxSlen;
	cout << "�ܾ��� �ִ� ���̸� �Է��Ͻÿ� : ";
	cin >> maxSlen;
	sPtr = new char[maxSlen + 1];
	cout << "�ܾ �Է��Ͻÿ� : ";
	cin >> sPtr;
	for (char* p = sPtr; *p; p++)
		if (*p >= 'a' && *p <= 'z') *p += 'A' - 'a';
	cout << sPtr << endl;
	delete[] sPtr;
}