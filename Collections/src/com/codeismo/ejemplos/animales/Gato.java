package com.codeismo.ejemplos.animales;

public class Gato {
	
	// un gato tienen edad y nivel de ferocidad

	protected Integer edad;

	protected Integer nivelFerocidad;

	protected String nombre;
	
	public Gato() {
		//constructor default
	}
	
	//constructror para facilitarnos la vida al crear gatos :)
	public Gato(String nombre,int edad, int nivelFerocidad) {
		this.nombre = nombre;
		this.edad = edad;
		this.nivelFerocidad = nivelFerocidad;
	}	
	
	//=============== SOBREESCRIBIMOS EL TOSTRING===============
	
	@Override
	public String toString() {
	
		return this.nombre;
	}
	

	public Integer getEdad() {
		return edad;
	}

	public void setEdad(Integer edad) {
		this.edad = edad;
	}

	public Integer getNivelFerocidad() {
		return nivelFerocidad;
	}

	public void setNivelFerocidad(Integer nivelFerocidad) {
		this.nivelFerocidad = nivelFerocidad;
	}
	
	public String getNombre() {
		return nombre;
	}
	
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

}
