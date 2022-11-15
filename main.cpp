#include <iostream>

using namespace std;

int main()
{
   int uang, harga_permen, jumlah_permen, sisa_uang;
   cout << "Masukkan Uang Ardian Rp: ";
   cin >> uang;
   cout << "Berapa harga permen yang ingin dibeli Ardian Rp: ";
   cin >> harga_permen;
   if (harga_permen == 1000)
   {
       jumlah_permen = 3;
       sisa_uang = uang - (jumlah_permen * harga_permen);
       cout << "Ardian membeli : " << jumlah_permen << " permen" << endl;
       cout << "Sisa uangnya sekarang adalah Rp: " << sisa_uang;
   }
   else if (harga_permen == 500)
   {
       jumlah_permen = uang / harga_permen;
       sisa_uang = uang % harga_permen;
       cout << "Ardian membeli : " << jumlah_permen << " permen" << endl;
       cout << "Sisa uangnya sekarang adalah Rp: " << sisa_uang;
   }
   else if (harga_permen == 300)
   {
       for(int i = 300; i<=uang; i=i+300){
        cout << i << " ";
       }
       jumlah_permen = uang / harga_permen;
       sisa_uang = uang % harga_permen;
       cout << endl;
       cout << "Ardian membeli : " << jumlah_permen << " permen" << endl;
       cout << "Sisa uangnya sekarang adalah Rp: " << sisa_uang;
   }
   else{
    jumlah_permen = uang / harga_permen;
    sisa_uang = uang - (jumlah_permen * harga_permen);
    cout << "Ardian membeli : " << jumlah_permen << " permen" << endl;
    cout << "Sisa uangnya sekarang adalah Rp: " << sisa_uang;
   }
}
