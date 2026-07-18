#include <iostream>

double square(double length);
double rectangle(double length, double height);
double triangle(double length, double height);
double circle(double radius);
double sector(double radius);

double length;            // this is not best practice to create global variables but since i haven't moved to refrences yet i dont want to tackle it diffrently 
double height;
const double pi = 3.14159;
double interior;

void stand(){
    using std::cin;
    using std::cout;

    cout << "what is the length: ";
    cin >> length;
    cout << "what is the height: ";
    cin >> height;
}

int main(){
    using std::cin;
    using std::cout;

    char shape;
    double area;
    double radius;

    do{

        cout << "what is the area of the shape you are trying to find(s,r,t,c,S): "; //the last S is sector and c is circle and t is triangle and r is rectangle and s is square ate the beggining
        cin >> shape;

        if(shape == 's' || shape == 'r' || shape == 't' || shape == 'c' || shape == 'S'){
            break;
        }
        else{
        cout << "that was not a valid shape please try again" << "\n";
        }

    }while(shape != 's' || shape != 'r' || shape != 't' || shape != 'c' || shape != 'S');

    switch(shape){
        case 's':
            cout << "what is the length: ";
            cin >> length;
            area = square(length);
             cout << "area: " << area << "cm^2";
            break;
        case 'r':
            stand();
            area = rectangle(length, height);
            cout << "area: " << area << "cm^2";
            break;
        case 't':
            stand();
            area = triangle(length, height);
            cout << "area: " << area << "cm^2";
            break;
        case 'c':
            cout << "what is the radius of the circle: ";
            cin >> radius;
            area = circle(radius);
            cout << "area: " << area << "cm^2";
            break;
        case 'S':
            do{
                cout << "what is the interior angle: ";
                cin >> interior;

                if(interior > 360){
                cout << "that angle is too big" << "\n";
                }

                else{
                cout << "what is the radius: ";
                cin >> radius;
                area = sector(radius);
                cout << "area: " << area << "cm^2";
                break;
                }

            }while(interior > 360);
        }


    return 0;
}

double square(double length){
    return length * length;
}

double rectangle(double length, double height){
    return length * height;
}

double triangle(double length, double height){
    return 0.5 * length * height;
}

double circle(double radius){
    return pi * radius * radius;
}

double sector(double radius){
    return (interior / 360) * pi * (radius * radius);
}
