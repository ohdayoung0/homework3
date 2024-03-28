#include <stdio.h> // <stdio.h> 라이브러리를 포함
#define MAX_SIZE 100 // 최대 크기를 100으로 정의(선언)

float sum1(float list[], int); // 부동 소수점형 배열의 합을 계산하는 함수 선언 
float sum2(float *list, int); // 포인터로 부동 소수점형 배열의 합을 계산하는 함수 선언
float sum3(int n, float *list); // 배열의 크기와 부동 소수점형 배열의 합을 계산하는 함수 선언

float input[MAX_SIZE], answer; // 전역 변수 선언
int i; // 정수형 변수 i생성

void main(void) { // main함수 시작
    printf("[----- [오다영] [2023041090] -----]\n"); // 이름 학번 출력
    for(i = 0; i < MAX_SIZE; i++)   // 배열의 값을 각각 input[i] = i로 초기화
        input[i] = i;

    printf("--------------------------------------\n"); // -----출력
    printf(" sum1(input, MAX_SIZE) \n"); // sum1(input, MAX_SIZE) 출력 
    printf("--------------------------------------\n"); // -----출력
    printf("input \t= %p\n", input); // input의 시작 주소 출력
    answer = sum1(input, MAX_SIZE); // sum1 함수 호출
    printf("The sum is: %f\n\n", answer); // sum1의 결과 출력

    printf("--------------------------------------\n"); // -----출력
    printf(" sum2(input, MAX_SIZE) \n"); //sum2(input, MAX_SIZE) 출력             
    printf("--------------------------------------\n"); // -----출력
    printf("input \t= %p\n", input); // input의 시작 주소 출력
    answer = sum2(input, MAX_SIZE); // sum2 함수 호출
    printf("The sum is: %f\n\n", answer); // sum2의 결과 출력

    printf("--------------------------------------\n"); // -----출력
    printf(" sum3(MAX_SIZE, input) \n"); // sum3(MAX_SIZE, input) 출력
    printf("--------------------------------------\n"); // -----출력
    printf("input \t= %p\n", input); // input 배열의 시작 주소 출력
    answer = sum3(MAX_SIZE, input); // sum3 함수 호출
    printf("The sum is: %f\n\n", answer); // sum3의 결과 출력
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소(매개변수 input의 시작 주소) 출력  
    printf("&list \t= %p\n", &list); // 포인터 변수의 주소 출력
    int i; // 지역변수 i선언
    float tempsum = 0; // 합을 저장할 변수 선언하고 초기화
    for(i = 0; i < n; i++) // 합 계산
        tempsum += list[i]; 
    return tempsum; // 합 tempsum을 반환
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소(매개변수 input의 시작 주소) 출력
    printf("&list \t= %p\n", &list); // sum2 함수에 전달된 포인터 변수의 주소 출력
    int i; // 지역변수 i 선언
    float tempsum = 0; // 합을 저장할 변수 선언하고 초기화
    for(i = 0; i < n; i++) // 합 계산
        tempsum += *(list + i);  
    return tempsum; // 합 반환
}

float sum3(int n, float *list) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소(매개변수인 input의 시작 주소) 출력
    printf("&list \t= %p\n", &list); // sum3 함수에 전달된 포인터 변수의 주소 출력
    float tempsum = 0; // 합을 저장할 변수 선언하고 초기화
    for(i = 0; i < n; i++) // 합 계산
        tempsum += *(list + i);
    return tempsum; //합 tempsum을 반환
}