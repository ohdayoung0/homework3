#include <stdio.h> // <stdio.h> 라이브러리를 포함

void print_one(int *ptr, int rows); // print_one 함수 선언

int main() { // main함수 시작
    printf("[----- [오다영] [2023041090] -----]\n"); // 이름 학번 출력   
    int one[] = {0, 1, 2, 3, 4}; // int형 배열 one 선언 및 초기화

    printf("one = %p\n", one); // 배열 one의 시작 주소 출력
    printf("&one = %p\n", &one); // 배열 one의 주소(배열 one의 시작 주소) 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소(배열 one의 시작 주소) 출력
    printf("\n"); // 한 줄 띄우기
    printf("------------------------------------\n"); // -----출력


    printf(" print_one(&one[0], 5) \n"); // print_one(&one[0], 5) 출력
    printf("------------------------------------\n"); // -----출력
    print_one(&one[0], 5); // print_one 함수 호출
    printf("------------------------------------\n"); // -----출력

    
    printf(" print_one(one, 5) \n"); // print_one 함수 호출
    printf("------------------------------------\n"); // -----출력
    print_one(one, 5); // print_one 함수 호출(배열의 이름은 주소)

    return 0; // 0값을 반환
}

void print_one(int *ptr, int rows) {  // print_one 함수 정의
    int i; // 정수형 변수 i선언
    printf("Address \t Contents\n");  // Address    Contents 출력
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 주소와 해당 요소의 내용 출력
    printf("\n"); // 한 줄 띄우기
}