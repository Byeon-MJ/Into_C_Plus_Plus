cmake_minimum_required(VERSION 3.28)
project(Into_C_Plus_Plus)

set(CMAKE_CXX_STANDARD 17)

add_executable(Into_C_Plus_Plus main.cpp
        FirstStep.cpp
        FindMaxInArr.cpp
        IntPtr.cpp
        DAlloc.cpp
        RecTest.cpp
        GetMax.cpp
        CallByRef.cpp
        CallByRefRec.cpp
)
