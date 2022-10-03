#include <iostream>

using namespace std;

float luasSegitiga(float alas, float tinggi){
	float luas;
	luas = 0.5*alas*tinggi;
	return luas;
}

int main(){
	float a, t;
	cout<<"Inputkan alas segitiga : ";
	cin>>a;
	cout<<"Inputkan tinggi segitiga : ";
	cin>>t;
	cout<<"Luas Segitiga Adalah : "<<luasSegitiga(a, t);
}
