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
public class ProfesorDeBase extends Profesor implements Beneficios{
    /*** Atributos ***/
    protected int antiguedad;

    /*** Constructores ***/
    public ProfesorDeBase() {
        super();
        this.antiguedad = 0;
    }

    public ProfesorDeBase(int antiguedad, int numeroEmpleado, float sueldo, Date fechaDeContratacion, String nombre, int edad, String direccion) {
        super(numeroEmpleado, sueldo, fechaDeContratacion, nombre, edad, direccion);
        this.antiguedad = antiguedad;
    }

    /*** Getters y Setters ***/
    public int getAntiguedad() {
        return antiguedad;
    }

    public void setAntiguedad(int antiguedad) {
        this.antiguedad = antiguedad;
    }

    /*** Metodos de la Clase ***/
    
    public void tomarVacaciones(){
        System.out.println("Profesor de base " + this.nombre + " toma vacaciones" );
    }
    
    @Override
    public void informacionBasica() {
        System.out.println("INFORMACIÓN PROFESOR DE BASE");
        System.out.println("Nombre: " + this.nombre);
        System.out.println("Edad" + this.edad);
        System.out.println("Direccion" + this.direccion);
        System.out.println("Antiguedad" + this.antiguedad);
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlCineClub() {
        System.out.println("Profesor de base " + this.nombre + " va al cineclub" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlComedor() {
        System.out.println("Profesor de base " + this.nombre + " va a l comedor" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void tomarClasesMustra() {
        System.out.println("Profesor de base " + this.nombre + " toma clase muestra" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}