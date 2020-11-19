#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main(void){

	FILE *fp = NULL;
	// char c;
	char str[100];
	
	fp = fopen("sample.txt", "r");

	if (fp == NULL)
	{
		return -1;
	}
	
	
	//while ( (c=fgetc(fp)) != EOF ){
	while( fgets(str, 100, fp) != NULL){
	
		// printf("%c", c);
		printf("%s", str);
	}
	
	fclose(fp);
	
	return 0;
}
