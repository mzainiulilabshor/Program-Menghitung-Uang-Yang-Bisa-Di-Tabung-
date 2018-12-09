#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   int penghasilan,biaya_makan,biaya_pulsa,biaya_bensin,biaya_service_motor,biaya_kost,biaya_listrik,biaya_takterduga;
   cout << " Mari kita menghitung uang sisa yang bisa kita tabung dalam sebulan " << endl;
   cout<<endl;
   cout<< " Berapa pendapatan anda dalam sebulan ? : ";
   cin >> penghasilan;
   cout<< " Bepara biaya makan anda dalam sebulan ? : ";
   cin >> biaya_makan;
   cout<< " Bepara biaya pulsa anda dalam sebulan ? : ";
   cin >> biaya_pulsa;
   cout<< " Bepara biaya bensin anda dalam sebulan ? : ";
   cin >> biaya_bensin;
   cout<< " Bepara biaya service motor anda dalam sebulan : ? ";
   cin >> biaya_service_motor;
   cout<< " Bepara biaya kost anda dalam sebulan ? : ";
   cin >> biaya_kost;
   cout<< " Bepara biaya listrik anda dalam sebulan ? : ";
   cin >> biaya_listrik;
   cout<< " Bepara biaya tak terduga anda dalam sebulan ? : ";
   cin >> biaya_takterduga;
   cout<< endl;
   int biaya=biaya_makan+biaya_pulsa+biaya_bensin+biaya_service_motor+biaya_kost+biaya_listrik+biaya_takterduga;
   int sisa=penghasilan-biaya;
   cout << " Uang yang tersisa untuk di tabung adalah RP. " << sisa;
   getch();
   return 0;
}
