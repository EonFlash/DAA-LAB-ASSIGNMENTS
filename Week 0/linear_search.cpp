#include <iostream>

using namespace std;

int main()
{

    int n,key,cmp=0;
    bool check=false;

    cout<<"Enter the array size"<<endl;

    cin>>n;



    int arr[n];

    cout<<"Start enterning--- "<<endl;


    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {

       cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the key -"<<endl;
    cin>>key;


    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            check=true;
            cmp++;
            break;
        }
        cmp++;

    }

    if(check==true)
    {
                cout<<"KEY WAS FOUND!!"<<endl;
    cout <<"No of comparisions --"<<cmp;
    }


    else
        cout<<"KEY NOT FOUND!!"<<endl;





}
