#include <iostream>
using namespace std; 

float luasLingkaran(float r) {
	const float PI = 3.14;
	float luas = PI * r * r; 
	return luas;
}

int main(){
	float jari_jari = 9; 
	float hasil = luasLingkaran(jari_jari);
	cout<<"Luas Lingkaran dengan jari jari " << jari_jari << " adalah "	<< hasil;
	return 0;
	
} 