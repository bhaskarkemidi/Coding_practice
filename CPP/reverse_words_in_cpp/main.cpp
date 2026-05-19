#include <iostream>
#include <vector>
#include <sstream>
#include <vector>
#include <string>
std::string reverseWords(const std::string& str)
{
	std::stringstream ss(str);
	std::vector<std::string> words;
	std::string word;
	while (ss >> word) {
		std::reverse(word.begin(),word.end());
		words.push_back(word);
	}


	std::reverse(words.begin(), words.end());
	std::string reversedstr;
	for (std::vector<std::string>::iterator itr = words.begin(); itr != words.end(); ++itr)
		reversedstr += *itr + " ";
// 	for (const auto& w : words)
// 		reversedstr += w + " ";
	if (!reversedstr.empty())
		reversedstr.pop_back();
	return reversedstr;

}

int main()
{
	std::string mystring;
	std::cout << "enter your string: " << std::endl;
	std::getline(std::cin, mystring);
	std::string reversedStr = reverseWords(mystring);
	std::cout <<"Reversed String is: "<< reversedStr << std::endl;
}