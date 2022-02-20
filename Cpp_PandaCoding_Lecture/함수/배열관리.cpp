// 함수를 통해 배열을 관리할 때, 그 배열의 첫번째 주소와 배열의 크기를 전달해주는 방법도 있지만,
// 배열을 시작하고자하는 주소와 배열을 끝내고자하는 주소를 전달하는 방법도 가능

#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
// int sumArr(int*, int);

int sumArr2(int*, int*);

int main()
{
    int arr[SIZE] = {1,2,4,8,16,32,64,128};
    int sum = sumArr(arr, SIZE);
    //arr은 배열이 아니라 포인터임을 유의. 그런데 함수가 정상작동하는 이유는
    //C++에서 배열 이름을 그 배열의 첫번째 원소의 주소로 인식하기 때문이다.
    // 즉 arr == &arr[0] 이고 , sumArr은 주소를 전달받게 되는 것
    cout << "size of arr " << sizeof arr << endl; //32
    //위의 sizeof arr은 배열 전체의 크기를 의미
    cout << "The sum of function is " << sum << endl;

    int sum2 = sumArr2(arr, arr + 3);
    cout << "The sum of arr[0]~arr[2] is " << sum2 << endl;

    return 0;
}

int sumArr(int arr[], int n)
//int sumArr(int* arr, int n)
{
    cout << "size of arr " << sizeof arr << endl; //4
    // 위의 size of arr는 배열의 첫번째 원소의 크기를 의미하기 때문.
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];
    
    return total;
}
int summArr2(int* begin, int* end)
{
    int total = 0;
    int* pt;

    for(pt==begin; pt != end; pt++)
        total += *pt;

    return total;
}
//c++에서 배열의 원소에 접근하는 []는 배열이든 포인터든 전부 사용가능 하기때문에,
//위의 주석들이 작동가능한 것