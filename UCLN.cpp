#include <bits/stdc++.h>
using namespace std ;

int glc( int a , int b){
	int r = a % b ; 
    if( r==0 )return b;
    else {
    	return glc(b,r);
	}
}

int main (){
	cout << "Nhap so lon : ";
	int  a ; cin >> a ;
	cout << " Nhap so be : ";
	int b ; cin >> b; 
	cout << "UCLN("<<a<<","<<b<<") =";
	cout << glc(a,b);
	
	return 0;
}