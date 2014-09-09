/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Personas;

import java.util.Date;

/**
 *
 * @author Aula E3
 */
public abstract class Profesor extends Persona{
    /** Atributos **/
    protected int numeroEmpleado;
    protected float sueldo;
    protected Date fechaDeContratacion;

    /** Constructores **/
    public Profesor() {
        super();
        this.numeroEmpleado = 0;
        this.sueldo = 0;
        this.fechaDeContratacion = new Date();
    }

    public Profesor(int numeroEmpleado, float sueldo, Date fechaDeContratacion, String nombre, int edad, String direccion) {
        super(nombre, edad, direccion);
        this.numeroEmpleado = numeroEmpleado;
        this.sueldo = sueldo;
        this.fechaDeContratacion = fechaDeContratacion;
    }
    
    /*** Getters y Setters ***/
    public int getNumeroEmpleado() {
        return numeroEmpleado;
    }

    public float getSueldo() {
        return sueldo;
    }

    public Date getFechaDeContratacion() {
        return fechaDeContratacion;
    }

    public void setNumeroEmpleado(int numeroEmpleado) {
        this.numeroEmpleado = numeroEmpleado;
    }

    public void setSueldo(float sueldo) {
        this.sueldo = sueldo;
    }

    public void setFechaDeContratacion(Date fechaDeContratacion) {
        this.fechaDeContratacion = fechaDeContratacion;
    }
    
    /*** metodos de la clase ***/
    public void darClase(){
        System.out.println("Profesor" + this.nombre + " dando clase" );
    }
}
