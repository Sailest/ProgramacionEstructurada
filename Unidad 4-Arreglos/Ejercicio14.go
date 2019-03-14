//autor: Jorge Alberto Chi leon
//Algoritmo que lee una cadena de texto y un parrafo.
//verificar cuantas veces aparece la cadena en el parrafo.
//nota:sin espacios
//Entradas: Ambas cadenas
package main

import "fmt"
import "strings"

func main() {
	var inputCadena string
	var inputParrafo string
	inputParrafo = "lolololalalo"
	fmt.Println("Dame la cadena: ")
	fmt.Scanf("%s", &inputCadena)
	fmt.Println("Dame el parrafo: ")
	fmt.Scanf("%s", &inputParrafo)
	fmt.Println("Veces que se repite: ")
	fmt.Println(strings.Count(inputParrafo, inputCadena))
}

/*
	QA: Amílcar A. Ramírez Patrón
	
	
	Entrada: Esta es una cadena de caracteres
	(Falta una entrada, no deja leer la segunda cadena de caracteres)
	Salida: 0
	
	-El programa funciona de forma incorrecta. No lee una cadena de texto ni un párrafo, a la vez que no evalúa cuantas veces 
	cabe la cadena dentro del párrafo ni evalúa si el párrafo contiene siquiera texto. A su vez, sólo lee el tamaño de los valores
	de la variable si es que no haces ningún cambio en ella como por ejemplo ingresar los datos que debes dentro de la linea 16 
	(el scanf a la variable inputCadena). Le faltó definir su Proceso y Salida.
*/
