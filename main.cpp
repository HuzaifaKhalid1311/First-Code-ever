# include <iostream>
# include <conio.h>
using namespace std;

main()
{
	float a=0;
     float z=0;
     float h=0;
     float q=0;
     float w=0;
     float e=0;
     float r=0;
     float t=0;
     float y=0;
     float i=0;
     float o=0;
     float p=0;
    cout<< " (Thanks to Huzaifa for making this program) ";
	cout<< " Welcome to percentage checker . plz enter your marks of your 10 exams = ";
    cout<< " urdu ";
    cin>>q;
    cout<< " maths ";
    cin>>w;
    cout<< " geography ";
    cin>>e;
    cout<< " biology ";
    cin>>r;
    cout<< " chemistry ";
    cin>>t;
    cout<< " physics ";
    cin>>y;
    cout<< " islamiyat ";
    cin>>z;
    cout<< " computer ";
    cin>>i;
    cout<< " english ";
    cin>>o;
    cout<< " history ";
	cin>>p;
	cout<< " please enter your total marks ";
    cin>>a;
	h=((z+q+w+e+r+t+y+i+o+p)/a*100);
    cout<< "Thankyou for this information,so your percentage is ="<<h;

	
getch();
}
