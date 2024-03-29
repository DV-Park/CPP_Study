﻿#include <iostream>
using namespace std;
//강의 들으면서 필기할만한 것만 필기.
//Ctrl + k + c , Ctrl + k + u 주석 달고 지우기
//초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역

int main()
{
#pragma region 정수
    //int hp = 100;
    //char a; //1바이트
    //short b; //2바이트
    //int c; //4바이트
    //__int64 d; //8바이트
    //b = 32767;
    //b = b + 1;
    //cout << "체력이" << b << "남았습니다" << endl;

    //float attackSpeed = -3.375f; //4바이트
    //double attackSpeed2 = 123.4123; //8바이트

    //float 부호(1) 지수(8) 유효숫자(23)=32비트=4바이트
    //double 부호(1) 지수(110 유효숫자(52)=64비트=8바이트

    //-3.375라는 값을 저장
    //1) 2진수 변환 = (3)+(0.375)=0b11 + 0b0.011=0b11.011
    // 0.375 = 0.5 X 0 + 0.25 X 1 + 0.125 X 1 = 0b0.011
    //2) 정규화 0b1.1011 *2^1
    // 1(부호) 1(지수) 1011(유효숫자)
    // 단 지수는 unsigned라고 가정 숫자+127
    // 예상결과 0b 1 10000000 10110000000000000000000

#pragma endregion
#pragma region 문자
    //char : 알파벳 / 숫자 문자를 나타낸다
    //wchar_t : 유니코드를 문자로 나타낸다
    //'문자'의 의미로 작은 따옴표 '' 사용

    //유니코드는 표기 방식이 여러가지 UTF8 UTF16
    //UTF8
    // - 알파벳, 숫자 1바이트
    // - 유럽 지역의 문자는 2바이트
    // - 한글 한자 등 3바이트
    //UTF16
    // - 알파벳, 숫자, 한글, 한자 등 거의 다 2바이트
    // - 고대 문자만 4바이트(X)
    //wchar_t wch = L'안';
    //wcout써야 출력가능(wcout.imbue(locale("kor"));사용해야함)

    //문자열
    //정수 고정 길이
    //끝은 NULL(0)
#pragma endregion
#pragma region 비트 연산
    //bitflag!!!

    // ~bitwise not
    //단일 숫자의 모든 비트를 대상으로 0은1 , 1은 0으로 뒤바꿈

    //& bitwise and
    //두 숫자의 모든 비트 쌍을 대상으로, and를 한다

    //| bitwise or
    //두 숫자의 모든 비트 쌍을 대상으로, or를 한다
    
    //^ bitwise xor
    //두 숫자의 모든 비트 쌍을 대상으로, xor를 한다

    //<< 비트 좌측 이동
    // 비트열을 N만큼 왼쪽으로 이동
    // 왼쪽의 넘치는 N개의 비트는 버림. 새로 생성되는 N은 0

    //>> 비트 우측 이동
    // 비트열을 N만큼 오른쪽으로 이동
    // 오른쪽으로 넘치는 N개의 비트는 버림.
    // 왼쪽에서 생성되는 N개의 비트는 
    // - 부호 비트가 존재할 경우 부호 비트를 따라감
    // - 아니면 0

    //unsigned cahr flag; // !부호를 없애야 >>를 하더라도 부호비트가 딸려오지 않음
    //실습****************
    //0b0000[무적][변이][스턴][공중부양]
    /* const int INVINCIBLE = 3;
    flag = (1 << INVINCIBLE);*/
    
    //bitmask
    //무적인지 확인하려면
    //(flag & (1 << INVINCIBLE)) != 0;

    //무적인지 스턴인지 확인
    //bool mask=(1<<INVINCIBLE)|(1<<STUN);
    //bool stunOrInvincible=((flag & mask)!=0);
#pragma endregion
#pragma region 메모리구조
    //전역변수[데이터 영역]
    //.data(초기값이 있는경우)
    //.bss(초기값이 없는경우)
    
    //.rodata(읽기 전용 데이터)
    //const char* msg="Hello World";

    //지역변수[스택 영역]

#pragma endregion

#pragma region 가위 바위 보
    //srand(time(0));

    //const int SCISSORS = 1;
    //const int ROCK = 2;
    //const int PAPER = 3;

    //enum ENUM_RPS{
    //    ENUM_SCISSORS = 1,
    //    ENUM_ROCK,
    //    ENUM_PAPER
    //};

    //while (true) {
    //    cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
    //    cout << "> ";

    //     컴퓨터
    //    int computerValue = (rand() % 3) + 1; //0~32767

    //     사용자
    //    int input;
    //    cin >> input;

    //    if (input == SCISSORS) {
    //        switch (computerValue)
    //        {
    //        case SCISSORS:
    //            cout << "가위 vs 가위 : 비겼습니다" << endl;
    //            break;
    //        case ROCK:
    //            cout << "가위 vs 바위 : 이겼습니다" << endl;
    //            break;
    //        case PAPER:
    //            cout << "가위 vs 보 : 졌습니다" << endl;
    //            break;
    //        }
    //    }
    //    else if (input == ROCK) {
    //        switch (computerValue)
    //        {
    //        case SCISSORS:
    //            cout << "바위 vs 가위 : 졌습니다" << endl;
    //            break;
    //        case ROCK:
    //            cout << "바위 vs 바위 : 비겼습니다" << endl;
    //            break;
    //        case PAPER:
    //            cout << "바위 vs 보 : 이겼습니다" << endl;
    //            break;
    //        }
    //    }
    //    else if (input == PAPER) {
    //        switch (computerValue)
    //        {
    //        case SCISSORS:
    //            cout << "보 vs 가위 : 아겼습니다" << endl;
    //            break;
    //        case ROCK:
    //            cout << "보 vs 바위 : 졌습니다" << endl;
    //            break;
    //        case PAPER:
    //            cout << "보 vs 보 : 비겼습니다" << endl;
    //            break;
    //        }
    //    }
    //    else
    //        break;
    //}
#pragma endregion
#pragma region 전처리
    //#이 붙은거 -> 전처리 지시문
    //#include <iostream>이라는 파일을 찾아서 해당 내용을 그냥 복붙!
    // 1)전처리 2)컴파일 3)링크
    //Define을 자주 이용 X enum 또는 const사용
#pragma endregion

#pragma region 포인터 vs 참조
//void PrintInfo(const StatInfo& info); 처럼 사용하면 좋음(참조인데 내부에서 수정 불가)
// 참조와 포인터는 성능 동일
// But 참조가 편리

//포인터의 별 뒤에 const와 별 앞 const의 차이
// 별 뒤에 붙이면
// info라는 바구니의 내용물(주소)를 바꿀 수 없음
// info는 주소값을 갖는 바구니 -> 이 주소값이 고정이다

// 별 앞에 붙이면
// info가 가리키고 있는 바구니의 내용물 수정 불가
// '원격' 바구니의 내용물을 바꿀 수 없음

// 참조는 변수의 2번째 이름(별칭)
// 참조하는 대상이 없으면 안됨

// 포인터는 어떤~ 주소라는 의미
// 대상이 실존하지 않을 수도 있음
// 없다는 의미로 nullptr 사용
// StatInfo* ptr = nullptr;

// 결론은 team by team
// 루키스의 선호 스타일
// 없는 경우도 고려해야한다면 포인터(nullptr 체크 필수)
// 바뀌지 않고 readonly라면 const ref&
// 그외 일반적으로 ref (명시적으로 호출할때 out 사용)
// 다른 사람이 pointer로 만들어 두면 계속 포인터 사용
// #define OUT (아무것도 안들어있음)
// void ChangeInfo(Out StatInfo& info);
// ChageInfo(Out info);

// 보너스) 포인터를 참조로 참조를 포인터로 넘길려면
// *pointer , &reference

#pragma endregion
#pragma region 배열과 포인터
// 정확하게 시작 위치를 가리키는 배열은 TYPE* 포인터
// int numbers[5]={}; 배열의 초기화(0으로 초기화)
// int numbers[5]={1,2,3}; 1,2,3을 제외한 나머지 배열 초기화(0으로 초기화)
// int numbers[]={1,2,3}; 데이터 개수에 맞게 배열의 크기 설정

// const char* test1 = "Hello World"; ReadOnly data
// char test2 = "Hello World";

// 다중포인터
// const char* str = "Hello World";
// const char** ptr = &str;
// *ptr= "bye";
// cout<<str<<endl; -> bye 출력

// 다중배열을 포인터로 사용하기
// int arr2[2][2] = {{1,2},{3,4}};
// int(*p2)[2] = arr2;
// (*p2)[0], (*p2)[1] -> 1,2
// (*(p2+1))[0], (*(p2+1))[0] -> 3,4
// p2[0][], p2[0][1], p2[1][0], p2[1][1]
#pragma endregion

#pragma region 객체지향
// 복사 생성자 (자기자신의 클래스 참조 타입을 인자로 받음) -> 정의 해주지 않아도 Default로 생성(모든 멤버변수 복사)
// Knight(const Knight& knight){}
// explicit Knight(){} 를 사용 -> 명시적으로만 생성자를 사용하라
// Knight k1; k1 = 1; //오류
// k1 = (Knight)1;

// 상속
// 부모와 자식모두 생성자, 소멸자가 있을 시 순서
// 부모생성자 -> 자식생성자 -> 자식소멸자 -> 부모소멸자

// RPG내에서 계층구조로 활용
// GameObject
// - Creature
// -- NPC, Player, Monster, Pet
// - Projectile
// -- Arrow, Fireball
// - Env

// Item
// - Weapon
// -- Sword, Bow
// - Armor
// -- Helmet, Boots, Armor
// - Consumable
// -- Potion, Scroll


// 은닉
// - public : public->public, protected->protected
// - protected : public->protected, protected->protected
// - private : public->private, protected->private
// class SuperCar : private Car
// class TestSuperCar : SuperCar -> Car는 사용불가


// 다형
// - 오버로딩 : 함수중복정의 -> 함수 이름의 재사용
// - 오버라이딩 : 함수 재정의 -> 부모클래스의 함수를 자식클래스에서 재정의

// 바인딩
// 일반함수는 정적 바인딩 사용
// 동적 바인딩 -> 가상 함수 사용
// 한번 가상 함수는 재정의를 하더라도 가상함수
// void MovePlayer(Player* player){ player->Move(); }
// MovePlayer(Knight); -> 가능
// MovePlayer 내부에 Move() 는 Player class의 멤버함수 호출 but, 가상함수 일 시, Knight class의 멤버함수 호출

// 실체 객체가 어떤 타입인지 어떻게 알고 알아서 가상함수를 호출했을까?
// - 가상함수 테이블(vftable)
// 이 함수를 호출 할 때는 컴파일 타임에 타입을 결정하지 말고 런타임에 결정해(동적바인딩)

// .vftable [] 4바이트(32) 8바이트(64)
// [VMove][VDie]

// 순수 가상 함수 : 구현은 없고 '인터페이스'만 전달하는 용도로 사용
// virtual void VAttack()=0; 과 같은 형태
// 자식 클래스에서 강제로 내부를 구현해야함
// 순수 가상 함수가 하나 이상이 있으면 그 클래스는 추상클래스
// - 직접적인 객체를 만들 수 없음

// 업캐스팅을 통해 자식 클래스들을 관리하기 편함
// std::list<CParent*> ObjList;
// CParent* child1 = new CChild1;  // Upcasting(CChild1 -> CParent)
// CParent* child2 = new CChild2;  // Upcasting(CChild2 -> CParent)
// CParent* child3 = new CChild3;  // Upcasting(CChild3 -> CParent)
// ObjList.push_back(child1);
// ObjList.push_back(child2);
// ObjList.push_back(child3);

#pragma endregion

#pragma region 객체지향 초기화리스트
// 맴버 변수의 초기화
// 1. 생성자
// 2. 초기화 리스트
// 3. C++11(Modern C++) 문법

//초기화 리스트
// - 상속 관게에서 원하는 부모 생성자를 호출할 때 필요.
// - 생성자 내에서 초기화 vs 초기화 리스트
// -- 일반 변수는 별 차이 X
// -- 맴버 타입이 클래스인 경우 차이가 난다
// -- 정의함과 동시에 초기화가 필요한 경우 (참조 타입, Const 타입)

//class Inventory {
//public:
//    Inventory() {}
//    Inventory(int n) {}
//    ~Inventory() {}
//};

//class Player
//{
//public:
//    Player() {}
//    Player(int id) {}
//};
//
//class Knight : public Player {
//public:
//    Knight() : Player(1), _hp(100), _Inventory(20), _hpRef(_hp), _hpConst(100) //**초기화리스트 - 선처리영역에서 호출 (생성자 소멸자 한번)
// Player(1) 선처리 영역
// _Inventory = Inventory() 선처리 영역
//   {
//        _hp = 100;
//        _Inventory=Inventory(20); //이렇게 초기화하면 생성자 두번 호출 (소멸자도 두번 호출) - 선처리영역에서 생성 후 생성자 내부에서 한번더 덮어쓰기 생성(소멸자 호출)
//        
//        _hpRef = _hp //불가
//        _hpConst = 100 //불가
//    }
//public:
//    int _hp;
//    Inventory _Inventory; //포함관계에선 멤버 변수로 들고 있음
// 
//    int& _hpRef = _hp;    // C++11
//    const int _hpConst = 100;     // C++11
//};

// **Is-A(Knight Is-A Player?) OK -> 상속관계
// **Has-A(Knight Has-A Inventory?) OK -> 포함관계
#pragma endregion

#pragma region 연산자 오버로딩
// 연산자 vs 함수
// - 연산자는 피연산자의 개수/타입이 고정되어 있음

//[연산자 함수]를 정의
// 함수도 멤버함수 vs 전역함수 , 연산자 함수도 두가지 방식

// 맴버 연산자 함수 version
// - a op b 형태에서 왼쪽으로 기준으로 실행됨 (a가 클래스여야 가능, a를 기준 피연산자 라고 함.
// - 한계) a가 클래스가 아니면 사용 못함

// 전역 연산자 함수 version
// - a op b 형태라면 a, b 모두를 연산자 함수의 피연산자

// 멤버 연산자 함수 version
// Position operator+(const Position& arg)
// {
//      Position pos;
//      pos._x = _x + arg._x;
//      pos._y = _y + arg._y;
//      return pos;
//  }
// Position pos3 = pos + pos1;
// Position pos3 = pos.operator+(pos1); - 같은 개념

// 전역 연산자 함수 version
// Position operator+(int a, const Position& b){
//      Position ret;
//      ret._x = b._x + a;
//      ret._y = b._y + a;
//      return ret;
//}
#pragma endregion

#pragma region 객체지향 마무리
// static 변수, static 함수 (static은 일종의 전역함수 클래스 매개변수 수정 x)
// 딱 하나만 존재해야 할 때, ex 각 마린의 공격력은 똑같음
// 
// class Marin{
// 
// (특정 마린 객체에 종속)
// int _hp;
// 
// (특정 마린 객체와 무관 클래스 자체와 연관)
// static int s_attack; (설계도 상에서만 존재)
// }
// int main(){
// Marin m1;
// m1._hp = 35;
// Marin::s_attack = 6;
// }

// 일반 함수에서 static 변수
// 생명주기 : 프로그램 시작/종료
// 가시범위 : 함수 내부
// 정적 지역 객체로 가용 가능!
#pragma endregion

#pragma region 동적 할당
//
// 실행할 코드가 저장되는 영역 -> 코드 영역
// 전역/ 정적 변수 -> 데이터 영역
// 지역변수/ 매개변수 -> 스택영역
// 동적 할당 -> 힙 영역
// 
// 유저 영역 (메모장, 게임 등등)
// 커널 영역 (Windows등의 핵심 코드)
// 
// 유저 영역) 운영체제에서 제공하는 API 호출
// 커널 영역) 메모리 할당해서 건내줌
// 
// C++에서는 기본적으로 CRT(C런타임 라이브러리)의 [힙 관리자]를 통해 힙 사용
// 단, 정말 원한다면 우리가 직접 API를 통해 힙을 생성하고 관리 (MMORPG 서버 메모리 풀링)
// 
// malloc
// - 할당할 메모리 크기를 건내주고
// - 메모리 할당 후 시작 주소를 가리키는 보이드형 포인터 반환 (메모리 부족 NULL)
// 
// void* ?
// - 뭐가 있는지 모르겠으니 너가 적당히 변환해서 사용해라
// 
// free
// - malloc (혹은 기타 등등)을 통해 할당된 영역을 해제
// - 힙 관리자가 할당/미할당 여부를 구분해서 관리
// 
// Double Free
// - 대부분 크래쉬만 나고 끝
// 
// Use-After-Free
// - 프로그래머 : OMG
// - 해커 : Good
// 
// new / delete
// - C++에 추가됨
// - malloc/free 함수! new/delete는 연산자(operator)
// 
// Monster* m2 = new Monster;
// delete m2;
// 
// Monster* m3 = new Monster[5];
// delete[] m3;
// 
// malloc vs new
// - 편의성 -> new
// - 타입에 상관없이 특정한 크기의 메모리 영역을 할당받으려면 -> malloc
// 
// 둘의 가장 근본적인 차이!
// - 함수이고 연산자인것도 중요하지만
// - new 는 (생성타입이 클래스일 경우) 생성자/소멸자를 호출!
//
#pragma endregion
}
  