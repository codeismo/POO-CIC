/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.animales;

import java.util.Date;

/**
 *
 * @author Aula E3
 */
/** Esta clase hereda de la clase Animal **/
public class Perro extends Animal{
    /* Métodos y Atributos */
    private String raza;

    public Perro() {
        super("Max", new Date(), false);
        this.raza = "alaska";
    }

    public Perro(String raza) {
        this.raza = raza;
    }

    public String getRaza() {
        return raza;
    }

    public void setRaza(String raza) {
        this.raza = raza;
    }    
    
    public void ladrar(){
        System.out.println("Guau guau");
    }
    
    //overload sobre carga de metodos
    public void ladrar(String ladrido){
        System.out.println(ladrido + " "+this.getNombre());
    }
    
    //sobreescribe el metodo hablar
    @Override
    public void hablar(){
        System.err.println("El perro ladra");
    }
}
