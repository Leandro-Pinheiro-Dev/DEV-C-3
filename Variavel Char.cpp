#include<stdio.h>
#include<stdlib.h>
 // varialvel char
 int main (int argc, char*arg [])
 {
 	//declarou a variavel char e quantidade de caracteres
 	char nome[30];
 	// pediu para digitar
 	printf("Digite seu nome:\n");
 	// armazenou
 	gets(nome);
 	// apagou o texto
 	system("cls");
 	// apareceu novo texto com o que armazenou
 	printf("bem vindo %s\n",nome);
 	system("pause");
 	return 0;
 }
