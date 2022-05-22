/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 18/02/222
	Programa que calcula e imprime la suma de la serie 1/1 + 1/2 + 1/3 +...+1/N
	
	Programa en lenguaje c que muestra usa suma de las serie 1/1 + 1/2 + 1/3 +...+1/N, N es las veces que el usario hacer la
	serie, con uso de scanf, uso del ciclo for, y operaciones aritmeticas. 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso de scanf
		* Uso del ciclo for
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, int, uso del scanf, uso del ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo int (numero maximo de la serie)
	El programa calcula e imprime la suma de la serie 1/1 + 1/2 + 1/3 +...+1/N
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	int N;//Variables enteras
	float suma=0;//Variables con decimal
	//Entrada 
	printf("Cuantas quiere calcular: ");//imprime mensaje
	scanf("%d",&N);//lee el numero insertado por el teclado
	//Proceso 
	for(int i=1;i<=N;i++){//ciclo for, para que realice la suma segun hasta donde diga el usuario 
		suma=suma+(1.0/i);//realiza la suma dela serie 1/1 + 1/2 + 1/3 +...+1/N
		
	}
	//Salida
	printf("La suma de la serie es: %.3f",suma);////imprime la salida de la suma
	
	return 0;
}
	
