#include <iostream>
using namespace std;

class Player{
	private:
		
	string name;
	int jersey_no;
	int odi_ranking;
	int t20_ranking;
	int test_ranking;
	
	public:
		// Automatic Initialization 
	Player():name("\0"), jersey_no(0), odi_ranking(0), t20_ranking(0), test_ranking(0){
		
	}
	// Constructor
	Player(string name,int jersey_no,int odi_ranking,
	int t20_ranking,int test_ranking):name(name),
	jersey_no(jersey_no),
	odi_ranking(odi_ranking), t20_ranking(t20_ranking), test_ranking(test_ranking){

	}
// Function
void display_detail()
	{
	
		cout<<"----------CRICKET GAME----------"<<endl;
		cout<<"  The Player Name is: "<<name<<endl;
	
		cout<<" The Jersey Number is: "<<jersey_no<<endl;
		
		cout<<" The ODI Ranking is: "<<odi_ranking<<endl;
		
       	cout<<" The T20 Ranking is: "<<t20_ranking<<endl;
       
        cout<<" The Test Ranking is: "<<test_ranking<<endl;
        
        cout<<"------------------------------"<<endl;

	 }
	// Destructor
	~Player(){
		
	}
	
	
};

class Batsman:public Player{
	private:
		
		
	    string batting_style;
	    int batting_no;
		int total_score;
		double batting_average;
		double strike_rate;
		
		public:
			// Default Constructor
	    Batsman(){
	    	
		}
		// Constructor
		Batsman( string name,int jersey_no,int odi_ranking,int t20_ranking,int test_ranking,
		 string bs, int bn, int ts, double ba, double sr)
		 : Player( name, jersey_no, odi_ranking, t20_ranking, test_ranking)
		 {
		 	
	        batting_style=bs;
	        batting_no=bn;
		    total_score=ts;
		    batting_average=ba;
		    strike_rate=sr;
		 	
		 }
		 // Functions
		 void showInformation(){
		 	
		 
		 
		cout<<" Enter the Batting Style is: "  <<endl;
		cin>>batting_style;
		cout<<" Enter the Batting Number is: "  <<endl;
		cin>>batting_no;
		cout<<" Enter the Total Score is: "  <<endl;
		cin>>total_score;
       	cout<<" Enter the Batting Average is: "  <<endl;
       	cin>>batting_average;
        cout<<" Enter the Strike Rate is: "  <<endl;
        cin>>strike_rate;
        cout<<"-----------------------------"<<endl;
	}
		 
		 // Destructor
		
		 ~Batsman(){
		 	
		 }
		
	
};

class Bowler:public Player{
	private:
		
	    string bowling_style;
	     float average_speed;
		 int total_wickets;
		 float bowling_average;
		 int strike_rate;
		 
		 public:
		 	// Default Constructor
		 	Bowler(){
		 		
			 }
			 // Constructor
	     Bowler( string name,int jersey_no,int odi_ranking,int t20_ranking,int test_ranking, 
		 string bs, float as, int tw, float ba, int sr )
		 : Player( name, jersey_no, odi_ranking, t20_ranking, test_ranking ){
		 	
		bowling_style=bs;
	    average_speed=as;
		total_wickets=tw;
		bowling_average=ba;
		strike_rate=sr;
		 	
		 }
		 // Functions
		 void print_data(){	
		 
		cout<<" Enter the Bowling Style is: "  <<endl;
		cin>>bowling_style;
		cout<<" Enter the Average Speed is: "  <<endl;
		cin>>average_speed;
		cout<<" Enter the Total Wickets is: "  <<endl;
		cin>>total_wickets;
       	cout<<" Enter the Bowling Average is: "  <<endl;
       	cin>>bowling_average;
        cout<<" Enter the Strike Rate is: "  <<endl;
        cin>>strike_rate;
        cout<<"-----------------------------"<<endl;

	
		 }
		 	// Destructor
	    ~Bowler(){
		 	
		 }
};

class Wicketkeeper:public Player{
	private:
		
		string batting_style;
		int total_score;
		int total_catches;
		int total_stumps;
		
		public:
			// Default Constructor
		
		Wicketkeeper(){ 
			
		}
			// Constructor
	   Wicketkeeper(string name,int jersey_no,int odi_ranking,int t20_ranking,int test_ranking,
	   string batting_style,int otal_score,int total_catches,int total_stumps) 
	   : Player(name, jersey_no, odi_ranking, t20_ranking, test_ranking){
	   	
	   	batting_style=batting_style;
		total_score=total_score;
		total_catches=total_catches;
		total_stumps=total_stumps;
	   }
	   // Functions
	   void displayRecord(){
	   	
	   	cout<<" Enter the Batting Style is: "  <<endl;
		cin>>batting_style;
		cout<<" Enter the Total Score is: "  <<endl;
		cin>>total_score;
		cout<<" Enter the Total Catches is: "  <<endl;
		cin>>total_catches;
       	cout<<" Enter the Total Stumps is: "  <<endl;
       	cin>>total_stumps;
       	cout<<"-----------------------------"<<endl;

        
	   }
	   ~Wicketkeeper(){ // Destructor
	   	
	   }
	   
};

class Allrounder:public Batsman,Bowler{
	public:
	Allrounder(){ // Constructor
		
		cout<<endl<<"Best AllRounder of This Month: "<<endl;
	}
	
	~Allrounder(){  // Destructor
		
		
	}
	
};

int main()
{
	Player p("Haris",03,8,12,15);
	p.display_detail();
	
	Batsman b;
	b.showInformation();
	
	Bowler B;
	B.print_data();
	
	Wicketkeeper w;
	w.displayRecord();
	
	Allrounder();
	
	
	

}
