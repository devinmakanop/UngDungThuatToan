#include <bits/stdc++.h>
using namespace std ;

int dem(float a[], int n , int c){
	int dem= 0;
	for (int i = n-1; i>=0; i--){
		if(a[i]<=c){
			dem++;
			c=c-a[i];
		}
	}
return dem ;
}

void boyer ( string a, string b,vector<int>&o){
	int n = a.size();
	int m= b.size();
	int i = m-1;
	while (i<n){
		int v=i,x=m-1;
		while(a[i]==b[x]&&x>-1){
			--i,--x;
		}
		if(x==-1){
			int l=i+1;
			o.push_back(l);
			i=v+m;
		}
		else{
			int k = 0;
			for(int j= 0;j<m; j++){
				if(a[i]==b[j]){
					k=j;
				}
			}
			if(k!=0)i=i+m-k-1;
			else {
				i=i+m;
			}
		}
	}
}

int main(){
	int n = 8;
	float a[n]={1.1,1.2,1.4,2.4,2.5,5.7,7.7,9.8};
	float c=15;
	int kq=dem(a,n,c);
	cout << "so cac so da lay cua mang : "<< kq <<endl;
	cout << "cac so da lay bao gom  "<<endl;
	for (int i =n-1; i>=n-kq-1; i--){
		cout<< a[i]<<" ";
	}
	
	cout<<"_____________"<<endl;
	string p = "em";
	string q = "anh yeu em nhieu lam em oi";
	vector<int>o;
	boyer(q,p,o);
	
	if(o.size()==0){
		cout <<"p khong la sau con cua q"<<endl;
	}
	else {
		for(int i= 0; i<o.size();i++){
			cout<<"bat dau : "<<o[i]+1<<" ket thuc "<< o[i]+p.size()<<endl;
		}
	}
return 0;
}