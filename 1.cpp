#include<iostream>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int i;
  for (int i = 2; i < n; i++) 
    {
      if (n % i == 0) // will enter this loop when condition will be true ..else not(out of loop)
	{
	  cout << "not a prime no" << endl;
	  break;
	}
	
	/*   wrong  ('55' test case fail  ) if will enter immidiately on else when if condition false [we cant conclude it is prime untill all iteration is finished]*/ 
	
//       else 
//       {
//           cout<<"prime no "<<endl;
//           break;
//       }
    
    
    }
  if (i == n) // did it competed the all iteration?
    {
      cout<<"prime no "<<endl;
    }



  return 0;
}




//OR//



#include<iostream>
#include<cmath>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  bool flag=0;
  int i;
  for (int i = 2; i < sqrt(n); i++) 
    {
      if (n % i == 0) // will enter this loop when condition will be true ..else not(out of loop)
	{
	  cout << "not a prime no" << endl;
	  break;
	  flag=1;
	}
	
	/*   wrong  ('55' test case fail  ) if will enter immidiately on else when if condition false [we cant conclude it is prime untill all iteration is finished]*/ 
	
//       else 
//       {
//           cout<<"prime no "<<endl;
//           break;
//       }
    
    
    }
  if (flag==0) // did it competed the all iteration?
    {
      cout<<"prime no "<<endl;
    }



  return 0;
}
