/*
#include <stdio.h>
#define N 3
struct Mystruct1
{
	int xh;               //ѧ��
	char name[10];        //����
	int score[3];         //����
};
struct Mystruct2
{
	struct Mystruct1 std[N];
	int years;           //����
	char major[10];      //רҵ
	char sex[5];         //�Ա�
};
int main()
{
	struct Mystruct2 peo[N];
	int i, j;
	for (i = 0;i < N;i++)
	{
		printf("�������%dλͬѧ��ѧ�š����������Ʒ���\n", i + 1);
		scanf("%d%s", &peo[i].std[i].xh, peo[i].std[i].name);
		for (j = 0;j < N;j++)
		{
			scanf("%d", &peo[i].std[i].score[j]);
		}
		printf("�������%dλͬѧ�����䡢רҵ���Ա�\n", i + 1);
		scanf("%d%s%s", &peo[i].years, peo[i].major, peo[i].sex);
	}
	for (i = 0;i < N;i++)
	{
		printf("%-8d%-8s", peo[i].std[i].xh, peo[i].std[i].name);
		for (j = 0;j < N;j++)
		{
			printf("%-8d", peo[i].std[i].score[j]);
		}
		printf("\n");
		printf("%-8d%-8s%-8s\n\n", peo[i].years, peo[i].major, peo[i].sex);
	}
}
*/