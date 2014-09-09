/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package colecciones;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/**
 *
 * @author Alienware
 */
public class Colecciones {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //int numeros[]= new int[5];
        int numeros[] = {1,2,3,4,5};
        numeros[0] = 1;
        String palabras[] = {"","",""};
        System.out.println("Numeros " +  numeros);
        System.out.println("tamaño del arreglo " + numeros.length);
        
        for( int numero : numeros ){
            System.out.println("numero: " + numero);
        }

        //Lista - cuando no se sabe el tamaño del arreglo
        ArrayList objetos = new ArrayList();
        objetos.add("cadena");
        objetos.add(10);//lo envuelve en un wrapper Integer
        objetos.add( new Gato() );
        System.out.println("Lista de objetos tiene: " + objetos);
        
        
        
        for(Object elemento : objetos){
            System.out.println("objeto: " + elemento);
        }
        
        //gENERICS
        List<Integer> lista = null;
        lista = new ArrayList<Integer>();
        lista.add(45);
        
//Solo recibe Integers
        //lista.add("Cadena");
        
        //Mapas accedo atraves de una etiqueta 
        Map mapa = new HashMap();
        mapa.put("item1", 10);
        mapa.put("item2", "gatito");
        mapa.put(100, "cadena 100");
        
        System.out.println("item 2 es " +  mapa.get("item2"));
        System.out.println("item 3 es " +  mapa.get(100));
        
        Map<String, Integer> mapaNumeros = new HashMap<String, Integer>();
        //TreeMap orden, Hashmap sin orden
        //Map<String, Integer> mapaNumeros = new TreeMap<String, Integer>();
        mapaNumeros.put("item00", 34);
        mapaNumeros.put("item02", 4);
        //MUY mal Girafaa!!! mapaNumeros.put(3, mapa);
        
        for( String llave : mapaNumeros.keySet() ){
            //HAshMap no garantia en el orden de iteracion 
            System.out.println("llave: " + llave + " valor " + mapaNumeros.get(llave));
        }
        
        
        
    }
    
}
