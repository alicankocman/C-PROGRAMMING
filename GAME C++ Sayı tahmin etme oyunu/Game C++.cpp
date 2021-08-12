#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int gs,ts,h;
char a=-128;
int main()
{
srand(time(0));
ts=rand()%100 + 1;
cout<<" sayi giriniz : "; cin>>gs;
for (h-2;h<10;h++)
{
if (gs>ts) {cout<<h<<" Daha Kucuk Sayi Giriniz- "; cin>>gs; continue;} 
if (gs<ts) {cout<<h<<" Daha Buyuk Sayi Giriniz= "; cin>>gs; continue;}
if (gs=ts) {cout<<h<<" tebrik ederim "; goto son;}
}
cout<<"Kaybettin lütfen birdaha dene :). Tutulan sayi :"<<ts;
son:
return 0;
}
  

