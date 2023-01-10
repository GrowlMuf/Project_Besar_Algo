#include <iostream>
#include <string>
using namespace std;

int main(){
	float x;
	cout << "masukkan nilai :";cin >> x;
      if(x >= 81){
      	cout << "Nilai Anda A";
	  }
	  else if(x >= 76 && x < 81){
	  	cout << "Nilai Anda A-";
	  }
	  else if(x >= 72 && x < 76 ){
	  	cout << "Nilai Anda B+";
	  }
	  else if(x >= 68 && x < 72){
	  	cout << "Nilai Anda B";
	  }
	  else if(x >= 64 && x < 68){
	  	cout << "Nilai Anda B-";
	  }
	  else if(x >= 60 && x < 64){
	  	cout << "Nilai Anda C+";
	  }
	  else if(x >= 56 && x < 60){
	  	cout << "Nilai Anda C";
	  }
	  else if(x >= 41 && x < 56){
	  	cout << "Nilai Anda D";
	  }
	  else{
	  	cout << "Nilai Anda E";
	  }
	  
	return 0;
}
