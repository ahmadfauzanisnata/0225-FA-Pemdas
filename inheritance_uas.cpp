#include <iostream>
#include <string>
using namespace std;

class SNBT {
    public:
        string nama;

        SNBT(string pNama) :
        nama(pNama) {
            cout << "KATEGORI MAHAL\n" << endl;
        }
        ~SNBT() {
            cout << "KATEGORI SEDANG\n" << endl;
        }

        int jumlah(int a, int b) {
            return a + b;
        }
        
};

class MasukUniversitas : public SNBT {
    public:
    string biaya;
    SNBT(string pTotalbiaya, string pUangsemester) : SNBT(pSnbt), MasukUniversitas(pMasukUniversitas) {
        cout << "pelajar dibuat\n" << endl;
    }
    ~SNBT() {
        cout << "mahal\n" << endl;
    }
    string rekomendasi() {
        return "total biaya " + uang pendaftaran + " uang semester pertama " + uang bangunan + "\n\n";
    }
    
};
int main(){
    SNBT biaya("1OOOOO", "30000000");
    cout << biaya.rekomendasi();
    cout << "Hasil = " << biaya.jumlah(100000, 30000000) << endl;

    return 0;
}