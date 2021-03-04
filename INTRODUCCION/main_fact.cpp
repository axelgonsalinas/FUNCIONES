#include <iostream>

using namespace std;


int fact (int a);
int main () {
	int N1;
	cout<< "INTRODUZCA NUMERO PARA CONOCER SU FACTORIAL" << endl;
	cin >> N1;
	int factorial = fact (N1);
	cout<< ("EL FACTORIAL DE %N1 ES: &N1", N1, factorial)<< endl;
	return 0;
}

int fact (int a){
int i;
int ans = 1;
for (i = 1; i <= a; i++){
	ans *= i;
}
return ans;
}
