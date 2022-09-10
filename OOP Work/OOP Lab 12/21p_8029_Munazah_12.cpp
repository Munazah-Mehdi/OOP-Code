#include <iostream>
#include <cmath>
using namespace std;

class Shapes{
	public:
		Shapes(){
			cout<<"Constructor of shapes "<<endl;
		}
		virtual float area()=0;
		
		~Shapes(){
			cout<<"Destructor of shapes"<<endl;
		}
}; 

class _2d_Shapes:public Shapes{
	public:
		_2d_Shapes(){
			cout<<"Constructor of_2d_Shapes"<<endl;
		}
		
		~_2d_Shapes(){
			cout<<"Desstructor of_2d_Shapes"<<endl;
		}
		
};

class _3d_Shapes:public Shapes{
	public:
		_3d_Shapes(){
			cout<<"Constructor of_3_Shapes"<<endl;
		}
		
		virtual float volume()=0;
		
		~_3d_Shapes(){
			cout<<"Desstructor of_2d_Shapes"<<endl;
		}
};

class Circle:public _2d_Shapes{
	private:
		float radius;
	public:
		Circle(int r){
			this->radius=r;
		}
		
		float area(){
			return 3.14*radius*radius;
			
		}
		
		~Circle(){
		cout<<"Destructor of circle "<<endl;		}
	
	
};

class Square:public _2d_Shapes{
	private:
		float side;
	public:
		Square(float s){
			this->side=s;
		}
		
		float area(){
			return side*side;
						
		}
		
		~Square(){
		cout<<"Destructor of square"<<endl; }

};
		
class Cube:public _3d_Shapes{
	private:
		int side;
		
	public:
		Cube(int l){
			this->side=l;
			
		}
		
		float area(){
			return 6*side*side;	//6a^2		
		}	
		
		float volume(){
			return side*side*side;
		}
		
		~Cube(){
		cout<<"Destructor of cube "<<endl;	}
	
};

class Pyramid:public _3d_Shapes{
	private:
		int side;
		int lenght;
		int width;
		int height;
		
	public:
		Pyramid(int s, int w, int l, int h){
			this->side=s;
			this->lenght=l;
			this->width=w;
			this->height=h;
		}
		float area(){ // area of pyramid = 2bs + b^2;  where b=side & s=height
			return  2*(side*height)+side*side;
		}
		
		float volume(){
			return (lenght*width*height)/3 ; //lwh/3	
		}
		
		~Pyramid(){ 
		cout<<"Destructor of pyramid"<<endl;	}

};
	
int main(){
	Shapes *p[4];
	
	Circle circle(1.1);
	Square square(1.2);
	
	Cube cube(2);
	Pyramid pyramid(1,2,3,4);
	
	p[0]=&circle;
	p[1]=&square;
	p[2]=&cube;
	p[3]=&pyramid;
	
	
	for(int i=0; i<4; i++){
		cout<<p[i]->area()<<endl;
	} 
	
	
	
	
	
	return 0;
}
