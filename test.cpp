#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(void)
{
  vector<string> woot;
  
  woot.push_back("WHOOOOO");
  woot.push_back("BUTTTTTTS");

  for (auto i : woot)
    {
      //cout << i << endl;
    }

  map<string, string> woop;

  woop["yeah"] = "sup";
  woop["ohyeah"] = "ditto";

  for (auto &i : woop)
    {
      cout << woop[i] << endl;
    }

  return 0;
}
