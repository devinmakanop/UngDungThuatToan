#include<bits/stdc++.h>
using namespace std;

struct HANG{
	string ten;
	double khoiluong;
	double gia;
};
void Swap(HANG &a, HANG &b) {
    HANG tmp=a;
    a=b;
    b=tmp;
}
void hoanViQuayLui(vector <HANG> arr, int k) {
    int t = arr.size();
    if(k==t) {
        for(int i=0; i<t; i++) {
            cout <<arr[i].ten << " ";
        }
        cout << endl;
    } else {
        for(int i=k; i<t; i++) {
            swap(arr[k],arr[i]);
            hoanViQuayLui(arr,k+1);
            swap(arr[k],arr[i]);
        }
    }
}
void sinhToHopCon(int k, int index, vector <HANG> vr, vector <HANG> tmp) {
    int t=tmp.size();
    if(k==0) {
        for(HANG s: vr) {
            hoanViQuayLui(vr,k);
        }
        cout << endl;
        return;
    }
    for( int i=index ; i<t ; i++ ) {
        vr.push_back(tmp[i]);
        sinhToHopCon(k-1,i+1,vr,tmp);
        vr.pop_back();
    }
}

int main() {
    vector <HANG> DS;
	HANG h1={"a",1.2,100};
	HANG h2={"b",1.6,300};
	HANG h3={"c",2.5,500};
	HANG h4={"d",1.1,500};
	HANG h5={"e",2.1,300};
	HANG h6={"f",1.9,200};
	DS.push_back(h1);
	DS.push_back(h2);
	DS.push_back(h3);
	DS.push_back(h4);
	DS.push_back(h5);
	DS.push_back(h6);
	int k=4;
	vector <HANG> vr;
	sinhToHopCon(k,0,vr,DS);
}