#include <cstdio> 
#include <stdio.h>
#include <iostream>
#include <string>
#include <string_view>
#include <array> 
#include <vector>
 
int main()
{
    // Creating the database array of the online super market 
    
    std::vector<std::string> online_sp { "shampoo ", "Vegetables pack ", "Milk ", "Meat ", "Chicken ", "Chips ", "Pepsi ", "White toast ", "Pasta ", "Pasta sauce ", "Eggs ", "Cheese ", "Cereal ", "Burgers ", "Jam ", "Redbull ", "monster ", "Nescafe ", "Hand soap ", "Chocolate ", "Olive Oil ", "Yoghourt ", "Tissue Box ", "Tea ", "Water ", "Cheetos ", "Rice ", "Jelly beans ", "Peanut butter ", "Salt "};
    
    // vector array for prices in pounds same order as online sp array 
     std::vector<std::string> prices {"5","3","2","5","5","1","1","2","1.5","2","4.5","3","3.10", "4.5", "2.5", "1.5", "3","2.75", "1.99", "1", "5", "1", "1.08", "3","1", "1.5", "6", "1.5", "4.30", "4"};
     
    // vector array for best before date 
      std::vector< std::string> best_b {"1/1/2025", "1/4/2022", "1/4/2022","25/4/2022", "25/4/2022","01/01/2023", "01/01/2023", "01/05/2022", "01/01/2024", "01/05/2022", "01/05/2022", "22/04/2022", "01/01/2024", " 01/05/2022", "15/06/2022", "22/2/2024","09/1/2024", "01/01/2025","01/01/2025", "08/09/2022","17/10/2022","15/4/2022", "01/01/2027", "12/12/2023","01/01/2024", "19/08/2023", "07/12/2023", 
      "28/2/2023", "01/11/2022", "13/4/2025"};
      
    // vextor array for item types 
    std::vector< std::string> types {"health & beuty", "food", "Milk products", "food", "food","snacks", " drinks","food", "food", "food","food","Milk products","snacks","food","food","drinks", "drinks","drinks","health & beuty","snacks", "oil","Milk products","health & beuty","drinks", "drinks", "snacks", "food", "snacks", "food", "food"};

    std::string display ="fh "; 

    for(int i=0; i<=29;i++)
    {
     display = online_sp[i] + prices[i] +" " + types[i];
     std::cout<<display<<std::endl;
}
}