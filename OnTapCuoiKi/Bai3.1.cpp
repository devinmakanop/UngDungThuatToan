#include <bits/stdc++.h>
using namespace std;

float sum (float a[], int l , int r){
	if(l==r){
		if(a[l]<0.0)return 0;
		else {
			return a[l];
		}
	}
	else {
		int m = (l+r)/2;
		int sum1 = sum(a,l,m);
		int sum2= sum(a,m+1,r);
		return sum1+sum2;
	}
}

int main (){
	int n = 10 ;
	float a[n]={1,-2,3,-4,5,6,7,8,9,-10};
	float kq= sum(a,0,n-1);
	cout <<"tong so duong: "<<kq<<endl;
	
	
return 0;
}