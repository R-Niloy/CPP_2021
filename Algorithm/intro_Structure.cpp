#include<iostream>

struct Rectangle{
	int length;
	int breadth;
};


int main(){
	
	struct Rectangle r={4,5};
	std::cout<<("The entered length is ", r.length);
	std::cout<<r.breadth;
	std::cout<<"The area is %d",r.length*r.breadth;
}
