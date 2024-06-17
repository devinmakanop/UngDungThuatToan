#include <bits/stdc++.h>
using namespace std ;

struct Hang {
	string ten ;
	double trongluong;
	double gia;
};
double tonggia(vector <Hang> a, int n){
	if(n==0)return a[n].gia;
	else {
		return a[n].gia+tonggia(a,n-1);
	}
}
int dem (vector<Hang> a,double p){
	int n = a.size();
	if(n==0)return 0;
	else if (n==1){
		if(a[n-1].gia<p)return 1;
		else return 0;
	}
	else {
		int m = n/2;
		vector <Hang> b(a.begin(),a.begin()+m);
		vector <Hang> c(a.begin()+m, a.end());
		int k1= dem(b,p);
		int k2= dem(c,p);
		return k1+k2;
	}
}
void hoanvi(vector<Hang> vr , int k){
	int t= vr.size();
	if(k==t){
		for (int i = 0; i<t; i++){
			cout<<"ke("<<i+1<<")->"<< vr[i].ten<<"   ";
		}
		cout<<endl;
	}
	else{
		for (int i = k ; i<t; i++){
			swap(vr[k],vr[i]);
			hoanvi(vr,k+1);
			swap(vr[k],vr[i]);
		}
	}
}
void sinhtohopcon(vector <Hang> a,vector <Hang> vr, int k, int index){
	if(k==0){
		hoanvi(vr,k);
	    cout<<endl;
	    return ;
		
	}
	else {
		for ( int i = index; i<a.size(); i++){
			vr.push_back(a[i]);
			sinhtohopcon(a,vr,k-1,i+1);
			vr.pop_back();
		}
	}
}

int main (){
	Hang h1={"bim bim", 0.6, 300};
	Hang h2={"keo", 0.6,50};
	Hang h3={"kem", 0.6, 200};
	Hang h4={"banh mi", 1.6, 1000};
	Hang h5={"nuoc loc", 2.6, 400};
	Hang h6={"co ca", 1.6, 500};
	vector <Hang> ds={h1,h2,h3,h4,h5,h6};
	int n = ds.size();
	cout<< " tong gia tien trong danh sach la : "<< tonggia(ds,n-1)<<endl;
	double p=500;
	cout<<" so luong hang hoa co gia nho hon p la : "<<dem(ds,p)<<endl;
	cout<< " cac cah sap sep n ke trong d hang la: "<<endl;

	int k =3;
	vector <Hang> vr;
	sinhtohopcon(ds,vr,k,0);
return 0;
}