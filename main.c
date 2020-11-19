#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// 실습 3, 실습 4 

void main(void) {
	
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	char str[30] = "happy C programming";
	
	// strcpy() 함수 사용 (문자열 포인터를 인수로 넣음)
	// <복사 대상 문자열> = strcpy ( <대상>, <원본> );
	strcpy(dst, src);
	
	printf("copied string : %s\n", dst);
	
	// strlen() 함수 사용 (문자열 포인터를 인수로 넣음)
	// <문자열 길이> = strlen ( <입력 문자열> );
	printf("문자열 \"%s\"의 길이 : %i", str, strlen(str));
	
	
}
