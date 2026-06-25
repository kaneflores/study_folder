#include <iostream>
#include <vector>

using namespace std;

class Point{ // struct another way of organizing your data
    public: // public data that we can access
        int x{};
        int y{};

        void print(){
            cout << "(" << x << ", " << y << ")" << endl;
        }
};
// int main(){ // without oop
//     // points are:
//         // (0,1)
//         // (2,2)
//         /// ...
//         /// (4,5)

//     int x[5];
//     int y[5]; //array

//     x[0] = 0;
//     y[0] = 1;

//     x[1] = 2;
//     y[1] = 2;

//     x[2] = 2;
//     y[2] = 3;

//     x[3] = 3;
//     y[3] = 4;

//     x[4] = 4;
//     y[4] = 5;

//     for (int i =0; i< 5; i++){
//         cout << "(" << x[i] << ", " << y[i] << ")" << endl;
//     }


//     Point p;
//     p.x = 5;
//     p.y = 10;
//     cout << p.x << endl;

//     Point l;
//     l.x =40;
//     l.y = 20;

//     //class -> object (instantiation)
//     return 0;
// }

int main(){ // without oop
    // points are:
        // (0,1)
        // (2,2)
        /// ...
        /// (4,5)

    // Point points[5];
    // points[0].x;

    std::vector<Point> points ={{0,1},{2,2},{2,3},{3,4},{4,5}};

    for( auto point : points){
        point.print();
    }

    // for (int i =0; i< 5; i++){
    //     cout << "(" << points.at(i).x << ", " << points.at(i).y << ")" << endl;
    // }


    Point p; //class -> object (instantiation)
    p.x = 5;
    p.y = 10;
    cout << p.x << endl;

    Point l;
    l.x =40;
    l.y = 20;
    
    
    return 0;
}
