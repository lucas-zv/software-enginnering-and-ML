#include <iostream>
#include <vector>
#include <cmath>

int main() {
    
    const size_t stream_r = 1000;
    const int buff = 100;
    char input;
    double stream_t = 0;

    std::cout << "activate:(y/n) ";
    std::cin >> input;

    std::vector<int> buff_out;
    std::vector<double> values;

    if(input == 'y'){
        if(stream_r / buff == 10){
            double array[7] = {1.99, 3.5, 2.1, 0.4, 0.9, 1.7, 0.65}; // example data
            for(unsigned int i = 0; i < 7; i++){
                std::cout << array[i] << "\n";
                int result_b = static_cast<int>(std::round(array[i] * buff)); //this shifts the number so it becomes an integer as it eliminates any ieee 754 fp precsision loss when adding the values up.
                std::cout << result_b << "\n";
                std::cout << "\n";
                buff_out.push_back(result_b); // push the data into the buff_out
                }
            }

        std::cout << "debug: ";
        for(int Val : buff_out){
            std::cout << Val << " "; // just to be able to see values
        }

        for(int num : buff_out){
            stream_t += num; // calculates the sum of all numbers
        }

        std::cout << "\n";

        if(stream_t < stream_r){
            std::cout << "the values will not be passed through onto the next stage untill the the stream_t has reached the minimum threshhold." << "\n";
            return 1;
        }
        else if (stream_t >= stream_r){
            for(unsigned int i = 0; i < buff_out.size(); i++){
                long double VAL_t = buff_out[i] / (long double)stream_r; //normalises each value back to the decimal format
                values.push_back(VAL_t);
                std::cout << VAL_t << " ";
            }

        }

    }
    else if(input == 'n'){
        std::cout << "proggram has been terminated";
    }
    else{
        std::cout << "whatever you pressed was invalid";
    }

    return 0;
}
