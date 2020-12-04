#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

void prob1(){
    vector<int> v;
    ifstream inputFile("input1.txt");
    while(!inputFile.eof()){
        int temp;
        inputFile >> temp;
        v.push_back(temp);
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            int x = v[i] + v[j];
            for(int k = j+1; k < v.size(); k++){
                if(v[k] + x == 2020 ){
                    cout << v[i] * v[j] * v[k];
                }
            }
        }
    }
}

void prob2Part1(){
    ifstream inputFile("input2.txt");
    int valid = 0;
    while(!inputFile.eof()){
        int passCount = 0;
        string line, x, y, letter, pass;

        getline(inputFile, line);
        istringstream stream(line);

        getline(stream, x,'-');
        getline(stream, y, ' ');
        int min = stoi(x);
        int max = stoi(y);

        getline(stream, letter,':');

        getline (stream, pass);

        for(char pas : pass){
            if(pas == letter[0]){
                passCount++;
            }
        }
        if((passCount > min || passCount == min) && (passCount < max || passCount == max)){
            valid++;
        }
    }
    cout << valid;
}

void prob2Part2(){
    ifstream inputFile("input2.txt");
    int valid = 0;
    while(!inputFile.eof()){
        int c = 0;
        string line, x, y, letter, pass;

        getline(inputFile, line);
        istringstream stream(line);

        getline(stream, x,'-');
        getline(stream, y, ' ');
        int index1 = stoi(x);
        int index2 = stoi(y);

        getline(stream, letter,':');

        getline(stream, pass);

        // Index 0 is always a blank space because of the getline
        if(pass[index1] == letter[0])
            c++;
        if(pass[index2] == letter[0])
            c++;
        if(c == 1)
            valid++;
    }
    cout << valid;
}

void prob3(){
    
}


int main() {
    //prob1();
    //prob2Part1();
    //prob2Part2();
    return 0;
}

