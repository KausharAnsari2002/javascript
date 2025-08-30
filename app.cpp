#include<iostream>
#include<vector>
using namespace std;

    void display(vector<int> &arr){
        for(int i = 0; i<arr.size(); i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
int main () {

 vector<int> arr = {1,2,3,4,5,6,7,8,9};
 display(arr);
 



 return 0;
}