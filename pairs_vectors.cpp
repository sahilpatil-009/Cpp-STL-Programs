#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v) //or pass refrence like &v
{
    cout<<"size of Vector:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}
int main()
{
    //////////***********Pairs**************//////////////////////////////////////
   /* pair<int,int> p;
    pair<int,string> q;
    p = make_pair(2,3); //this is 1st method to insert numbers in pair
    p = {2,4}; // this is second method to insert values in Pairs
    q = {150,"Sahil Patil"};
    cout<<"Pair P:"<<p.first<<" "<<p.second<<" "<<endl;
    cout<<"Pair Q:"<<q.first<<" "<<q.second<<" "<<endl;

    pair<int,string> r = q; //values copy to the pair
    cout<<"Pair r:"<<r.first<<" "<<r.second<<" "<<endl;

    pair<int,string> &s = q;//Refrence to the pair
    cout<<"Pair s:"<<s.first<<" "<<s.second<<" "<<endl;
    cout<<"///////////////////////////////////////////////"<<endl;
    cout<<"2 Array store into pairs array:"<<endl;

    int a[] = {1,2,3};
    int b[] = {4,3,1};
    pair<int,int> p_arr[3];
    for(int i=0;i<3;i++)
    {
        p_arr[i].first = a[i];
        p_arr[i].second = b[i];
    }

   // p_arr[0] = {1,4};
    //p_arr[1] = {2,3};
    //p_arr[2] = {3,1};
    for(int i=0;i<3;i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<" "<<endl;
    }
    //swap 3rd index element and 0th index element
    swap(p_arr[0],p_arr[2]);
    cout<<"After Swap:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<" "<<endl;
    }*/
    //////////////////////////////////////////////////////////////////
    //**************Vector**********************//

  /*  int n,x;
    cout<<"Enter Size of Vector:"<<endl;
    cin>>n;
    vector<int> v(5);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        //printVector(v);
        v.push_back(x);

    }
    printVector(v);*/
    ///////vector with size
    vector<int> v(5);
    v.push_back(2);
    printVector(v);

    vector<int> p(5);
    p.push_back(7);
    printVector(p);

    vector<int> q(5,3);
    printVector(q);

    p.pop_back();
    printVector(p);

    vector<int> v2 = v; //copy each element one by one also give refrence to vector &v
    cout<<"Copy Vector"<<endl;
    v2.push_back(4);
    printVector(v2);
}
