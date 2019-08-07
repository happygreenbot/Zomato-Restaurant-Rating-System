#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	cout<<"Enter size :"<<endl;
	cin>>n;
	cout<<"Enter filename :"<<endl;
	cin>>s;
	//cout<<n;
	char char_array[s.length()+1]; 
	strcpy(char_array, s.c_str());
	ofstream myfile;
	myfile.open(char_array);
	for(int i=0;i<n;i++)
	{
		myfile<<"- - "<<endl;
		myfile<<"  - "<<endl;
	
	}
	myfile.close();
	return 0;

}
