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

	Ra1c[0]= (a1c[0]/mc[0]);
	Ra1c[1]= (a1c[1]/mc[1]);
	Ra1c[2]= (a1c[2]/mc[2]);
	Ra1c[3]= (a1c[3]/mc[3]);
	Ra1c[4]= (a1c[4]/mc[4]);
	
	Ra2c[0]= (a2c[0]/mc[0]);
	Ra2c[1]= (a2c[1]/mc[1]);
	Ra2c[2]= (a2c[2]/mc[2]);
	Ra2c[3]= (a2c[3]/mc[3]);
	Ra2c[4]= (a2c[4]/mc[4]);
	
	Ra3c[0] = (a3c[0]/mc[0]);
	Ra3c[1] = (a3c[1]/mc[1]);
	Ra3c[2] = (a3c[2]/mc[2]);
	Ra3c[3] = (a3c[3]/mc[3]);
	Ra3c[4] = (a3c[4]/mc[4]);

	// MATRIKS R * W
	RWa1c[0] = Ra1c[0]*w[0];
	RWa1c[1] = Ra1c[1]*w[1];
	RWa1c[2] = Ra1c[2]*w[2];
	RWa1c[3] = Ra1c[3]*w[3];
	RWa1c[4] = Ra1c[4]*w[4];

	RWa2c[0] = Ra2c[0]*w[0];
	RWa2c[1] = Ra2c[1]*w[1];
	RWa2c[2] = Ra2c[2]*w[2];
	RWa2c[3] = Ra2c[3]*w[3];
	RWa2c[4] = Ra2c[4]*w[4];
	
	RWa3c[0] = Ra3c[0]*w[0];
	RWa3c[1] = Ra3c[1]*w[1];
	RWa3c[2] = Ra3c[2]*w[2];
	RWa3c[3] = Ra3c[3]*w[3];
	RWa3c[4] = Ra3c[4]*w[4];

	// PENJUMLAHAN HASIL R * W
	
	ha1=RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4];
	ha2=RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4];
	ha3=RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4];

	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	cout << a1c[0] <<" | "<<a1c[1]<<" | "<<a1c[2]<<" | "<<a1c[3]<<" | "<<a1c[4]<<endl;
	cout << a2c[0] <<" | "<<a2c[1]<<" | "<<a2c[2]<<" | "<<a2c[3]<<" | "<<a2c[4]<<endl;
	cout << a3c[0] <<" | "<<a3c[1]<<" | "<<a3c[2]<<" | "<<a3c[3]<<" | "<<a3c[4]<<endl;
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	cout << Ra1c[0] <<" | "<<Ra1c[1]<<" | "<<Ra1c[2]<<" | "<<Ra1c[3]<<" | "<<Ra1c[4]<<endl;
	cout << Ra2c[0] <<" | "<<Ra2c[1]<<" | "<<Ra2c[2]<<" | "<<Ra2c[3]<<" | "<<Ra2c[4]<<endl;
	cout << Ra3c[0] <<" | "<<Ra3c[1]<<" | "<<Ra3c[2]<<" | "<<Ra3c[3]<<" | "<<Ra3c[4]<<endl;
	cout << endl;
	cout << "BOBOT W :"<<endl;
	cout << w[0] <<" | "<<w[1]<<" | "<<w[2]<<" | "<<w[3]<<" | "<<w[4]<<endl;
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c[0] <<" | "<<RWa1c[1]<<" | "<<RWa1c[2]<<" | "<<RWa1c[3]<<" | "<<RWa1c[4]<<endl;
	cout << RWa2c[0] <<" | "<<RWa2c[1]<<" | "<<RWa2c[2]<<" | "<<RWa2c[3]<<" | "<<RWa2c[4]<<endl;
	cout << RWa3c[0] <<" | "<<RWa3c[1]<<" | "<<RWa3c[2]<<" | "<<RWa3c[3]<<" | "<<RWa3c[4]<<endl;
	cout << endl;
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
	cout <<endl;
	
	RWa1c[0] = Ra1c[0]*w[0];
	RWa1c[1] = Ra1c[1]*w[1];
	RWa1c[2] = Ra1c[2]*w[2];
	RWa1c[3] = Ra1c[3]*w[3];
	RWa1c[4] = Ra1c[4]*w[4];

	RWa2c[0] = Ra2c[0]*w[0];
	RWa2c[1] = Ra2c[1]*w[1];
	RWa2c[2] = Ra2c[2]*w[2];
	RWa2c[3] = Ra2c[3]*w[3];
	RWa2c[4] = Ra2c[4]*w[4];
	
	RWa3c[0] = Ra3c[0]*w[0];
	RWa3c[1] = Ra3c[1]*w[1];
	RWa3c[2] = Ra3c[2]*w[2];
	RWa3c[3] = Ra3c[3]*w[3];
	RWa3c[4] = Ra3c[4]*w[4];

	// PENJUMLAHAN HASIL R * W
	
	ha1=RWa1c[0]+RWa1c[1]+RWa1c[2]+RWa1c[3]+RWa1c[4];
	ha2=RWa2c[0]+RWa2c[1]+RWa2c[2]+RWa2c[3]+RWa2c[4];
	ha3=RWa3c[0]+RWa3c[1]+RWa3c[2]+RWa3c[3]+RWa3c[4];
		
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	cout << a1c[0] <<" | "<<a1c[1]<<" | "<<a1c[2]<<" | "<<a1c[3]<<" | "<<a1c[4]<<endl;
	cout << a2c[0] <<" | "<<a2c[1]<<" | "<<a2c[2]<<" | "<<a2c[3]<<" | "<<a2c[4]<<endl;
	cout << a3c[0] <<" | "<<a3c[1]<<" | "<<a3c[2]<<" | "<<a3c[3]<<" | "<<a3c[4]<<endl;
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	cout << Ra1c[0] <<" | "<<Ra1c[1]<<" | "<<Ra1c[2]<<" | "<<Ra1c[3]<<" | "<<Ra1c[4]<<endl;
	cout << Ra2c[0] <<" | "<<Ra2c[1]<<" | "<<Ra2c[2]<<" | "<<Ra2c[3]<<" | "<<Ra2c[4]<<endl;
	cout << Ra3c[0] <<" | "<<Ra3c[1]<<" | "<<Ra3c[2]<<" | "<<Ra3c[3]<<" | "<<Ra3c[4]<<endl;
	cout << endl;
	cout << "BOBOT W :"<<endl;
	cout << w[0] <<" | "<<w[1]<<" | "<<w[2]<<" | "<<w[3]<<" | "<<w[4]<<endl;
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c[0] <<" | "<<RWa1c[1]<<" | "<<RWa1c[2]<<" | "<<RWa1c[3]<<" | "<<RWa1c[4]<<endl;
	cout << RWa2c[0] <<" | "<<RWa2c[1]<<" | "<<RWa2c[2]<<" | "<<RWa2c[3]<<" | "<<RWa2c[4]<<endl;
	cout << RWa3c[0] <<" | "<<RWa3c[1]<<" | "<<RWa3c[2]<<" | "<<RWa3c[3]<<" | "<<RWa3c[4]<<endl;
	cout << endl;
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
}
