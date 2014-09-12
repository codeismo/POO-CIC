/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Util;

import com.codeismo.Vehiculos.Vehiculo;

/**
 *
 * @author Aula E3
 */
public class Mecanico {
    public static void reparaVehiculo( Vehiculo v ){
        v.setDescompuesto(false);
    }
    
    /** false si funciona y 
     * true si esta descompuesto **/
    public static boolean examinarVehiculo( Vehiculo v ){
        return v.isDescompuesto();
    }
}
