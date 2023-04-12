#include <iostream>
using namespace std;


int main() {
	string option,old_pin,new_pin,receiver_num,amount;
	bool pin_out;
	int pin_cout;
	int pin_limit;
	pin_limit=2;
	pin_cout=0;
	pin_out=false;
	
	cout<<"welcome to kobby ricch enterprise mobile money service \n";
	cout<<"";
	cout<<"1, Authentication \n";
	cout<<"2, reset pin \n";
	cout<<"3, check balance \n";
	cout<<"4, send money \n";
	cout<<"";
	cout<<"select option by enter 1 - 4: \n";
	cin>>option;
    if (option=="1"){
       while(old_pin != "0000" and not (pin_out)){
	       if(pin_cout<=pin_limit){
	       	  cout<<"enteryour pin to accept withdrawal of 500 cedis: "<<endl;
		      cin>>old_pin;
		      pin_cout+=1;}
		      
	   	    else{pin_out=true;}
			}
	   if (pin_out==true){
	   	   cout<<"your account is blocked for too many attempts"<<endl;
	   }
	   else{
	   	cout<<"you have succesfully withdrawn 500 cedis from your account and your balance is 495 with fee of 5 cedis";
	   }
	
	}  
	else if(option=="2"){
		while(old_pin != "0000" and not (pin_out)){
			if(pin_cout<=pin_limit){
			   cout<<"enter old pin"<<endl;
			   cin>>old_pin;
			   
			   pin_cout+=1;}
			   }
			   
			   
	   if (pin_out==true){
	    	cout<<"your account is blocked for too many attempts"<<endl;
			}
	   else{
	  cout<<"enter new pin"<<endl;
	  
	  cin>>new_pin;
	  if (new_pin==old_pin){
	  	cout<<"pin already exist";
	  }
	  cout<<"your pin has been resetted successfully";
      } }
      
      else if (option=="3"){
      	while(old_pin!="0000" and not (pin_out)){
		  
		    if(pin_cout<=pin_limit){
		       cout<<"enter pin: ";
		       cin>>old_pin;
		       pin_cout+=1;}
			
			else{pin_out=true;}
		    }
	    if(pin_out==true){
	    cout<<"your account is blocked for too many attempts";
		}
		else{
			cout<<"your balance is 1000 cedis";
		
		
		
		}
    }	
	
	else if (option=="4"){
		cout<<"enter receiver number: " << endl;
		cin>>receiver_num;
		cout<<"enter amount to be sent: "<<endl;
		cin>>amount;
		
		while (old_pin !="0000" and not(pin_out)){
		    if(pin_cout<=pin_limit){
			cout<<"enter pin:"<<endl;
			cin>>old_pin;
			pin_cout+=1;}
			
			else{pin_out=true;}
	        }
	        
	   if (pin_out==true){
	   	cout<<"your account has been blocked for too many attempts";
	   }
	   else{
	   	cout<<"you have successfully sent "<<amount<<" to "<<receiver_num;
	   }
}
	
	return 0;
	}
