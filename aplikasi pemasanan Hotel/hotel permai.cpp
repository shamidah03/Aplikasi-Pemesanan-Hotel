#include <iostream>
#include <conio.h>
#include <string>;

using namespace std;
int main(){
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	long e=500000;
	long f=700000;
	long g=900000;
	long h=1100000;
	int inap,pajak,uang,kembalian;
	int kode;
	int total;
	int tharga;
	string namakamar;
	string jeniskamar;
	string harga;
	cout <<"						aplikasi pemesanan hotel permai"<<endl;
	cout <<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"Daftar kamar tarif"<<endl;
	cout <<"kode kamar  " ;cout<<   "\t\t\tjenis kamar"	;cout<< "\t\t\tnama kamar"	;cout<< "\t\t\ttarif "<<endl;
	cout <<"	1	"			"\t\tsingel	 "			"\t\t\tanggrek	 "			"\t\t\tRp.500000  /malam"<<endl;
	cout <<"	2	"			"\t\tdoble	 "			"\t\t\tkamboja	 "			"\t\t\tRp.700000  /malam"<<endl;
	cout <<"	3	"			"\t\tdeluxe	 "			"\t\t\tcamelia	 "			"\t\t\tRp.900000  /malam"<<endl;
	cout <<"	4	"			"\t\tsuperior"			"\t\t\tmelati	 "			"\t\t\tRp.1100000 /malam"<<endl;
	cout <<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"masukan kode kamar :";
	cin  >>kode;
	if (kode==1){
		namakamar="anggrek";
		jeniskamar="singel";
		harga="500000";
	}else if(kode==2){
		namakamar="kamboja";
		jeniskamar="doble";
		harga="700000";
	}else if(kode==3){
		namakamar="camelia";
		jeniskamar="deluxe";
		harga="900000";
	}else if(kode==4){
		namakamar="melati";
		jeniskamar="superior";
		harga="1100000";
	}
	cout <<"nama kamar	:"<<namakamar<<endl;
	cout <<"jenis kamar	:"<<jeniskamar<<endl;
	cout <<"harga kamar	:"<<harga<<endl;
	cout <<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"lama inap	:";
	cin  >>inap;
	tharga=stoi(harga)*inap;
	cout<<"Total harga	:"<<tharga<<endl;
	cout <<"pajak		:Rp.";
	pajak=tharga*10/100;
	cout <<pajak<<endl;
	cout<<"total		:Rp.";
	total=tharga+pajak;
	cout <<total<<endl;
	cout <<"uang		:Rp.";
	cin >>uang;
	cout <<"kembalian	:Rp.";
	kembalian=uang-total;
	cout <<kembalian<<endl;
	cout <<"--------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"							Terima kasih :)        ";



	_getch();
	return 0;
}
