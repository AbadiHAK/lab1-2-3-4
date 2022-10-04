//
//#include <iostream>
//using namespace std;
//
//int values;
//bool want;
//int *DynamicArray;
//int *newArr;
//
//
//void create_array()
//{
//    DynamicArray = new int[values];
//    for (int i = 0; i < values; i++) {
//        cout << "Enter Value: ";
//        cin >> DynamicArray[i];
//    }
//
//    cout << "want print the array ? 0 OR 1 :";
//    cin>> want ;
//
//    if (want == 1) {
//        for (int i = 0 ; i < values; i++) {
//            cout << DynamicArray[i] <<endl;
//        }
//    }
//
//
//}
//
//
//void resize()
//{
//
//
//
//
//    int newval;
//    cout << "Enter new size :"<<endl;
//    cin >> newval;
//    newArr = new int[newval];
//    for (int i = 0; i < newval; i++) {
//        cout << "Enter Value: ";
//        cin >> newArr[i];
//    }
//    if (want == 1) {
//        for (int i = 0 ; i < values + newval; i++) {
//            cout <<DynamicArray[i]<<" ";
//            cout <<newArr[i]<<" ";
//        }
//
//        
//        
//    }
//
//}
//
//
//int main()
//
//{
//    cout <<"How many integer you want ?"<<endl;
//    cin >> values;
//    create_array();
//    resize();
//}
//
//
