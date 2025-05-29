//Print Divisors of a number in O(n^1/2)
void printDivisors(int n){
    vector<int>v;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end())
    for(auto j :v) 
        cout<<j<<" ";
}
                         
