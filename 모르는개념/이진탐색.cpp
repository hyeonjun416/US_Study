#include <iostream>

#define SWAP(x,y,z) ((z)=(x),(x)=(y),(y)=(z))

using namespace std;

void sort(int list[], int size)
{
    int min, temp;
    for(int i = 0; i<size; i++)
    {
        min = i;
        for(int j = i+1; j<size; j++)
        {
            if(list[j]<list[min]) min = j;
        }
        SWAP(list[i], list[min], temp);
    }
}

int binsearch(int list[], int size, int srcnum)
{
    int mid;
    int left = 0;
    int right = size-1;
    while(left<=right)
    {
        mid = (left + right)/2;
        if(list[mid] == srcnum) return mid;
        else if(list[mid] > srcnum) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main()
{
    int list[] = {40, 50, 20, 80, 90, 10, 30};
    sort(list, 7);
    int result = binsearch(list, 7, 30);
    cout << result << endl;
    return 0;
}