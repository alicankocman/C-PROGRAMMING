#include <iostream>
using namespace std;

class complex
{
   public :
      int real, img;
};

int main()
{
   complex a, b, c;

   cout << "a + ib formundaki birinci a ve b sayýlarini girin.";
   cout << "\na = ";
   cin >> a.real;
   cout << "b = ";
   cin >> a.img;
   cout << "c + id formundaki ikinci c ve d sayýlarini girin.";
   cout << "\nc = ";
   cin >> b.real;
   cout << "d = ";
   cin >> b.img;
   
   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if (c.img >= 0)
      cout << "Toplam = " << c.real << " + " << c.img << "i";
   else
      cout << "Toplam = " << c.real << " " << c.img << "i";

   return 0;
}
