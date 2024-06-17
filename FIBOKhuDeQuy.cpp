#include <bits/stdc++.h>
using namespace std ;
void  fibo(int a[],int n){
      if (n==1){
      	a[0]=1;
	  }
	  else if (n==2){
	  	a[0]=1;a[1]=1;
	  }
	  else {
	  	a[0]=1;a[1]=1;
	  	int u= n;
	  	for (int i = 2; i<n  ; i++){
	  		a[i]=a[i-1]+a[i-2];
		  }
	  }
}

int main (){
	cout << " Nhap so n: ";
	
    int n ;cin >> n ; 
    int a[n];
    cout << " xuat mang fibo: ";
    fibo(a,n);
	for (int i = 0; i< n ; i++){
		cout<< a[i]<< " ";
	}
	return 0;
}