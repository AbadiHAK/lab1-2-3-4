#include <vector>
#include <iostream>

using namespace std;
std::vector< int > dyn_arr;



int element;



class dyn_array
{
    public:
    bool want;
    int values;
    void create_array();
    void resize();

    
};


void dyn_array::create_array()
{

    for (int i = 0 ; i < element; i++) {
        cout << "Enter value : ";
        cin >> values;
        dyn_arr.push_back(values);
    }
    
    for (int  i = 0; i < element; i++) {
        cout << dyn_arr[i]<<" ";
    }
    
    cout << endl;
    
}


void dyn_array::resize()
{
    
    cout << "Want to resize ?: 0 OR 1 :"<<endl;
    cin >> want;
    if (want == 1) {
        int newelemnt;
        int newvalues;
        cout << "PLease Enter how many int you want :"<<endl;
        cin >> newelemnt;
        for (int i = 0 ; i < newelemnt; i++) {
            cout << "Enter value : ";
            cin>> newvalues;
            dyn_arr.push_back(newvalues);
        }
        
        for (int j = 0 ; j < (newelemnt + element); j++) {
            cout << "New array :" << dyn_arr[j] << endl;
        }
    }
    
}




int main()
{
    dyn_array obj;
    cout << "PLease Enter how many int you want :"<<endl;
    cin>>element;
    obj.create_array();
    obj.resize();
    
    return 0;
    
}
