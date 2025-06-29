/*
파일명: 04_vector.cpp

STL (Standard Template Library)
    C++ 표준 템플릿 라이브러리
    자료구조 + 알고리즘 + 반복자를 모아놓은 강력한 표준 라이브러리

Vector
    동적 배열을 제공하는 STL 컨테이너
    런타임에 크기를 변경할 수 있는 배열

*/

#include <iostream>
#include <vector>
using namespace std;


// vector 출력 함수
void printVector(const vector<int>& vec) {
    for(int item : vec) {
        cout << item << endl;
    }
}


int main() {

    // vector 생성과 초기화
    vector<int> numbers;    // 빈 정수 벡터 생성
    vector<int> scores = {90, 85, 92, 78, 96}; // 초기 값을 가진 정수 벡터
    vector<string> names(3, "unknown"); // "unknown"으로 초기화된 문자열 3개 저장

    cout << "=== 요소 추가 ===" << endl;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "numbers 크기: " << numbers.size() << endl; // 현재 크기 출력
    cout << "scores 크기: " << scores.size() << endl; // 현재 크기 출력
    cout << "names 크기: " << names.size() << endl; // 현재 크기 출력

    cout << "\n=== 요소 접근 ===" << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << "numbers[" << i << "] = "  << numbers[i] << endl;
    }

    cout << "\n=== range for loop ===" << endl;
    printVector(scores);

    cout << endl;

    cout << "\n=== 요소 수정 ===" << endl;
    scores[0] = 95;
    scores.at(1) = 88;

    cout << "\n=== 요소 수정 후 ===" << endl;
    printVector(scores);

    cout << "\n=== 요소 삭제===" << endl;
    scores.pop_back();  // 마지막 요소 삭제

    cout << "\n=== 요소 마지막요소 삭제 후 ===" << endl;
    printVector(scores);

    cout << "\n=== vector 정보 ===" << endl;
    cout << "비어있는가? " << (numbers.empty() ? "예" : "아니오") << endl;
    cout << "첫 번째 요소: " << numbers.front() << endl;    // 첫 번째 요소 출력
    cout << "마지막 요소: " << numbers.back() << endl;  // 마지막 요소

    cout << "\n=== vector 삽입 ===" << endl;
    // 인덱스 1 위치(두 번째 자리)에 100 삽입
    scores.insert(scores.begin() + 1, 100); 
    cout << "\n=== vector 삽입 후 ===" << endl;
    printVector(scores);


    cout << "\n=== vector 삭제 ===" << endl;
    scores.erase(scores.begin() + 1);
    printVector(scores);


    return 0;
}