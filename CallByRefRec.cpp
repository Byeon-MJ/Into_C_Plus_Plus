//////////////////////////////////
// C++ 프로그래밍                 //
// 강원지역대학(강릉) 지역통합(화상) //
// 학번 : 202434-363640         //
// 이름 : 변민종                 //
/////////////////////////////////
#include <iostream>
using namespace std;

const float PI = 3.14159265f;

struct Circle {
    float radius, cx, cy;
};

struct Rectangle
{
    float x1, y1;   // 좌측 하단의 꼭짓점 좌표
    float x2, y2;   // 우측 상단의 꼭짓점 좌표
};

// 원의 데이터 입력
void inputData(Circle& c) // 함수 머리부
{
    cout << "원의 반지름 : ";
    cin >> c.radius;
    cout << "중심좌표(x) : ";
    cin >> c.cx;
    cout << "중심좌표(y) : ";
    cin >> c.cy;
}

// 직사각형의 데이터 입력
void inputData(Rectangle& r)
{
    cout << "직사각형의 좌측 하단의 x1 좌표 : ";
    cin >> r.x1;
    cout << "직사각형의 좌측 하단의 y1 좌표 : ";
    cin >> r.y1;
    do {    // x2는 우측 상단의 좌표이므로 항상 x1보다 크다.
        cout << "직사각형의 우측 상단의 x2 좌표 : ";
        cin >> r.x2;
        if (r.x1 >= r.x2) {
            cout << "x2는 x1보다 큰 값을 입력하세요. x1 : " << r.x1 << endl;
        }
    } while (r.x1 >= r.x2);
    do {
        cout << "직사각형의 우측 상단의 y2 좌표 : ";
        cin >> r.y2;
        if (r.y1 >= r.y2) {
            cout << "y2는 y1보다 큰 값을 입력하세요. y1 : " << r.y1 << endl;
        }
    } while (r.y1 >= r.y2); // y1과 y2가 같을 경우 반복
}

// 원의 데이터 출력
void prData(const Circle& c)    // 함수 머리부
{
    cout << "반지름 = " << c.radius << endl;
    cout << "중심좌표 = (" << c.cx;
    cout << ", " << c.cy << ")" << endl;
}

// 직사각형의 데이터 출력
void prData(const Rectangle& r)
{
    cout << "좌측 하단의 꼭짓점 좌표 = (" << r.x1;
    cout << ", " << r.y1 << ")" << endl;
    cout << "우측 상단의 꼭짓점 좌표 = (" << r.x2;
    cout << ", " << r.y2 << ")" << endl;
}

float area (const Circle& c)
{
    return PI * c.radius * c.radius;
}

float area (const Rectangle& r)
{
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int main()
{
    Rectangle rectangle = {1, 2, 3, 4};
    inputData(rectangle);
    cout << "입력된 직사각형의 정보" << endl;
    prData(rectangle);
    cout << "직사각형의 면적 = " << area(rectangle) << endl;
}
