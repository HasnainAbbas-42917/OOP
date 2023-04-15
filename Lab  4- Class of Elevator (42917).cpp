#include<iostream>
using namespace std;

class Elevator{
	
	private:
		
		string companyname;
		int maxload;
		string currentlocation;
		string color;
		int model;
		int ID;
	
		public:
			
		Elevator(): companyname("/0"), maxload(0), currentlocation("/0"), 
		color("/0"), model(0), ID(0)
		{


	}
		Elevator(string cn, int ml, string cl, string c, int m, int id){
		  
		  companyname=cn;
		  maxload=ml;
		  currentlocation=cl;
		  color=c;
		  model=m;
		  ID=id;
		  

		} 	
	
		~Elevator(){
			
		}
		
		void getcompanyname(string companyname){
			this->companyname = companyname;
		}			
		string setcompanyname(){
			return companyname;
		}
		void getmaxload(int maxload){
			this->maxload = maxload;
		}			
		int setmaxload(){
			return maxload;
		}
			void getcurrentlocation(string currentlocation){
			this->currentlocation = currentlocation;
		}			
		string setcurrentlocation(){
			return currentlocation;
		}
			void getcolor(string color){
			this->color = color;
		}			
		string setcolor(){
			return color;
		}
			void getmodel(int model){
			this->model = model;
		}			
		int setmodel(){
			return model;
		}	
		void getID(int ID){
			this->ID = ID;
		}			
		int setID(){
			return ID;
		}
		void display(){
			
			cout<<" The Company Name is:"<<companyname<<endl;
			cout<<endl;
			cout<<" The Maxload is:"<<maxload<<endl;
			cout<<endl;
			cout<<"The Current Location is:"<<currentlocation<<endl;
			cout<<endl;
			cout<<"The Colour is:"<<color<<endl;
			cout<<endl;
			cout<<"The Model is:"<<model<<endl;
			cout<<endl;
			cout<<" The ID of :"<<ID<<endl;
			cout<<endl;
		}
};

	int main(){
		
            	string companyname;
		         int maxload;
		        string currentlocation;
		       string color;
		       int model;
		         int ID;
		         
		cout<<"Company Name:"<<endl;
		cin>>companyname;
		cout<<"Maxload:"<<endl;
		cin>>maxload;
	    cout<<"Current Location:"<<endl;
		cin>>currentlocation;
		cout<<"Colour:"<<endl;
		cin>>color;
		cout<<"Model:"<<endl;
		cin>>model;
		cout<<"ID:"<<endl;
		cin>>ID;
		
		Elevator s1;
		
		s1.getcompanyname(companyname);
		s1.getmaxload(maxload);
		s1.getcurrentlocation(currentlocation);
		s1.getcolor(color);
		s1.getmodel(model);
		s1.getID(ID);
		s1.display();
		
		return 0;
}
