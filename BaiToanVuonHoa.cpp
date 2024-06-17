#include <bits/stdc++.h>

using namespace std;

struct HangHoa {
    string ten;
    int khoiLuong;
    int giaBan;
};

HangHoa dsHangHoa[] = {
    {"HangHoa1", 1, 1000},
    {"HangHoa2", 2, 1500},
    {"HangHoa3", 3, 2000},
    {"HangHoa4", 1, 1200},
    {"HangHoa5", 2, 2500},
    {"HangHoa6", 1, 1800}
};

const int soLuongHangHoa = sizeof(dsHangHoa) / sizeof(dsHangHoa[0]);

void hienThiSapXep(int sapXep[]) {
    for (int i = 0; i < soLuongHangHoa; i++) {
        cout << dsHangHoa[i].ten << " -> Ke " << sapXep[i] + 1 << endl;
    }
    cout << "-----------------------------------------" << endl;
}

void sinhCacSapXep(int sapXep[], int viTri) {
    if (viTri == soLuongHangHoa) {
        hienThiSapXep(sapXep);
        return;
    }

    for (int i = 0; i < soLuongHangHoa; i++) {
        bool daSuDung = false;
        for (int j = 0; j < viTri; j++) {
            if (sapXep[j] == i) {
                daSuDung = true;
                break;
            }
        }
        if (!daSuDung) {
            sapXep[viTri] = i;
            sinhCacSapXep(sapXep, viTri + 1);
        }
    }
}

int main() {
    int sapXep[soLuongHangHoa] = {0}; 
    sinhCacSapXep(sapXep, 0);
    return 0;
}