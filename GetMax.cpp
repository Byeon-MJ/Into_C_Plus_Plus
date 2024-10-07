// //////////////////////////////////
// // C++ 프로그래밍                 //
// // 강원지역대학(강릉) 지역통합(화상) //
// // 학번 : 202434-363640         //
// // 이름 : 변민종                 //
// /////////////////////////////////
// #include <iostream>
// #include <cfloat>
// using namespace std;
// int getMax(int arr[], int len) {    // 함수 머리부
//     int max = INT_MIN;  // int형의 최솟값을 max로 가정함
//     for (int i = 0; i < len; i++)
//         if (max < arr[i]) max = arr[i];
//     return max; // 결과의 반환
// }
//
// float getMax(float arr[], int len) {
//     float max = FLT_MIN;   // float형의 최솟값을 max로 가정함
//     for (int i = 0; i < len; i++)
//         if (max < arr[i]) max = arr[i];
//     return max;
// }
//
// int main() {
//     int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
//
//     cout << "데이터 : ";
//     for (int i = 0; i < 10; i++)
//         cout << data[i] << " ";
//     cout << endl << endl;
//     cout << "최댓값 = " << getMax(data, 10) << endl;
// }
