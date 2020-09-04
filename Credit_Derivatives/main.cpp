#include "CR2.h" 
#include<iostream> 

using namespace std; 

int main() 
{ 
  cout << "\n ***START CR2: Credit Default Swap ****\n"; 
  
  //Input parameters 
  
  auto T = 1.0;     //maturity 
  auto N = 4;       //number of payments per year
  auto notional = 100; //notional 
  auto r = .05;       //risk free interest rate 
  auto h = .01      //hazard rate 
  auto rr = .5;     //recovery rate 
  
  
  // Construct a CR2 object from the input parameters 
  
  CR2 cr2(T, N, notional, r, h, rr); 
  
  //"get_premium()":    //confusion here
  
  auto cr2_results = cr2.get_pv_premium_and_default_legs_and_cds_spread();
  
  cout<<"\n PV premium leg = " << cr2_results.pv_premium_leg << :\n";
  cout<<"\n PV default leg = "<< cr2_results.pv_default_leg << "\n"; 
  cout<< "\n cds_sread = " << "cr2_results.cds_spread_in_bps << "bps \n";
  cout<<"\n ***END CR2: Credit Default Swap***\n";
  
  
        
  


  return 0; 
  
  
} 
