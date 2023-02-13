#include <iostream>
#include <math.h>
using namespace std;

unsigned long long energy=0;
float scale=0;
double a;
int option=0;
unsigned long long bomb=15*4.184*pow(10,12);
double bombnumber=0;
float scale1=0;
int main(){
	while(1){
	
	cout << "Depremin buyuklugu ile aciga cikan enerji icin 1" << endl << "2 depremin buyuklugu ile arasindaki fark icin 2" << endl;
	cin >> option;
	if(option==1){
		cout << "Lutfen enerjisini hesaplamak istediginiz depremin buyuklugunu yazin" << endl;
		cin >> a;
		energy=pow(10,(4.4+1.5*a));
		cout << a << " buyuklugunde depremde aciga cikacak enerji = " << energy << " Joule" << endl;
		bombnumber=energy/bomb;
		cout << "Bu buyuklukteki bir deprem " << bombnumber << " adet atom bombasinin enerjisine esdeger." << endl <<
		"Referans alinan atom bombasi little boy idir. "<< endl << endl;
		
		energy,a,scale,bombnumber=0;
	}
	else if(option==2){
		cout << "Lutfen hesaplamak istediginiz ilk depremin buyuklugunu girin" << endl;
		cin >> scale;
		cout << "Lutfen hesaplamak istediginiz ikinci depremin buyuklugunu girin" << endl;
		cin >> scale1;
		if(scale>=scale1){
			a=1.5*(scale-scale1);
			a=pow(10,a);
			
		}
		else{
			a=1.5*(scale1-scale);
			a=pow(10,a);	
		}
		cout << "Buyuk olan deprem kucuk olandan " << a << " kat daha guclu bir deprem" << endl << endl <<endl;
		a,scale1,scale=0;
	}
	else{
		cout << "hatali secim!!!" << endl <<"Lutfen tekrar deneyiniz" << endl << endl;
	}
	
}
}
