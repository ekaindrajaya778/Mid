#include <iostream.h>
#include <conio.h>

void main(){
char nama[30],NIM[10],NilaiHuruf;
int a,b,c,d,e,totalnt,totalt,nilaim,nilaif,na;
cout<<"Nama Mahasiswa = ";cin>>nama;
cout<<"Nim Mahasiswa = ";cin>>NIM;
cout<<"Nilai Tugas 1 = ";cin>>a;
cout<<"Nilai Tugas 2 = ";cin>>b;
cout<<"Nilai Tugas 3 = ";cin>>c;
cout<<"Nilai Mid     = ";cin>>d;
cout<<"Nilai Final   = ";cin>>e;
totalnt = (a+b+c)/3;
totalt  = totalnt * 20/100;
nilaim = d*40/100;
nilaif = e*40/100;
na      = totalt +nilaim+nilaif;
if ((na>=80) && ( na<=100))
NilaiHuruf ='A';

 else if ((na>=70) && ( na<=79))
  NilaiHuruf ='B';

 else if ((na>=60)  && ( na<=69))
 NilaiHuruf ='C';

 else if ((na>=50)  && ( na<=59))
 NilaiHuruf ='D';

 else if (na<50)
    NilaiHuruf ='E';
cout<<"\nNama mahasiswa = "<<nama;
cout<<"\nNim Mahasiswa  = "<<NIM;
cout<<"\nNilai Akhir    = "<<na;
cout<<"\nNilai Huruf    = "<<NilaiHuruf;
getch();
}

