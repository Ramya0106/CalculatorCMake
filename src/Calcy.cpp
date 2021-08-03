#include"Calcy.h"

void Calcy::add(int x, int y){
	int z = x + y;
	std::cout<<"Addition is "<<z<<"\n";
}

void Calcy::mul(int x, int y){
	int z = x * y;
	std::cout<<"Multiplication is "<<z<<"\n";
}

void Calcy::sub(int x, int y){
	int z = x - y;
	std::cout<<"Substtraction  is "<<z<<"\n";
}

void Calcy::div(int x, int y){
	int z = x / y;
	std::cout<<"Division is "<<z<<"\n";
}
