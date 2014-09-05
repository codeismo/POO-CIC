/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo;

import java.util.Date;

/**
 *
 * @author Aula E3
 */
public class Animal {
    /*Definir los atributos de la clase*/
    /*Definir los metdos de la clase*/
    private String nombre;
    private Date fechaNacimiento;
    private boolean enfermo;//true o false
    /*Constructor*/
    public Animal(){
        this.nombre = "Fido";
        this.enfermo = false;
        this.fechaNacimiento = new Date();
    }
    /*Declaracion de Métodos*/
    public void sanar(){
        this.enfermo = false;
    }
    public void enfermar(){
        this.enfermo = true;
    }
    public void imprimirDatos(){
        System.out.println("Nombre: " + this.nombre);
        System.out.println("Fecha de nacimiento" + this.fechaNacimiento.toString() );
    }
}
