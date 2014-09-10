package com.codeismo.ejemplos;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Ejemplo1_OrdenarLista {

	public static void main(String[] args) {

		// una lista de numeros a ordenar
		// nota:Si quisieramos flotantes cambiariamos <Integer> por <Float>
		List<Integer> numeros = new ArrayList();

		// datos de prueba
		numeros.add(7);
		numeros.add(1);
		numeros.add(9);
		numeros.add(2);
		// ejemplo uso size (este metodo nos dice el numero de items en la
		// lista):
		System.out.println("el arreglo tienen:" + numeros.size());

		// ----- USAMOS LA CLASE DE UTILERIA Collections
		// ordenamos el arreglo (ORDENA DE MENOR A MAYOR POR DEFAULT)
                // usando el orden natural del tipo de dato de la lista (<>)
		Collections.sort(numeros);
		System.out.println("numeros de menor a mayor:" + numeros);

		// invertimos el orden
		Collections.reverse(numeros);
		System.out.println("numeros de MAYOR a menor:" + numeros);

	}

}
