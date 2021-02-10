/*
#include <stdio.h>
#define N 3
struct Mystruct1
{
	int xh;               //学号
	char name[10];        //姓名
	int score[3];         //分数
};
struct Mystruct2
{
	struct Mystruct1 std[N];
	int years;           //年龄
	char major[10];      //专业
	char sex[5];         //性别
};
int main()
{
	struct Mystruct2 peo[N];
	int i, j;
	for (i = 0;i < N;i++)
	{
		printf("请输入第%d位同学的学号、姓名、三科分数\n", i + 1);
		scanf("%d%s", &peo[i].std[i].xh, peo[i].std[i].name);
		for (j = 0;j < N;j++)
		{
			scanf("%d", &peo[i].std[i].score[j]);
		}
		printf("请输入第%d位同学的年龄、专业、性别\n", i + 1);
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