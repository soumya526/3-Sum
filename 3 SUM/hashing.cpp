#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>>threesum(vector<int>arr){
    int n=arr.size();
    set<vector<int>>uniqueTriplets;
    for(int i=0;i<n;i++){
        int tar=-arr[i];
        set<int>s;
        for(int j=i+1;j<n;j++){
            int third=tar-arr[j];
            if(s.find(third)!=s.end()){
                vector<int>trip={arr[i],arr[j],third};
                sort(trip.begin(),trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(arr[j]);
        }

    }
    vector<vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    vector<int>s;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i<<"th of array:"; 
        int a;
        cin>>a;
        s.push_back(a);
    }
    vector<vector<int>>ans;
    ans=threesum(s);
    for(int j=0;j<ans.size();j++){
        for(int k=0;k<ans[j].size();k++){
                cout<<ans[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


