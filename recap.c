#include <stdio.h>
#include<string.h> //strcpy 사용할 때 필요.
#include<malloc.h> //malloc 사용할 때 필요.

void main()
{
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* Pa = &a;
	int* Pb = &b;
	double* Pc = &c;

	int pb = 7;
	(*Pb) + 1; //*를 통해 포인터가 가리키고 있는 변수의 값을 먼저 참조한 후 값을 1 증가.

	printf("%d\n", pb);
	printf("%d", b);
}