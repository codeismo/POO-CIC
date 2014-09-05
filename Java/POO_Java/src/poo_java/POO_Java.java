/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package poo_java;

import com.codeismo.animales.Animal;
import com.codeismo.animales.Ave;
import com.codeismo.animales.Perro;

/**
 *
 * @author Aula E3
 */
public class POO_Java {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Hola Mundo");
        /*No se pueden crear instancias de clases abstractas
        Animal animalito = new Animal();
        animalito.imprimirDatos();*/
        
        Perro perrito = new Perro();
        Ave pollito = new Ave();
        perrito.ladrar("Guafff ");
        pollito.cantar();
    }
    
}
