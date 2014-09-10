package com.codeismo.ejemplos.comparadores;

import java.util.Comparator;

import com.codeismo.ejemplos.animales.Gato;

//===== LOS COMPARADORES SON CLASES QUE IMPLEMENTAN LA INTERFAZ Comparator
// === los comparadores sirven para ordenar y se les indica QUE VAN A ORDENAR
//    con el generic <Gato> si fuera otra cosa seria <OtroObjeto>
public class ComparadorGatosPorEdad implements Comparator<Gato>{
	
	
	//==== IMPORTANTE: La interfaz Comparator solo especifica el metodo compare
	//==== recibe 2 argumentos del tipo indicado por el GENERIC de arriba, en este caso
	//====  <Gato>
	
	//EL METODO compare DEBE REGRESAR ENTEROS
	//  SI entidad1 < entidad2  debe regresar un numero MENOR que 0
	//  Si entidad1 == entidad2 debe regresar 0
	//  Si entidad1 > entidad2 debe regresar un numero MAYOR que 0

	@Override
	public int compare(Gato gato1, Gato gato2) {
		//este comparador ordena por los gatos por edad de menor a mayor
		
		int resultadoComparar =  gato1.getEdad() - gato2.getEdad();
		
		return resultadoComparar;
	}
	

}
