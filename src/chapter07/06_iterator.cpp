/* 
파일명: 06_iterator.cpp

반복자 
    컨테이너의 요소를 순차적으로 접근하는 객체
    포인터처럼 동작하며, 다양한 컨테이너를 동일하게 순회 가능
    
    begin()/end(): 시작과 끝(마지막 요소의 다음) 위치
    rbegin()/rend(): 역방향 반복자

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers = {10, 20, 30, 40 ,50};

    cout << "순방향: " << endl;
    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\n역방향: " << endl;
    for(vector<int>::reverse_iterator it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}