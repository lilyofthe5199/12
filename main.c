#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void) {
	
	int i=0;
	char str[4];
	
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	printf("%s\n", str);
	
	// while (현재 문자 (str[i])이 맨 끝이 아님){
	while (str[i] != str[3]){
		// printf로 현재 문자 하나 출력;
		printf("%c", str[i]);
		// i를 1 증가;
		i++; 
	
	}
	
	return 0;
}
