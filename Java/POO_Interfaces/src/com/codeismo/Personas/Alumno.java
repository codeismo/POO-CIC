/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Personas;

/**
 *
 * @author Aula E3
 */
public class Alumno extends Persona implements Beneficios, Cuotas{
    public int boleta;
    public String grupo; 
    
    /** Constructores **/
    public Alumno() {
        super();
        this.boleta = 0000;
        this.grupo = "TC1A";
    }

    
   public Alumno(int boleta, String grupo, String nombre, String direccion, int edad) {
        super(nombre, edad, direccion);
        this.boleta = boleta;
        this.grupo = grupo;
    }

    /*** Getters y Setter***/
    public int getBoleta() {
        return boleta;
    }

    public String getGrupo() {
        return grupo;
    }

    public void setBoleta(int boleta) {
        this.boleta = boleta;
    }
    
    public void setGrupo(String grupo) {
        this.grupo = grupo;
    }

    /*** Metodos de la Clase ***/
    public void inscribir(){
        System.out.println("Inscribiendo alumno" + this.nombre);
    }
    public void darDeBaja(){
        System.out.println("Dando de baja alumno" + this.nombre);
    }
    
    @Override
    public void informacionBasica() {
        System.out.println("INFORMACIÓN ALUMNO");
        System.out.println("Nombre: " + this.nombre);
        System.out.println("Edad" + this.edad);
        System.out.println("Direccion" + this.direccion);
        System.out.println("Boleta" + this.boleta);
        System.out.println("Grupo" + this.grupo);
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlCineClub() {
        System.out.println("Alumno" + this.nombre + "va al cineclub" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void irAlComedor() {
        System.out.println("Alumno" + this.nombre + "va al comedor" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void tomarClasesMustra() {
        System.out.println("Alumno" + this.nombre + "toma clase" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void pagarSeguroMedico() {
        System.out.println("Alumno" + this.nombre + " paga seguro médico" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void aplicarDescuento() {
        System.out.println("Alumno" + this.nombre + " aplica descuento" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void aplicarRecargos() {
        System.out.println("Alumno" + this.nombre + " aplica recargas" );
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
