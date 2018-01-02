#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	double Ra1c[5];
	double Ra2c[5];
	double Ra3c[5];
	
	double RWa1c[5];
	double RWa2c[5];
	double RWa3c[5];
		
	double w[5]={5,3,4,4,2};
	double mc[5];
	double ha1,ha2,ha3;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	mc[0]=max(a1c[0],max(a2c[0],a3c[0]));
	mc[1]=max(a1c[1],max(a2c[1],a3c[1]));
	mc[2]=max(a1c[2],max(a2c[2],a3c[2]));
	mc[3]=max(a1c[3],max(a2c[3],a3c[3]));
	mc[4]=max(a1c[4],max(a2c[4],a3c[4]));

}
