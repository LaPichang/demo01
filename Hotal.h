#pragma once
#define N 4
char menu_hotal[N][50] = { "���б�ݾƵ�","���ջʹھƵ�","���η�ŵ�Ƶ�","άҲ�����¾Ƶ�" };
int hotal_price[N] = { 800,1000,600,1150 };
void Menu()                  //�Ƶ�����
{
	int i;
	printf("%-20s%-8s\n", "���ؾƵ�", "24Сʱ��ס�۸�");
	for (i = 0;i < N;i++)
	{
		printf("%d:%-20s%-8d\n", i + 1, menu_hotal[i], hotal_price[i]);
	}
	printf("\n");
}
void Option(int op)         //�ͻ�ѡ��
{
	if (op == 1)
		printf("��ӭ����%s�Ƶ�!\n", menu_hotal[0]);
	else if (op == 2)
		printf("��ӭ����%s�Ƶ�!\n", menu_hotal[1]);
	else if (op == 3)
		printf("��ӭ����%s�Ƶ�!\n", menu_hotal[2]);
	else if (op == 4)
		printf("��ӭ����%s�Ƶ�!\n", menu_hotal[3]);
	else
		printf("������\n");
}
