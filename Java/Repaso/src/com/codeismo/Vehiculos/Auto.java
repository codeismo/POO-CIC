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
public class Auto extends Terrestre implements Transporta{
    /** Constructores **/
    public Auto(){
        super();
    }

    public Auto(int kilometraje, int llantas, int modelo, String marca, boolean descompuesto) {
        super(kilometraje, llantas, modelo, marca, descompuesto);
    }

    public void carreras(){
        System.out.println("Auto hechando carreras");
    }

    @Override
    public void moverser() {
        if( this.isDescompuesto() == false ){
            System.out.println("Auto en movimiento");
        }else{
            System.out.println("Auto descompuesto");
        }
    }

    @Override
    public void transportarPasajeros() {
        System.out.println("Auto transportando pasajeros");
    }

    @Override
    public void transportarMercancias() {
        System.out.println("Auto transportando mercancia");
    }
}
