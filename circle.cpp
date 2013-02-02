#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	float r,c1,c2;
	string line,line1,line2;
	cout<<" Enter the radius of circle: ";
	cin>>r;
	cout<<" Enter the centre coordinates: ";
	cin>>c1>>c2;
	ifstream head("header.txt");
	ifstream footr("footer.txt");
	ofstream cir("cir.txt");
	if(cir.is_open())
	{
		cir<<"CIRCLE\n 5\n43\n100\nAcDbEntity\n100\nAcDbCircle\n 8\n0\n 62\n256\n370\n-1\n  6\nByLayer\n 10\n"<<c1<<"\n 20\n"<<c2<<"\n 30\n0.0\n 40\n"<<r<<"\n  0";
		cir.close();
	}
	else
	{
		cout<< " Unable to open cir.txt";
	}
	ifstream circ("cir.txt");
	ofstream circle("circle.dxf");
	if(head.is_open())
	{
		while(getline(head,line,'\n'))
	{
			circle<<line<<endl;
		}
	}
	else
		cout<< "Unable to open header.txt";
	if(circ.is_open())
	{
		while(getline(circ,line1,'\n'))
	{
			circle<<line1<<endl;
		}
	}
	else
		cout<< "Unable to open cir.txt";
	if(footr.is_open())
	{
		while(getline(footr,line2,'\n'))
	{
			circle<<line2<<endl;
		}
	}
	else
		cout<< "Unable to open footer.txt";
return 0;
circle.close();
head.close();
circ.close();
footr.close();
}
