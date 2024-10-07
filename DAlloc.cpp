// //////////////////////////////////
// // C++ 프로그래밍                 //
// // 강원지역대학(강릉) 지역통합(화상) //
// // 학번 : 202434-363640         //
// // 이름 : 변민종                 //
// /////////////////////////////////
// #include <iostream>
// using namespace std;
//
// int main()
// {
//     int *intPtr;
//     intPtr = new int[4]; // 4개의 int 값을 저장할 메모리 할당
//     *intPtr = 10;
//     *(intPtr + 1) = 20;
//     intPtr[2] = 30;
//     intPtr[3] = 40;
//     for (int *p = intPtr, i = 0; i < 4; i++)
//         cout << *p++ << " ";    // p가 가리키는 곳의 값을 출력한 후 p를 다음으로 이동
//     cout << endl;
//     delete [] intPtr; // intPtr에서 할당한 메모리 반환
//     intPtr = nullptr;   // intPtr를 nullptr로 지정
//     return 0;
// }