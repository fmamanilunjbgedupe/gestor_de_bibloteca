#ifndef buscar_libro_H
#define buscar_libro_H
#include<string>
using namespace std;
struct libro{
    int ID;
    string titulo;
    string autor;
    string genero;
    int stock;
};
void buscarporid(libro lb[] ,int,int);
void buscarportitulo(libro lb[] ,int);
void buscarporautor(libro lb[] ,int);
void buscarporgenero(libro lb[] ,int);
#endif