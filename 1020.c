#include <stdio.h>

int main(int argc, char const *argv[])
{
	int idade;
	int anos;
	int meses;
	int dias;

	scanf("%d", &idade);
	anos = idade / 365;
	idade -= 365 * anos;
	
	meses = idade / 30;
	idade -= meses * 30;

	dias = idade;

	printf("%d ano(s)\n", anos );
	printf("%d mes(s)\n", meses );
	printf("%d dia(s)\n", dias);

	return 0;
}