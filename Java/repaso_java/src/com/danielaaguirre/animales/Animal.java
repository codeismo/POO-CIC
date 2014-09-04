package com.danielaaguirre.animales;

//com.danielaguirre
//proyecto
//INVESTIGA COMO SE COMPILA UN PROGRAMA
//JAVA DESDE LA TERMINAL javac ==> Animal.class (.out)
//                       java Animal (cambia si esta un carpeta)
//src
//com
//danielaguirre
//modificadores de acceso: public, private, protected
//      formas de acceso : 4 (es unicamente en el paquete)
//public para la clase principal
//ESTA ES LA UNICA VISIBLE
public class Animal extends SerVivo {
	// POO => ENCAPSULAMIENTO

	// SI NO DECLARAS UN CONSTRUCTROR AUTOMATICAMENTE
	// HAY UN CONSTRUCTOR SIN ARGUMENTOS
	public Animal() {
		// sin argumentos :S
		
		System.out.println("invocando constructor animal");
	}

	// el constructor NO TIENE TIPO DE RETORNO
	// == EL CREADOR DE HIBERNATE DICE QUE ES UNA
	// MALA PRACTICA CREAR UNA CLASE CON CONSTRUCTRES
	public Animal(int edad, int nivelHambre) {
		
		this.edad = edad;
		this.nivelHambre = nivelHambre;
	}

	// los metodos
	// modificador de acceso
	// los metodos en java de los hijos su modificador puede ser
	// de menor restriccion
	//UN HIJO NO PUEDE HACER MAS RESTRICTIVO EL MODIFICADOR DE ACCESO
	public void comer() {
		// si un metodo regresa le pones void
		
		System.out.println("animal comiendo (generico)");
	}

	// private hace que edad solo sea visible para esta clase
	private int edad;

	protected boolean vive = true;

	// GETTERS Y SETTERS

	// es solo vislbe para los hijos de esta clase
	// o para aquellas clases que esten en el mismo paquete
	// NOTA: SI NO SE PONE UN MODIFICADOR DE ACCESO
	// solo son visibles para el mismo paquete
	protected int nivelHambre = 0;

	public int getEdad() {
		return edad;
	}

	public void setEdad(int edad) {
		this.edad = edad;
	}

	public boolean isVive() {
		return vive;
	}

	public void setVive(boolean vive) {
		this.vive = vive;
	}

	public int getNivelHambre() {
		return nivelHambre;
	}

	public void setNivelHambre(int nivelHambre) {
		this.nivelHambre = nivelHambre;
	}

}
