#include<bits/stdc++.h>
   using namespace std;

   class toh{                
       public:
         char from;
         char to;
         char aux;
         int n;
   };

   void towerOfHanoi(int n, char source, char auxiliary, char destination){

        stack<toh> stack;      

        while(n>=1 or !stack.empty()){
            while(n>=1){                 

                toh current;
                current.from=source;
                current.aux=auxiliary;              
                current.to=destination;
                current.n=n;
                stack.push(current);
                swap(destination,auxiliary);
                n--;
            }

            toh current = stack.top();
            stack.pop();
            cout << "Move disk " << current.n << " from rod " << current.from << 
                            " to rod " << current.to << endl; 

            if(current.n>=1)
            {
                source=current.aux;           
                auxiliary=current.from;            
                destination=current.to;
                n=current.n-1; 
           }
    }
}

int main(){
     int n;              
     cin>>n;
     towerOfHanoi(n,'A','B','C');

     return 0;
}