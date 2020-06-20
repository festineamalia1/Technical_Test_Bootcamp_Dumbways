#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n;
	char a[10];
	cout<<"Masukan jumlah karakter : "; cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<"Masukan karakter ke-"<<i+1<<" : ";
		cin>>a[i];
	}
	for(int x=0; x<=n;x++){
      	
	  
	  
	  cout<<a[x]<<endl;

  
	  for(int j=0; j<=x; j++){
	  	cout<<" ";
	  }
	
	  }
	  return 0;
}
