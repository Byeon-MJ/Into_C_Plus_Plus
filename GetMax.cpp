// //////////////////////////////////
// // C++ ���α׷���                 //
// // ������������(����) ��������(ȭ��) //
// // �й� : 202434-363640         //
// // �̸� : ������                 //
// /////////////////////////////////
// #include <iostream>
// #include <cfloat>
// using namespace std;
// int getMax(int arr[], int len) {    // �Լ� �Ӹ���
//     int max = INT_MIN;  // int���� �ּڰ��� max�� ������
//     for (int i = 0; i < len; i++)
//         if (max < arr[i]) max = arr[i];
//     return max; // ����� ��ȯ
// }
//
// float getMax(float arr[], int len) {
//     float max = FLT_MIN;   // float���� �ּڰ��� max�� ������
//     for (int i = 0; i < len; i++)
//         if (max < arr[i]) max = arr[i];
//     return max;
// }
//
// int main() {
//     int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
//
//     cout << "������ : ";
//     for (int i = 0; i < 10; i++)
//         cout << data[i] << " ";
//     cout << endl << endl;
//     cout << "�ִ� = " << getMax(data, 10) << endl;
// }
