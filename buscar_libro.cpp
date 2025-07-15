#include"buscar_libro.h"
#include<string>
#include<iostream>
using namespace std;
void buscarporid(libro lb[],int idb,int nl){
bool encontrado = false;
for(int i=0;i<=nl;i++){
    if(lb[i].ID==idb){
        cout<<"::: libro encontrado :::"<<endl;
        cout<<"ID :"<<lb[i].ID<<endl;
        cout<<"TITULO: "<<lb[i].titulo<<endl;
        cout<<"GENERO: 0"<<lb[i].genero<<endl;
        encontrado = true;
        break;
    }
    if(!encontrado){
        cout<<"no se encontro el libro"<<endl;
    }
    
}
}
void buscarportitulo(libro &lb,int x){}
void buscarporautor(libro &lb,int x){}
void buscarporgenero(libro &lb,int x){}