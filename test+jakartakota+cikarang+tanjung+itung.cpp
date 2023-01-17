#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int JABODETABEK_RADIUS = 100;
	int lin, linakhir, awal, akhir;
	string origin, destination;
struct Station {
  string name;
  double distance; // dalam km dari pusat Jabodetabek
};

void cikarang(){
	cout<<"1. Cikarang"<<endl;
	cout<<"2. Metland Telaga Murni"<<endl;
	cout<<"3. Cibitung"<<endl;
	cout<<"4. Tambun"<<endl;
	cout<<"5. Bekasi Timur"<<endl;
	cout<<"6. Bekasi"<<endl;
	cout<<"7. Kranji"<<endl;
	cout<<"8. Cakung"<<endl;
	cout<<"9. Klender Baru"<<endl;
	cout<<"10. Buaran"<<endl;
	cout<<"11. Klender"<<endl;
	cout<<"12. Jatinegara"<<endl;
	cout<<"13. Matraman"<<endl;
	cout<<"14. Manggarai"<<endl;
	cout<<"15. Sudirman"<<endl;
	cout<<"16. Karet"<<endl;
	cout<<"17. Tanah Abang"<<endl;
	cout<<"18. Duri"<<endl;
	cout<<"19. Angke"<<endl;
	cout<<"20. Kampung Bandan"<<endl;
	cout<<"21. Rajawali"<<endl;
	cout<<"22. Kemayoran"<<endl;
	cout<<"23. Pasar Senen"<<endl;
	cout<<"24. Gang Sentiong"<<endl;
	cout<<"25. Kramat"<<endl;
	cout<<"26. Pondok Jati"<<endl;
	
		Station stations[] = {
    {"1", 0},{"2", 4.15},{"3", 6.85},{"4", 10},{"5", 15},
	{"6", 17.5},{"7", 20},{"8", 23.1},{"9", 24.5},{"10", 25.8},
	{"11", 28.9},{"12", 32.3},{"13", 33.4},{"14", 34.9},{"15", 38.1},
    {"16", 39},{"17", 41},{"18", 44.6},{"19", 45.8},{"20", 42.6},
	{"21", 41.2},{"22", 39.3},{"23", 37.9},{"24", 36.3},{"25", 35.3},
	{"26", 33},
  };

}

void bogor(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Jayakarta"<<endl;
	cout<<"3. Mangga Besar"<<endl;
	cout<<"4. Sawah Besar"<<endl;
	cout<<"5. Juanda"<<endl;
	cout<<"6. Gambir(tidak beroperasi)"<<endl;
	cout<<"7. Gondangdia"<<endl;
	cout<<"8. Cikini"<<endl;
	cout<<"9. Manggarai"<<endl;
	cout<<"10. Tebet"<<endl;
	cout<<"11. Cawang"<<endl;
	cout<<"12. Duren kalibata"<<endl;
	cout<<"13. Pasar Minggu Baru"<<endl;
	cout<<"14. Pasar Minggu"<<endl;
	cout<<"15. Tanjung Barat"<<endl;
	cout<<"16. Lenteng Agung"<<endl;
	cout<<"17. Univ. Pancasila"<<endl;
	cout<<"18. Univ. Indonesia"<<endl;
	cout<<"19. Pondok Cina"<<endl;
	cout<<"20. Depok Baru"<<endl;
	cout<<"21. Depok"<<endl;
	cout<<"22. Citayam"<<endl;
	cout<<"23. Bojong Gede"<<endl;
	cout<<"24. Cilebut"<<endl;
	cout<<"25. Bogor"<<endl;
	cout<<"26. Cibinong"<<endl;
	cout<<"27. Nambo"<<endl;
		Station stations[] = {
    {"1", 0},{"2", 1.48},{"3", 2.50},{"4", 3.67},{"5", 4.38},
	{"6", 5.5},{"7", 6.58},{"8", 8.28},{"9", 9.88},{"10", 12.4},
	{"11", 13.7},{"12", 15.2},{"13", 16.7},{"14", 18.4},{"15", 21.5},
    {"16", 23.9},{"17", 24.9},{"18", 27.2},{"19", 28.3},{"20", 30.9},
	{"21", 32.6},{"22", 37.7},{"23", 42.9},{"24", 47.2},{"25", 54.8},
	{"26", 44.5},{"27", 51.0}
  };

}

void tanggerang(){
	cout<<"1. Tanggerang"<<endl;
	cout<<"2. Tanah Tinggi"<<endl;
	cout<<"3. Batu Ceper"<<endl;
	cout<<"4. Poris"<<endl;
	cout<<"5. Kali Deres"<<endl;
	cout<<"6. Rawa Buaya"<<endl;
	cout<<"7. Bojong Indah"<<endl;
	cout<<"8. Taman Kota"<<endl;
	cout<<"9. Pesing"<<endl;
	cout<<"10. Grogol"<<endl;
	cout<<"11. Duri"<<endl;
}

