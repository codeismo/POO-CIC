package com.danielaaguirre.animales;

//LAS CLASES ABSTRACTAS NO SE PUEDEN INSTANCIAR!!
//NO SE PUEDE HACER  SerVivo ente = new SerVivo();
public abstract class SerVivo {
	
	//todo ser vivo debe comer
	//si pones un metodo abstract 
	//tiene que implementarlo en el arbol de herencia
	//la primera que clase QUE NO SEA ABSTRACTA
	
	public abstract void comer();
	
	//public abstract void dormir();	
	public void moverse(){
		
		System.out.println("ser vivo se esta moviendos");
		calcularColision();
	}
	
	//metodo de utileria solo lo usan los seres vivos
	//pero no es necesario accederlo desde fuera
	protected void calcularColision(){
		System.out.println("calcular colisino");
	}

}
