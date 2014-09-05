/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.animales;

/**
 *
 * @author Aula E3
 */
public class Ave {
    private String especie;

    public Ave() {
        this.especie = "Canario";
    }

    public Ave(String especie) {
        this.especie = especie;
    }

    public String getEspecie() {
        return especie;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }
    public void cantar(){
        System.out.println("Pio pio");
     }
    
}
