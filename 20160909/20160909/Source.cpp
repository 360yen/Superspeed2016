#include<stdio.h>
int main()
{

	int kihon ,a,hako02, hako03, hako04, hako05, hako06, hako07, hako08, hako09, hako10,hako11;
	
	printf("��{�����i�P�O���Ԃ܂Łj����͂��Ă�������\n");
		scanf_s("%d", &kihon);
	printf("�P�O���Ԃ𒴂����ꍇ�̂P���Ԃ̗�������͂��Ă�������\n");
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
	
	printf("��{�����i�P�O���Ԃ܂Łj[\\%d]",kihon);
	printf("���P�O���Ԃ𒴂����ꍇ�̂P���Ԃ̗���[\\%d]\n", a);
	printf("\n");
	printf("�����ꗗ\n");
	printf("��{�����i�P�O���Ԃ܂Łj[\\%4d]\n", kihon);
	printf("�@�@�@�P�P���Ԗڂ̗����@[\\%4d]\n", hako02);
	printf("�@�@�@�P�Q���Ԗڂ̗����@[\\%4d]\n", hako03);
	printf("�@�@�@�P�R���Ԗڂ̗����@[\\%4d]\n", hako04);
	printf("�@�@�@�P�S���Ԗڂ̗����@[\\%4d]\n", hako05);
	printf("�@�@�@�P�T���Ԗڂ̗����@[\\%4d]\n", hako06);
	printf("�@�@�@�P�U���Ԗڂ̗����@[\\%4d]\n", hako07);
	printf("�@�@�@�P�V���Ԗڂ̗����@[\\%4d]\n", hako08);
	printf("�@�@�@�P�W���Ԗڂ̗����@[\\%4d]\n", hako09);
	printf("�@�@�@�P�X���Ԗڂ̗����@[\\%4d]\n", hako10);
	printf("�@�@�@�Q�O���Ԗڂ̗����@[\\%4d]\n", hako11);

	return(0);
}