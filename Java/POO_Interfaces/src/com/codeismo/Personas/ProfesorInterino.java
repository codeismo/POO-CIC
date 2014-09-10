/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Personas;

import java.util.Date;
import com.codeismo.util.Calculos;
/**
 *
 * @author Aula E3
 */
public class ProfesorInterino extends Profesor implements Cuotas{
    protected int duracioncontrato;
    
    /*** Constructores ***/
    public ProfesorInterino() {
        super();
        this.duracioncontrato = Calculos.mesesContrato;
    }

    public ProfesorInterino(int duracioncontrato, int numeroEmpleado, float sueldo, Date fechaDeContratacion, String nombre, int edad, String direccion) {
        super(numeroEmpleado, sueldo, fechaDeContratacion, nombre, edad, direccion);
        this.duracioncontrato = duracioncontrato;
    }

    /*** Getters y Setters
     * @return  ***/
    public int getDuracioncontrato() {
        return duracioncontrato;
    }

    public void setDuracioncontrato(int duracioncontrato) {
        this.duracioncontrato = duracioncontrato;
    }
    /*** Metodos de la Clase ***/
    public void extenderContrato(int meses){
        Calculos misCalculos = new Calculos();
        //llame a un metodo desde una instancia
        int nuevaDuracion = misCalculos.incrementarMeses(this.duracioncontrato, meses);
        this.duracioncontrato = nuevaDuracion;
        //llame aun metodo estatico
        this.duracioncontrato = Calculos.aumentaMeses(this.duracioncontrato);
        System.out.println("Profesor interino" + this.nombre + " extiende contrato" );
    }
    
    @Override
    public void informacionBasica() {
        System.out.println("INFORMACIÓN PROFESOR DE INTERINO");
        System.out.println("Nombre: " + this.nombre);
        System.out.println("Edad " + this.edad);
        System.out.println("Direccion " + this.direccion);
        System.out.println("Duración de contrato " + this.duracioncontrato);
        //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void pagarSeguroMedico() {
        System.out.println("Profesor interino" + this.nombre + " paga servicio medico" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void aplicarDescuento() {
        System.out.println("Profesor interino" + this.nombre + " aplica descuentos" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void aplicarRecargos() {
        System.out.println("Profesor interino" + this.nombre + " aplica recargos" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
