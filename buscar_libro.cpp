#include"buscar_libro.h"
#include<string>
#include<cctype>
#include<iostream>
#include<algorithm>
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
void buscarportitulo(libro lb[],int x){
    string tlb,tl;
    bool encontrado = false;
    cout<<"ingrese el titulo del libro"<<endl;cin>>tlb;
    cin.ignore();
    getline(cin,tlb);
    for(int i=0;i<=x;i++){
        tl=lb[i].titulo;
        transform(tlb.begin(),tlb.end(),tlb.begin(), ::tolower);  //se convierte a minuscula el texto ingresado
        transform(tl.begin(),tl.end(),tl.begin(), ::tolower); //se convierte en minuscula los titulos para la comparacion
        if(tl.find(tlb) != string::npos){
            cout<<"libro encontrado"<<endl;
            cout<<"ID: "<<lb[i].ID<<endl;
            cout<<"TITULO: "<<lb[i].titulo<<endl;
            cout<<"AUTOR: "<<lb[i].autor<<endl;
            cout<<"GENERO: "<<lb[i].genero<<endl;
            encontrado = true;
        }
        if(!encontrado){
            cout<<"no se encontro libros con ese titulo"<<endl;
        }
    }
    
}
void buscarporautor(libro &lb,int x){}
void buscarporgenero(libro &lb,int x){}