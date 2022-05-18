/* Autor: Franciscomilan
	Escuela: Universidad uvm
	Profesor: Armando Cruz
	Materia: Programacion Estructurada
	Ciclo: 01/2022
	Realizado: 03/02/2022
	Descripcion:Tercer programa en C que recibe grados °c y los convierte °f para la 	materia programacion estructurada.
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Declaracion de variables
	float F, C;

	//Entrada de datos
	printf("Introduce la temperatura en centigrados: ");
	scanf("%f",&C);	

	//Proceso
	F=(9/5.0*C)+32;

	//Salida
	printf("La temperatura en Fahrenheit es %f",F);

	//Retorno
	return 0;
}