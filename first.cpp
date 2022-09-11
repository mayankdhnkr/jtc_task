#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num,secnum;
    
    cin>>num;
    
    if(num%2==0)
        secnum=num/2;
    else
        secnum=(num/2)+1;
        
        
    int high[secnum],low[secnum];
    int arr[num];
    
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    int end=num-1;
    int start=0;
    
    for(int i=0;i<secnum;i++,end--,start++){
        high[i]=arr[end];
        low[i]=arr[start];
    }
    int cnt=0;
    int i=0;
    int j=1;
    
    while(cnt<secnum){
        arr[i]=high[cnt];
        arr[j]=low[cnt];
        i+=2;
        j+=2;
        cnt++;
    }
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}