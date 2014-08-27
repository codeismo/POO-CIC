#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

class Estudiante{
private:
    string nombre;
    int edad;
    float promedio;
    float calificaciones[4];
public:
    void presentarse();
//Metodos Getters y Setters
    string getNombre();
    int setNombre(string n);
    int getEdad();
    int setEdad(int e);
    float getPromedio();
    int setPromedio(float p);
    float getCalificacion(int indice);
    int setCalificacion(int indice, float c);
};

#endif // ESTUDIANTE_H_INCLUDED
