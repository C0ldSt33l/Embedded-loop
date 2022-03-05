#include<iostream>

//19.Найти все простые делители числа А.

int main()
{
	system("chcp 1251");
	system("cls");

	int A;

	do
	{
		printf("Ввести число целое A > 1\n");
		scanf_s("%d", &A);
	} while (A <= 1);

	for (int i = 2; i <= A; i++)
	{
		if (A % i == 0)
		{
			printf("%d\n", i);
			while (A % i == 0) A /= i;
		}
	}

	return 0;
}