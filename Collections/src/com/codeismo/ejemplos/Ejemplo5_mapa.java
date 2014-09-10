package com.codeismo.ejemplos;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

import com.codeismo.ejemplos.animales.Gato;

public class Ejemplo5_mapa {

	public static void main(String[] args) {

		// los mapas pueden ser HashMap, TreeMap, LinkedHasMap y Hashtable
		// en la practica casi siempre se usa HashMap

		// --- solo por si preguntan---:
		// HashMap = muy rapido sin orden
		// Hashtable = sin orden, es thread safe, es decir no puede ser alterado
		// por dos hilos al mismo
		// tiempo, esto es un tema muy complejo asi que solo lo dejamo asi

		// TreeMap = ordena los items usando la llave (incluso puede usar un
		// comparator)
		// LinkedHashMap = se ordenan el orden que se introducen (MUY LENTO no
		// recomendable)

		Map mapa = new HashMap();
		mapa.put("item1", 10);
		mapa.put("item2", "mi cadena");
		mapa.put("item3", new Gato("conga", 1, 100));
		mapa.put(100,"miValor!");

		// imprimimos el mapa:
		System.out.println("mapa de objetos:" + mapa);

		System.out.println("\n");
		// iteramos el mapa otra vez pero usando el for:
		for (Object llave : mapa.keySet()) {			
			System.out.println("llave:" + llave + ", valor:" + mapa.get(llave));
		}
		
		
		System.out.println("\n");
		//Se considera una mala practica usar mapas tan genericos por eso usamos generics		
		//Map<String, Integer> mapaNumeros = new HashMap<String,Integer>();		
		//=== SI QUISIERAMOS QUE ESTEN ORDENADOS segun como fueron insertados:
		Map<String, Integer> mapaNumeros = new LinkedHashMap<String,Integer>();
		
		mapaNumeros.put("numero1",10);
		mapaNumeros.put("numero2",3);
		mapaNumeros.put("numero3",104);
		for(String llave: mapaNumeros.keySet()){
			System.out.println("llave:" + llave + ", valor(NUMERO):" + mapaNumeros.get(llave));
		}
		
		//======IMPORTANTE si se quiere ordenar mapas se usa TreeMap (vea ejemplo 6)
		

	}

}
