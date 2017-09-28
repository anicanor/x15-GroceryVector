//Authors: Aaron Nicanor, Karnveer Bains, Rudy Lamug

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
 vector<string> list;
 int breakOut = 0;
 char input;
 std::string item;
 do{
  cout<<"Add item to list(a), print list (l), quit(q)."<<endl;
  cin>>input;
  if (input == 'a' || input == 'A'){
   cout<<"Enter the name of your item:"<<endl;
   cin>>item;
   list.push_back(item);
  }else if (input == 'l' || input == 'L'){
   for (int i = 0; i < list.size(); i++){
    cout<<list[i]<<endl;
   }
  }else if (input == 'q' || input == 'Q'){
   breakOut = 1;
  }
 } while (breakOut != 1);

return 0;
}
