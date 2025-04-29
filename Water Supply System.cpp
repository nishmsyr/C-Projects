#include<iostream>
using namespace std;

int main()
{
	char state, domestic, meterType;
	double meter, totalUsage, charge;
	
	cout<<"Do you live in Negeri Sembilan(N), Melaka(M) or Terengganu(T)? : ";
	cin>>state;
	
	if (state == 'N' || state == 'n') {
			cout<<"Domestic supplies? (Y/N) : ";
        	cin>>domestic;
	
		if (domestic == 'Y' || domestic == 'y') {
			cout<<"Type 'A' for individual meter and 'B' for bulk meter : ";
	        cin>>meterType;
	        
			if (meterType == 'A' || meterType == 'a') {
				cout<<"Enter total usage : ";
				cin>>totalUsage;
				
				if (totalUsage < 0) {
					cout<<"Invalid type of data.";
					return 1;
				}
				else if (totalUsage <= 20) {
					charge = totalUsage * 0.55;
					
					if (charge < 5)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charged RM"<<charge;
				}
				else if (totalUsage <= 35) {
					charge = totalUsage * 0.85;
					
					if (charge < 5)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charged RM"<<charge;
				}
				else if (totalUsage > 35) {
					charge = totalUsage * 1.40;
					
					if (charge < 5)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charged RM"<<charge;
				}
			}
			else if (meterType == 'B' || meterType == 'b') {
				cout<<"Enter total usage : ";
				cin>>totalUsage;
				
				if (totalUsage < 0) {
					cout<<"Invalid type of data.";
					return 1;
				}
				else {
				charge = totalUsage * 1.40;
				
				if (charge < 30)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge; 
				}
			}
			else if (meterType != 'A' && meterType != 'a' || meterType != 'B' && meterType != 'b') {
				cout<<"Invalid type of data.";
				return 1;
			}
		}
		else if (domestic == 'N' || domestic == 'n') {
			cout<<"Enter total usage : ";
			cin>>totalUsage;
			
			if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1;
			}
			else if (totalUsage <= 35) {
				charge = totalUsage * 1.85;
				
				if (charge < 18.50)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
			else if (totalUsage > 35) {
				charge = totalUsage * 2.70;
				
				if (charge < 18.50)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
		}
		else if (domestic != 'Y' && domestic != 'y' || domestic != 'N' && domestic != 'n') {
		    cout<<"Invalid type of data.";
		    return 1; 
		}
	}
	else if (state == 'M' || state == 'm') {
		cout<<"Domestic supplies? (Y/N) : ";
        cin>>domestic;
        
		if (domestic == 'Y' || domestic == 'y') {
			cout<<"Type 'A' for individual meter and 'B' for bulk meter : ";
	        cin>>meterType;
	        
			if (meterType == 'A' || meterType == 'a') {
				cout<<"Enter total usage : ";
				cin>>totalUsage;
				
				if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1; 
				}
				else if (totalUsage <= 20) {
					charge = totalUsage * 0.70;
					
					if (charge < 7)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				} else if (totalUsage <= 35) {
					charge = totalUsage * 1.15;
					
					if (charge < 7)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				} else if (totalUsage > 35) {
					charge = totalUsage * 1.75;
					
					if (charge < 7)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				}
			}
			else if (meterType == 'B' || meterType == 'b') {
			cout<<"Enter total usage : ";
			cin>>totalUsage;
			
			if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1;
			}
			else {
				charge = totalUsage * 1.80;
				
				if (charge < 25)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
		  } 
		  else if (meterType != 'A' && meterType != 'a' || meterType != 'B' && meterType != 'b') {
			    cout<<"Invalid type of data.";
			    return 1;
			}
		}
		else if (domestic == 'N' || domestic == 'n') {
			cout<<"Enter total usage : ";
			cin>>totalUsage;
			
			if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1;
			}
			else if (totalUsage <= 35) {
				charge = totalUsage * 2.40;
				
				if (charge < 25)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
			else if (totalUsage > 35) {
				charge = totalUsage * 2.45;
				
				if (charge < 25)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
		}
	}
	else if (state == 'T' || state == 't') {
		cout<<"Domestic supplies? (Y/N) : ";
        cin>>domestic;
        
		if (domestic == 'Y' || domestic == 'y') {
			cout<<"Type 'A' for individual meter and 'B' for bulk meter : ";
	        cin>>meterType;
	        
			if (meterType == 'A' || meterType == 'a') {
				cout<<"Enter total usage : ";
				cin>>totalUsage;
				
				if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1; 
				}
				else if (totalUsage <= 20) {
					charge = totalUsage * 0.42;
					
					if (charge < 4)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				} else if (totalUsage <= 35) {
					charge = totalUsage * 0.65;
					
					if (charge < 4)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				} else if (totalUsage > 35) {
					charge = totalUsage * 0.90;
					
					if (charge < 4)
					cout<<"Your water will be subsidies by the government.";
					else
					cout<<"You have been charge RM"<<charge;
				}
			}
			else if (meterType == 'B' || meterType == 'b') {
			cout<<"Enter total usage : ";
			cin>>totalUsage;
			
			if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1;
			}
			else {
				charge = totalUsage * 0.62;
				
				if (charge < 6.20)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
		  } 
		  else if (meterType != 'A' && meterType != 'a' || meterType != 'B' && meterType != 'b') {
			    cout<<"Invalid type of data.";
			    return 1;
			}
		}
		else if (domestic == 'N' || domestic == 'n') {
			cout<<"Enter total usage : ";
			cin>>totalUsage;
			
			if (totalUsage < 0) {
				cout<<"Invalid type of data.";
				return 1;
			}
			else if (totalUsage <= 35) {
				charge = totalUsage * 1;
				
				if (charge < 15)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
			else if (totalUsage > 35) {
				charge = totalUsage * 1.40;
				
				if (charge < 15)
				cout<<"Your water will be subsidies by the government.";
				else
				cout<<"You have been charged RM"<<charge;
			}
		}
    } 
    else if (state != 'N' && state != 'n' || state != 'M' && state != 'm' || state != 'T' && state != 't'){
	    cout<<"Invalid type of data.";
	    
	    return 1;
	}
	
    return 0;
}
	

