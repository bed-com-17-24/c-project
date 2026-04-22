#include <iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<cctype>
using namespace std;
//function to read file contents into a string
string ReadFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr <<"Error opening file." <<endl;
        return "";
    }
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();


}
// count vowels in a string
int countvowels(const string &data) {
    int count =0;
    string vowels ="aeiou";
    for (char c : data) {
        if(vowels.find(c) != string::npos) {
            cout++;
        }
    }
    return count;
}
//count words in a string 
int countwords(const string &data) {
    stringstream ss(data);
    int count= 0;
string word;
while (ss >> word) {
    count++;
}
return count;
}
//reverse string
string Reverse(const string &data) {
    string reversed =data;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
//capitalize the second letter every word
string capitalizesecondletter(const string &data) {
    stringstream ss(data);
    string word, result;
    while (ss >> word) {
        if(word.length()> 1) {
            word[1] =touper(word[1]);
        }
        result +=word + " ";
    }
    result.opp_back();
    return result;
}
int main() {
    //assume the text file 'steve.txt' exists with the given statement
    string fileData = readfile("steve.txt");
    if(!fileData.empty()) {
        cout<<"File contents: "<<fileData<<endl;
        //count vowels
        int vowelcount = countvowels(fileData);
        cout<<"number of vowels"<<vowelcount<<endl;
        //count words
        int wordcount =countwords(fileData);
        cout<<"number of words "<<wordcount<<endl;
        //reverse statement
        string reversedData =reverse(fileData);
        cout<<"reversed statement"<<reversedData<<endl;
        //capitalize second letterof each word
        string modifiedstatement = capitalizesecondletter(fileData);
        cout<<"modified statement "<<modifiedstatement<<endl;

    }
    return 0;
}