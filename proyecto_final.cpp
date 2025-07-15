#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include "buscar_libro.h"
using namespace std;


struct correo{
    string user;
    string domain;
};
struct usuario{
    int dni;
    string nombre;
    correo email;
};
struct prestamo{
    libro obra;
    usuario cliente;
    int fchp;
    int fchd;
};

int main(){
    int i,idb,nl,op,opb;
    libro lb[50];
    string cm;
    nl=0;
    do{
       system("cls");
       cout<<"Menu de opciones:::::::::::::::::::::::::::::::::::::::"<<endl;
       cout<<"1. Agregar libros"<<endl;
       cout<<"2. Estado de usuarios"<<endl;
       cout<<"3. Registrar usuarios"<<endl;
       cout<<"4. Prestamos/Devoluciones"<<endl;
       cout<<"5. Buscador de libros"<<endl;
       cout<<"6. Salir"<<endl;
       cout<<"eliga la operacion a realizar"<<endl;cin>>op;
       switch(op){
        case 1:
            system ("cls");
            cout<<"1. Agregar libros::::::::::::::::::::::::::::::::::::"<<endl;
            cout<<"----------------------------------------------------------"<<endl;
            cout<<"ingrese el Id del libro"<<endl;cin>>lb[nl].ID;
            cin.ignore();
            cout<<"ingrese el titulo del libro"<<endl;
            getline(cin,lb[nl].titulo);
            cout<<"ingrese el autor del libro"<<endl;
            getline(cin,lb[nl].autor);
            cout<<"ingrese el genero del libro"<<endl;
            getline(cin,lb[nl].genero);                
            cout<<"ingrese la cantidad "<<endl;cin>>lb[nl].stock;
            nl++;
            break;
        case 2:
            break;
        case 3:
           break;
        case 4:
           break;
        case 5:
           system ("cls");
           cout<<"5. Buscador de libro ::::::::::::::::::::::::::::::::::::"<<endl;
           cout<<"----------------------------------------------------------"<<endl;
           cout<<"opciones de busqueda "<<endl;
           cout<<"1. Por ID"<<endl;
           cout<<"2. Por autor"<<endl;
           cout<<"3. Por genero "<<endl;
           cout<<"4. Por titulo"<<endl;
           cout<<"ingrese la opccion"<<endl;cin>>opb;
           switch(opb){
                case 1:
                cout<<"ingrese el ID del libro"<<endl;cin>>idb;
                    buscarporid(lb,idb,nl);
                    system("pause");
                    break;
                case 2:
                    buscarporautor(lb,nl);
                    system("pause");
                    break;
                case 3:
                    buscarporgenero(lb,nl);
                    system("pause");
                    break;
                case 4:
                    buscarportitulo(lb,nl);
                    system("pause");
                    break;
                default:
                    cout<<"opcion invalida"<<endl;
                    break;
           }
           break;
        case 6:
           cout<<"estas seguro de salir ?(si/no)"<<endl;
           cin>>cm;
           if(cm=="si"){
            op=0;
           }
           else{
            op=1;
           }
           break;
        default :
          cout<<"ingrese una opcion valida"<<endl;
          system("pause");
          break;
       } 
    }while(op!=0);
    return 0;
}