#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    string keterangan;
    
    cout<<"masukkan nilai tugas";cin>>a;
    if (a > 100){
        keterangan = "nilai tidak boleh lebih dari 100";
        cout<<keterangan<<endl;
        return 0;
    }
    
    
    
    cout<<"masukkan nilai uts";cin>>a;
    if (a > 100){
        keterangan = "nilai tidak boleh lebih dari 100";
        cout<<keterangan<<endl;
        return 0;
    }
    
    
    cout<<"masukkan nilai uas";cin>>a;
    if (a > 100){
        keterangan = "nilai tidak boleh lebih dari 100";
        cout<<keterangan<<endl;
        return 0;
    }
}
