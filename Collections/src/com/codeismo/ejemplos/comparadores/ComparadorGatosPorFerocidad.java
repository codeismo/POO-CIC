package com.codeismo.ejemplos.comparadores;

import java.util.Comparator;

import com.codeismo.ejemplos.animales.Gato;

//===== LOS COMPARADORES SON CLASES QUE IMPLEMENTAN LA INTERFAZ Comparator
public class ComparadorGatosPorFerocidad implements Comparator<Gato>{
	
	
	
	// RECORDATORIO:
	//  EL METODO compare DEBE REGRESAR ENTEROS
	//
	//  SI entidad1 < entidad2  debe regresar un numero MENOR que 0
	//  Si entidad1 == entidad2 debe regresar 0
	//  Si entidad1 > entidad2 debe regresar un numero MAYOR que 0

	@Override
	public int compare(Gato gato1, Gato gato2) {
		
		//este comparador ordena por los gatos por nivel de ferocidad de menor a mayor		
		int resultadoComparar =  gato1.getNivelFerocidad() - gato2.getNivelFerocidad();
		
		return resultadoComparar;
	}
	

}
