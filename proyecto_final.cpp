#include<iostream>
using namespace std;

struct libro{
    int ID;
    string titulo;
    string autor;
    string genero;
    int stock;
};
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
    int n,op;
    libro lb[20];
    string cm;
    do{
       system("cls");
       cout<<"Menu de opciones:::::::::::::::::::::::::::::::::::::::"<<endl;
       cout<<"1. Agregar libros"<<endl;
       cout<<"2. Estado de usuarios"<<endl;
       cout<<"3. Registrar usuarios"<<endl;
       cout<<"4. Prestamos/Devoluciones"<<endl;
       cout<<"5. Mostrar libros"<<endl;
       cout<<"6. Salir"<<endl;
       cout<<"eliga la operacion a realizar"<<endl;cin>>op;
       switch(op){
        case 1:
            cout<<"ingrese la cantidad de libros a agregar"<<endl;cin>>n;
            for(int i=0;i<n;i++){
                cout<<"ingrese el Id del libro"<<endl;cin>>lb[i].ID;
                cout<<"ingrese el titulo del libro"<<endl;cin>>lb[i].titulo;
                cout<<"ingrese el autor del libro"<<endl;cin>>lb[i].autor;
                cout<<"ingrese el genero del libro"<<endl;cin>>lb[i].genero;
                cout<<"ingrese la cantidad "<<endl;cin>>lb[i].stock;
            }
            break;
        case 2:
            break;
        case 3:
           break;
        case 4:
           break;
        case 5:
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