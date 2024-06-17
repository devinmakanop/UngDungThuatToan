#include <bits/stdc++.h>
using namespace std ;

void z(string a, int dd[], int n){
	int l=0,r=0;

	for ( int i = 1; i<n ; i++){
		if(i>r){
		   l=r=i;
		   while (r<n&&a[r-l]==a[r]){
		   	r++;
		   }
		   dd[i]=r-l; r--;
		}
		else if(dd[i-l]<r-i+1){
			dd[i]=dd[i-l];
		}
		else {
			while(r<n&&a[r-l]==a[r]){
				r++;
			}
			dd[i]=r-l;
			r--;
		}
	}
}

int main (){
	
	string a = "concoccanconcong";
	int n  = a.size();
	int dd[n]={0};
	z(a,dd,n);
	for ( int i = 0; i< n; i++){
		cout<<dd[i]<<" ";
	}
	
	return 0;
}