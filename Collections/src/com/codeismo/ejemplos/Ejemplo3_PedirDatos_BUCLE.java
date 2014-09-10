package com.codeismo.ejemplos;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Ejemplo3_PedirDatos_BUCLE {

	// ============ EJEMPLO DE COMO PEDIR DATOS CON BUCLE =================

	public static void main(String[] args) {
		List<Float> numeros = new ArrayList<Float>();
		Scanner miEscaner = new Scanner(System.in);
		boolean salir = false;
		
		System.out.println("============este programa ordena numeros===============");
		System.out.println("introduzca cada numero seguido de un enter");
		System.out.println("CUANDO TERMINE DE INTRODUCIR LOS NUMEROS PRESIONE \"q\" para hacer el ordenamiento");
		System.out.println("\n\n");

		// mientras el usuario introduzca numeros!!
		// el metodo hasNextFloat() se fija si el token introducido por el
		// usuario es
		// un flotante, SI EL USUARIO INTRODUCE algo diferente regresa false y
		// TERMINA
		// el bucle
		while (miEscaner.hasNextFloat()) {			 

			// como ya sabemos que el usario introdujo un numero flotante
			// es seguro invocar al metodo nexFloat ya que no producira error
			Float numero = miEscaner.nextFloat();

			// agregamos el numero a la lista
			numeros.add(numero);
		}

		// una vez que el usuario introdujo todos los numeros ordenamos
		Collections.sort(numeros);

		// resultado final:
		System.out.println("los numeros ordenados(de menor a mayor) son:" + numeros);

	}
}
