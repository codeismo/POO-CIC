/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Vehiculos;

/**
 *
 * @author Telmexhub
 */
public class Avion {
    /** Atributos de la Clase **/
    protected int turbinas;
    
    /** Getters y Setters **/
    public int getTurbinas() {
        return turbinas;
    }

    public void setTurbinas(int turbinas) {
        this.turbinas = turbinas;
    }
    
    /** Metodos de la Clase **/

    public void acrobacias(){
        System.out.println("Avión haciendo acrobacias");
    }

}
