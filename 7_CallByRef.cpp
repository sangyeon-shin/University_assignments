#include <iostream>
using namespace std;
const float PI = 3.14159265f;
struct Circle {
	float radius, cx, cy;
};

//원의 데이터 입력
void inputData(Circle &c)
{
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표(x) : ";
	cin >> c.cx;
	cout << "중심좌표(y) : ";
	cin >> c.cy;
}

//원의 데이터 출력
void prData(Circle &c)
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}

float area(Circle c)
{
	return PI * c.radius * c.radius;
}

int main() 
{
	cout << "학번 : 202134-154071 이름 : 신상연입니다." << endl;
	Circle circle = { 1, 2, 3 };
	inputData(circle);
	cout << "입력된 원의 정보" << endl;
	prData(circle);
	cout << "원의 면적 = " << area(circle) << endl;
}
