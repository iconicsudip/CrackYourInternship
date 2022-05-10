#include<bits/stdc++.h>
using namespace std;
void mcombination(vector<int>&arr,vector<int>&temp,int st,int end,int ind,int r){
    if (ind == r){
        for (int j = 0; j < r; j++){
            cout << temp[j] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = st; i <= end; i++){
        temp[ind] = arr[i];
        mcombination(arr, temp, i+1,end, ind+1, r);
    }
}
void printCombination(vector<int>&arr,int n,int r){
    vector<int>temp(r);
    mcombination(arr,temp,0,n-1,0,r);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int r = 3;
    int n = arr.size();
    printCombination(arr, n, r);
}
