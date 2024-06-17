#include <bits/stdc++.h>
using namespace std ;


int dem (double a[], int n, double c  ){
	int dem = 0;
	for ( int i = 0; i< n ; i++){
		
		if(a[i]<=c){
			dem++;
			c-=a[i];
		}
	}	
return dem ;
}
void boyer (string a, string b, int &dem){
	int n = a.size();
	int m = b.size();
	int i = m-1;
	while (i<n){
		int x=m-1, v=i;
		while (a[i]==b[x]&&x>-1){
			--i;--x;
		}
		if(x==-1){
			dem++;
			i=v+m;
		}
		else {
			int k = 0;
			for ( int j = 0; j<m ; j++){
				if(a[i]==b[j]){
					k=j;
				}
			}
			if(k!=0){
				i=i+m-k-1;
			}
			else {
				i=i+m;
			}
		}
	}
}


int main (){
	
	int n = 5;
	double a[n]={1.2,1.3,4.5,6.5,7.3};
	double C=10.3;
	string p ="1235";
	string q= "biet gi la biet cai 1235";
	int d = dem (a,n, C);
	cout << "so phan tu da lay: "<<d<<endl;
	cout<< "Cac phan tu da lay : "<<endl; 
	for ( int i= 0; i< d; i ++){
		cout<<a[i]<<" ";
	}
	cout <<endl;
    int ss=0;
    boyer(q,p,ss) ;
    if(ss==0){
    	cout << "p khong phai string con cua q"<<endl;
	}
	else {
		cout << "p la string con cua q"<<endl;
	}
return 0;
}