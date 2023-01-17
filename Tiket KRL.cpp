#include <iostream>
using namespace std;

void bogor(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Jayakarta"<<endl;
	cout<<"3. Mangga Besar"<<endl;
	cout<<"4. Sawah Besar"<<endl;
	cout<<"5. Juanda"<<endl;
	cout<<"6. Gambir"<<endl;
	cout<<"7. Gondangdia"<<endl;
	cout<<"8. Cikini"<<endl;
	cout<<"9. Manggarai"<<endl;
	cout<<"10. Tebet"<<endl;
	cout<<"11. Cawang"<<endl;
	cout<<"12. Duren kalibata"<<endl;
	cout<<"13. Pasar Minggu Baru"<<endl;
	cout<<"14. Pasar Minggu"<<endl;
	cout<<"15. Tanjung Barat"<<endl;
	cout<<"16. Lentang Agung"<<endl;
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
}

void garis(){
	cout<<"--------------------\n";
}

int main(){
	int lin;
	garis();
	cout<<"1. Line Lngkar Cikarang"<<endl;
	cout<<"2. Line Bogor"<<endl;
	cout<<"3. Line Rangkasbitung"<<endl;
	cout<<"4. Line Tanjung Priok"<<endl;
	cout<<"5. Line Tanggerang"<<endl;
	cout<<"Pilih Jalur Kereta : ";cin>>lin;
	if(lin==2){
		bogor();
		cout<<"Plih Stasiun Awal"<<endl;
	}else if(lin==3){
		rangkasbitung();
		cout<<"Plih Stasiun Awal"<<endl;
	}else if(lin==4){
		priok();
		cout<<"Plih Stasiun Awal"<<endl;
	}else if(lin==5){
		tanggerang();
		cout<<"Plih Stasiun Awal"<<endl;
	}else{
		cout<<"Plihan Tidak Ada"<<endl;
	}
	garis();
	
	return 0;
}