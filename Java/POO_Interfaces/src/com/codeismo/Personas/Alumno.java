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
public class Alumno extends Persona{
    public int boleta;
    public String grupo; 
    
    /** Constructores **/
    public Alumno() {
    }

    
        public Alumno(int boleta, String grupo) {
        this.boleta = boleta;
        this.grupo = grupo;
    }

    /*** Getters y Setter***/
    public int getBoleta() {
        return boleta;
    }

    public String getGrupo() {
        return grupo;
    }

    public void setBoleta(int boleta) {
        this.boleta = boleta;
    }
    
    public void setGrupo(String grupo) {
        this.grupo = grupo;
    }

    /*** Metodos de la Clase ***/
    public void inscribir(){
    
    }
    public void darDeBaja(){
    }
    
    
    @Override
    public void informacionBasica() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
