package com.codeismo.ejemplos;

import java.util.HashSet;
import java.util.Set;

public class Ejemplo7_Sets {
	
	public static void main(String[] args) {		
		//Los Sets son como las listas, excepto que las listas aceptan 
		//valore repetidos y los sets NO REPITEN VALORES:
		
		//hay varios tipos de Sets, en la practica casi siempres se usa HashSet
		Set<Integer> numeros = new HashSet<Integer>();
		
		numeros.add(1); 
		numeros.add(1); //intencionalmente agrego el mismo numero 2 veces, pero el set
		                //como ya lo tiene no lo va a repetir
		numeros.add(2);
		numeros.add(6);
		
		//imprime 1,2,6  (no repite el 1)
		System.out.println("numeros:" + numeros);
		
		//= TODO LO DEMAS ES IGUAL QUE EN LIST HASTA PARA ORDENAR
		
		//NOTA CURIOSA 1: El Set verifica que un item no este repetido usando el metodo
		//                equals y hashcode DEFINIDOS
		//                estos estan definidos en Object que todos los objetos de java heredan
		
	}

}
