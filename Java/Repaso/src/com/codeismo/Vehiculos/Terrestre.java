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
public abstract class Terrestre extends Vehiculo{
    /** Atributos **/
    protected int kilometraje;
    protected int llantas;
    
    /** Constructores **/
    public Terrestre() {
        super();
        this.kilometraje = 100000;
        this.llantas = 2;
    }

    public Terrestre(int kilometraje, int llantas, int modelo, String marca, boolean descompuesto) {
        super(modelo, marca, descompuesto);
        this.kilometraje = kilometraje;
        this.llantas = llantas;
    }

    /** Getters y Setters **/
    public int getKilometraje() {
        return kilometraje;
    }

    public int getLlantas() {
        return llantas;
    }

    public void setKilometraje(int kilometraje) {
        this.kilometraje = kilometraje;
    }

    public void setLlantas(int llantas) {
        this.llantas = llantas;
    }

    
}
