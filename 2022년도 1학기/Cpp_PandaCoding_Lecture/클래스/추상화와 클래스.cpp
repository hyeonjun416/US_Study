#include <iostream>

using namespace std;

// public - 공개 멤버, 클래스 / 외부에서도 접근 가능
// private - 비공개 멤버 / 클래스 내에서만 접근 가능
// => 직접적인 Data는 private로 선언하여 데이터를 은닉하자!

class Stock //class 선언 => Stock이라는 데어터 형을 만든 것. 이를 통해 새로운 변수나 객체를 선언할 수 있음.
{
private: // class의 멤버에 대한 접근을 제어
    string name; // 주식 이름
    int shares; // 주식 수량
    float share_val; // 주식 한 주당 가격
    double total_val; // 주식의 총 가격
    void set_total() { total_val = shares * share_val; }

public: // private과 함께 class의 멤버에 대한 접근을 제어
    void acquire(string, int, float); // 
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock();
    ~Stock();
};
// 위의 예시에서 Stock은 name, shares, share_val, total_val이라는 멤버를 가지고있다.
// 그 멤버 모두 private 멤버이다.
// Stock이라는 class가 가지고 있는 private 멤버들의 값을 변경하려면 반드시 public에 선언되어 있는 함수들을 통해 값을 변경해야 함.
// 그래서 public에 정의되어 있는 member function들은 프로그램이 private에 정의되어 있는 멤버 변수들의 값을 변경해주거나
// 변경해줄 수 있도록 잇는 다리 역할을 수행해야 함.
// 프로그램이 private member에 직접적으로 접근할 수 없고 public member function을 통해 접근할 수 있다.
// 위의 모든 설명을 "데이터 은닉" 이라고 하며, 추상화의 예 중 하나이다.

// 사용 범위 결정 연산자 = :: 
// :: 사용 시, Stock class에 정의되어 있는 함수라는 것을 알려줄 수 있음.

void Stock::acquire(string co, int n, float pr) // Stock:: 을 작성함으로써 acquire 위치에 있는 모든 함수들이 Stock class 사용범위에 결정된다고 컴퓨터가 인지
{
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
void Stock::buy(int n, float pr)
{
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n, float pr)
{
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr)
{
    share_val = pr;
    set_total();
}
void Stock::show()
{
    cout << "Corporation name : " << name << endl;
    cout << "Stock Quantity : " << shares << endl;
    cout << "Stock price : " << share_val << endl;
    cout << "Stock's total price : " << total_val << endl;
    cout << "Info is changed!!";
}
Stock::Stock() // 생산자
{
}

Stock::~Stock() // 파괴자
{
}

int main(){
    // 추상화와 클래스
    // 데이터형이란 무엇인가?
    // 흔히 데이터형은 메모리에 저장되는 데이터의 형태만으로 데이터형을 생각하기 쉬움.
    // 하지만, 실제 데이터형은 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가? 가 중요함.

    // int 형 같은 경우는 +.-,*,/,% 연산이 가능
    // 하지만 pointer 같은 경우는 int형으로 선언 시 int형과 같은 4byte지만, int와 동일한 연산이 가능하지 않다.

    // 클래스란?
    // 추상화를 사용자 정의 데이터형으로 변환해주는 수단
    // 추상화란?
    // 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 C++ 도구

    /* 클래스는 두 부분으로 서술 가능
    1. 클래스 선언
    2. 클래스 매서드 정의
    */
   Stock temp;
   temp.acquire("Defi", 100, 1000);
   temp.show();
   temp.buy(10, 1200);
   temp.show();
   temp.sell(5,800);
   temp.show();

   return 0;
}
