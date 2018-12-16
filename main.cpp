#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int Hasil;
cout <<"program iner & outer"<<endl<<endl;

cout<<"Masukan Hasil untuk bintang"<<endl;
cout<<"masukan Hasilnya: ";cin>>Hasil;
cout<<endl;

cout<<"bintang"<<endl;
for(int i=1; i<=Hasil; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<"*";

    }
    cout<<endl;
}
getch();
return 0;
}




