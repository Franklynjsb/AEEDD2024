<<<<<<< HEAD:Ejercicios de parcial/Parcial 3/Soluciones/8129. Borrado Pares impares 3 .cpp
#include <iostream>
using namespace std;

struct nodo {
	int numero;
	nodo * sig;
};

void EliminarNodo(nodo * &Lista, int num);
void InsertarNodo(nodo * &Lista, int num);
void MostarLista (nodo * Lista);
void SwaP (int &num1, int &num2);
void IntercambioNum(nodo * &Lista);
void Final (nodo * &Lista);

int main(int argc, char *argv[]) {
	
	nodo * Lista = new nodo;
	
	if (Lista== NULL) {
		cout << "No hay memoria" << endl;
	}else {
		int valor;
		
		while (cin>>valor){
			InsertarNodo(Lista, valor);
		}
		
		Final(Lista);
		MostarLista(Lista);
	}
	
	return 0;
}

void InsertarNodo(nodo * &Lista, int num){
	//ANDA BIEN
	nodo * nuevo = new nodo;
	
	if(nuevo!=NULL){
		
		nuevo->sig = Lista;
		nuevo->numero = num;
	}
	Lista = nuevo;
	cout << "Se inserto " << num << endl;
}
	
void EliminarNodo(nodo * &Lista, int num) {
	//ANDA BIEN
	nodo * aux = Lista;
	nodo * ant = NULL;
	
	while (aux!=NULL && aux->numero!=num) {
		ant=aux;
		aux= aux->sig;
	}
	
	if (aux==NULL){
		return;
	}
	if(ant==NULL){
		Lista = aux->sig;
	}else {
		ant->sig=aux->sig;
	}
	
	delete aux;
	
}

void MostarLista (nodo * Lista) {
	//ANDA BIEN
	nodo * aux = Lista;
	
	while (aux!=NULL){
		cout << aux->numero << " -> ";
		aux = aux->sig;
	}
	cout << "NULL\n" << endl;
	
}

void SwaP (int &num1, int &num2) {
	int aux = num1;
	num1=num2;
	num2=aux;
}

void IntercambioNum(nodo * &Lista) {
	
	nodo * act = Lista;
	nodo * num1;
	nodo * num2;
	
	int dif, MAX = 0, mini = 999;
	
	while (act!=NULL) {
		if (act->numero > MAX) {
			num1 = act;
			MAX = num1->numero;
		}
		if (act->numero < mini){
			num2 = act;
			mini = num2->numero;
		}
		act = act->sig;
	}
	dif = MAX - mini;
	
	cout << dif << endl;
	
	SwaP(num1->numero, num2->numero);
	
}

void Final (nodo * &Lista) {
	
	nodo * aux = Lista;
	
	while (aux!=NULL) {
		nodo * siguiente = aux->sig;
		
		if (siguiente!=NULL){
			if (aux->numero%2==0 && (siguiente->numero%2!=0 && siguiente->numero%3==0)){
				EliminarNodo(Lista, aux->numero);
				
			}
			aux=siguiente;
		}
		aux=siguiente;
	}
	
	IntercambioNum(Lista);
	
}
=======
#include <iostream>
using namespace std;

struct nodo {
	int numero;
	struct nodo * sig;
};

typedef nodo * nodoPtr;

void EliminarNodo(nodoPtr &Lista, int num);
void InsertarNodo(nodoPtr &Lista, int num);
void MostarLista (nodoPtr Lista);
void SwaP (int &num1, int &num2);
void IntercambioNum(nodoPtr &Lista);
void Final (nodoPtr &Lista);

int main(int argc, char *argv[]) {
	
	nodoPtr Lista = NULL;
	int valor;
	
	while (cin>>valor){
		InsertarNodo(Lista, valor);
	}
	
	Final(Lista);
	MostarLista(Lista);
	
	
	return 0;
}

void InsertarNodo(nodoPtr &Lista, int num){
	//ANDA BIEN
	nodoPtr nuevo = new nodo;
	
	if(nuevo!=NULL){
		
		nuevo->sig = Lista;
		nuevo->numero = num;
	}
	Lista = nuevo;
	cout << "Se inserto " << num << endl;
}
	
void EliminarNodo(nodoPtr &Lista, int num) {
	//ANDA BIEN
	nodoPtr aux = Lista;
	nodoPtr ant = NULL;
	
	while (aux!=NULL && aux->numero!=num) {
		ant=aux;
		aux= aux->sig;
	}
	
	if (aux==NULL){
		return;
	}
	if(ant==NULL){
		Lista = aux->sig;
	}else {
		ant->sig=aux->sig;
	}
	
	delete aux;
	
}

void MostarLista (nodoPtr Lista) {
	//ANDA BIEN
	nodoPtr aux = Lista;
	
	while (aux!=NULL){
		cout << aux->numero << " -> ";
		aux = aux->sig;
	}
	cout << "NULL\n" << endl;
	
}

void SwaP (int &num1, int &num2) {
	int aux = num1;
	num1=num2;
	num2=aux;
}

void IntercambioNum(nodoPtr &Lista) {
	
	nodoPtr act = Lista;
	nodoPtr num1;
	nodoPtr num2;
	
	int dif, MAX = 0, mini = 999;
	
	while (act!=NULL) {
		if (act->numero > MAX) {
			num1 = act;
			MAX = num1->numero;
		}
		if (act->numero < mini){
			num2 = act;
			mini = num2->numero;
		}
		act = act->sig;
	}
	dif = MAX - mini;
	
	cout << dif << endl;
	
	SwaP(num1->numero, num2->numero);
	
}

void Final (nodoPtr &Lista) {
	
	nodoPtr aux = Lista;
	
	while (aux!=NULL) {
		nodoPtr siguiente = aux->sig;
		
		if (siguiente!=NULL){
			if (aux->numero%2==0 && (siguiente->numero%2!=0 && siguiente->numero%3==0)){
				EliminarNodo(Lista, aux->numero);
				
			}
			aux=siguiente;
		}
		aux=siguiente;
	}
	
	IntercambioNum(Lista);
	
}
>>>>>>> a067ec2b4962f4f7a6c6af80625326e59e20858e:Ejercicios de parcial/Parcial 3/OmegaUp/8129. Borrado Pares impares 3 .cpp
