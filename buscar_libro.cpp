#include"buscar_libro.h"
#include<string>
#include<cctype>
#include<iostream>
#include<algorithm>
using namespace std;
void buscarporid(libro lb[],int idb,int nl){
bool encontrado = false;
for(int i=0;i<nl;i++){
    if(lb[i].ID==idb){
        cout<<"::: libro encontrado :::"<<endl;
        cout<<"ID :"<<lb[i].ID<<endl;
        cout<<"TITULO: "<<lb[i].titulo<<endl;
        cout<<"GENERO: 0"<<lb[i].genero<<endl;
        cout<<"AUTOR: "<<lb[i].autor<<endl;
        encontrado = true;
        break;
    }    
}
if(!encontrado){
    cout<<"no se encontro el libro"<<endl;
}
}
void buscarportitulo(libro lb[],int x){
    string tlb,tl;
    bool encontrado = false;
    cout<<"ingrese el titulo del libro a buscar"<<endl;cin>>tlb;
    cin.ignore();
    getline(cin,tlb);
    transform(tlb.begin(),tlb.end(),tlb.begin(), ::tolower);  //se convierte a minuscula el texto ingresado
    for(int i=0;i<x;i++){
        tl=lb[i].titulo;
        transform(tl.begin(),tl.end(),tl.begin(), ::tolower); //se convierte en minuscula los titulos para la comparacion
        if(tl.find(tlb) != string::npos){
            cout<<"libro encontrado"<<endl;
            cout<<"ID: "<<lb[i].ID<<endl;
            cout<<"TITULO: "<<lb[i].titulo<<endl;
            cout<<"AUTOR: "<<lb[i].autor<<endl;
            cout<<"GENERO: "<<lb[i].genero<<endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout<<"no se encontro libros con ese titulo"<<endl;
    }
    
}
void buscarporautor(libro lb[],int x){
    string atb,at;
    bool encontrado = false;
    cout<<"ingrese el autor del libro a buscar"<<endl;cin>>atb;
    cin.ignore();
    getline(cin,atb);
    transform(atb.begin(),atb.end(),atb.begin(), ::tolower); 
    for(int i=0;i<x;i++){
        at=lb[i].autor;
        transform(at.begin(),at.end(),at.begin(), ::tolower);  
        if(at.find(atb) != string::npos){
            cout<<"libro encontrado"<<endl;
            cout<<"ID: "<<lb[i].ID<<endl;
            cout<<"TITULO: "<<lb[i].titulo<<endl;
            cout<<"AUTOR: "<<lb[i].autor<<endl;
            cout<<"GENERO: "<<lb[i].genero<<endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout<<"no se encontro libros con ese autor"<<endl;
    }
}
void buscarporgenero(libro lb[],int x){
    string gb,g;
    bool encontrado = false;
    cout<<"ingrese el genero del libro a buscar"<<endl;cin>>gb;
    cin.ignore();
    getline(cin,gb);
    transform(gb.begin(),gb.end(),gb.begin(), ::tolower);  //se convierte a minuscula el texto ingresado
    for(int i=0;i<x;i++){
        g=lb[i].genero;
        transform(g.begin(),g.end(),g.begin(), ::tolower); //se convierte en minuscula los titulos para la comparacion
        if(g.find(gb) != string::npos){
            cout<<"libro encontrado"<<endl;
            cout<<"ID: "<<lb[i].ID<<endl;
            cout<<"TITULO: "<<lb[i].titulo<<endl;
            cout<<"AUTOR: "<<lb[i].autor<<endl;
            cout<<"GENERO: "<<lb[i].genero<<endl;
            encontrado = true;
        }
    }
    if(!encontrado){
         cout<<"no se encontro libros con ese genero"<<endl;
     }
}