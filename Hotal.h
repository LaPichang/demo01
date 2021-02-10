#pragma once
#define N 4
char menu_hotal[N][50] = { "城市便捷酒店","假日皇冠酒店","铂涛菲诺酒店","维也纳情侣酒店" };
int hotal_price[N] = { 800,1000,600,1150 };
void Menu()                  //酒单名单
{
	int i;
	printf("%-20s%-8s\n", "当地酒店", "24小时入住价格");
	for (i = 0;i < N;i++)
	{
		printf("%d:%-20s%-8d\n", i + 1, menu_hotal[i], hotal_price[i]);
	}
	printf("\n");
}
void Option(int op)         //客户选择
{
	if (op == 1)
		printf("欢迎光临%s酒店!\n", menu_hotal[0]);
	else if (op == 2)
		printf("欢迎光临%s酒店!\n", menu_hotal[1]);
	else if (op == 3)
		printf("欢迎光临%s酒店!\n", menu_hotal[2]);
	else if (op == 4)
		printf("欢迎光临%s酒店!\n", menu_hotal[3]);
	else
		printf("请慢走\n");
}
