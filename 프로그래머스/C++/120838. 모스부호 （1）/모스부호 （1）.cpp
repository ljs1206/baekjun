#include <string>
#include <vector>
#include <sstream>
using namespace std;
string solution(string letter) {
    string answer="";
    vector<string> mos={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    stringstream ss(letter);
    string temp;
    while(ss >> temp){
        for (int i = 0; i < mos.size(); i++) 
        {
            if (temp == mos[i]) 
                answer.push_back(i+'a');
        } 
    }
    return answer;
}