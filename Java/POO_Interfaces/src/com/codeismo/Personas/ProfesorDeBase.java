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
public class ProfesorDeBase extends Profesor implements Beneficios{
    /*** Atributos ***/
    protected int antiguedad;

    /*** Constructores ***/
    public ProfesorDeBase() {
        this.antiguedad = 0;
    }

    public ProfesorDeBase(int antiguedad) {
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
    
    }
    
    @Override
    public void informacionBasica() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlCineClub() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlComedor() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void tomarClasesMustra() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
