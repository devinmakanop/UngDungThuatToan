#include <bits/stdc++.h>
using namespace std ;



void inchuoichicoavab(int n , string s=" "){
	if (n==0){
		cout << s << endl;
	}
	else {
		inchuoichicoavab(n-1,s+"a");
		inchuoichicoavab(n-1,s+"b");
	}
}
int main (){
	int n ; 
	cout << " Nhap do dai chuoi : "; 
	cin >> n;
	
	inchuoichicoavab(n);
	
return 0;
}