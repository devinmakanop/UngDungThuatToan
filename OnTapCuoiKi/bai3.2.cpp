#include <bits/stdc++.h>
using namespace std ;

struct hang{
	string ten;
	int kl;
	double gt;
};
int part(vector <hang> &a, int l, int r){
	double p= a[r].gt;
	int i = l-1;
	for ( int j = l ; j<r ; j++){
		if(a[j].gt<=p){
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
return i;
}
void quycksort(vector<hang> &a, int l, int r){
	if(l<r){
		int p = part(a,l,r);
		quycksort(a,l,p-1);
		quycksort(a,p+1,r);
	}
}

int dem(vector<hang> a, double c){
	int dem = 0;
	int n=a.size();
	if(a[0].gt>c)return 0;
	for(int i = 0; i<n; i++){
		if(a[i].gt<=c){
			dem++;
			c=c-a[i].gt;
		}
	}

return dem ;
}
void check(vector<hang> a,int f[][25], int m , int n){
	for ( int j=0; j<=m ; j++){
		f[0][j]=0;
	}
	for ( int i =1; i<=n; i++){
		for (int j =0; j<=m; j++){
			f[i][j]=f[i-1][j];
			if(j>=a[i-1].kl){
				double tmp = a[i-1].gt+ f[i-1][j-a[i-1].kl];
				if(tmp>f[i][j])f[i][j]=tmp;
			}
		}
	}
}

void truyvet(vector<hang>a, int f[][25], int m , int n){
	cout<<"Max value = " <<f[n][m]<<endl;
	int i = n, j=m;
	
	while(i>0){
		if(f[i][j]!=f[i-1][j]){
			cout<<setw(15)<<a[i-1].ten;
			cout<<setw(15)<<a[i-1].kl;
			cout<<setw(15)<<a[i-1].gt<<endl;
			j=j-a[i-1].kl;
		}
		--i;
	}
}
int main (){
	int n= 8;
	vector<hang> ds;
	hang h1={"hang1",3,193};
	ds.push_back(h1);
	hang h2={"hang2",6,123};
	ds.push_back(h2);
	hang h3={"hang3",8,823};
	ds.push_back(h3);
	hang h4={"hang4",9,163};
	ds.push_back(h4);
	hang h5={"hang5",1,723};
	ds.push_back(h5);
	hang h6={"hang6",2,523};
	ds.push_back(h6);
	hang h7={"hang7",9,123};
	ds.push_back(h7);
	hang h8={"hang8",7,323};
	ds.push_back(h8);
	quycksort(ds,0,n-1);
    for( int i = 0; i< n; i++){
    	cout << ds[i].gt<<" ";
	}
	cout <<endl;
	double c= 1500;
	int kq=dem(ds,c);
	if(kq==-1){
		cout <<"so tien thua du de mau tat cac cac hang"<<endl;
	}
	else{
		cout<<" so hang mua dk : "<<kq<<endl;
	}
	
	cout <<"_____________________"<<endl;
	int m = 10;
	int f[n][25];
	check(ds,f,m,n);
	for(int i = 0 ; i<=n; i++){
		for ( int j = 0; j<=m ; j++){
			cout<<setw(5)<<f[i][j];
		}
		cout <<endl;
	}
	truyvet(ds,f,m,n);
return 0 ;
}