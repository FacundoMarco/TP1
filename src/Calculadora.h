/*
 * Calculadora.h
 *
 *  Created on: 12 sept 2021
 *      Author: User
 */

#ifndef CALCULADORA_H_
#define CALCULADORA_H_
/// @fn float SumaDeNumeros(float, float)
/// @brief  Realiza la suma de los numeros.
///
/// @param Numero A.
/// @param Numero B.
/// @return Devuelve resutado de la sumatoria.
float SumaDeNumeros(float, float);

/// @fn float RestaDeNumeros(float, float)
/// @brief  Realiza resta de los numeros.
///
/// @param  Numero A.
/// @param  Numero B.
/// @return  Devuelve resutaldo de la resta.
float RestaDeNumeros(float, float);

/// @fn float DivisionDeNumeros(float, float, float*)
/// @brief  Realiza la division de los numeros.
///
/// @param  Numero A.
///
/// @param  Numero B.
/// @param Resultado de la division por puntero.
/// @return Retorna 1 si no se puede hacer la division.
int DivisionDeNumeros(float, float, float*);

/// @fn float MultiplicacionDeNumeros(float, float)
/// @brief  Realiza la multiplicacion de los numeros.
///
/// @param  Numero A.
/// @param  Numero B.
/// @return Resultado de la multiplicacion de los Numeros.

float MultiplicacionDeNumeros(float, float);

/// @fn float CalcularFactorial(float, float*)
/// @brief  Realiza el factorial de un numero.
///
/// @param  Numero.
/// @param  Resultado del factorial del numero por puntero.
/// @return Retorna un 1 en caso del que numero.
/// sea muy grande para realizar el factorial.
int CalcularFactorial(float,float*);

/// @fn int MenuOpciones(float, float, int, int)
/// @brief Menu de opciones.
///
/// @param Numero A.
/// @param NUmero B.
/// @param BanderaDeIngresoDeNUmero1(cambiar los valores que se muestran en el menu).
/// @param BanderaDeIngresoDeNUmero2(cambiar los valores que se muestran en el menu).
/// @return retorna la opcion a elegir.
int MenuOpciones(float, float, int, int);
/// @fn int PedirFlotante(char, char, float)
/// @brief
///
/// @param mensaje
/// @param error
/// @param numeroFlotante
/// @return
float PedirFlotante(char mensaje[]);

#endif /* CALCULADORA_H_ */
