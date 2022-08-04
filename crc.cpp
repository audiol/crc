[8:55 am, 04/08/2022] Srajan NMIT: #include<iostream>
using namespace std;
int rem(int x, int y)
{
    if(x == y)
    return 0;
    else 
    return 1;
}
int main()
{
    cout<<"Enter Data Length : ";
    int data[20]={0};
    int dl;
    cin>>dl;
    cout<<"Enter Data : ";
    for(int i=0;i<dl;i++)
    cin>>data[i];
    cout<<"Enter Div Length : ";
    int div[20];
    int divl;
    cin>>divl;
    cout<<"Enter Divisor : ";
    for(int i=0;i<divl;i++)
    cin>>div[i];

    int newdata[20]={0};
    int i=0;
    for(i=0;i<dl;i++)
    {
        newdata[i]=data[i];
    }
    for(i=0;i<dl+divl-1;i++)
    {
        cout<<newdata[i];
    }
    cout<<endl;


    int j;
    int crc[5];
    for(i=0;i<=dl;i++)
    for(j=0;j<divl;j++)
    {
        crc[j]=newdata[i+j];
        if(crc[0]==1)
              newdata[i+j]=rem(newdata[i+j],div[j]);
             else
              newdata[i+j]=rem(newdata[i+j],0);

    }
    for(i=0;i<divl-1;i++)
    cout<<crc[i];
    cout<<endl;

    for(j=0,i=dl;j<divl-1;i++,j++)
    {
        data[i]=crc[j];
    }
    for(i=0;i<dl+divl-1;i++)
    cout<<data[i];

    cout<<"ENter reciever data : ";
    int rec[20]={0};
    for(i=0;i<dl+divl-1;i++)
    cin>>rec[i];

    int remd[5];
    int k;
    for(i=0;i<=dl;i++)
    {
    for(j=0;j<divl;j++)
    {
        remd[j]=rec[i+j];
        if(remd[0]==1)
        rec[i+j]=rem(rec[i+j],div[j]);
        else
        rec[i+j]=rem(rec[i+j],0);
    }
    k=0;
    for(int z=0;z<divl-1;z++)
    if(remd[z]==0)
    k++;
    }
    if(k==divl-1)
    cout<<"No Error";
    else
    cout<<"Error";
    return 0;


}
[8:55 am, 04/08/2022] Srajan NMIT: #include<iostream>
using namespace std;
int main()
{
    string str="";
    int ch=1;
    int frames;
    cout<<"Enter the number of frames : ";
    cin>>frames;
    for(int i=0;i<frames;i++)
    {
        cout<<"Enter frame "<<i+1<<" : ";
        string s;
        cin>>s;
        char l = (s.length()+1)+'0';
        str+=l;
        str+=s;
    }
    cout<<"Frame sent : "<<str;
cout<<endl;

int i=0;
int z=0;
    while(str[i]!='\0')
    {
        int s = str[i] - '0';
        int j=i;
        cout<<"Frame--->"<<++z<<"   ";
        for(i=i+1;i<s+j;i++)
        {
            cout<<str[i];
        }
        cout<<endl;
    }
}