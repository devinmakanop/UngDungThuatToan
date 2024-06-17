#include <bits/stdc++.h>
using namespace std;
struct hang{
	string ten ;
	int kl;
	double gt;
};



void check(vector <hang> a, double f[][25], int m , int n){
	for ( int j = 0; j<=m; j++){
		f[0][j]=0;
	}
	for (int i=1; i<=n; i++){
		for ( int j = 0; j<=m;j++){
			f[i][j]=f[i-1][j];
			if(j>=a[i-1].kl){
				double tmp=a[i-1].gt+f[i-1][j-a[i-1].kl];
				if(tmp>f[i][j]){
				f[i][j]=tmp;}
			}
		}
	}
}

void truyvet(vector <hang> a, double f[][25], int j , int i){
	cout <<"gia tri lon nhat : "<<f[i][j]<<endl;
	while(i>0){
		if(f[i][j]!=f[i-1][j]){
			cout <<setw(15)<<a[i-1].ten;
			cout <<setw(15)<<a[i-1].kl;
			cout <<setw(15)<<a[i-1].gt<<endl;
			j=j-a[i-1].kl;
		}
		i--;
	}
}
int main (){
	int n=8;
	vector <hang> ds ;
	hang h1={"hang1",3,193};
	ds.push_back(h1);
	hang h2={"hang2",6,123};
	ds.push_back(h2);
	hang h3={"hang3",8,823};
	ds.push_back(h3);
	hang h4={"hang4",9,163};
	ds.push_back(h4);
	hang h5={"hang5",8,723};
	ds.push_back(h5);
	hang h6={"hang6",5,523};
	ds.push_back(h6);
	hang h7={"hang7",9,123};
	ds.push_back(h7);
	hang h8={"hang8",7,323};
	ds.push_back(h8);
	
	int m = 20;
	double f[n][25];
	check(ds,f,m,n);
	cout <<endl;
	for (int i = 0 ; i<=n; i++){
		for (int j=0; j<=m; j++){
			cout <<setw(5)<<f[i][j];
		}
		cout <<endl;
	}
	cout <<endl;
	truyvet(ds,f,m,n);
	
	
return 0;
}