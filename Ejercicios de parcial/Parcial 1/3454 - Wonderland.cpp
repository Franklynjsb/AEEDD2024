#include <iostream>
using namespace std;

void NCFunction(char, char, char);

int main(int argc, char *argv[]) {
	
	char a,b,c;
	cin >> a >> b >> c;
	
	NCFunction(a,b,c);
	
	return 0;
}

void NCFunction(char a, char b, char c){
	if (a == 'X') {
		if(b == 'X' && c == 'O') {
			//XXO
			cout << "Alice" << endl;
		} else if (b == 'O' && c == 'X'){
			//XOX
			cout << "*" << endl;
		}else {
			//XOO , XXX
			cout << "?" << endl;
		}
	}else if (a == 'O'){
		if( b == 'X' && c == 'X'){
			//OXX
			cout << "Alice" << endl;
		}else {
			//OOO , OOX, OXO
			cout << "?" << endl;
		}
	}
}

