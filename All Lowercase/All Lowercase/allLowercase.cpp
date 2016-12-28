#include <string>
#include <iostream>

std::string allLower(const std::string& someString){
	std::string temp = someString;
	for (char& x : temp){
		
		if ((64< x) && (x <91)){
			x += 32;
		}
	}
	return temp;

}

int main(){
	//std::string x = "Can I get a calll BACK, #ORNAH?!?!?!";
	std::cout << allLower("WHY DON'T YOU LOVE ME Z ANYMOREJ, #ORNAH?!?!?!") << std::endl;//As long as parameters aren't const, I cannot pass in something that can't be changed
	system("pause");
}