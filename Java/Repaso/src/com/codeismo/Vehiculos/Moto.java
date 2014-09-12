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
public class Moto extends Terrestre{
    /** Constructores **/
    
    
    public Moto(){
        super();
    }

    public Moto(int kilometraje, int llantas, int modelo, String marca, boolean descompuesto) {
        super(kilometraje, llantas, modelo, marca, descompuesto);
    }

    
    
    public void trucos(){
        System.out.println("Moto haciendo trucos");
    }

    @Override
    public void moverser() {
        if( this.isDescompuesto() == false ){
            System.out.println("Moto en movimiento");
        }else{
            System.out.println("Moto descompuesta");
        }
    }
}
