// NO FUNCINA; NO SE PUEDE REDIRECCIONAR ASI EL STDIN 
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#if defined(__APPLE__) && defined(__MACH__)
	/* Apple OSX and iOS (Darwin). ------------------------------ */
  #define PT "/dev/ttys"
  #elif defined(__linux__)
  #define PT  "/dev/pt"
#endif
using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    cerr << "Uso:" << argv[0] << " <nro terminal>" << endl;
    exit(1);
  }
  string t(argv[1]), aux;

  string term = PT + t;

  cout << "term=" << term << endl;
  ofstream termi2(term);
  ifstream termi2in(term);
  termi2 << "Hola mundo, Quien sos?" << endl;
  termi2in >> aux;
  termi2 << "Hola " << aux << endl;
}
