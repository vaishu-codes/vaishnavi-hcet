#include <iostream>

using namespace std;

int main(){
  int n,arrivalTime,burstTime,
  currentTime  =0;
  
  cout<<"Enter processes:";
  cin>>n;
 
  for (int i=1;i<=n;i++){

    cout <<"process" << i <<"Burst Time:";
    cin>>burstTime;
   
    if (currentTime<arrivalTime){

        currentTime = arrivalTime;
    }
    int completionTime =currentTime +burstTime;
    currentTime = completionTime;

    cout <<"Process" << i << " Completion Time:"<<completionTime<<endl;

  }
return 0;

}
