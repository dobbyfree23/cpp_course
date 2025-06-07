# C++ 8일 과정 커리큘럼

## 1일차: C++ 기초와 개발환경
- C++ 언어 특징과 C와의 차이점
- 개발환경 설치 및 설정
- 이름공간(namespace) 개념과 활용
- 표준 입출력(cin, cout) 기초 실습

## 2일차: 변수, 데이터 타입과 메모리 관리, 연산자와 제어문
- 기본 데이터 타입과 변수 선언
- 레퍼런스(reference) 개념과 활용
- 포인터 기초와 동적 메모리 할당(new/delete)
- 스마트 포인터 소개(unique_ptr, shared_ptr)

## 3일차: 함수와 배열
- 함수 선언과 정의, 매개변수 전달 방식
- 함수 오버로딩과 디폴트 매개변수
- 배열과 문자열 처리
- 표준 라이브러리 string과 배열 활용

## 4일차: 클래스와 객체 지향 I
- 구조체와 클래스 비교
- 클래스 멤버와 접근 제어
- 생성자와 소멸자
- 복사/이동 생성자와 연산자 오버로딩 기초

## 5일차: 클래스와 객체 지향 II
- 정적(static) 멤버와 const 멤버
- 연산자 오버로딩 심화
- 프렌드(friend) 함수와 클래스
- 현대 C++의 객체 관리(이동 의미론)

## 6일차: 상속과 다형성
- 상속 개념과 접근 지정자
- 가상 함수와 오버라이딩
- 순수 가상 함수와 추상 클래스
- 객체 포인터와 다형성 활용

## 7일차: 템플릿과 STL
- 함수 템플릿과 클래스 템플릿
- STL 컨테이너 소개(vector, list, map)
- 반복자(iterator)와 알고리즘 기초
- 람다 표현식과 STL 알고리즘 활용

## 8일차: 예외 처리와 프로젝트
- 예외 처리 기본 개념과 try-catch 구문
- 예외 안전성과 RAII 패턴
- 실전 코딩 예제 분석 및 실습
- C++ 개발 모범 사례와 추가 학습 방향

---

# C++ 개발환경 구축 가이드 (VSCode)

## 개발 도구 선택

### Visual Studio Code (크로스 플랫폼 지원)
- 웹사이트: [code.visualstudio.com](https://code.visualstudio.com)

### Visual Studio (Windows)
- Microsoft Learn: [C/C++ 지원 설치 가이드](https://docs.microsoft.com/ko-kr/cpp/build/vscpp-step-0-installation)

## 필수 구성 요소
1. 컴파일러: MinGW-w64 (Windows), Clang (macOS)
2. 에디터: Visual Studio Code
3. 확장 프로그램: C/C++ Extension

---

## Windows 환경 설정

### 사전 준비사항
- Windows 사용자 계정을 영문으로 설정 (공백 없이)
- Anaconda 설치된 경우 임시 제거 권장

### 설치 과정

#### Step 1: MinGW-w64 설치
1. MSYS2 공식 사이트에서 설치 파일 다운로드
2. 기본 설치 경로 사용 권장
3. MSYS2 터미널에서 다음 명령어 실행:
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   ```
4. 설치 확인:
   ```bash
   g++ --version
   ```

#### Step 2: 환경 변수 설정
1. Windows 검색: "환경 변수"
2. Path에 MinGW-w64 bin 폴더 경로 추가
   - 기본 경로: `C:\msys64\mingw64\bin`

#### Step 3: Visual Studio Code 설치
1. 공식 사이트에서 Windows 버전 다운로드
2. 설치 시 "코드로 열기" 옵션 모두 체크

#### Step 4: C++ 확장 설치
1. VS Code 실행
2. Extensions 탭에서 "C++" 검색
3. Microsoft C/C++ 확장 설치

### 프로젝트 설정

#### 기본 구성 설정
1. `Ctrl + Shift + P` → "C++: Edit Configurations (UI)"
2. 컴파일러 경로를 MinGW g++로 설정
3. IntelliSense 모드: gcc-x64
4. C++ 표준: C++17

#### 실행 환경 설정
1. `Ctrl + Shift + P` → "C++: Add Debug Configuration"
2. g++.exe 선택
3. 자동 생성된 설정 파일 확인

---

## macOS 환경 설정

### 필수 도구 설치

#### Xcode 명령줄 도구
1. App Store에서 Xcode 설치
2. 터미널에서 설치 확인:
   ```bash
   clang++ --version
   ```
3. 필요시 수동 설치:
   ```bash
   xcode-select --install
   ```

#### Visual Studio Code
1. 공식 사이트에서 "Mac Universal" 버전 다운로드
2. Applications 폴더로 이동

### 프로젝트 설정
1. 터미널에서 프로젝트 폴더 생성:
   ```bash
   mkdir cpp_course
   cd cpp_course
   code .
   ```
2. C++ 확장 설치 및 구성 설정
3. 컴파일러: Clang++ 자동 인식
4. 디버거: LLDB 사용

---

## Hello World 예제

### 기본 C++ 코드 구조
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}
```

### 주의사항
- **기호 정확성**: `#`, `<>`, `;`, `{}` 등 특수문자 정확히 입력
- **세미콜론**: 문장 끝에 반드시 추가
- **대소문자**: C++는 대소문자를 구분

### 실행 방법
1. **일반 실행**: Run → Run Without Debugging (`Ctrl+F5`)
2. **디버그 실행**: Run → Start Debugging (`F5`)
