/*
파일명: 18_constants_literals.cpp

상수와 리터럴
    프로그램 실행 중 값이 변경되지 않는 데이터와 코드에 직접 기술된 고정값

프로그램 실행 단계:
1. 전처리(Preprocessing):
    - #include, #define 등 전처리 지시문 처리
    - 매크로 치환, 헤더 파일 호마
    - 소스 코드 -> 전처리 소스코드

2. 컴파일 타임(Compile Time):
    - 전처리된 소스 코드를 기계어로 번역
    - 문법 검사, 타입 검사, 최적화 수행
    - constexpr 값들이 이 단계에서 계산됨
    - 소스 코드 -> 오브젝트 파일(.obj, .o)

3. 링크 타임(Link Time):
    - 여러 오브젝트 파일을 하나의 실행 파일로 결함
    - 라이브러리 연결, 외부 참조 해결

4. 런타임(Runtime):
    - 실제 프로그램이 실행되는 시점
    - const 변수의 값이 결정되고 메모리에 저장
    - 사용자 입력, 계산 결과 등이 처리됨


*/

#include <iostream>

using namespace std;

// 매크로 상수 정의
#define MAX_BUFFER_SIZE 1024
#define VERSION "2.1.0"
#define SQUARE(x) ((x) * (x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {

    cout << "=== 프로그램 실행 단계별 상수 처리 ===" << endl;

    // 전처리 단계: 매크로 치환
    cout << "1. 전처리: #define MAX_BUFFER_SIZE -> " << MAX_BUFFER_SIZE << endl;
    cout << "   (소스 코드에서 MAX_BUFFER_SIZE가 1024로 치환됨)" << endl;


    return 0;
}