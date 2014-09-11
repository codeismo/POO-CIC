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
public class Vehiculo {
    /** Atrbutos **/
    protected int modelo;
    protected String marca;
    protected boolean descompuesto;
    
    /** Getters y Setters **/
    public int getModelo() {
        return modelo;
    }

    public String getMarca() {
        return marca;
    }

    public boolean isDescompuesto() {
        return descompuesto;
    }

    public void setModelo(int modelo) {
        this.modelo = modelo;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setDescompuesto(boolean descompuesto) {
        this.descompuesto = descompuesto;
    }

    /** Metodos Abstractos **/
    
    
    /** Metodos de la Clase **/
    public void averiarse(){
        this.setDescompuesto(true);
    }
    
    public void reparase(){
        this.setDescompuesto(false);
    }
    
    public void informacion(){
        System.out.println("Modelo: " + this.getModelo() );
        System.out.println("Marca: " + this.getMarca() );
        System.out.println("Descompuesto: " + this.isDescompuesto());
    }
    
}
