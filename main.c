#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main(void){

	FILE *fp;
	char str[100];
	char path[100];
	char lookup[100];
	
	// 파일 경로 입력 받기 
	printf("input file path:");
	scanf("%s", path);
	
	
	// 찾는 단어 입력 받기 
	printf("input search word:");
	scanf("%s", lookup);
	
	fp = fopen(path, "r");

	if (fp == NULL)
	{
		printf("invalid path! (%s)\n", path);
		return -1;
	}
	
	
	while( fgets(str, 100, fp) != NULL){
		// strncmp
		if(strncmp(str, lookup, strlen(lookup)) == 0)
		{
			printf("Search succed!\n");
			fclose(fp);
			return 0;
		}	
	}
	
	printf("Search failed!\n");
	fclose(fp);
	
	return 0;
}
