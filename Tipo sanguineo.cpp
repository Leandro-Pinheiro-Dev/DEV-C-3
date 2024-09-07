#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"US");
    
    char tipo_sanguineo;

    printf("Digite o tipo sanguíneo conforme o exemplo (A+, A-, B+, B-, AB+, AB-, O+, O-): ");
    scanf(" %c", &tipo_sanguineo);

    printf("\nTipo sanguíneo da pessoa: %c\n", tipo_sanguineo);
    
    printf("Pode receber de: ");

    if (tipo_sanguineo == 'A') {
        printf("A+, A-, O+, O-");
    } else if (tipo_sanguineo == 'A-') {
        printf("A-, O-");
    } else if (tipo_sanguineo == 'B') {
        printf("B+, B-, O+, O-");
    } else if (tipo_sanguineo == 'B-') {
        printf("B-, O-");
    } else if (tipo_sanguineo == 'AB') {
        printf("A+, A-, B+, B-, AB+, AB-, O+, O-");
    } else if (tipo_sanguineo == 'AB-') {
        printf("A-, B-, AB-, O-");
    } else if (tipo_sanguineo == 'O') {
        printf("O+, O-");
    } else if (tipo_sanguineo == 'O-') {
        printf("O-");
    } else {
        printf("Tipo sanguíneo inválido\n");
        return 0; 
    }
    
    printf("\n");
    printf("Pode doar para: ");

    if (tipo_sanguineo == 'A') {
        printf("A+, AB+");
    } else if (tipo_sanguineo == 'A-') {
        printf("A+, A-, AB+, AB-");
    } else if (tipo_sanguineo == 'B') {
        printf("B+, AB+");
    } else if (tipo_sanguineo == 'B-') {
        printf("B+, B-, AB+, AB-");
    } else if (tipo_sanguineo == 'AB') {
        printf("AB+");
    } else if (tipo_sanguineo == 'AB-') {
        printf("AB+, AB-");
    } else if (tipo_sanguineo == 'O') {
        printf("A+, B+, AB+, O+");
    } else if (tipo_sanguineo == 'O-') {
        printf("A+, A-, B+, B-, AB+, AB-, O+, O-");
    } else {
        printf("Tipo sanguíneo inválido\n");
    }

    return 0;
}

