#include <iostream>

double square(double length);
double rectangle(double length, double height);
double triangle(double length, double height);
double circle(double radius);
double sector(double radius, double interior);

double getheight(double height){
    std::cout << "what is the height: ";
    std::cin >> height;
    return height;
}

double getlength(double length){
    std::cout << "what is the length: ";
    std::cin >> length;
    return length;
}

int main(){
    using std::cin;
    using std::cout;

    char shape;
    double area;
    double radius;
    double interior;
    double length;
    double height;

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
            getlength(length);
            area = square(length);
             cout << "area: " << area << "cm^2";
            break;
        case 'r':
            length = getlength(length);
            height = getheight(height);
            area = rectangle(length, height);
            cout << "area: " << area << "cm^2";
            break;
        case 't':
            length = getlength(length);
            height = getheight(height);
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
                area = sector(radius, interior);
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
    const double pi = 3.14159;
    return pi * radius * radius;
}

double sector(double radius, double interior){
    const double pi = 3.14159;
    return (interior / 360) * pi * (radius * radius);
}
