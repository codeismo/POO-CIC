package com.danielaaguirre.animales;

//una jirafa se extiende de Aniimal
//una clase en java solo puede tener un padre
// en c++,en python y ruby si puedes tener varios padres
//  en c++ ocurre el mortal diamante de la muerte (deadly diamond of dead)
// PUEDES IMPLEMENTAR VARIAS interfaces
public class Jirafa extends Animal implements Cazable {

	// que los constructores no se heredan
	// pero los puedes invocar con super

	public Jirafa() {
		super();// si tuviera argumentos su constructor le pasas esos argumentos
	}

	// override (sobrescribir un metodo del padre) sobrescribir??
	// overloading (sobrecarga de metodos) = varios metodos con el mismo
	// nombre diferentes parametros
	public void comer() {
		// jirafa si puede acceder a nivelHambre (protected)
		System.out.println("jirafa come, nivel hambre:" + this.nivelHambre);
	}
	
	public void presumirManchitas(){
		System.out.println("jiraafa presume manchitas :)");
	}
	
	//los metodos abstractos solo pueden ser usados en clases abstractas
	//public abstract void correr(int arg1, int arg2);

	@Override//annotation sirve para metaconfiguracion
	public int incrementarHeridas() {

		System.out.println("jirafa herida!");

		return 0;
	}

	// extend = todas las propiedades que tiene Animal (public, protected)

}
