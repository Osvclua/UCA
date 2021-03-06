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
  #define PT "/dev/pts/"
#endif

using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    cerr << "Uso:" << argv[0] << " <nro terminal>" << endl;
    exit(1);
  }
  string pid = to_string(getpid());
  cout << "Pid=" << pid << endl;
  string t(argv[1]), s;
  string term = PT + t;
  ofstream sali(term);
  sali << "Hola mundo" << endl;
  cout << "Pid=" << pid << ", strings a pasar ..." << endl;
  while (cin >> s)
  {
    sali << s << endl;
    cout << "Pid=" << pid << ", strings a pasar ..." << endl;
  }
}
