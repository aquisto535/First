#include <stdio.h>

int test(int a)
{
	//printf("test(): Hello World\n");
	if (a <= 0)
		return;
	printf("test(%d)\n", a);
	return test(a - 1);
}

int main()
{
	//test(5);
	//int (*pftest)(int) = test; //함수 포인터를 쓰는 이유 콜백 구조를 만들기 위해서.

	test(5);
	return 0;
}