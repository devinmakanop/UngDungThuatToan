#include <bits/stdc++.h>
using namespace std ;

void ktao(int a[], int n){
	for ( int i =0; i<=n ; i++){
		a[i]=0;
	}
}
void sinh(int a[], int n, int &ok){
	int  i = n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	
	if(i<0){
		ok=1;// day da ? c?u hinh cuoi;
		return ;
	}
	else{
		a[i]=1;
	}	
}
int main(){
	int n;
	cin >> n;
	int a[n];
    ktao(a,n);
	int ok=0;
	while (ok==0){
		for ( int i = 0; i<n ; i++){
			cout<< a[i];
		}
		cout<<endl;
		sinh(a,n,ok);
	}
}