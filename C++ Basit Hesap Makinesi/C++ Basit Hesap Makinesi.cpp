#include <iostream>
using namespace std;
int main ()
{
int s1, s2, toplam, carpim, bolum, cikarma, s3, sonuc;
cout<<"Lutfen Tercih Yapiniz 1- toplam 2- carpim 3- bolum 4- cikarma : ";
cin>>s3;
cout<<"Bir sayi giriniz : ";
cin>>s1;
cout<<"Tekrar Bir sayi Giriniz : ";
cin>>s2;
if (s3==1)
sonuc=s1+s2;
else if(s3==2)
sonuc=s1*s2;
else if(s3==3)
sonuc=s1/s2;
else if(s3==4)
sonuc=s1-s2;
else
cout<<"Yanlis tercih lutfen tekrar tercih yapiniz";
cout<<" sonuc : "<<sonuc;
}
