#include<stdio.h>



int main(void) {

	
	//
	//int arrGrade[6];
	//int i = 0;
	//int total = 0;
	//double avg = 0.0;

	//arrGrade[0] = 90;
	//arrGrade[1] = 80;
	//arrGrade[2] = 70;

	//


	//for ( i = 0; i < sizeof(arrGrade) / sizeof(arrGrade[0]); i++)
	//{
	//	scanf_s("%d", &arrGrade[i]);
	//	
	//}

	//for (i = 0; i < sizeof(arrGrade) / sizeof(arrGrade[0]); i++)
	//{
	//	total = total + arrGrade[i]; // ������ ���ϴ� ��
	//}

	//avg = (double)total / sizeof(arrGrade);


	//printf("���� : %d\n", total);
	//printf("��� : %f\n", avg);


	//
	//return 0;
	
	int total = 0;
	double ave = 0.0;
	int arrGrade[7];
	int i;
	int count = 0;

	for (i = 0; i < sizeof(arrGrade) / sizeof(arrGrade[0]); i++)
	{
		printf("%d��° �л� ������ �Է��ϼ���", i + 1);
		scanf_s("%d", &arrGrade[i]);
		count++;
	}

	for ( i = 0; i < count; i++)
	{
		total += arrGrade[i];
	}
	
	ave = total / count;
	printf("������ %d�̰�, ����� %f�Դϴ�\n", total, ave);


}