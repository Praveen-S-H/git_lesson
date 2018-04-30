#include<iostream>
using namespace	std;
class service
{
  int a,b;
public:

 int sq(int y)
{
  return(y*y);

}
int fct(int f){
	if(f!=1)
	return(f*fct(f-1));
	return 1;
}

};

int main()
{

service sq1;
cout<<"square of 42 is = "<<sq1.sq(422)<<endl<<"factorial op 4 is = "<<sq1.fct(3)<<endl;
return 0;


//I've added this on git websit
// Added another line from git without commit change from command line
// Added another line with documentation_src_funtion
}
