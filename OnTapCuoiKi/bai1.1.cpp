#include <bits/stdc++.h>
using namespace std ;
double sum (double a[], int l, int r){
	if(l==r){
		return a[r];
	}
	else {
		int m = (l+r)/2;
		double s1= sum(a,l,m);
		double s2= sum(a,m+1,r);
		return s1+s2;
	}
}
int main (){
	int n; cin >> n;
	double a[n];
	for ( int i=0 ; i< n ; i ++){
		cin >>a[i];
	}
	cout << sum(a,0,n);
return 0;
}