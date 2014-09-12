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
public class Avion extends Vehiculo implements Transporta{
    /** Atributos de la Clase **/
    protected int turbinas;
    
    /** Constructores **/
    public Avion() {
        super();
        this.turbinas = 6;
    }

    public Avion(int turbinas, int modelo, String marca, boolean descompuesto) {
        super(modelo, marca, descompuesto);
        this.turbinas = turbinas;
    }   
    
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

    @Override
    public void moverser() {
        if( this.isDescompuesto() == false ){
            System.out.println("Avion volando");
        }else{
            System.out.println("Avion descompuesto");
        }
        
    }

    @Override
    public void transportarPasajeros() {
        System.out.println("Avion transportando pasajeros");
    }

    @Override
    public void transportarMercancias() {
        System.out.println("Avion transportando mercancias");
    }

}
