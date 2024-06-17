#include <bits/stdc++.h>
using namespace std ;

int tinh ( int a[], int n ){
	if(n==0){
		if(a[n]%2==0)return 0;
		else {
			return a[n];
		}
	}
	else {
		if(a[n]%2==0) return 0+ tinh(a,n-1);
		else return a[n]+tinh(a,n-1);
	}
}
int main (){
	int n = 9;
	int a[n]={1,2,3,3,4,5,6,7,8};
	cout <<"tong so le trong mang: "<<tinh(a,n-1)<<endl;	
return 0;
}