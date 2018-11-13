#include <iostream>
#include <time.h>
#include <iomanip>
#include <cmath>

using namespace std;

#define IA 16807
#define IM 2147483647
#define AM (1.0/IM)
#define IQ 127773
#define IR 2836
#define MASK 123459876

typedef struct Ran0
{

  float ran0(long *idum)
  {
    long k;
    float ans;

    *idum ^= MASK;
    k=(*idum)/IQ;
    *idum=IA*(*idum-k*IQ)-IR*k;

    if (*idum < 0) *idum += IM;
    ans=AM*(*idum);
    *idum ^= MASK;

    return ans;
  }

  void line()
  {
    for(int i=1;i<30;i++)
    cout<<"--";
    cout<<"\n";
  }

}R0;


int main ()
{
  R0 n;
  long seed= 123456789;
  long *idum=&seed;
  int N;
  float r,h,s;
  float f,fsum,a,prom,riemann, area, volumen,x,v;
  int puntosdentro;

  r=1;
  h=5;
  s= sqrt(2);
  area=0;
  volumen=0;

  cout << "Ingresa el numero de puntos que vas a calcular: " << endl;
  cin >> N;

  puntosdentro=0;

  for (int i=0; i<N; i++)
  {
    x= r*(2.0 * n.ran0(idum)-1.0);
    a= (x*x)/r;

    if(a<x)
    {
      f= h*(x-a);
      fsum+=f;
      puntosdentro ++;
    }
  }

  prom= fsum/puntosdentro;
  v= 2* M_PI *r*prom;

  area= M_PI * r * s + M_PI * r * r;
  volumen= (M_PI * r * r * h)/3;


  cout << "El area de superficie real del cono es:" << endl;
  cout << area << endl;

  cout << "El volumen real del cono es:" << endl;
  cout << volumen << endl;


  cout << "El volumen del cono es: " << endl;
  cout << v << endl;

  cout << "Numero de puntos: "<< puntosdentro <<endl;



 return 0;
}
