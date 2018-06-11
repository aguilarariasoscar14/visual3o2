#include <iostream>
#include <conio.h>
#include <stdlib.h> 

using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void insertar_lista(nodo *&, int); 
void mostrar_lista(nodo *); 

main(){
	nodo *lista = NULL;
	int dato, opc;
	do{
		system ("cls");
		cout<<"****** MENU LISTA ******"<<endl;
		cout<<"1- INSERTAR ELEMENTOS"<<endl;
		cout<<"2- MOSTRAR ELEMENTOSs"<<endl;
		cout<<"3- SALIR"<<endl;
		cout<<"ELIGA OPCION: "<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"INTRODUZCA UN NUMERO"<<endl;
				cin>>dato;
				insertar_lista(lista,dato);
				getch();
				break;
			case 2:
				mostrar_lista(lista);
				getch();
				break;
		}
	}while (opc!=3);
	getch();
}
void insertar_lista(nodo *&lista,int n){
	nodo *nvo_nodo = new nodo();
	nvo_nodo -> dato = n;
	nodo *aux1 = lista;
	nodo *aux2;
	while((aux1 != NULL)&&(aux1->dato<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
		lista=nvo_nodo;
	}
	else{
		aux2->siguiente=nvo_nodo;
	}
	nvo_nodo->siguiente=aux1;
	cout<<"\t VALOR "<<n<<" INGRESADO A LA LISTA CORRECTAMENTE"<<endl;
}

void mostrar_lista(nodo*lista){
	nodo *actual= new nodo();
	actual=lista;
	while(actual !=NULL){
		cout<<actual->dato<<",";
		actual =actual->siguiente;
	}
}
