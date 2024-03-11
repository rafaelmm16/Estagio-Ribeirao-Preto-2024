#include <stdio.h>
#include <string.h>

void inverterString(char *string)
{
    //Declaração de variaveis
    int tamanho = strlen(string);
    int i;
    char temp;

    //Troca os caracteres da posição inicial com os da posição final, iterando até o meio da string
    for (i = 0; i < tamanho / 2; i++)
    {
        temp = string[i];
        string[i] = string[tamanho - 1 - i];
        string[tamanho - 1 - i] = temp;
    }
}

int main()
{
    char string[100];

    //Solicita ao usuário que insira a string
    printf("Digite uma string: ");
    fflush(stdin);
    fgets(string, sizeof(string), stdin);
    fflush(stdin);

    //Remove a quebra de linha adicionada pelo fgets
    string[strcspn(string, "\n")] = '\0';

    //Chama a função para inverter a string
    inverterString(string);

    //Exibe a string invertida
    printf("String invertida: %s\n", string);

    return 0;
}
