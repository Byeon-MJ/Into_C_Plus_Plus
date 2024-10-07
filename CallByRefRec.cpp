//////////////////////////////////
// C++ ���α׷���                 //
// ������������(����) ��������(ȭ��) //
// �й� : 202434-363640         //
// �̸� : ������                 //
/////////////////////////////////
#include <iostream>
using namespace std;

const float PI = 3.14159265f;

struct Circle {
    float radius, cx, cy;
};

struct Rectangle
{
    float x1, y1;   // ���� �ϴ��� ������ ��ǥ
    float x2, y2;   // ���� ����� ������ ��ǥ
};

// ���� ������ �Է�
void inputData(Circle& c) // �Լ� �Ӹ���
{
    cout << "���� ������ : ";
    cin >> c.radius;
    cout << "�߽���ǥ(x) : ";
    cin >> c.cx;
    cout << "�߽���ǥ(y) : ";
    cin >> c.cy;
}

// ���簢���� ������ �Է�
void inputData(Rectangle& r)
{
    cout << "���簢���� ���� �ϴ��� x1 ��ǥ : ";
    cin >> r.x1;
    cout << "���簢���� ���� �ϴ��� y1 ��ǥ : ";
    cin >> r.y1;
    do {    // x2�� ���� ����� ��ǥ�̹Ƿ� �׻� x1���� ũ��.
        cout << "���簢���� ���� ����� x2 ��ǥ : ";
        cin >> r.x2;
        if (r.x1 >= r.x2) {
            cout << "x2�� x1���� ū ���� �Է��ϼ���. x1 : " << r.x1 << endl;
        }
    } while (r.x1 >= r.x2);
    do {
        cout << "���簢���� ���� ����� y2 ��ǥ : ";
        cin >> r.y2;
        if (r.y1 >= r.y2) {
            cout << "y2�� y1���� ū ���� �Է��ϼ���. y1 : " << r.y1 << endl;
        }
    } while (r.y1 >= r.y2); // y1�� y2�� ���� ��� �ݺ�
}

// ���� ������ ���
void prData(const Circle& c)    // �Լ� �Ӹ���
{
    cout << "������ = " << c.radius << endl;
    cout << "�߽���ǥ = (" << c.cx;
    cout << ", " << c.cy << ")" << endl;
}

// ���簢���� ������ ���
void prData(const Rectangle& r)
{
    cout << "���� �ϴ��� ������ ��ǥ = (" << r.x1;
    cout << ", " << r.y1 << ")" << endl;
    cout << "���� ����� ������ ��ǥ = (" << r.x2;
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
    cout << "�Էµ� ���簢���� ����" << endl;
    prData(rectangle);
    cout << "���簢���� ���� = " << area(rectangle) << endl;
}
