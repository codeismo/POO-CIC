package com.codeismo.ejemplos;

import java.util.Map;
import java.util.TreeMap;

import com.codeismo.ejemplos.animales.Gato;
import com.codeismo.ejemplos.comparadores.ComparadorGatosPorEdad;

public class Ejemplo6_OrdenarMapaComplejo {
	
	public static void main(String[] args) {		
		
		//Collections.sort NO FUNCIONA PARA MAPAS, 
		//cuando queremos ordenar usamos TreeMap (NO LLEVA GENERICS!!)
		//ORDENA USANDO EL COMPARATOR EN LA LLAVE!!
		Map<Gato,Integer> mapaGatos = new TreeMap<Gato,Integer>(new ComparadorGatosPorEdad());
		
		//El constructor es de la forma: Gato(edad, nivelFerocidad)
		Gato gato1 = new Gato("conga",2,1000); //conga 1 year, 1000 de ferocidad		
		Gato gato2 = new Gato("otto",1,100);   //otto 2 years, 100 de ferocidad
		Gato gato3 = new Gato("ronaldo",5,0); //ronaldo 5 years, 0 de ferocidad
		
		//agregamos los gatos al list (el valor es un numero):
		mapaGatos.put(gato1,1);
		mapaGatos.put(gato2,2);
		mapaGatos.put(gato3,3);
		
		System.out.println("mapa ordenado:" + mapaGatos);
				
		
	}

}
