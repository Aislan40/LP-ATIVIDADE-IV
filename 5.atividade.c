#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_funcionario
{
    char nome[200];
    char cargo[200];
    float salario;
    };

float cargoSalario(float salario){

return
}


int main()     
{
    setlocale(LC_ALL, "portuguese");

    int i;
    struct dados_funcionario funcionario[2];
   

    for (i = 0; i < 3; i++)
    {

printf("\nDADOS DO FUNCIONARIO");

        printf("\nDigite o nome do funcionario: ");
        gets(funcionario[i].nome);

        printf("Digite o cargo do funcionario: ");
        gets(funcionario[i].cargo);

        fflush(stdin);

    }

    system("cls || clear");

    printf("\nExibindo dados do funcionario... \n");

for (i = 0; i < 3; i++)
    {
        printf("\nNome do Funcionario: %s \n", funcionario[i].nome);
        printf("Cargo do funcionairo: %s \n", funcionario[i].cargo);
        printf("Salario: %d \n", funcionario[i].salario);
      
    }

    return 0;
}