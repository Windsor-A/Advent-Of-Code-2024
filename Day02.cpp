#include <bits/stdc++.h>
using namespace std;

bool is_valid_report(vector<int> data){
    bool increasing = true;
    bool decreasing = true;
    bool range = true;
    for(int i = 0; i < data.size() - 1; i++) {
        if (data[i] >= data[i + 1]) {
            increasing = false;
        }
        if (data[i] <= data[i + 1]) {
            decreasing = false;
        }
        int distance = abs(data[i] - data[i + 1]);
        if (distance > 3 || distance < 1) {
            range = false;
            break;
        }
    }
    return (increasing || decreasing) && range;
}



long long part1(){
    long long output = 0;
    ifstream infile("Day02.txt");
    string line;
    vector<int> input_list;
    while(getline(infile, line)){
        stringstream s(line);
        int a;
        while(s >> a){
            input_list.push_back(a);
        }
        if(is_valid_report(input_list)){
            output++;
        }
        input_list.clear();
    }
    return output;
}

long long part2(){
    long long output = 0;
    ifstream infile("Day02.txt");
    string line;
    vector<int> input_list;
    while(getline(infile, line)){
        stringstream s(line);
        int a;
        while(s >> a){
            input_list.push_back(a);
        }
        vector<int> data;
        for(int i = 0; i < input_list.size(); i++){
            data.clear();
            for(int j = 0; j < input_list.size(); j++){
                if(i != j) {
                    data.push_back(input_list[j]);
                }
            }
            if(is_valid_report(data)){
                output++;
                break;
            }
        }
        input_list.clear();
    }
    return output;
}



int main(){
    cout << "Solution to Part 1: " << part1() << endl;
    cout << "Solution to Part 2: " << part2() << endl;
}