/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ejemploscolecctions;

import java.util.ArrayList;

/**
 *
 * @author Aula E3
 */
public class EjemplosColecctions {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Arreglos
        int numeros[] = {10, 20, 30, 40};
        for(int numero : numeros){
            System.out.println("Numero " + numero);
        }
        System.out.println("El arreglo " + numeros.toString() );
        System.out.println("El arreglo es de tamaño " + numeros.length);
        //objeto de tipo ArrayList
        ArrayList lista= new ArrayList();
        lista.add(10);
        lista.add("Cadena");
        lista.add( new Auto() );
        
        System.out.println("La lista tiene " + lista);
    
        for( Object item : lista ){
            System.out.println("Item es " + item);
        }
        /** Una buena practica es que las listas solo 
         * almacenen un cierto tipo de datos **/
        ArrayList<Integer> enteros = new ArrayList<Integer>();
        enteros.add(8);
        enteros.add(10);
    }
    
}
