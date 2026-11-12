#include <iostream>
#include <string>
#include <vector>

class Pass{
    private:    
        std::string password {"Admin123"};
    public:
    std::string getPassword(){
        return password;
    }

};

int main(){

    Pass pass;

    char exit = 'n';
    std::string pass_input;
    std::string names;
    std::vector<std::string> Data = {};
    int count = 0;
    char response;

    std::cout << "Password: ";
    std::getline(std::cin, pass_input);

    if(pass.getPassword() != pass_input){
        while(pass.getPassword() != pass_input && count < 3){
            if(pass.getPassword() == pass_input){
                break;
            }
            count += 1;
            std::cout << "Password" << "(attempt " << count << "): " ;
            std::getline(std::cin, pass_input); 

        }
    }

    if(pass.getPassword() == pass_input){
        std::cout << "Welcome- Would you like to access the database: (y/n) ";
        std::cin >> response;
        switch(response){
            case 'y':
                if(Data.size() == 0){
                    char response_d;
                    std::cout << "Notice: there is no data stored currently\n";
                    std::cout << "would you like to add data: (y/n): ";
                    std::cin >> response_d;

                    switch(response_d){
                        case 'y':
                            std::cout << "what is the names you want to add to the database: (q to exit anytime): \n";
                            while(exit != 'q'){
                                std::cout << "would you like to quit: ";
                                std::cin >> exit;

                                if(exit == 'n'){
                                    std::cout << "name: ";
                                    std::cin.ignore();
                                    std::cin.clear();
                                    std::getline(std::cin, names);
                                    Data.push_back(names);
                                }
                            }
                            break;
                        case 'n':
                            std::cout << "Thank you, and goodbye!";
                            break;
                }

            }
                for(int i = 0; i < Data.size(); i++){
                std::cout << Data[i] << std::endl;
                }
                break;
            case 'n':
                std::cout << "Thanks, and goodbye.";
                break;
            
        }
    }


    return 0;
}   
