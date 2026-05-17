#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>>threesum(vector<int>arr){
    int n=arr.size();
    vector<vector<int>>ans;
    set<vector<int>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>trip={arr[i],arr[j],arr[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
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


