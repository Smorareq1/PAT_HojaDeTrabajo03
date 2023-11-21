#include "Ejercicio02.h"
#include <vector>         
#include <string>         
#include <unordered_map>  
#include <algorithm>      

using namespace std;


vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    unordered_map<string, vector<string>> convertor; //strings para vectores


    for (const string& x : strings) {
        string word = x;
        sort(word.begin(), word.end());
        convertor[word].push_back(x);
    }

    
    auto* groupedAnagrams = new vector<vector<string>>(); //debe estar en el heap *
    for (const auto& pair : convertor) {
        groupedAnagrams->push_back(pair.second);
    }

    return groupedAnagrams;
}
