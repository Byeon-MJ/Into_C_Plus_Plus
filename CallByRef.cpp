// //////////////////////////////////
// // C++ ���α׷���                 //
// // ������������(����) ��������(ȭ��) //
// // �й� : 202434-363640         //
// // �̸� : ������                 //
// /////////////////////////////////
// #include <iostream>
// using namespace std;
//
// const float PI = 3.14159265f;
//
// struct Circle {
//     float radius, cx, cy;
// };
//
// // ���� ������ �Է�
// void inputData(Circle& c) // �Լ� �Ӹ���
// {
//     cout << "���� ������ : ";
//     cin >> c.radius;
//     cout << "�߽���ǥ(x) : ";
//     cin >> c.cx;
//     cout << "�߽���ǥ(y) : ";
//     cin >> c.cy;
// }
//
// // ���� ������ ���
// void prData(const Circle& c)    // �Լ� �Ӹ���
// {
//     cout << "������ = " << c.radius << endl;
//     cout << "�߽���ǥ = (" << c.cx;
//     cout << ", " << c.cy << ")" << endl;
// }
//
// float area (const Circle& c)
// {
//     return PI * c.radius * c.radius;
// }
//
// int main()
// {
//     Circle circle = {1, 2, 3};
//     inputData(circle);
//     cout << "�Էµ� ���� ����" << endl;
//     prData(circle);
//     cout << "���� ���� = " << area(circle) << endl;
// }
