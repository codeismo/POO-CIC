/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.codeismo.Items;

/**
 *
 * @author Aula E3
 */
public class Item {
    protected String id;
    protected boolean disponible;
    protected String titulo;

    /** CONSTRUCTORES **/
    
    public Item() {
        this.id = "0000";
        this.disponible = true;
        this.titulo = "Ninguno";
    }
    
    public Item(String id, boolean disponible, String titulo) {
        this.id = id;
        this.disponible = disponible;
        this.titulo = titulo;
    }  

    /** GETTERS Y SETTERS **/
    public String getId() {
        return id;
    }

    public boolean isDisponible() {
        return disponible;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setDisponible(boolean disponible) {
        this.disponible = disponible;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }   
}