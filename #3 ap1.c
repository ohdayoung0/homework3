#include <stdio.h> // <stdio.h> 라이브러리를 포함
#include <stdlib.h> // <stdlib.h> 라이브러리를 포함

int main() { // main함수 시작
    printf("[----- [오다영] [2023041090] -----]\n"); // 이름 학번 출력 

    int list[5]; // int형 배열 list 선언
    int *plist[5] = {NULL,}; // int형 포인터 배열 plist 선언 후 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); // int 크기의 동적 메모리 할당 후 plist[0]에 할당된 메모리의 주소 저장
    list[0] = 1; // list[0]에 값 1 저장
    list[1] = 100; // list[1]에 값 100 저장
    *plist[0] = 200; // plist[0]이 가리키는 곳에 값 200을 저장

    printf("list[0] = %d\n", list[0]); // list[0]의 값(1) 출력
    printf("&list[0] = %p\n", &list[0]); // list[0]의 주소 출력
    printf("list = %p\n", list); // 배열 list의 시작 주소(list[0]의 주소) 출력
    printf("&list = %p\n", &list); // list 배열의 주소(list[0]의 주소) 출력

    printf("----------------------------------------\n\n"); // ----- 출력

    printf("list[1] = %d\n", list[1]); // list[1]의 값(100) 출력
    printf("&list[1] = %p\n", &list[1]); // list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // *(list+1)이 가리키는 값(list[1]의 값) 출력 
    printf("list+1 = %p\n", list+1); // list+1의 값(list[1]의 주소) 출력

    printf("----------------------------------------\n\n"); // -----출력

    printf("*plist[0] = %d\n", *plist[0]); // plist[0]이 가리키는 값(200) 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); // 배열plist의 주소(plist[0]의 주소) 출력
    printf("plist = %p\n", plist); // 배열 plist의 시작 주소(plist[0]의 주소) 출력
    printf("plist[0] = %p\n", plist[0]); // plist[0]의 값 출력(동적으로 할당된 메모리 주소)
    printf("plist[1] = %p\n", plist[1]); // plist[1]의 값(NULL) 출력
    printf("plist[2] = %p\n", plist[2]); // plist[2]의 값(NULL) 출력
    printf("plist[3] = %p\n", plist[3]); // plist[3]의 값(NULL) 출력
    printf("plist[4] = %p\n", plist[4]); // plist[4]의 값(NULL) 출력

    free(plist[0]); // 동적 할당 메모리 해제

}