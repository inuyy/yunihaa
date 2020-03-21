#include <iostream>

using namespace std;

int main()
{
	int angka;{
     	cout<<"pilih kamar hotel yang akan anda booking : " <<endl;
	 	cout<<"1.lestari 260 "<<endl;
	 	cout<<"2.lotus 123"<<endl;
	 	cout<<"3.grand surya 235"<<endl;
	 	cout<<"4.gerai indah 446"<<endl;
	 	cin>>(angka);
	}
	 
	 		 
	cout<<"Masukan Tipe hotel Yang Ingin Anda booking : ";
	cin>>angka;
	
	switch(angka){
		case 1:
			cout<<"Harga booking hotel lestari 260 500rb/hari "<<endl;
			break;
		case 2:
			cout<<"Harga booking hotel lotus 123 1jt/hari "<<endl;
			break;
		case 3:
			cout<<"Harga booking hotel grand surya 235 250rb/hari "<<endl;
			break;
		case 4:
			cout<<"Harga booking hotel gerai indah 446 890rb/hari "<<endl;
			break;
		
			
	}
	system("pause");
	return 0;
}

