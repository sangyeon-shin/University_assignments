#include <iostream>
using namespace std;

int getMax(int arr[],int len)
{
	int max = INT_MIN;
	for (int i = 0; i < len; i++)
		if (max < arr[i]) max = arr[i];
	return max;
}

int getMax(float arr[], int len)
{
	int max = INT_MIN;
	for (int i = 0; i < len; i++)
		if (max < arr[i]) max = arr[i];
	return max;
}

int main()
{
	cout << "학번 : 202134-154071 이름 : 신상연입니다." << endl;
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

	cout << "데이터 : ";
	for (int i = 0; i < 10; i++)
		cout << data[i] << "  ";
	cout << endl << endl;
	cout << "최댓값 = " << getMax(data, 10) << endl;
}