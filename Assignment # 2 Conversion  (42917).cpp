#include<iostream>
using namespace std;

class Duration{
	
	public:
		
	int days;
	int hours;
	int minutes;
	int sec;
	
	Duration(): days(0), hours(0), minutes(0), sec(0)
	{
		
			}
	
	Duration(int d,int h,int m,int s)
	{
		
	days= d;
	hours=h;
	minutes=m;
	sec=s; 
             }

    Duration(int sec){

            days=sec/86400;
            sec=sec%86400;
            hours=sec/3600;
            sec=sec%3600;
            minutes=sec/60;
            sec=sec%60;    
        }

   void display() {

                  cout<<"Days:"<<days<<endl;
                  cout<<endl;
                  cout<<"Hours:"<<hours<<endl;
                  cout<<endl;
                  cout<<"Minutes:"<<minutes<<endl;
                  cout<<endl;
                  cout<<"Sec:"<<sec;
                  cout<<endl;
       }
  int durationofSec()
  
		{
            return days*86400+hours*3600+minutes*60+sec;
        }
      
};
    
int main(){
	
	
  Duration d1;
  
  Duration d2(12,24,36,48);
  
  Duration d3(3600);
  
  d1.display();
  
    cout<<"Total duration  = "<<endl;
    
    cout<<endl;
    
	d1.durationofSec();
	
    d2.display();
    
    cout<<"Total duration  = "<<endl;
    
    cout<<endl;
    
	d2.durationofSec();
	
    d3.display();
    
    cout<<"Total duration  = "<<endl;
    
    cout<<endl;
    
	d3.durationofSec();
	
    return 0;
}  

  
