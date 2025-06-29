/* 
파일명: 05_list_map.cpp

list
    이중 연결 리스트 구조의 순차 컨테이너

vector vs list
    vector : 메모리에 연속적으로 저장
             주소계산 시작주소 + (인덱스 x 크기) 가능
             begin() + n 가능
    list : 메모리에 분산되어 저장
           포인터를 따라 한칸씩 이동해야 함
           advance() 또는 ++ 사용


map
    키-값 쌍을 저장하는 연관 컨테이너
*/

#include <iostream>
#include <list>
#include <map>
using namespace std;

void printList(const list<string> todoList) {
    for(string todo : todoList) {
        cout << todo << endl;
    }
}

int main() {

    cout << "=== list ===" << endl;

    list<string> todoList; // string을 저장하는 list 선언
    

    cout << "\n=== list 요소 추가 ===" << endl;
    todoList.push_back("숙제하기"); // 맨 뒤에 추가
    todoList.push_front("일어나기"); // 맨 앞에 추가 
    todoList.push_back("운동하기"); // 맨 뒤에 추가

    cout << "\n=== list 요소 추가 후 ===" << endl;
    printList(todoList);

    cout << "\n=== list 요소 삭제 ===" << endl;
    todoList.pop_front();   // 맨 앞 요소 제거
    printList(todoList);

    cout << "\n=== list 삽입 ===" << endl;
    auto it = todoList.begin();
    advance(it, 1);
    todoList.insert(it, "코딩하기");
    printList(todoList);
    
    cout << "\n=== list 삭제 ===" << endl;
    todoList.erase(++todoList.begin());
    printList(todoList);


    cout << "\n=== map ===" << endl;
    map<string, int> scores; 
    
    cout << "\n=== map 요소 추가 ===" << endl;
    scores["김철수"] = 90;
    scores["이영희"] = 95;
    scores["박민수"] = 88;

    cout << "\n=== map 요소 조회 ===" << endl;
    cout << scores["박민수"] << endl;

    cout << "\n=== map 키 검색 ===" << endl;
    string name = "이영희";
    if(scores.find(name) != scores.end()) {
        cout << name << "의 점수: " << scores[name] << endl;
    }


    return 0;
}