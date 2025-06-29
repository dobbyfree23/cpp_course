/*
파일명: 07_lambda.cpp

람다 표현식
    익명 함수를 생성하는 기능
    이름 없는 함수, 즉석에서 정의하고 사용

*/

#include <iostream>
#include <vector>
#include <algorithm>  // for_each 등 알고리즘 헤더
#include <functional>
using namespace std;

int main() {

    // 1. 기본 형태의 람다
    auto hello = []() {
        cout << "Hello Lambda!" << endl;
    };
    hello();

    // 2. 매개변수 받는 람다
    auto add = [](int a, int b) {
        return a + b;
    };
    cout << "5 + 3 = " << add(5, 3) << endl;

    // 3. 반환 타입 명시한 람다
    auto divide = [](double a, double b) -> double {
        return b != 0 ? a / b : 0;
    };
    cout << "10.0 / 3.0 = " << divide(10.0, 3.0) << endl;

    cout << "\n=== 캡처 절 ===" << endl;

    int x = 10;
    int y = 20;

    // 1. 값으로 캡처 (복사, 읽기 전용)
    auto lambda1 = [x, y]() {
        cout << "값 캡처: x=" << x << ", y=" << y << endl;
    };
    
    // 2. 참조로 캡처 (원본 변수에 직접 접근 가능)
    auto lambda2 = [&x, &y]() {
        x += 5;
        y += 10;
        cout << "참조 캡처 후: x=" << x << ", y=" << y << endl;
    };

    // 3. 모든 변수 값으로 캡처
    auto lambda3 = [=]() {
        cout << "모든 변수 값 캡쳐: x=" << x << ", y=" << y << endl;
    };

    auto lambda4 = [&x, &y]() {
        cout << "참조 캡처 후: x=" << x << ", y=" << y << endl;
    };

    lambda1();
    lambda2();
    lambda3();
    lambda4();

    /*
    for_each: 함수형 스타일의 순회, 람다/함수 객체와 사용
    */

    vector<int> numbers = {1, 2, 3, 4, 5};

    // for_each 사용(람다 함수 사용)
    cout << "for_each: ";
    for_each(numbers.begin(), numbers.end(), [](int n){
        cout << n << " ";
    });
    cout << endl;

    return 0;
}