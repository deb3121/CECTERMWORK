#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int num, char source, char auxiliary, char destination)
{
    if(num==1)
    {            
        cout << "Move disk 1 from rod " << source <<  " to rod " << destination <<endl;
        return;
     }
    towerOfHanoi(num-1,source,destination,auxiliary);     
    cout << "Move disk " << num << " from rod " << source << " to rod " << destination << endl; 
    towerOfHanoi(num-1,auxiliary,source,destination);      
    
}
int main()
{
    int num;              
    cin>>num;
    towerOfHanoi(num,'A','B','C');
    return 0;
}