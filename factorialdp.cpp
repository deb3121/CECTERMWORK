#include <iostream>
using namespace std;
int result[1000] = {0};
int fact(int num) {
   if (num >= 0) {
      result[0] = 1;
      for (int i = 1; i <= num; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[num];
   }
}
int main() {
   int num;
   while (1) {
      cout<<"Enter a number(enter 0 to exit): ";
      cin>>num;
      if (num == 0)
      break;
      cout<<fact(num)<<endl;
   }
   return 0;
}