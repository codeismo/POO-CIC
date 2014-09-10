package com.codeismo.ejemplos;

import java.util.Scanner;

public class Ejemplo2_PedirDatos {

	// ============ EJEMPLO DE COMO PEDIR DATOS EN JAVA AL USUARIO (consola) =================

	public static void main(String[] args) {
		// hay muchas formas de pedir datos del usuario en Java
		// esta es una de las mas simples y elegantes

		// System.in = Consola de entrada del usuario
		// Scanner es una clase que recibe una fuente de datos (puede ser un
		// archivo,
		// un bloque de bits o mas comunmente la consola de entrada del usuario)
		Scanner miEscaner = new Scanner(System.in);

		// =========== ejemplo de como pedir una cadena comun y corriente====================

		System.out.println("introduzca una cadena(se tomara todo lo que ponga hasta que ponga enter):");
		// pedimos una cadena al usuario
		String cadenaIntroducida = miEscaner.nextLine();
		System.out.println("Introdujiste la cadena:" + cadenaIntroducida);
		
		//dejamos un poco de espacio solo para que se vea bonito el programa :)
		System.out.println("\n\n");
				
		// =================== ejemplo de como pedir ENTEROS ====================
		// NOTA: podriamos pedir una cadena y luego convertirla a entero con Integer.valueOf("10"); 
		//Con Scanner todo se simplifica:
		
		System.out.println("introduzca un numero ENTERO(si pone algo que no sea numero ocurrira un error):");
		//pedimos el numero:
		Integer entero = miEscaner.nextInt();	
		System.out.println("introdujiste el ENTERO:" + entero);
		
		//dejamos un poco de espacio solo para que se vea bonito el programa :)
		System.out.println("\n\n");
		
		// =================== ejemplo de como pedir FLOTANTES ====================
		// NOTA: podriamos pedir una cadena y luego convertirla a flotante con Float.valueOf("10.5")
		//Con Scanner todo se simplifica:
		
		System.out.println("introduzca un numero FLOTANTE(si pone algo que no sea numero ocurrira un error):");
		//pedimos el numero:
		Float flotante = miEscaner.nextFloat();	
		System.out.println("introdujiste el FLOTANTE:" + flotante);
		
		//dejamos un poco de espacio solo para que se vea bonito el programa :)
		System.out.println("\n\n");
		
		// ============= NOTA IMPORTANTE ======================
		//podemos pedir booleanos con (EL USUARIO DEBE ESCRIBIR TRUE O FALSE):
		//Boolean valorTrueOFalse = miEscaner.nextBoolean();

	}
}