void rangkasbitung(){
	cout<<"1. Tanah Abang"<<endl;
	cout<<"2. Pal Merah"<<endl;
	cout<<"3. Kebayoran"<<endl;
	cout<<"4. Pondok Ranji"<<endl;
	cout<<"5. Jurang Mangu"<<endl;
	cout<<"6. Sudimara"<<endl;
	cout<<"7. Rawa Buntu"<<endl;
	cout<<"8. Serpong"<<endl;
	cout<<"9. Cisauk"<<endl;
	cout<<"10. Cicayur"<<endl;
	cout<<"11. Parung Panjang"<<endl;
	cout<<"12. Cilejit"<<endl;
	cout<<"13. Daru"<<endl;
	cout<<"14. Tenjo"<<endl;
	cout<<"15. Tigaraksa"<<endl;
	cout<<"16. Cikoya"<<endl;
	cout<<"17. Maja"<<endl;
	cout<<"18. Citeras"<<endl;
	cout<<"19. Rangkasbitung"<<endl;
}

void priok(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Kampung Bandan"<<endl;
	cout<<"3. Ancol"<<endl;
	cout<<"4. Tanjung Priok"<<endl;
	
		Station stations[] = {
    {"1", 0},{"2", 1.364},{"3", 3.549},{"4", 8.115}, 	
  };
	
	
}

void garis(){
	cout<<"--------------------\n";
}

int main(){
	int lin, linakhir, awal, akhir;
	string origin, destination;
	garis();
	cout<<" PILIH STASIUN ASAL "<<endl;
	garis();
	cout<<"1. Line Lingkar Cikarang"<<endl;
	cout<<"2. Line Bogor"<<endl;
	cout<<"3. Line Rangkasbitung"<<endl;
	cout<<"4. Line Tanjung Priok"<<endl;
	cout<<"5. Line Tanggerang"<<endl;
	garis();
	cout<<"Pilih Jalur Kereta : ";
	cin>>lin;
	garis();
	
	if(lin==1){
		cikarang();
		garis();
		cout<<"Pilih Stasiun Awal:"<<endl;
		getline(cin, origin);
	}else if(lin==2){
		bogor();
		garis();
		cout<<"Plih Stasiun Awal:"<<endl;
		cin>>awal;
	}else if(lin==3){
		rangkasbitung();
		garis();
		cout<<"Plih Stasiun Awal:"<<endl;
		cin>>awal;
	}else if(lin==4){
		priok();
		garis();
		cout<<"Plih Stasiun Awal:"<<endl;
		cin>>awal;
	}else if(lin==5){
		tanggerang();
		garis();
		cout<<"Plih Stasiun Awal:"<<endl;
		cin>>awal;
	}else{
		cout<<"Plihan Tidak Ada"<<endl;
	}
	garis();
	
	garis();
	cout<<" PILIH STASIUN TUJUAN "<<endl;
	garis();
	cout<<"1. Line Lingkar Cikarang"<<endl;
	cout<<"2. Line Bogor"<<endl;
	cout<<"3. Line Rangkasbitung"<<endl;
	cout<<"4. Line Tanjung Priok"<<endl;
	cout<<"5. Line Tanggerang"<<endl;
	garis();
	cout<<"Pilih Jalur Kereta : ";
	cin>>linakhir;
	garis();
	
	if(linakhir==1){
		cikarang();
		garis();
		cout<<"Pilih Stasiun Akhir: ";
		getline(cin, destination);
	}else if(linakhir==2){
		bogor();
		garis();
		cout<<"Pilih Stasiun Akhir: ";
		cin>>akhir;
	}else if(linakhir==3){
		rangkasbitung();
		garis();
		cout<<"Pilih Stasiun AKhir: ";
		cin>>akhir;
	}else if(linakhir==4){
		priok();
		garis();
		cout<<"Pilih Stasiun Akhir: ";
		cin>>akhir;
	}else if(linakhir==5){
		tanggerang();
		garis();
		cout<<"Pilih Stasiun Akhir: ";
		cin>>akhir;
	}else{
		cout<<"Pilihan Tidak Ada "<<endl;
	}
	
	
	    int n = sizeof(stations) / sizeof(stations[0]);
    int originIndex, destinationIndex;
  for (int i = 0; i < n; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   double distance = stations[destinationIndex].distance - stations[originIndex].distance;
  cout << "Jarak perjalanan adalah " << sqrt(distance*distance) << " KM." << endl;

	return 0;
}
