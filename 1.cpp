#include <iostream>
using namespace std;

int main (){
	float v1,v2,t,st,sst, jv, wp;
	 int a,b,c, j,m;
	cout<<"kecepatan Tempuh Rafaela: "<<"10 m/detik"<<endl;
	cout<<"kecepatan Tempuh Nana: "<<"13 m/detik"<<endl;
	cout<<"Waktu Tempuh Rafaela: "<<"14.00"<<endl;
	cout<<"Waktu Tempuh Nana: "<<"15.00"<<endl;
	cout<<"Selisi waktu : "<<"1 jam"<<endl;
	v1 = 10;
	st = v1*1;
	cout<<"Selisi jarak : "<<st<<endl;
	t=140;
	v2 = 13;
	sst = t-st;
	jv = v1+v2;
	wp= sst/jv;
	cout<<"WP : "<<wp<<endl;
	c=wp*3600;
	a = c / 3600;
	c -= (a * 3600);
	b = c / 60;
	c -= (b * 60);
	cout<<" Waktu Berpapasan= "<<a<<" jam "<<b<<" menit "<<c<<" detik \n";	
	cout<<"Shingga Mereka Brpapasan Pada jam = "<<15+a<<"."<<0+b<<"\n";
	
}


