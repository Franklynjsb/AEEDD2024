#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second

#define esPar(n) (n%2==0)? true:false
#define esLetra(c) ((c>='a')&&(c<='z'))? true : false
#define esNUmero(n) ((n>='0')&&(n<='9'))? true : false
#define raiz(n) sqrt(n)

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

int main(int argc, char *argv[]) {
	
	
	
	return 0;
}




/*

void cargarVector (int vector[], int tl) {
	forr(i,0,tl) {
		cin >> vector[i];
	}
}

void mostrarVector (int vector[], int tl) {
forr(i,0,tl) {
cout << vector[i];
}
}

int contarDigitos(int n) {

	if (n<= 9) {
		return 1;
	} else {
		return 1 + contarDigitos(n/10);
	}
}

int sumaDeDigitos (int n) {
	if(n==0) {
		return 0;
	}else {
		return (n%10) + sumaDeDigitos (n/10);
	}
}

bool esPrimo(int n){

	(n<=1)?return false;
	forr(i,2,raiz(n)) {(numero%i==0)?return false;}
	return true;

}


void mostrarMatriz (int matriz[][], int tl) {
	
	forr(i,0,tl) {
		forr(j,0,tl) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

}

void cargarMatriz (int matriz[][], int tl) {
	
	forr(i,0,tl) {
		forr(j,0,tl) {
			cin >> matriz[i][j];
		}
	}
	
}


///BUSQUEDA Y ORDENAMIENTOS

int busquedaLineal(int lista[], int tl, int clave) {

	int i;

	forr(i,0,tl) {
		(lista[i] == clave)? return i;
	}
	return -1;

}



*/
