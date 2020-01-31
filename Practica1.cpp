//2020-01-30
#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void rectangulo(int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i == 0 || i == size-1)
				cout << "*";
			else if(j == 0 || j == size-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void trianguloSur1(int size){
	for(int i=size;i>0;i--){
		for(int j=i;j>0;j--){
			if(i == 0 || i == size)
				cout << "*";
			else if(j == i || j == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void trianguloNorte1(int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<=i;j++){
			if((i == 0 || i == size-1) || (j == 0 || j == i))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void trianguloSur2(int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i == 0  || (j == i || j == size-1))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

long potencia(long base, long exp){
	if(exp == 0)
		return 1;
	else{
		return base*potencia(base,exp-1);
	}
}

int determinarMenor(int a[]){
	int menor=872345;
	for(int i=0;i<5;i++){
		if(a[i] < menor)
			menor=a[i];
	}
	return menor;
}

int MCD(int a[], int menor, int it, int mcd, int size){
	if(menor+1 == it)
		return mcd;
	else{
		bool divi=true;
		//cout<<it<<endl;
		for(int i=0;i<size;i++){
			if(a[i]%it != 0)
				divi=false;

			//cout << "entro" << endl;
		}
		//cout << "Salio" << endl;

		if(divi)
			return MCD(a,menor,it+1,it,size);
		else
			return MCD(a,menor,it+1,mcd,size);
	}
}

int buscarElemento(int a[], int size, int i, int elem){
	if(size == i)
		return -1;
	if(elem == a[i])
		return i;
	else{
		cout << "entro" << endl;
		return buscarElemento(a, size, i+1, elem);
	}
}

int fibonacci(int elem1, int elem2, int busc, int i){
	if(busc == 0)
		return elem1; 
	if(i == busc)
		return elem2;
	else{
		//int temp=elem2;
		//elem2=elem2+elem1;
		//elem1=temp;
		return fibonacci(elem2,elem2+elem1,busc,i+1);
	}
}

int main(){
	int a[]={63, 133, 189, 301, 469, 234, 6543, 6445, 24534, 5642, 5, 5442};
	int tam=(sizeof(a)/sizeof(*a));
	//cout << determinarMenor(a) << endl;
	//cout << tam << endl;
	//cout << MCD(a,determinarMenor(a),1,1,tam) << endl;
	cout << fibonacci(0,1,7,0)  << endl;
	cout << "Fin del programa" << endl;
	srand((int)time(0));
	int i=0;
	while(i++ < 10){
		int r = (rand() % 100) + 1;
		cout << r << " ";
	}
	cout << endl;

}
