#include <bits/stdc++.h>
using namespace std ;


void nhap ( int a[], int n ){
	for (int i = 0; i< n ; i ++){
		cin >>a[i];
	}
}

void chuyen ( int a[], int &t, int b[], int &k,int n){
	b[k]=a[t];
	a[t]=0;
	t--;
	k++;
}
void xuat(int a[] , int n){
	for(int i = 0; i<n ; i ++){
		cout<< a[i]<< " ";
	}
}
void tower(int s,int n,int a[],int &a1, int b[],int &b1, int c[], int &c1){
	if(s==1){
		chuyen(a,a1,c,c1,n);
		cout<<"------------"<<endl;
		xuat(a,n);
		cout<<endl;
		xuat(b,n);
		cout<<endl;
		xuat(c,n);
		cout<<endl;
		cout<<"-------------";
		cout<<endl;
		return;
		
	}
	else {
		
		
		tower(s-1,n,a,a1,c,c1,b,b1);
		tower(1,n,a,a1,b,b1,c,c1);
		tower(s-1,n,b,b1,a,a1,c,c1);
	}
}
int main (){
	cout<<" Nhap n : ";
	int n ; cin >> n ;
	
	int a[n];
	int b[n];
	int c[n];
	nhap(a,n);
	nhap(b,n);
	nhap(c,n);
	int a1=n-1;
	int b1=0;
	int c1=0;
	int s = n;
	tower(s,n,a,a1,b,b1,c,c1);
	for( int i=0; i<n ; i++){
		cout<< c[i]<< " ";
	}
	return 0;
}