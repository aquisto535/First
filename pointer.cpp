#include<stdio.h>




//int main() {
////	int a = 3;
//	int b = 4;
//	int temp;
//
//
//		//int b = 100;
//		//int*pB; // �ּ� ���� �����ϴ� ����
//		//pB = &b;
//		//
//		//printf("%x\n", *pB);
//
//
//		//return 0;
//
//		//char str[] = "programming";
//		//char* ptr1; // *�� ������ ������ ��Ī�ϴ� ��ȣ. �̰��� ���� ������ ������ �ּҰ��� ���� �� ����. �� ������ �ּҰ��� ������ ������ �� �� ȣ���� �� �ִ�. 
//					 //  �ּҰ��� ȣ���� ���� �׳� ��ȣ�� ����, �������� ȣ���� ���� *�� �ٿ��� ���ش�. 
//
//		//ptr1 = &str[0];
//
//
//		//printf("%x\n", ptr1);
//		//printf("%x\n", ptr1 + 1);
//		//printf("%c\n", *(ptr1 + 1));
//
//		//printf("%x\n", ptr1 + 3);
//		//printf("%c\n", *(ptr1 + 3));
//
//
//		//return 0;
//
//
//		//int arr[100];
//		//int i = 0;
//		//int count = 0;
//
//		//for ( i = 0; i < 100; i++)
//
//		//{
//		//	
//
//		//	scanf_s("%d", &arr[i]);
//
//		//	if (arr[i] == -1) {
//		//		break;// �ݺ����� ��������. =�� ���Կ�����. ==�� �񱳿�����.
//		//	}
//
//		//	count = count + 1;
//		//}
//
//		//for ( i = 0; i < count ; i++)
//		//{
//		//	printf("%d ", arr[i]);
//		//}
//
//
//		//
//		//return 0; //���α׷� ����
//
//
//		//int a = 2;
//		//int b = 3;
//
//		//int temp = 0;
//
//		//temp = a;//a�� ����� ����.
//		//a = b;
//		//b = temp; // a�� b�� ���� ���� �ٲٴ� ���
//
//		//printf("%d\n", a);
//		//printf("%d\n", b);
//
//		swap(a, b);
//
//		return 0;
//}
// ���� ���� *�� �������� ���� �뵵�� ���̴� �ݸ� 

//int Add(int a, int b);
//int Min(int a, int b);
//

void Factorial(int b, int*pRet);

int main(void) {


	//int arr[100] = {0,};
	//int i = 0;
	//int j = 0;

	//for ( i = 0; i < 100; i++)
	//{
	//	arr[i] = i + 1;

	//	j = j + arr[i];// ������: sum = sum + ������;

	//	
	//
	// }
	//printf("%d", j);

	//return 0;
	
	//char a = 'C';
	//char* pA = &a;
	//int b = 10;
	//int* pB = &b;
	//double c = 3.14;
	//double* pC = &c;

	//*pA = *pA + 1; // �ڷᰪ�� ���� �������� ��ȯ��Ű�� ���.
	//*pB = *pB+ 1;
	//*pC = *pC+ 1;

	//printf("%c\n", a);
	//printf("%d\n", b);
	//printf("%f\n", c);

	//int a, b, sel, result;
	//int (*fPtr)(int a, int b) = NULL;


	//while (1)
	//{
	//	printf("���� �� �����Ͻÿ�(1. ���� 2. ����, 3. ����) :");
	//	scanf_s("%d", &sel);

	//	switch (sel)
	//	{
	//	case 1:
	//		fPtr = Add;
	//		break;

	//	case 2:
	//		fPtr = Min;
	//		break;

	//	case 3:
	//		return 0;
	//
	//	default:
	//		break;
	//	}

	//	printf("�� ������ �Է��Ͻÿ�   : ");
	//	scanf_s("%d %d", &a, &b);
	//	result = fPtr(a, b);
	//	printf("��� : %d\n", result);
	//}

	int a, result;

	printf("������ �Է��Ͻÿ� :   ");

	scanf_s("%d", &a);

	Factorial(a, &result);

	printf("��� : %d\n", result);

	return 0;
} // ������ == �ּҰ�!!


//int Add(int a, int b) {
//	return a + b;
//};
//
//int Min(int a, int b) {
//	return a - b;
//}

void Factorial(int b, int *pRet) {

	int i; 
	*pRet = 1;


	for ( i = 1; i < (b + 1); i++)
	{
		*pRet *= i; // ���丮�� ����
	}
}