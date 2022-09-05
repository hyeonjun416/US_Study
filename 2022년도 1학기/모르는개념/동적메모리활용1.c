// 동적 메모리로 100바이트를 할당 받아 알파벳 출력
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc;
    int i = 0;
    pc = (char *)malloc(100*sizeof(char));
    if(pc == NULL)
    {
        printf("Faile\n");
        exit(1);
    }
    // pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입
    for(i = 0; i < 26; i++){//알파벳 개수 26개
        *(pc+i) = 'a' + i;
        // *(pc+1) 은 *pc의 다음 주소.
    }
    // ASCII code 0 = NULL
    *(pc+i) = 0;

    printf("%s\n", pc);
    // %s 는 NULL값을 만나기 전 까지를 문자열로 인식하고, 거기까지 출력
    free(pc);

    return 0;
}