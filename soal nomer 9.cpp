#include<iostream>

using namespace std;

class clsHitungHari{
	
	private:
		//atribute
		double satuLembar;
			
		//method
		void setsatuLembar(){
			satuLembar=1/lembarPerHari;
		}
			
	public:
		//atribute
		double lembarPerHari, jumlahLembar,hari;	
		
		//method
		double getHari(){
			setsatuLembar();
			hari=jumlahLembar*satuLembar;
			
			return hari;
		}
		
};

int main(){
	
	clsHitungHari objHari;
	
	objHari.lembarPerHari=0.5;
	objHari.jumlahLembar=50;
	
	cout<<"Lama Mahasiswa A menghabiskan 1 buku adalah "<<objHari.getHari()<<" hari";
	
}
