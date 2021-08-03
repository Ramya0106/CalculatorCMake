#include<iostream>
#include<Calcy.h>
#include<stdlib.h>

int main(){
	int n,a,b;
	
	while(1){
		std::cout<<"Which Operation do you want to perform\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Exit\n";
		std::cin>>n;
		
		switch(n){
			case 1:
				std::cout<<"\nEnter Number\n";
				std::cin>>a>>b;
				Calcy().add(a,b);
				break;
			case 2:
				std::cout<<"\nEnter Number\n";
				std::cin>>a>>b;
				Calcy().sub(a,b);
				break;
			case 3:
				std::cout<<"\nEnter Number\n";
				std::cin>>a>>b;
				Calcy().mul(a,b);
				break;
			case 4:
				std::cout<<"\nEnter Number\n";
				std::cin>>a>>b;
				Calcy().div(a,b);
				break;
			case 5:
				exit(0);
		}
	}
	return 0;
}
