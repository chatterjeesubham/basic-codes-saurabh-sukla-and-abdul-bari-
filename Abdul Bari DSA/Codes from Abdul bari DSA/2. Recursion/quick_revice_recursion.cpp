

#include <iostream>
using namespace std;
void
funhead (int n)
{
  if (n > 0)
	{
	  funhead (n - 1);
	  cout << n << " ";
	}
}

void
funtail (int n)
{
  if (n > 0)
	{
	  cout << n << " ";
	  funtail (n - 1);
	}
}

int funlocal (int n)
{
  if (n > 0)
	{
	  return funlocal (n - 1) + n;
	}
  return 0;
}

//int x=0;
int funstatic (int n)
{
  static int x = 0;
  if (n > 0)
	{
	  x++;
	  return funstatic (n - 1) + x;
	}
  return 0;
}

void funtree (int n)
{
  if (n > 0)
	{
	  cout << n << " ";
	  funtree (n - 1);
	  funtree (n - 1);
	}
}

void indirectfunB (int);
void indirectfunA (int n)
{
  if (n > 0)
	{
	  cout << n << " ";
	  indirectfunB (n - 1);
	}
}
void indirectfunB(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        indirectfunA(n/2);
    }
}
int nestedfun(int n)
{
    if(n>100)
        return (n-10);
    else
        return nestedfun(nestedfun(n+11));
}
int main ()
{

// funhead (3);
// cout<<endl;
// funtail (3);
// cout<<funlocal (3);
// cout<<funstatic(3);
// funtree(3);
  int r = 20;
  indirectfunA(r);
// cout<<endl<<nestedfun(98);


  return 0;
}




