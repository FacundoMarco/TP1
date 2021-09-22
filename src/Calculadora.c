/*
 * Calculadora.c
 *
 *  Created on: 12 sept 2021
 *      Author: User
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
#include <ctype.h>

float SumaDeNumeros(float numeroA, float numeroB) {

	int suma;

	suma = numeroA + numeroB;

	return suma;
}

float RestaDeNumeros(float numeroA, float numeroB) {
	float resta;

	resta = numeroA - numeroB;

	return resta;

}
int DivisionDeNumeros(float numeroA, float numeroB, float *dividir) {
	float division;
	int banderaNoSePuede;

	if (numeroB == 0) {

		banderaNoSePuede = 1;
	} else {
		division = numeroA / numeroB;
	}
	*dividir = division;
	return banderaNoSePuede;

}
float MultiplicacionDeNumeros(float numeroA, float numeroB) {
	float multiplicar;
	multiplicar = numeroA * numeroB;

	return multiplicar;

}
int CalcularFactorial(float numeroIngresado, float *RFactorial) {

	int factorial = 1;
	int BanderaRetorno = 0;
	int entero;

	entero = numeroIngresado;

	if (numeroIngresado - entero || numeroIngresado > 10) {

		BanderaRetorno = 1;

	} else {
		for (int i = numeroIngresado; i > 0; i--) {

			factorial = factorial * i;

		}
	}

	*RFactorial = factorial;
	return BanderaRetorno;
}

int MenuOpciones(float numeroA, float numeroB, int banderaIngresoNumeros1,
		int banderaIngresoNumeros2) {

	int opcion;

	if (banderaIngresoNumeros1 == 0) {
		printf("1. Ingresar primer numero (A=x)\n");

	} else if (banderaIngresoNumeros1 == 1) {
		printf("1. Ingresar primer numero (A=%.2f)\n", numeroA);
	}

	if (banderaIngresoNumeros2 == 0) {
		printf("2. Ingresar segundo numero (B=y)\n");

	} else if (banderaIngresoNumeros2 == 1) {
		printf("2. Ingresar segundo numero (B=%.2f)\n", numeroB);
	}
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. salir\n");
	printf("=====================================================\n");

	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

float PedirFlotante(char mensaje[]) {

	float numero;
	printf(mensaje);

	scanf("%f", &numero);

	return numero;
}

