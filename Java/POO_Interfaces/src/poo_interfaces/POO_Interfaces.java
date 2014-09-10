/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package poo_interfaces;

import com.codeismo.Personas.*;
import java.util.Date;

/**
 *
 * @author Aula E3
 */
public class POO_Interfaces {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       //Crear un Alumno
        Alumno alumno1 = new Alumno(201456, "1TCV", "Daniela", "Av.IPN 40", 30);
        alumno1.informacionBasica();
        ProfesorDeBase profe1 = new ProfesorDeBase(2, 666, 8000, new Date(), "Juanito", 40, "calle 7 #45");
        profe1.informacionBasica();
        /** POLIMORFISMO DE A DEVERAS **/
        Persona profe, alumno;
        profe = new ProfesorDeBase();
        alumno = new Alumno();
        profe.informacionBasica();
        alumno.informacionBasica();
        /** pruebas de clases **/
        Persona personaDePrueba;
        personaDePrueba = new Alumno();
        personaDePrueba.informacionBasica();
    }
    
    
    
    
    
    
}
