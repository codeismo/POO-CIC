package com.codeismo.ejemplos;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import com.codeismo.ejemplos.animales.Gato;
import com.codeismo.ejemplos.comparadores.ComparadorGatosPorEdad;
import com.codeismo.ejemplos.comparadores.ComparadorGatosPorFerocidad;

public class Ejemplo4_OrdenarListaCompleja {
	
	public static void main(String[] args) {		
		//esta clase ordena gatos
		//========== si queremos ordenar numeros es muy simple (como ya se vio en los ejemplos
		//========== anteriores) PERO si queremos ordenar objetos (en este caso Gatos)
		//========== tenemos que usar un COMPARADOR
		
		List<Gato> gatos = new ArrayList<Gato>();
		
		//El constructor es de la forma: Gato(edad, nivelFerocidad)
		Gato gato1 = new Gato("conga",2,1000); //conga 1 year, 1000 de ferocidad		
		Gato gato2 = new Gato("otto",1,100);   //otto 2 years, 100 de ferocidad
		Gato gato3 = new Gato("ronaldo",5,0); //ronaldo 5 years, 0 de ferocidad
		
		//agregamos los gatos al list:
		gatos.add(gato1);
		gatos.add(gato2);
		gatos.add(gato3);
		
		//----------- AHORA LA MAGIA usando un Comparator (una vulgar clase que implmenta la interfaz
		//------------ comparator) ordenamos
		
		//el metodo sort puede recibir como un segundo parametro opcional un Comparator!!
		//-- importante, note que sort usa el metodo compare() de ComparadorGatosPorEdad para ordenar
		//-- el ALGORITMO que usa sort() para ordenar es el merge sort :)
		Collections.sort(gatos, new ComparadorGatosPorEdad());
		
		//imprimos los gatos ordenamos de menor a mayor por edad
		//deberia imprimir otto, conga, ronaldo
		System.out.println("gatos ordenamos por edad:" + gatos);
		
		//============================== MAS MAGIA AUN!!!================================
		//si no queremos ordenar por edad sino por nivel de ferocidad
		//simplemente usamos OTRO comparador :)
		
		//ordenamos por ferocidad de menor a mayor
		Collections.sort(gatos, new ComparadorGatosPorFerocidad());
		
		//imprimos los gatos ordenamos de menor a mayor por ferocidad
		//deberia imprimir ronaldo, otto, conga
		System.out.println("gatos ordenamos por edad:" + gatos);
		
		
		//=== NOTA CURIOSA 1: Si se quiere ordenar Sets tambien se usa Collections.sort
		
		//=== NOTA CURIOSA 2:
		// los arreglos de java tambien se pueden ordenar con:
		//   Arrays.sort(ARREGLO,COMPARADOR);
				
		
	}

}
