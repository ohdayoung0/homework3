#include <stdio.h> // <stdio.h> 라이브러리를 포함
#include <stdlib.h> // <stdlib.h> 라이브러리를 포함

void main() { //main함수 시작
    printf("[----- [오다영] [2023041090] -----]\n"); // 이름 학번 출력

    int list[5]; // int형 배열 list 선언
    int *plist[5]; // int형 포인터 배열 plist 선언

    list[0] = 10; // list[0]에 값 10 저장
    list[1] = 11; // list[1]에 값 11 저장

    plist[0] = (int*)malloc(sizeof(int)); // int크기의 동적 메모리 할당 후 배열plist[0]에 저장

    printf("list[0] \t= %d\n", list[0]); // list[0]의 값(10) 출력
    printf("list \t\t= %p\n", list); // list의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); // list[0]의 주소(list의 시작 주소) 출력
    printf("list + 0 \t= %p\n", list+0); // list+0의 값(list의 시작 주소) 출력
    printf("list + 1 \t= %p\n", list+1); // list+1의 값(list의 시작 주소+4(int의 크기 4))을 출력
    printf("list + 2 \t= %p\n", list+2); // list+2의 값((list+1)의 주소+4(int의 크기 4))을 출력
    printf("list + 3 \t= %p\n", list+3); // list+3의 값((list+2)의 주소+4(int의 크기 4))을 출력
    printf("list + 4 \t= %p\n", list+4); // list+4의 값((list+3)의 주소+4(int의 크기 4))을 출력
    printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소(list+4의 주소) 출력

    free(plist[0]); // 동적 할당한 메모리 해제
}