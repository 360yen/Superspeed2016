#include<stdio.h>
int main()
{

	int kihon, a;
	//hako02, hako03, hako04, hako05, hako06, hako07, hako08, hako09, hako10;

	printf("基本料金（１０時間まで）を入力してください\n");
	scanf_s("%d", &kihon);
	printf("１０時間を超えた場合の１時間の料金を入力してください\n");
	scanf_s("%d", &a);


	printf("基本料金は[\\%d]です\n", kihon);
	printf("１時間の料金は[\\%d]です\n", a);

	return(0);
}