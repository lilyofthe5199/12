#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// �ǽ� 3, �ǽ� 4 

void main(void) {
	
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	char str[30] = "happy C programming";
	
	// strcpy() �Լ� ��� (���ڿ� �����͸� �μ��� ����)
	// <���� ��� ���ڿ�> = strcpy ( <���>, <����> );
	strcpy(dst, src);
	
	printf("copied string : %s\n", dst);
	
	// strlen() �Լ� ��� (���ڿ� �����͸� �μ��� ����)
	// <���ڿ� ����> = strlen ( <�Է� ���ڿ�> );
	printf("���ڿ� \"%s\"�� ���� : %i", str, strlen(str));
	
	
}
