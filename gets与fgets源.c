/*
#include <stdio.h>
#include <string.h>
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[10];
	printf("�������ַ���ch1\n");
	scanf("%s", ch1);           //scanf �޷�������пո���ַ���,�һس��Ա��������뻺����
	getchar();                  //��س��������뻺������������Ҫ��getchar()����
	printf("�������ַ���ch2\n");
	gets(ch2);            //gets ��������пո���ַ������������뻺�������߻س����������س���������Ҫgetchar()���ջس�
	printf("�������ch1 = %s\nch2 = %s\n", ch1, ch2);
	printf("������ch3\n");
	fgets(ch3, sizeof(ch3), stdin);
	// fgets ������������ַ������ȣ������ gets �� scanf ����ʱ���ܳ����������������
	printf("�������ch3 = %s\n", ch3);
}
*/