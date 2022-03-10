/*#include <array>
#include <cstdio>

int main()
{
        std::array<int, 4> arr1 = {1, 2, 3, 4};
        std::array<int, 4> arr2 = {5, 6, 7, 8};
        int  sum  = 0;
        for (int i = 0; i < arr1.size(); i += 1)
        {
                sum = arr1[i] + arr2[i];
                std::printf("Sum[%d}=%d\n", i, sum);
        }
}*/

/* // L2 C++
#include <iostream>
#include <string>
#include <string_view>

int main() {
  // basics of string_view
  std::string original = "prog is fun! ";
  std::string copy = original;
  std::cout<<"original ="<< original << std::endl;
  std::cout<<"copy ="<< copy << std::endl;
 //currently have 3 strings variabels in memory
  
  std::string_view view1 {original};
  std::cout<< "Original ="<< original<<std::endl;
  std::cout<<" view 1 ="<< view1 <<std::endl;*/ 
}

// L3 C++
#include <iostream>
#include <string>
#include <string_view>

int main() { 
        // string of languages
        std::string languages = "English, French, French Latin, Bengali, Turkish, Hindi, Farsi, Korean, Catonese, Spanish, Arabic, Urdu, Latin, German";
        
        // language we're searching for
        std::string language_of_interest = "Hindi";
        
        // position of the searched language
        std::size_t position = languages.find(language_of_interest);
}