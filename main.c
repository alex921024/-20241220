#include <stdio.h>
#include <stdlib.h>
#include <time.h>

signed long long int  main() {
	while (1)
	{
		srand(time(NULL));
		signed long long int  min = 0;
		signed long long int  max;

		printf("Ոݔ��骄�˔�:");
		scanf_s("%I64d", &max);
		printf("�骄�˔���%I64d��\n", max);

		signed long long int  player[7] = { 0 };
		for (signed long long int  i = 0; i < 7; i++)
		{
			printf("�骄��[%I64d]ID��:", i + 1);
			scanf_s("%I64d", &player[i]);
		}
		printf("\n");

		for (signed long long int  i = 0; i < 7; i++)
		{
			printf("�骄��[%I64d]id:%I64d\n", i + 1, player[i]);
		}
		printf("\n");

		signed long long int  x = rand() % (max - min + 1) + min;
		printf("�Ъ��˞�[%I64d],id[%I64d]\n", x, player[x-1]);
		printf("====================================================\n");
	}
	return(0);
	system("pause");
}

