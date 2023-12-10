#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dadosContato {
    char nome[200];
    char numero[200];
    char email[200];
};

char* contatoNumero(struct dadosContato contato[], int tamanho, char nome[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(contato[i].nome, nome) == 0) {
            return contato[i].numero;
        }
    }
    return "Contato nao encontrado";
}

int main () {

struct dadosContato contatos[3];
int i;
char nomeBusca[50];

for (i = 0; i < 3; i++) {

printf("Digite o nome do contato: ");
gets(contatos[i].nome);

printf("Digite o numero do contato: ");
gets(contatos[i].numero);

printf("Digite o email do contato: ");
gets(contatos[i].email);
printf("\n");
}

    printf("Digite o nome do contato para buscar o numero de telefone: ");
    scanf("%s", nomeBusca);

    char* telefoneEncontrado = contatoNumero(contatos, 3, nomeBusca);

    printf("Numero de telefone para %s: %s\n", nomeBusca, telefoneEncontrado);

    return 0;
}