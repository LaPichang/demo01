/*
#include <stdio.h>
#include <string.h>
#define Key 5               //��Կ/ƫ����
char encrypt(char[]);       //�ַ�������
int main()
{
	char ch[20];
	printf("�������ʼ�ַ�����");
	scanf("%s", ch);
	printf("\n");
	encrypt(ch); //����
	printf("���ܺ��ַ���Ϊ��%s", ch);
}

char encrypt(char ch[])
{
	int i;
	int count = strlen(ch);       //������������鳤�ȣ���ȷ��ѭ������
	for (i = 0;i < count;i++)
	{
		ch[i] = ch[i] + i + Key;        //���ܵĺ����㷨,�����ӳ���ΪASCII��
	}
}
*/