#include <iostream>
#include <string>
#include <cmath>
#include <array>
using namespace std;

const int JABODETABEK_RADIUS = 100;
	int lin, linakhir, awal, akhir;
	string origin, destination;
struct Station {
  string name;
  float distance; // dalam km dari pusat Jabodetabek
};
struct Station2 {
  string name;
  float distance; // dalam km dari pusat Jabodetabek
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
	cout<<"12. Duren Kalibata"<<endl;
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
	Station stations[] = {
    {"1", 0},{"2", 1.6},{"3", 3.6},{"4", 5.4},{"5", 7.9},
	{"6", 10.4},{"7", 11.6},{"8", 13.9},{"9", 15.5},{"10", 17.6},
	{"11", 19.2}
  };
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
		
	Station stations[] = {
    {"1", 0},{"2", 3.2},{"3", 6.9},{"4", 13.1},{"5", 15.5},
	{"6", 17.3},{"7", 21.8},{"8", 24.2},{"9", 25.9},{"10", 28.4},
	{"11", 34.4},{"12", 41.4},{"13", 44},{"14", 47.9},{"15", 50.8},
    {"16", 53.4},{"17", 55.2},{"18", 62.5},{"19", 72.3}
  };
}

void priok(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Kampung Bandan"<<endl;
	cout<<"3. Ancol"<<endl;
	cout<<"4. Tanjung Priok"<<endl;
	
	Station stations[] = {
    {"1", 0},{"2", 1.36},{"3", 3.5},{"4", 8.1}, 	
  };
}

void garis(){
	cout<<"-------------------------------------------\n";
}

void itung11(){
	Station stations[] = {
    {"1", 0},{"2", 4.15},{"3", 6.85},{"4", 10},{"5", 15},
	{"6", 17.5},{"7", 20},{"8", 23.1},{"9", 24.5},{"10", 25.8},
	{"11", 28.9},{"12", 32.3},{"13", 33.4},{"14", 34.9},{"15", 38.1},
    {"16", 39},{"17", 41},{"18", 44.6},{"19", 45.8},{"20", 42.6},
	{"21", 41.2},{"22", 39.3},{"23", 37.9},{"24", 36.3},{"25", 35.3},
	{"26", 33},
  };
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 0; i < 26; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
  garis();
  cout << "Jarak perjalanan adalah " << sqrt(distance*distance) << " KM." << endl;
}

void itung12(){
	Station stations[] = {
    {"1", 0},{"2", 4.15},{"3", 6.85},{"4", 10},{"5", 15},
	{"6", 17.5},{"7", 20},{"8", 23.1},{"9", 24.5},{"10", 25.8},
	{"11", 28.9},{"12", 32.3},{"13", 33.4},{"14", 34.9},{"15", 38.1},
    {"16", 39},{"17", 41},{"18", 44.6},{"19", 45.8},{"20", 42.6},
	{"21", 41.2},{"22", 39.3},{"23", 37.9},{"24", 36.3},{"25", 35.3},
	{"26", 33},
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 26; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		bogor();
		Station2 stations2[] = {
    {"1", 0},{"2", 1.48},{"3", 2.50},{"4", 3.67},{"5", 4.38},
	{"6", 5.5},{"7", 6.58},{"8", 8.28},{"9", 9.88},{"10", 12.4},
	{"11", 13.7},{"12", 15.2},{"13", 16.7},{"14", 18.4},{"15", 21.5},
    {"16", 23.9},{"17", 24.9},{"18", 27.2},{"19", 28.3},{"20", 30.9},
	{"21", 32.6},{"22", 37.7},{"23", 42.9},{"24", 47.2},{"25", 54.8},
	{"26", 44.5},{"27", 51.0}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 27; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 34 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 9;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
  garis();
  cout << "Jarak perjalanan adalah " << sqrt(distance3*distance3) << " KM." << endl;
}

int main(){
	int preline1, preline2, lin, linakhir, awal, akhir;
	string origin, destination;
	garis();
	cout<<" PILIH LINE AWAL DAN AKHIR "<<endl;
	garis();
	cout<<"1. Line Lingkar Cikarang"<<endl;
	cout<<"2. Line Bogor"<<endl;
	cout<<"3. Line Rangkasbitung"<<endl;
	cout<<"4. Line Tanjung Priok"<<endl;
	cout<<"5. Line Tanggerang"<<endl;
	garis();
	cout<<"Stasiun Asal Berada Pada Lintasan: ";
	cin>>preline1;
	cout<<"Stasiun Tujuan Berada Pada Lintasan: ";
	cin>>preline2;
	garis();
	
	switch(preline1){
		case 1:
			if (preline2==1){cout<<"Anda Tidak Perlu Transit\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
		itung11();
			garis();
			break;
			}
			
			else if(preline2==2){cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
		itung12();
			garis();
			
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Tanah Abang\n";
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Kampung Bandan\n";
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Duri\n";
			break;
			}
			
		case 2:
			if (preline2==1){cout<<"Anda Perlu Transit di Manggarai\n";
			break;
			}
			else if(preline2==2){cout<<"Anda Tidak Perlu Transit\n";
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Manggarai dan Tanah Abang\n";
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Jakarta Kota\n";
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Manggarai dan Duri\n";
			break;
			}
		
		case 3:
			if (preline2==1){cout<<"Anda Perlu Transit di Tanah Abang\n";
			break;
			}
			else if(preline2==2){cout<<"Anda Perlu Transit di Tanah Abang dan Manggarai\n";
			break;
			}
			else if(preline2==3){cout<<"Anda Tidak Perlu Transit\n";
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Tanah Abang dan Kampung Bandan\n";
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Tanah Abang dan Duri\n";
			break;
			}
		
		case 4:
			if (preline2==1){cout<<"Anda Perlu Transit di Kampung Bandan\n";
			break;
			}
			else if(preline2==2){cout<<"Anda Perlu Transit di Jakarta Kota\n";
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Kampung Bandan dan Tanah Abang\n";
			break;
			}
			else if(preline2==4){cout<<"Anda Tidak Perlu Transit\n";
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Kampung Bandan dan Duri\n";
			break;
			}
			
		case 5:
			if (preline2==1){cout<<"Anda Perlu Transit di Duri\n";
			break;
			}
			else if(preline2==2){cout<<"Anda Perlu Transit di Duri dan Manggarai\n";
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Duri dan Tanah Abang\n";
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Duri dan Kampung Bandan\n";
			break;
			}
			else if(preline2==5){cout<<"Anda Tidak Perlu Transit\n";
			break;
			}
	}
	
	

	return 1;
}
