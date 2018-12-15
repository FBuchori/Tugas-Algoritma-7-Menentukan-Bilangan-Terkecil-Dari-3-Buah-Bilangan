#include<iostream>

using namespace std;
int main()
{
	int bil1, bil2, bil3, terkecil;
	cout<<"Masukkan Bilangan 1 : ";
	cin>>bil1;
	cout<<"Masukkan Bilangan 2 : ";
	cin>>bil2;
	cout<<"Masukkan Bilangan 3 : ";
	cin>>bil3;
	
	{
		if(bil1 < bil2)
		terkecil = bil1;
		
		else
		terkecil = bil2;
		
		if(bil3 < terkecil)
		terkecil = bil3;
		
		cout<<endl;
		cout<<"Nilai Terkecil = "<<terkecil;cout<<endl;
	}
	return 0;
}
