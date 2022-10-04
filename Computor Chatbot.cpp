#include<iostream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
using namespace std;

int main (){
	char input [128];
	char name [128];
	int A ;
	int B;
	cout<<" W E L C O M E"<<endl;
	cout<<" I AM COMPUTOR, YOUR VIRTUAL ASSISTANT"<<endl;
	cout<<" SAY HI TO START ME"<<endl;
	while(1){
		
		gets(input);
		
		if(strcmp(input, "hi" )==0 || strcmp(input, "hello" )==0 || strcmp(input, "Hi" )==0 || strcmp(input, "Hello" )==0 || strcmp(input, "HI" )==0) {
				cout<<"Please Enter Your Name:";
				cin>>name;
				cout<<"Hi  "<< name <<endl;
				cout<<" 1.) IF YOU WANT TO  LEARN A SUBJECT "<<endl;
				cout<<" 2.) IF YOU WANT TO TAKE A TEST FROM A SUBJECT "<<endl;
								  }
		else if(strcmp(input, "I want to Learn" )==0 || strcmp(input, "Learn" )==0 || strcmp(input, "learn" )==0 || strcmp(input, "LEARN" )==0 || strcmp(input, "1" )==0) {
			cout<<"Please choose a subject that you want to learn (Input Number)"<<endl;
			cout<<"1.)Programming Logic and Design "<<endl;
			cout<<"2.)Chemistry For Engineers"<<endl;
			cout<<"3.)Differential Equations"<<endl;
			cout<<"4.)Differential Calculus"<<endl;
			cout<<"5.)Integral Calculus"<<endl;
			cout<<"6.)Physics for Engineers"<<endl;
			cout<<"7.)Back"<<endl;
			cin>>A;
			switch(A) {
				case 1 :
				cout<<"Open Programming Logic and Design"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/PLD.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 2:
				cout<<"Open Chemistry for Engineers"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/Chemistry.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 3:
				cout<<"Open Differential Equations"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/DE.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 4:
				cout<<"Open Differential Calculus"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/Diff%20Calc.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 5:
				cout<<"Open Integral Calculus"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/Integ%20Calc.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 6:
				cout<<"Open Physics for Engineers"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/Physics.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				case 7:
				cout<<"Back";
				system("CLS");
				cout<<" W E L C O M E"<<endl;
				cout<<" I AM COMPUTOR, YOUR VIRTUAL ASSISTANT"<<endl;
				cout<<" SAY HI TO START ME"<<endl;
				cout<<"Hi  "<< name <<endl;
				cout<<" IF YOU WANNA LEARN A SUBJECT PLEASE "<<endl;
				cout<<" IF YOU WANNA TAKE A TEST FROM A SUBJECT"<<endl;
				break;	
					  }
													}
			else if(strcmp(input, "I want to take a test " )==0 || strcmp(input, "test" )==0 || strcmp(input, "TEST" )==0 || strcmp(input, "Test" )==0 || strcmp(input, "2" )==0){
			cout<<"Please choose a subject that you wanna take a test (Input Number)"<<endl;
			cout<<"1.)Programming Logic and Design "<<endl;
			cout<<"2.)Chemistry For Engineers"<<endl;
			cout<<"3.)Differential Equations"<<endl;
			cout<<"4.)Differential Calculus"<<endl;
			cout<<"5.)Integral Calculus"<<endl;
			cout<<"6.)Physics for Engineers"<<endl;
			cout<<"7.)Back"<<endl;
			cin>>B;
			switch(B) {
				case 1 :
				cout<<"Open Programming Logic and Design"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/PLDquiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 2:
				cout<<"Open Chemistry for Engineers"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/chemquiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 3:
				cout<<"Open Differential Equations"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/dequiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 4:
				cout<<"Open Differential Calculus"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/diffcalcquiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 5:
				cout<<"Open Integral Calculus"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/integcalcquiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				break;
				case 6:
				cout<<"Open Physics for Engineers"<<endl; 
				system("start https://carlosalameda.github.io/ComputorPLM/Physicsquiz.html");
				system("CLS");
				cout<<"1. Learn a Subject"<<endl;
				cout<<"2. Take a Test"<<endl;
				case 7:
				cout<<"Back";
				system("CLS");
				cout<<" W E L C O M E"<<endl;
				cout<<" I AM COMPUTOR, YOUR VIRTUAL ASSISTANT"<<endl;
				cout<<" SAY HI TO START ME"<<endl;
				cout<<"Hi  "<< name <<endl;
				cout<<" IF YOU WANT TO LEARN A SUBJECT "<<endl;
				cout<<" IF YOU WANT TO TAKE A TEST FROM A SUBJECT"<<endl;
				break;	
					  }
				}
				
				else{
					cout<<"Please input another command   ";
				}
			 }
		}
