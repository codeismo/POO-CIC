/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.util;

/**
 *
 * @author Aula E3
 */
public class Calculos {
    /** Atributos estaticos son utiles para definir
    constantes***/
    public static int mesesContrato = 6; 
    
    public int incrementarMeses(int mesesIniciales, int mesesExtras){
        return mesesIniciales + mesesExtras;
    }
    
    public static int aumentaMeses(int mesesIniciales){
        return mesesIniciales + Calculos.mesesContrato;
    }
}
