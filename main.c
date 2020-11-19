#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	FILE *fp;
	char str[100];
	int i;
	
	// "w" 쓰기 모드로 열기 
	fp = fopen("C:\sample.txt", "w");
	if (fp == NULL)
	{
		return -1;
	}
	
	for(i=0; i<3; i++)
	{
		printf("input a word:");
		
		scanf("%s", str);
		
		fprintf(fp, "%s\n", str);
	}
	
	// 닫기 
	fclose(fp);
	
	return 0;
}
