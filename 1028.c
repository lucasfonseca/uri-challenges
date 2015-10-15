#include <stdio.h>

int main(int argc, char const *argv[])
{
	int quantidade_testes;
	int figura1, figura2;
	int menor;
	int mdc;

	scanf("%d", &quantidade_testes);

	while (quantidade_testes != 0)
	{
		scanf("%d %d", &figura1, &figura2);
		menor = figura1;
		if (figura2 < menor)
			menor = figura2;



		for (int i = 1; i <= menor; ++i)
		{
			if ((figura1 % i == 0) && (figura2 % i == 0))
			{
				mdc = i;
			}
		}
		printf("%d\n", mdc);
		quantidade_testes--;

	}

	return 0;
}