#include<stdio.h>
int main()
{

	int kihon ,a,hako02, hako03, hako04, hako05, hako06, hako07, hako08, hako09, hako10,hako11;
	
	printf("基本料金（１０時間まで）を入力してください\n");
		scanf_s("%d", &kihon);
	printf("１０時間を超えた場合の１時間の料金を入力してください\n");
		scanf_s("%d", &a);

		hako02 = kihon + a;
		hako03 = hako02 + a;
		hako04 = hako03 + a;
		hako05 = hako04 + a;
		hako06 = hako05 + a;
		hako07 = hako06 + a;
		hako08 = hako07 + a;
		hako09 = hako08 + a;
		hako10 = hako09 + a;
		hako11 = hako10 + a;
	
	printf("基本料金（１０時間まで）[\\%d]",kihon);
	printf("※１０時間を超えた場合の１時間の料金[\\%d]\n", a);
	printf("\n");
	printf("料金一覧\n");
	printf("基本料金（１０時間まで）[\\%4d]\n", kihon);
	printf("　　　１１時間目の料金　[\\%4d]\n", hako02);
	printf("　　　１２時間目の料金　[\\%4d]\n", hako03);
	printf("　　　１３時間目の料金　[\\%4d]\n", hako04);
	printf("　　　１４時間目の料金　[\\%4d]\n", hako05);
	printf("　　　１５時間目の料金　[\\%4d]\n", hako06);
	printf("　　　１６時間目の料金　[\\%4d]\n", hako07);
	printf("　　　１７時間目の料金　[\\%4d]\n", hako08);
	printf("　　　１８時間目の料金　[\\%4d]\n", hako09);
	printf("　　　１９時間目の料金　[\\%4d]\n", hako10);
	printf("　　　２０時間目の料金　[\\%4d]\n", hako11);

	return(0);
}