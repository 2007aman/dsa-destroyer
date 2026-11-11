#include<iostream>
#include<vector>
using namespace std;
vector<int> dup(int a[],int n){
vector<int> result;
int officer=0;
int res=1;
int cm=1;
result.push_back(a[0]);
while(cm<n){
if(a[cm]==a[cm-1]){
cm++;
continue;
}

result.push_back(a[cm]);
res++;
cm++;
}
return result;
}

int main(){
int a[5]={1,1,2,3,3};
int n=5;
vector<int> uniqueArray = dup(a, n);

    cout << "Unique Array: ";
    for (int val : uniqueArray) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
