#include<stdio.h>




//int main() {
////	int a = 3;
//	int b = 4;
//	int temp;
//
//
//		//int b = 100;
//		//int*pB; // 주소 값만 저장하는 변수
//		//pB = &b;
//		//
//		//printf("%x\n", *pB);
//
//
//		//return 0;
//
//		//char str[] = "programming";
//		//char* ptr1; // *는 포인터 변수를 지칭하는 기호. 이것을 쓰지 않으면 변수의 주소값을 받을 수 없다. 이 변수는 주소값과 변수의 실제값 둘 다 호출할 수 있다. 
//					 //  주소값을 호출할 때는 그냥 기호를 쓰고, 실제값을 호출할 때는 *를 붙여서 써준다. 
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
//		//		break;// 반복문만 빠져나옴. =은 대입연산자. ==은 비교연산자.
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
//		//return 0; //프로그램 종료
//
//
//		//int a = 2;
//		//int b = 3;
//
//		//int temp = 0;
//
//		//temp = a;//a값 비워짐 가정.
//		//a = b;
//		//b = temp; // a와 b의 값을 서로 바꾸는 방법
//
//		//printf("%d\n", a);
//		//printf("%d\n", b);
//
//		swap(a, b);
//
//		return 0;
//}
// 선언 시의 *는 포인터의 선언 용도로 쓰이는 반면 

//int Add(int a, int b);
//int Min(int a, int b);
//

//void Factorial(int b, int*pRet);
//
//int main(void) {


	//int arr[100] = {0,};
	//int i = 0;
	//int j = 0;

	//for ( i = 0; i < 100; i++)
	//{
	//	arr[i] = i + 1;

	//	j = j + arr[i];// 누적값: sum = sum + 변수값;

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

	//*pA = *pA + 1; // 자료값을 통해 실제값을 변환시키는 방법.
	//*pB = *pB+ 1;
	//*pC = *pC+ 1;

	//printf("%c\n", a);
	//printf("%d\n", b);
	//printf("%f\n", c);

	//int a, b, sel, result;
	//int (*fPtr)(int a, int b) = NULL;


	//while (1)
	//{
	//	printf("다음 중 선택하시오(1. 덧셈 2. 뺄셈, 3. 종료) :");
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

	//	printf("두 정수를 입력하시오   : ");
	//	scanf_s("%d %d", &a, &b);
	//	result = fPtr(a, b);
	//	printf("결과 : %d\n", result);
	//}
//
//	int a, result;
//
//	printf("정수를 입력하시오 :   ");
//
//	scanf_s("%d", &a);
//
//	Factorial(a, &result);
//
//	printf("결과 : %d\n", result);
//
//	return 0;
//} // 포인터 == 주소값!!


//int Add(int a, int b) {
//	return a + b;
//};
//
//int Min(int a, int b) {
//	return a - b;
//}

//void Factorial(int b, int *pRet) {
//
//	int i; 
//	*pRet = 1;
//
//
//	for ( i = 1; i < (b + 1); i++)
//	{
//		*pRet *= i; // 팩토리얼 구현
//	}
//}

//포인터를 쓰는 이유: 다량의 데이터를 쉽게 다룰 수 있음.