#include <stdio.h>

//
//
//void swap(int *a, int *b);
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//
//	scanf_s("%d %d", &a, &b);
//
//	swap(&a, &b);
//
//	
//
//
//	return 0;
//}
//
//void swap(int *a, int *b) {
//
//	int total = 0;
//	total = *a + *b;
//
//	
//
//	printf("%d\n", total);
//
// }
//
//int arrSearch(int *parr, int pkey, int parsize) {
//	int i = 0;
//
//	for ( i = 0; i < parsize; i++)
//		{
//			if (parr[i] == pkey)
//			{
//				return i;
//			
//			}
//		}
//	return -1;
//};
//
//void main() {
//
//	
//	int arr[] = { 23, 47 , 19, 63, 57, 26, 75, 73, 82, 89, 47, 11 };
//	int key = 75;
//	int arsize = sizeof(arr) / sizeof(int);
//
//	
//	int ret = arrSearch(arr, key, arsize);
//
//	if (ret == -1) {
//		printf("찾는 값이 없습니다.\n");
//	}
//	else
//	{
//		printf("값은 %d번째에 있습니다", ret + 1);
//	}
//
//	}
//	

void net(int num, int a, int j) {
	for (int i = 1; i < num; i++)
	{
		int result = a + i;

		for (j = 2; j < 10; j++)
		{
			if (result % j == 0) {
				break;
			}
		}
		if (result % j != 0) {
			printf("%d\n", result);
		}



	}
	}



void main() {
	
	int a = 0 ;
	int num;
	int j = 0;
	

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	

	net(num, a, j);

	
}