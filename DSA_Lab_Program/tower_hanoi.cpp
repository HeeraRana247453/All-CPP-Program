#include<iostream>
using namespace std;

void towerofhanoi(int n,char source,char destination,char auxliary)
{
    if(n==1)
    {
        cout<<"disk-1 "<<source<<"----->"<<destination<<endl;
        return;
    }

    towerofhanoi(n-1,source,auxliary,destination);
    cout<<"disk-"<<n<<" "<<source<<"----->"<<destination<<endl;
    towerofhanoi(n-1,auxliary,destination,source);
}

int main()
{
    int disknum;
    cout<<"Enter the Number of Disks: ";
    cin>>disknum;

    towerofhanoi(disknum,'S','D','A');

    return 0;
}