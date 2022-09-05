#include <stdio.h>
#include <stdlib.h> // malloc()을 사용하기 위해 필요한 헤더파일

int main(void){
    int *pi;
    // *pi = int형 변수의 위치(주소)를 기억하는 포인터 변수
    pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당해라.
    // sizeof(int) 자리는 할당할 메모리의 크기를 작성하는 공간
    // (int *) => 형 변환
    if(pi == NULL)
    {
        printf("Fail.");
        exit(1);
    }
    *pi = 100;
    printf("%d\n", *pi);
    // 동적 메모리 사용한 이후에는 해당 메모리를 반환
    free(pi);
    return 0;
}