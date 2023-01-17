#include <iostream>
#include <string>

using namespace std;

const int JABODETABEK_RADIUS = 50; // dalam km

struct Station {
  string name,transit;
  int St_Besar;
  int distance; // dalam km dari pusat Jabodetabek
};
cout<<"Pilih Stasiun Awal\n";
cin>>transit;
if(transit=="ya"){
	cout <<"Pilih stasiun transit anda : "\n;
}
if else (transit=="tidak"){
	cout<<"Pilihan Stasiun Besar:\n1. Jakarta Kota-Bogor\n2. Jatinegara-Manggarai-Cikarang\n";
	cout<<"3. Rangkasbitung-Merak\n4. Tanah Abang-Rangkas Bitung\n5. Jakarta Kota-Tanjung Priok\n6. Duri-Tanggerang\n7. Citayam-Nambo";
	cin >> St_Besar;
	switch (St_Besar){
		case 1:
			cout<<"Pilihan Stasiun:\n1. Jakarta Kota\n2. Jayakarta\n3. Mangga Besar\n3. Sawah Besar\n4. Juanda\n5. Gambir";
			cout<<"6. Gondangdia\n7. Cikini\n8. Manggarai\n9. Tebet\n10. Cawang\n11. Duren Kalibata\n12. Pasar Minggu Baru\n13. Pasar Minggu";
			cout<<"14. Tanjung Barat\n15. Lenteng Agung\n16. Univ. Pancasila\n17. Univ. Indonesia\n18. Pondok Cina\n19. Depok Baru\20. Depok";
			cout<<"21. Citayam\n22. Bojong Gede\n23. Cilebut\n24. Bogor";
			cin>>line1
	}
}
cout<< "=== list stasiun transit akhir===\n\n 1.duri\n2. "
int main() {
  Station stations[] = {
    {"Jakarta Kota", 0},
    {"Manggarai", 10},
    {"Bekasi", 20},
    {"Tangerang", 30},
    {"Depok", 40},
    {"Bogor", 50},
  };
  int n = sizeof(stations) / sizeof(stations[0]);

  string origin, destination;
  cout << "Masukkan stasiun asal: ";
  getline(cin, origin);
  cout << "Masukkan stasiun tujuan: ";
  getline(cin, destination);

  int originIndex, destinationIndex;
  for (int i = 0; i < n; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }

  int distance = stations[destinationIndex].distance - stations[originIndex].distance;
  cout << "Jarak perjalanan adalah " << distance << " km." << endl;

  return 0;
}
