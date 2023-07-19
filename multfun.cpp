#include <bits/stdc++.h>
using namespace std;
int TablaMultiplicar(int num);
int main(){
	int n;
	cout<<"ingrese un numero";
	cin>>n;
	cout << "Tabla de multiplicar de " << n << ":" <<endl;
	cout<<TablaMultiplicar(n);
	     
	  
	return 0; 
}
int TablaMultiplicar(int num){

	  if (1 < num < 1000) {
          for (int i = 1; i <= 10; i++) {
            cout << num<< " x " << i << " = " << i*num<<endl;
        }
	     
       
    } 

	  return num;
}