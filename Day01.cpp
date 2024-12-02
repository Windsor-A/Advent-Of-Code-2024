#include <bits/stdc++.h>
using namespace std;

int part1(){
    ifstream infile("Day01.txt");
    int a,b;
    vector<int> left_list, right_list;
    while(infile >> a >> b){
        left_list.push_back(a);
        right_list.push_back(b);
    }
    infile.close();
    sort(left_list.begin(),left_list.end());
    sort(right_list.begin(),right_list.end());

    int output = 0;

    for(int i = 0; i < left_list.size(); i++){
        output += abs(left_list[i] - right_list[i]);
    }
    return output;
}

long long part2(){
    ifstream infile("Day01.txt");
    int a,b;
    unordered_map<int,int> left_list, right_list;
    while(infile >> a >> b){
        left_list[a] += 1;
        right_list[b] += 1;
    }
    infile.close();
    long long output = 0;
    for( auto i : left_list){
        output += i.first * right_list[i.first] * i.second;
    }
    return output;
}



int main(){
    cout << "Solution to Part 1: " << part1() << endl;
    cout << "Solution to Part 2: " << part2() << endl;
}