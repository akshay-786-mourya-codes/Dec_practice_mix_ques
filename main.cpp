#include <iostream>
#include <vector>
#include <utility>
#include <cmath>


using namespace std;
void display(vector<int> v){
    int a;
    a=v.size();
    cout<<"values are"<<endl;
    for(int i=0; i<a; i++){
        cout<<v[i];
        cout<<endl;
    }
    
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);

    return 0;
}