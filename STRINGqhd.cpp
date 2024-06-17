#include <bits/stdc++.h>
using namespace std;





void check(string a,string b,int dd[][100], int m , int n){
	
	for ( int i = 0; i<=n; i++){
		dd[i][0]=0;
	}
	for ( int i = 0; i<=m; i++){
		dd[0][i]=0;
	}
	
	for (int i = 1; i<= n ; i++){
		for ( int j = 1; j<= m ; j++){
			if(a[i-1]==b[j-1]){
				dd[i][j]=dd[i-1][j-1]+1;
			}
			else {
				dd[i][j]= max(dd[i-1][j], dd[i][j-1]);
			}
		}
	}
	
}

void  timsaucon(string a, string b, int dd[][100],int i , int j, string &s){
   
    
	while (dd[i][j] !=0){
		if(a[i-1]==b[j-1]){
			s+=a[i-1];
			i--;j--;
			
		}
		else {
			if(dd[i-1][j]>dd[i][j-1])i--;
			else {
				j--;
			}
		}
	}

}

int main (){
	string a ="FJFEIDHEKH";
	string b ="OIFDIDGFHK";
	int n = a.size();
	int m = b.size();
	int dd[n][100];
	check(a,b,dd,m,n);
	for ( int i = 0; i<=n; i++){
		for ( int j = 0;j<=m; j++){
			cout<<dd[i][j]<<" ";
		}
		cout << endl;
	}
	string s="";
	timsaucon(a,b,dd,n,m,s);
	cout<<"Sau con lon nhat: ";
	for ( int i = s.size()-1; i>=0; i--){
		cout<<s[i];
	}
return 0;
} 