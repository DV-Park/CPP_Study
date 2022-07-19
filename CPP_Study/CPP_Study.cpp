#include <iostream>
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

}
 