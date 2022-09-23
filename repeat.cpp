#include <stdio.h>
#include<Windows.h>


//void main() {
//	int i = 1;
//	
//	while (i < 13)
//	{
//		printf("%d월\n", i);
//		i++;
//	} return;
// 
// 
//}


int main() {
	//int a = 1;
	//int sum = 0;

	//while (a < 11)
	//{	
	//	printf("%d", a);
	//	
	//	sum = sum + a;// 누적 합 구하는 방법;
	//	a++;// a = a + 1;

	//	
	//}
	//
	//printf("%d\n", sum);

	/*int a = 1;
	int sum = 0;
	int b = 0;

	scanf_s("%d", &b);

	while (a <= b);
	{
		sum = sum + a;
		a++;
	}
	printf("%d\n", sum);*/

	/*int input = 0;
	int sum = 0;


	do {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);

		sum += input;
	} while (input!=0);

	  printf("총합은  : %d입니다\n", sum);
	  return 0;*/

	//int i = 0;
	//int sum =0 ;
	//scanf_s("%d", &i);
	//for (i = 1; i <= 10; i++) {
	//	sum = sum + i;
	//	
	//}
	//printf("%d\n", sum);
	//return 0;


	/*int dan, i;
	printf("단을 입력하세요 :");
	scanf_s("%d", &dan);
	for (i = 1; i < 10; i++) {
		printf("%d*%d = %d\n", dan, i, dan * i);
	}
	return 0;*/

	/*int i;

	printf("충전을 확인하세요\n");

	for ( i = 0; i <= 100; i++)
	{
		printf("충전: %d\n", i);
		Sleep(100);
	}
	printf("충전이 완료되었습니다");*/


	/*int dan = 0;

	for (dan = 2; dan < 10; dan++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", j, dan, dan * j);
		}
	}

	return 0;*/

	//int a = 1;
	//int b = 2;

	//

	//while ( b < 10)
	//{
	//	a = 1;
	//	while (a < 10)
	//	{
	//		printf("%d * %d = %d\n", a, b, a * b);
	//		a++;

	//	}
	//	
	//	if (b = b + 2) {
	//		continue;
	//	}
	//}
	//return 0;
	// 
	// 
	// ======================
	// 
	// 
	//int i, j;

	//for (i = 5; i < 10; i++) {
	//	
	//
	//	for ( j = 0; j < 10 - i ; j++)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//	
	//} // 역직사각형, 횟수 감소. 공식:변수가 비교대상의 값보다 작은 경우에 고정된 초기문의 변수가 점점 커지면서 작아지는 비교문의 조건을 따라간다. 비교문의 조건이 작아지면 실행횟수도 줄어든다;
	
	//int i, j;

	//for (i = 0; i < 5; i++) 
	//{
	//	for (j = 10; j < 11 + i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//} //직사각형. 횟수 증가; 이중반복문에서 두 번째 반복문의 조건은 빠져나오기 전까지 고정된다. 초기문의 조건변수만 변화한다. 초기문의 설정은 언제나 고정된 채로 첫번째 조건으로 시작된다..
		// 공식: 변수가 비교대상의 값보다 작은 경우에 고정된 초기문의 변수가 커지면서 맞춰서 커지는 비교문의 조건을 따라간다.비교문의 조건이 커지면 실행횟수도 커진다.

	int i, j;

	for (i = 2; i < 7; i++) {

		for ( j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}



}	
