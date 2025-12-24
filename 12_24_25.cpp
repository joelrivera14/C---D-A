#include <iostream>
#include <string>
//using hey = std::string;
enum MealType {NO_PREF,REG,LOW_FAT,VEG};
struct Passanger{
    std::string name;
    MealType mealPref;
    bool isfreqflyer;
    int flyernumber;
};
std::ostream& operator<<(std::ostream& out, Passanger& p){
    out<<p.name<<" "
        <<p.mealPref<<" "
        <<p.isfreqflyer<<" "
        <<p.flyernumber<<"\n";
        return out;
    
};

int main (){

/*strings are fun

hey h = "hello";

std::cout<<h<<std::endl;
 */
/*structs are also fun*/


Passanger pass1 = {"joel", REG, false, 234};
std::cout<<pass1<<std::endl;
/*POINTERS AHHHHHHHH*/
Passanger* pass2;
pass2 = new Passanger;
pass2->name="Brian";
pass2->mealPref=VEG;
pass2->isfreqflyer=true;
pass2->flyernumber= 456;
std::cout<<*pass2<<std::endl;


    return 0;
}
