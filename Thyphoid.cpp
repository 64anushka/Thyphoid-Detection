#include<iostream>
#include <exception>
#include <cctype>
#include<cstring>
using namespace std;
class Thyphoid
{
	private:
		string s[4][5];
	public:
		void get_testreports();
		void display_reports();
		int analyse_reports();
		void display(int );	
};
void Thyphoid::get_testreports()
{
	int i=0,j=0;
	cout<<" \t*** MEDICAL DIAGONOSIS FORM *** \t"<<endl;
    bool invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'O' 1:20 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'O' 1:40 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'O' 1:80 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'O' 1:160 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'O' 1:320 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			j=0;
    			++i;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'H' 1:20 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'H' 1:40 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'H' 1:80 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'H' 1:160 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'H' 1:320 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			j=0;
    			++i;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'AH' 1:20 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'AH' 1:40 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'AH' 1:80 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'AH' 1:160 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'AH' 1:320 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			j=0;
    			++i;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'BH' 1:20 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'BH' 1:40 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'BH' 1:80 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
	invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'BH' 1:160 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			++j;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter ";
			invalid=true;
		}
	}
    invalid=true;
    while(invalid)
    {
    	try
	    {
	    	string str;
	    	cout<<"\nSalmonela Typhi 'BH' 1:320 (+ / -) :";
	    	cin>>str;
	    	if(str.length()==1 && (str[0]=='+' || str[0]=='-' ))
	    	{
	    		s[i][j]=str;
    			j=0;
    			++i;
    			invalid=false;
			}
			else
			{
				exception e;
				throw e;
			}
		}
		catch(exception e)
		{
			cout<<"Invalid Input\n\n"<<"Renter";
			invalid=true;
		}
	} 
}
void Thyphoid::display_reports()
{
	int i,j;
	cout<<"\n*********************************************************************\n"<<endl;
	cout<<"\n\t\t\t\t WIDAL TEST REPORT \n"<<endl;
	cout<<"\t\t\t\t 1:20 \t 1:40 \t 1:80 \t 1:160 \t 1:320"<<endl;
	for(i=0;i<4;i++)
	{
		if(i==0)
		{
			cout<<"Salmonela Typhi 'O' :\t\t  ";
		}
		else if(i==1)
		{
			cout<<"Salmonela Typhi 'H' :\t\t  ";
		}
		else if(i==2)
		{
			cout<<"Salmonela Typhi 'AH' :\t\t  ";
		}
		else if(i==3)
		{
			cout<<"Salmonela Typhi 'BH' :\t\t  ";
		}
		for(j=0;j<5;j++)
		{
			cout<<s[i][j]<<"\t  ";
		}
		cout<<"\n"; 
	}
}
int Thyphoid::analyse_reports()
{
	int i,j,result=0;
	string t;
	for(i=0;i<2;i++)
	{
		for(j=2;j<5;j++)
		{
			t=s[i][j];
			if(t[0] == '+')
			{
				result=1;
				return result;
			}
		}
	}
	t=s[0][1]; 
	if(t[0] == '+')
	{
		result=2;
		return result;
	}
	t=s[1][1];
	if(t[0] == '+')
	{
		result=2;
		return result;
	}
	t=s[0][1];
	if(t[0] == '+')
	{
		result=-1;
		return result;
	}
	t=s[1][1];
	if(t[0] == '+')
	{
		result=-1;
		return result;
	}
	for(i=2;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			t=s[i][j];
			if(t[0]=='+')
			{
				result=3;
				return result;
			}
		}
	}
	return result;
}
void Thyphoid::display(int m)
{
	cout<<"\n\t**************DISPLAYING RESULTS*****************\n"<<endl;
	switch(m)
	{
		case -1:
			{
				cout<<"\tYou are negative."
					<<"\n\tDisclaimer: If clinical symptoms are observed for more than two days"
					<<"	then go for CBC ,Thyphi. test "<<endl;
				break;		
			}
		case 1:
			{
				cout<<"\tPositive"<<endl;
				break;
			}
		case 2:
			{
				cout<<"\tNegative"
					<<"\n\tDisclaimer: Medicines required"<<endl;
				break;	
			}		
		case 3:
			{
				cout<<"\tNegative"
					<<"\n\tDisclaimer: You might had infection in past"<<endl;
				break;
			}
		default:break;		
	}
	cout<<"\n\t*************************************************\n"<<endl;
	cout<<"\t\t\tTHANK YOU! TAKE CARE"<<endl;
}
int main()
{
	Thyphoid t;
	t.get_testreports();
	t.display_reports();
	int result=t.analyse_reports();
	t.display(result);
	return 0;
}
