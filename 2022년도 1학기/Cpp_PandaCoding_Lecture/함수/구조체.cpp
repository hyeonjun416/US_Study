#include <iostream>
/* 
   구조체는 배열과 다르게 값으로 전달(배열은 첫번째 인덱스의 주소를 전달)
   그래서 배열을 return 불가였던 것과 달리 구조체를 return 가능
   즉, 구조체를 함수의 매개변수로 전달가능하며, return 값으로 받을 수 있다.
   하지만, 구조체의 규모가 커진다면, 메모리의 요구가 커지므로 성능저하 가능
   그래서 구조체의 값보다는 구조체의 내용에 접근하는 포인터를 이용하는 방식을 선호
   혹은, 참조로 전달하는 방법도 있음.
*/
using namespace std;

struct Time
{
    int hours;
    int mins;
};

const int minsPerHr = 60;

Time sum(Time*, Time*);
void showTime(Time);
int main()
{
    // 함수는 원본이 아닌 복사본을 대상으로 작업한다.
    Time day1 = {5, 45};
    Time day2 = {4, 55};

    Time total = sum(&day1, &day2);

    cout << "Sum of time during two days : ";
    showTime(total);

    return 0;
}

Time sum(Time* t1, Time* t2)// 이 함수는 main으로부터, t1과 t2를 받아
// 이 둘을 더하여 Time total을 return하는 함수를 만들 것.
{
    Time total;

    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

    return total;
}
/*
   구조체에 대해 member에 접근하기 위해 '.'을 배운 적 있지만,
   매개변수로 전달된 값이 구조체가 아닌 구조체에 대한 포인터이므로,
   . 사용 불가능
   구조체의 주소에 대하여 member에 접근하기 위해 간접멤버연산자인 '->' 사용.
   
   구조체의 값에서 멤버에 접근하고 싶으면 .
   구조체의 주소에서 멤버에 접근하고 싶으면 ->
*/ 

void showTime(Time t1) // 구조체의 값으로 받음
{
    cout << t1.hours << " Hour " << t1.mins << " Minutes" << endl;
}