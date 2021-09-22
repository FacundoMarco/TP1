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



int main(void) {
	setbuf(stdout, NULL);

	int opcion;

	float numeroA;
	float numeroB;

	int factorialA;
	int factorialB;
	int banderaIngresoNumeros1 = 0;
	int banderaIngresoNumeros2 = 0;
	int banderaOperaciones = 0;
	int banderaIngresado1 = 0;
	int banderaIngresado2 = 0;
	float restaNumeros;
	float sumaNumeros;
	float multiplicacionNumeros;
	float division;
	float rFactorialA;
	float rFactorialB;
	int respuesta;

	do {

		opcion = MenuOpciones(numeroA, numeroB, banderaIngresoNumeros1,
				banderaIngresoNumeros2);

		switch (opcion) {
		case 1:
			banderaIngresoNumeros1 = 1;
			banderaIngresado1 = 1;
			numeroA = PedirFlotante("\n1. Ingresar 1er operando (A=x) : ");
			printf("=====================================================\n");

			break;
		case 2:
			banderaIngresoNumeros2 = 1;
			banderaIngresado2 = 1;
			numeroB = PedirFlotante("\n2. Ingresar 2do operando (B=y) : ");

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
				factorialA = CalcularFactorial(numeroA, &rFactorialA);
				factorialB = CalcularFactorial(numeroB, &rFactorialB);
				printf("Operacion calcular la suma (A+B)\n");
				printf("Operacion calcular la resta (A-B)\n");
				printf("Operacion calcular la division (A/B)\n");
				printf("Operacion calcular la multiplicacion (A*B)\n");
				printf("Operacion calcular el factorial (A!)\n");
				printf("Operacion calcular el factorial (B!)\n");
				printf("SE HAN REALIZADO CON EXITO\n");
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

				if (factorialA == 1 ) {
					printf(
							"EL NUMERO (A) NO SE LE PUEDE REALIZAR EL FACTORIAL\n");
				} else {
					printf("El factorial de A es = %.1f\n", rFactorialA);
				}
				if (factorialB == 1 ) {
					printf(
							"EL NUMERO (B) NO SE LE PUEDE REALIZAR EL FACTORIAL\n");
				} else {
					printf("El factorial de B es = %.1f\n", rFactorialB);
				}

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
			printf("=====================================================\n");
			printf("=====================================================\n");
			break;
		}

	} while (opcion != 5);

	return EXIT_SUCCESS;

}
