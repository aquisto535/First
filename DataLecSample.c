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
	//int (*pftest)(int) = test; //�Լ� �����͸� ���� ���� �ݹ� ������ ����� ���ؼ�.

	test(5);
	return 0;
}