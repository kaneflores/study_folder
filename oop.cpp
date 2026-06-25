#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// class Point{ // struct another way of organizing your data
//     public: // public data that we can access
//         int x{};
//         int y{};

//         void print() const {
//             cout << "(" << x << ", " << y << ")" << endl;
//         }

//         double distanceTo(const Point& other) const {
//             int xDiff = x - other.x;
//             int yDiff = y - other.y;
//             return sqrt(xDiff * xDiff + yDiff * yDiff);

//         }

//         Point(){
//             cout << "Constructor invoked" << endl;
//         }
//         // Point(int a, int b){ //constructor
//         //     cout << "This has 2 parameters" << endl;
//         //     x = a;
//         //     y = b;

//         // }

//         //syntax similarites
//         // Point(int x, int y){ //constructor // if you insist on using x and y or same variables init from the start
//         //     cout << "This has 2 parameters" << endl;
//         //     this->x = x;
//         //     this->y = y;
            
//         // }

//         // //constructor initializer
//         // Point(int x, int y) : x(x), y(y){} //constructor

//         // what does constructor help with?
//         // -- forced full initialization
//         // -- initial access to private data
//         // distance the user of the class from the actual variables (attributes)

//         // encapsulation -> gates accesss to sensitive variables

// };

class Point{ // struct another way of organizing your data
    private: //encapsulation example 
        int x{};
        int y{};

    public: // public data that we can access
        int getX() { return x;} //encapsulation
        void setX(int newX) {x=newX;}//encapsulation ...

        int getY() {return y;} 
        void setY(int newY) {y = newY;}

        void print() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }

        double distanceTo(const Point& other) const {
            int xDiff = x - other.x;
            int yDiff = y - other.y;
            return sqrt(xDiff * xDiff + yDiff * yDiff);

        }

        Point(){
            cout << "Constructor invoked" << endl;
        }
        // Point(int x, int y) : x(x), y(y){} //constructor
        // notes: constrcutor is also an example of abstraction where you hides the details of actual initialization, you are now worried about passing data now.

        // encapsulation -> gates accesss to sensitive variables

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

// int main(){ // oop
//     // points are:
//         // (0,1)
//         // (2,2)
//         /// ...
//         /// (4,5)

//     // Point points[5];
//     // points[0].x;

//     vector<Point> points ={{0,1},{2,2},{2,3},{3,4},{4,5}};

//     const Point& p1 = points.at(0);
//     const Point& p2 = points.at(1);
//     cout << "Distance: " << p1.distanceTo(p2);
//     p1.print();
//     p2.print();

//     for( auto point : points){
//         point.print();
//     }

//     // for (int i =0; i< 5; i++){
//     //     cout << "(" << points.at(i).x << ", " << points.at(i).y << ")" << endl;
//     // }


//     Point p; //class -> object (instantiation)
//     p.x = 5;
//     p.y = 10;
//     cout << p.x << endl;

//     Point l;
//     l.x =40;
//     l.y = 20;
    
    
//     return 0;
// }

int main(){ // method calls in loop and constructors

    vector<Point> points ={{0,1},{2,2},{2,3},{3,4},{4,5}};

    

    for(int i = 0; i<points.size(); i++){
        points.at(i).print();

        if (i==4){
            cout << "end" << endl;
            break;
        }
        cout << "distance to next point: " << points.at(i).distanceTo(points.at(i+1)) << endl;
    }
    
    Point p;
    p.setX(5); // encapsulation
    p.setY(10); //encapsulation.

    cout << p.getX() + p.getY() << endl;
    // encapsulation is an example of abstraction 

    return 0;
}
// methods vs constructors
/*
a constructor is a member function that is invoked everytime an object is created
method defines the behavior/functionality of an object i.e. distanceto, print,



*/
