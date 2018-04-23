#include <stdio.h>

/*********************************************************************
 *                                                                   *
 *                         ############                              *
 *                         # ATENCAO: #                              *
 *                         ############                              *
 *                                                                   *
 * E' PROIBIDO MEXER NO CODIGO ABAIXO, EXCETO EM UM PONTO ESPECIFICO *
 * QUE SERA' INDICADO, MAIS PROXIMO AO FINAL DO ARQUIVO.             *
 *                                                                   *
 *********************************************************************/

double Q1_solucao(double x, double y);
void Q2_solucao(double x, double y, double z);
int Q3_solucao(int x);
void Q4_solucao(double n1, double n2, double n3, double n4);
void Q5_solucao();
void Q6_solucao();
double Q7_solucao();
int Q8_solucao(int);

void Q1()
{
	double x, y;

	printf("Digite o primeiro numero: ");
	scanf("%lf", &x);

	printf("Digite o segundo numero: ");
	scanf("%lf", &y);

	printf("O maior dos dois numeros e': %lf\n", Q1_solucao(x, y));
}

void Q2()
{
	double x, y, z;

	printf("Digite o primeiro numero: ");
	scanf("%lf", &x);

	printf("Digite o segundo numero: ");
	scanf("%lf", &y);

	printf("Digite o terceiro numero: ");
	scanf("%lf", &z);

	Q2_solucao(x, y, z);
}

void Q2_impressao(double x, double y, double z)
{
	printf("Os numeros em ordem sao: %lf, %lf, %lf\n", x, y, z);
}

void Q3()
{
	int x, res;

	printf("Digite o numero: ");
	scanf("%d", &x);

	res = Q3_solucao(x);

	if (res == 0)
		printf("O numero e' par\n");
	else if (res == 1)
		printf("O numero e' impar\n");
	else
		printf("Valor de retorno da funcao invalido, seu programa esta' com erro\n");
}

void Q4_impressao(double media, char* status)
{
	printf("O aluno(a) foi %s com media %lf\n", status, media);
}

void Q4()
{
	double n1, n2, n3, n4;

	printf("Digite a nota 1 do aluno: ");
	scanf("%lf", &n1);

	printf("Digite a nota 2 do aluno: ");
	scanf("%lf", &n2);

	printf("Digite a nota 3 do aluno: ");
	scanf("%lf", &n3);

	printf("Digite a nota 4 do aluno: ");
	scanf("%lf", &n4);

	Q4_solucao(n1, n2, n3, n4);
}

void Q5_impressao(double media, char* status)
{
	printf("O aluno(a) foi %s com media %lf\n", status, media);
}

double Q5_ler_nota()
{
	double nota;

	printf("Digite uma das notas do aluno: ");
	scanf("%lf", &nota);

	return nota;
}

void Q5()
{
	Q5_solucao();
}

void Q6_impressao(double media, char* status)
{
	printf("O aluno(a) foi %s com media %lf\n", status, media);
}

int Q6_quantas_notas()
{
	int quantas_notas;

	printf("Digite quantas notas tem a disciplina: ");
	scanf("%d", &quantas_notas);

	return quantas_notas;
}

double Q6_ler_nota()
{
	double nota;

	printf("Digite uma das notas do aluno: ");
	scanf("%lf", &nota);

	return nota;
}

void Q6()
{
	Q6_solucao();
}

void Q7()
{
	printf("O salario atual do funcionario e' %lf\n", Q7_solucao());
}

void Q8()
{
	int n;

	printf("Digite um numero inteiro n: ");
	scanf("%d", &n);

	if (Q8_solucao(n) == 1)
		printf("O numero n e' primo\n");
	else
		printf("O numero n nao e' primo\n");
}

int main()
{
	// A unica alteracao que pode ser feita no arquivo e' nas linhas a seguir.
	// Para escolher a questao a ser testada, remova os simbolos de // do
	// inicio da linha correspondente (se existirem), e garanta que todas as
	// demais linhas (entre Q1() e Q8()) contenham // na frente.
	//
	// Por exemplo, o arquivo original esta' escrito de maneira a testar a
	// questao 1.

	Q1();
	//Q2();
	//Q3();
	//Q4();
	//Q5();
	//Q6();
	//Q7();
	//Q8();

	return 0;
}

