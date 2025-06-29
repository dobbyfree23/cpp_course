/*
파일명: 01_basic_exception.cpp

예외 처리 (Exception)
    try-catch 구문을 사용하여 런타임 오류를 안전하게 처리

    try 블록: 예외가 발생할 수 있는 코드를 감싸는 영역
    catch 블록: 특정 예외 타입을 받아 처리
    throw 문: 오류 발생 시 예외 객체를 던짐
*/

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int divide(int a, int b) {
    if(b == 0) {
        throw invalid_argument("0으로 나눌 수 없습니다.");
    }
    return a / b;    
}

int getArrayElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("배열 인덱스가 범위를 벗어났습니다.");
    }

    return arr[index];
}

int main() {

    // 1. 나눗셈 예외 처리
    try {
        cout << "10 / 2 = " << divide(10, 2) << endl;
        // 부동소수점 타입에서 0으로 나누기 무한대
        cout << "10 / 0 = " << divide(10, 0) << endl;

    } catch (const invalid_argument& e ) {
        cout << "오류 발생: " << e.what() << endl;
    }

    // 2. 배열 인덱스 접근 예외 처리
    int number[] = {10, 20, 30, 40, 50};
    int size = 5;
    

    try {

        getArrayElement(number, size, 10);
    } catch(const out_of_range& e) {
        cout << "오류 발생: " << e.what() << endl;
    }

    // 3. 다중 예외 처리 (순서 중요)
    try {
        cout << "\n 5 / 1 =" << divide(5, 1) << endl;
        cout << "배열[0] = " << getArrayElement(number, size, 0) << endl;
        cout << "\n 3 / 0 =" << divide(3, 0) << endl;
    } 
    catch (const invalid_argument& e) {
        cout << "오류 발생: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cout << "오류 발생: " << e.what() << endl;
    }
    catch (...) {
        // 알수 없는 예외 처리
        cout << "알 수 없는 오류가 발생했습니다." << endl;
    }

    vector<int> vec = {1, 2, 3};

    try {
        cout << vec.at(10);
    } catch (...) {
        cout << "알 수 없는 오류가 발생했습니다." << endl;
    }

      
    cout << "\n프로그램이 정상적으로 계속됩니다." << endl;
    return 0;
}
