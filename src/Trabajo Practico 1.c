/*
 ============================================================================
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funcione
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "Calculadora.h"

float SumaDeNumeros(float, float);
float RestaDeNumeros(float, float);
float DivisionDeNumeros(float, float, float*);
float MultiplicacionDeNumeros(float, float);
//int ValidarNumeroOpcion(char[]);

int main(void) {
	setbuf(stdout, NULL);

	int opcion;

	float numeroA;
	float numeroB;
	float sumaNumeros;
	float restaNumeros;
	int banderaIngresoNumeros1 = 0;
	int banderaIngresoNumeros2 = 0;
	int banderaOperaciones = 0;
	int banderaIngresado1 = 0;
	int banderaIngresado2 = 0;

	float multiplicacionNumeros;
	float division;
	int respuesta;

	do {

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


		switch (opcion) {
		case 1:
			banderaIngresoNumeros1 = 1;
			banderaIngresado1 = 1;
			printf("\n1. Ingresar 1er operando (A=x) : ");

			scanf("%f", &numeroA);
			printf("=====================================================\n");

			break;
		case 2:
			banderaIngresoNumeros2 = 1;
			banderaIngresado2 = 1;
			printf("\n2. Ingresar 2do operando (B=y) : ");
			scanf("%f", &numeroB);
			printf("=====================================================\n");

			break;
		case 3:
			if (banderaIngresado1 == 0) {
				printf("NO SE INGRESO PRIMER NUMERO\n");
				printf(
						"=====================================================\n");
			} else if (banderaIngresado2 == 0) {
				printf("NO SE INGRESO SEGUNDO NUMERO\n");
				printf(
						"=====================================================\n");
			} else {

				banderaOperaciones = 1;

				sumaNumeros = SumaDeNumeros(numeroA, numeroB);
				restaNumeros = RestaDeNumeros(numeroA, numeroB);
				respuesta = DivisionDeNumeros(numeroA, numeroB, &division);
				multiplicacionNumeros = MultiplicacionDeNumeros(numeroA,
						numeroB);
				printf("LAS OPERACIONES SE HAN REALIZADO CON EXITO\n");
				printf(
						"=====================================================\n");
				printf(
						"=====================================================\n");
			}
			break;
		case 4:
			if (banderaOperaciones == 0) {
				printf("TODAVIA NO A CALCULADO LAS OPERACIONES\n");
				printf(
						"=====================================================\n");
			} else {
				printf("La suma de los numeros es = %.2f\n", sumaNumeros);
				printf("La resta de los numeros es = %.2f\n", restaNumeros);
				if (respuesta == 1) {
					printf("No es posible dividir por 0\n");
				} else {
					printf("La division de los numeros es = %.2f\n", division);
				}

				printf("La multiplicacion es = %.2f\n", multiplicacionNumeros);
				printf(
						"=====================================================\n");
				printf(
						"=====================================================\n");
			}
			break;
		case 5:
			printf("Gracias por usar nuestra calculadora\n");

			break;

		default:

			printf("OPCION INVALIDA\n");
			break;
		}

	} while (opcion != 5 );

	return EXIT_SUCCESS;

}

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
float DivisionDeNumeros(float numeroA, float numeroB, float *dividir) {
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
/*void ValidarNumeroOpcion(int opcion) {

	if (!isalpha(opcion)) {

		printf("ERROR INGRESE NUMEROS");

	}

}
*/
