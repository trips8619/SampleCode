#include<iostream>
using namespace std;
class area
{
	public
		
    area(int x,int y)
	{
		cout<<x+y;
		
			}	
	area(float w,float v)
	{
		a=w;
		b=v;
		
				}
	void output()
	{
		ar=a*b;
		cout<<ar<<endl;
				}			
							
};
main()
{
	float s1,s2;
	int x,y;
	cin>>x>>y;
	cin>>s1>>s2;
	area a1(x,y);
	//a1.output();
	area a2(s1,s2);
	a2.output();
	
	
}
