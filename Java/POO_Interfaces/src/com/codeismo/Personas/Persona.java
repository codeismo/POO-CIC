/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Personas;

/**
 *
 * @author Aula E3
 */
public abstract class Persona {
    /*** Atributos ***/
    protected String nombre;
    protected int edad;
    protected String direccion;

    /*** Constructores ***/
    public Persona() {
        this.nombre = "Daniela";
        this.edad = 30;
        this.direccion = "Sao Paulo #73";
    }

    public Persona(String nombre, int edad, String direccion) {
        this.nombre = nombre;
        this.edad = edad;
        this.direccion = direccion;
    }

    /*** Generar Geters y Setters ***/
    public String getNombre() {
        return nombre;
    }

    public int getEdad() {
        return edad;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }
    
    /*** Metodos de la clase abstracta ***/
    public abstract void informacionBasica();
}
