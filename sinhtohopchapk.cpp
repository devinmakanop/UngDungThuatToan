#include <bits/stdc++.h>
using namespace std ;
// to hop chap k ;
void ktao( int a[], int  k){
	for ( int i =0; i< k ; i++){
		a[i]=i+1;
	}
}
void sinh(int a[], int n , int k , int &ok){
	int i = k-1;
	while (i>=0&&a[i]==n-k+i+1){
	     --i;
	}
	if (i<0)
	{
	ok=1;
	}
	else {
		a[i]++;
		for ( int j = i+1 ; j<k ; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main (){
	cout << " Nhap so n : ";
	int n ; cin >> n;
	cout << " nhap so k : ";
	int k; cin >> k;
	int  a[k];
	ktao(a,k);
	int ok=0;
	while (ok==0){
		for ( int i =0; i<k; i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh(a,n,k,ok);
	}
		
return 0;
}