#include <iostream>

using namespace std;


void max(int a, int b);
int main () {
	int N1, N2, max;
cout << "INTRODUZCA EL PRIMER NUMERO: \n";
cin >> N1;
cout << "INTRODUZCA EL SEGUNDO NUMERO: \n";
cin >> N2;

if (N1>N2){
	cout << ("&N1 ES EL NUMERO MAYOR \n", N2);
}
else if (N1<N2){
	cout << ("&N2 ES EL NUMERO MAYOR \n", N1);
}

else
	cout << "ERROR\n" << endl;
return 0;
}
