#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input;
    cin >> input;
    string final;
    vector<string> output;
    string inp_str = to_string(input);

 while(input>0)
 {
    if(input>=900 && input<1000 )
    {
        output.push_back("C");
        input=input+100;
    }
  else if(input>=1000)
   {
  
    output.push_back("M");
    input=input-1000;

   }
   else if(input>=400 && input<500)
   {
    output.push_back("C");
    input=input+100;
   }
   else if(input>=500)
   {
    output.push_back("D");
    input=input-500;
   }
   else if(input>=90 && input<100)
   {
    output.push_back("X");
    input=input+10;
   }
   else if(input>=100)
   {
    output.push_back("C");
    input=input-100;
   }
   else if(input>=40 && input<50)
   {
    output.push_back("X");
    input=input+10;
   }
   else if (input>=50)
   {
    output.push_back("L");
    input=input-50;
   }
   else if(input>=9 && input<10)
   {
    output.push_back("I");
    input=input+1;
   }
   else if(input>=10)
   {
    output.push_back("X");
    input=input-10;
   }
   else if(input>=4 && input<5)
   {
    output.push_back("I");
    input=input+1;
   }
   else if (input>=5)
   {
    output.push_back("V");
    input=input-5;
   }
   else if (input>=1)
   {
    output.push_back("I");
    input=input-1;
   }
   
   


 }

 for(int z=0;z<output.size();z++)
 {
  
   final +=output[z];
 }

    cout << final << endl;
}