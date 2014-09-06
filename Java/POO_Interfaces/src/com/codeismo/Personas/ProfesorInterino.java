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
public class ProfesorInterino extends Profesor{
    protected int duracioncontrato;
    
    /*** Constructores ***/
    public ProfesorInterino() {
        this.duracioncontrato = 0;
    }

    public ProfesorInterino(int duracioncontrato) {
        this.duracioncontrato = duracioncontrato;
    }
    /*** Getters y Setters
     * @return  ***/
    public int getDuracioncontrato() {
        return duracioncontrato;
    }

    public void setDuracioncontrato(int duracioncontrato) {
        this.duracioncontrato = duracioncontrato;
    }
    /*** Metodos de la Clase ***/
    public void extenderContrato(){
    }
    
    @Override
    public void informacionBasica() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
