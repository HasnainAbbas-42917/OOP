#include <iostream>
using namespace std;

class A{
	private:
	    int a;
	    void inData(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDataa(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    
	    void offDataaa(){
	    	cout<<" Ente the c of class A: "<<endl;
	    	cin>>c;
	    	
		 	inData();
		 	outDataa();
		}
		A(){
			
		}
	    A(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};
// Single Inheritance 
class B: public A{
	private:
	    int a;
	    void inDataaaa(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDataaaaa(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDataaaaaa(){
	    	cout<<" Ente the c of class B: "<<endl;
	    	cin>>c;
	    	inDataaaa();
	    	outDataaaaa();
	    	
		}
		B(){
			
		}
	    B(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};
// Multilevel Inheritance 
class C: public B{
	private:
	    int a;
	    void inDatac(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatacc(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDataccc(){
	    	cout<<" Enter the c of class C: "<<endl;
	    	cin>>c;
	    	inDatac();
	    	outDatacc();
		}
		C(){
			
		}
	    C(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};

class D{
	private:
	    int a;
	    void inDatasd(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatasdd(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDatasddd(){
	    	cout<<" Ente the c of class D: "<<endl;
	    	cin>>c;
	    	inDatasd();
	    	outDatasdd();
		}
		D(){
			
		}
	    D(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};

class E{
	private:
	    int a;
	    void inDatas(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatass(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDatasss(){
	    	cout<<" Ente the c of class E: "<<endl;
	    	cin>>c;  
	    	inDatas();
	    	outDatass();
	    	
		}
		E(){
			
		}
	    E(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};

class F{
	private:
	    int a;
	    void inDatassss(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatasssss(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDatassssss(){
	    	cout<<" Ente the c of class F: "<<endl;
	    	cin>>c;
	    	inDatassss();
	    	outDatasssss();
		}
		F(){
			
		}
	    F(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};
// Multiple Inheritance 
class G: public D, public E, public F{
	private:
	    int a;
	    void inDatag(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatagg(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDataggg(){
	    	cout<<" Ente the c of class G: "<<endl;
	    	cin>>c;
	    	inDatag();
	    	outDatagg();
		}
		G(){
			
		}
	    G(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};

class H: public E, public F{
	private:
	    int a;
	    void inDatah(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatahh(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
			}
	    	
			
	     public:
	    double c;
	    void offDatahhh(){
	    	cout<<" Ente the c of class H: "<<endl;
	    	cin>>c;
	    	inDatah();
	    	outDatahh();
	    	
		}
		H(){
			
		}
	    H(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};
// Hybrid Inheritance 
class I: public H{
	private:
	    int a;
	    void inDatai(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDataii(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
	    		
			}
	    	
			
	     public:
	    double c;
	    void offDataiii(){
	    	cout<<" Ente the c of class I: "<<endl;
	    	cin>>c;
	    	inDatai();
	    	outDataii();
		}
		I(){
			
		}
	    I(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};

class J: public H{
	private:
	    int a;
	    void inDataj(){
	    	cout<<" Enter the a: "<<endl;
	    	cin>>a;
		}
		
	    protected:
	    	float b;
	    	void outDatajj(){
	    		cout<<" Enter the b: "<<endl;
	    		cin>>b;
	    		
			}
	    	
			
	     public:
	    double c;
	    void offDatajjj(){
	    	cout<<" Ente the c of class J: "<<endl;
	    	cin>>c;
	    	inDataj();
	    	outDatajj();
		}
		J(){
			
		}
	    J(int a, float b, double c){
	    	this-> a=a;
	    	this-> b=b;
	    	this-> c=c;
		}
	
};


int main()
{
	// create ten objects 
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	G g;
	H h;
	I i;
	J j;
	// called the public functions of each class 
	a.offDataaa();
	b.offDataaaaaa();
	c.offDataccc();
	d.offDatasddd();
	e.offDatasss();
	f.offDatassssss();
	g.offDataggg();
	h.offDatahhh();
	//outDataii();
	//inDatai();
	i.offDataiii();
	j.offDatajjj();

}
