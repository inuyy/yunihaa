#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 double kodeverifikasi;	
 char skor;
 
 cout<<"Masukkan kode verifikasi : " ;
 cin>>kodeverifikasi;
 
 if(kodeverifikasi>= 021)
 skor = 'A' ;
 else
 
  if(kodeverifikasi>= 4343)
 skor = 'B' ;
 else
 
  if(kodeverifikasi>= 4160)
 skor = 'C' ;
 else
 
  if(kodeverifikasi>= 2306)
 skor = 'D' ;
 else
 skor  = 'E';
 
 cout<<" skor : "<<skor<<endl;
 getch() ;
 
}
