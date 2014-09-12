/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.ejecutables;

import com.codeismo.Util.Mecanico;
import com.codeismo.Vehiculos.Auto;
import com.codeismo.Vehiculos.Avion;
import com.codeismo.Vehiculos.Moto;
import com.codeismo.Vehiculos.Vehiculo;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Telmexhub
 */
public class Repaso {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Vehiculo miAvion = new Avion(6, 1970, "Boeing", true );
        Vehiculo miAuto = new Auto( 10000, 4, 1960, "VW", false);    
        Vehiculo miMoto = new Moto( 2500, 2, 2010, "Honda", true);
        //Un array list para vehiculos
        List<Vehiculo> vehiculos = new ArrayList<Vehiculo>(); 
        vehiculos.add(miAvion);
        vehiculos.add(miAuto);
        vehiculos.add(miMoto);
        //Todo se mueven
        for( Vehiculo v : vehiculos ){
            v.moverser();
        }
        /** Reparando **/
        Mecanico.reparaVehiculo(miAvion);
        Mecanico.reparaVehiculo(miMoto);
        //Todo se mueven
        for( Vehiculo v : vehiculos ){
            v.moverser();
        }
    }
    
}
