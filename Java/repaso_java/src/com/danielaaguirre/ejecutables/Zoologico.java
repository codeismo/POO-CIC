package com.danielaaguirre.ejecutables;

import com.danielaaguirre.animales.Animal;
import com.danielaaguirre.animales.Cazable;
import com.danielaaguirre.animales.Jirafa;

//las clases las puedes comprimir en un
//jar = clases simples
//war = aplicaciones web
//ear => aplicaciones empreseariales (war, ejb)

public class Zoologico {

	// las clases ejecutables tienen que tener:
	// una clase ejecutable son las que puedes invocar
	// con java Zoologico
	public static void main(String argumentos[]) {
		// shorcut: sysout
		System.out.println("arrancando zologico");

		// el objeto es una instancia de la clase
		// implementar en java se refiere a interfa<(
		Animal animal = new Jirafa();// como una jirafa ES un Animal
		// herencia con polimorfismo
		// LA INVOCACION DEL METODO OCURRE EN TIEMPO DE EJECUCION
		animal.comer();

		// animal.nivelHambre = 0;//protected
		// FUNDAMENTAL EN POO, ES EL ENCAPSULAMIENTO
		animal.setVive(true); // public
		animal.setNivelHambre(10);
		animal.setEdad(2);

		// queremos invocar un metodo de la jirafa
		// LA VERIFICACION DEL METODO OCURRE EN TIEMPO DE COMPILACION
		// le damos la vuelta con casting ES VALIDO
		// UNICAMENTE SI SABES QUE LA VARIABLE QUE VAS A CASTEAR
		// A UN TIPO DE DATO DEL HIJO
		((Jirafa) animal).presumirManchitas();

		Cazable jirafa2 = new Jirafa();		
		jirafa2.incrementarHeridas();

		// Jirafa jirafa = new Jirafa();
		// jirafa.comer();
		
		//TODO LO ANTERIRO ES MUY EN COLLECTIONS DE JAVA
		//para que sirve static???

	}

}
