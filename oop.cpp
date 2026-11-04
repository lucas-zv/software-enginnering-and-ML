 #include <iostream>

class videoPlayer{
    public:
        bool IsPaused;
        bool IsRunning;
        double time;
        std::string nameOfVideo;

        void Subtitles(){
            std::cout << "subtitles are turned on\n";
        }
        void Subtitles_Off(){
            std::cout << "the subtitles are turned off\n";
        }
        void f_speed(){
            std::cout << "the video has been sped up\n";
        }
        void s_speed(){
            std::cout << "the video has been slown down\n";
        }
};

 int main(){

    videoPlayer player;

    player.IsPaused = false;
    player.IsRunning = true;
    player.time = 2.23;
    player.nameOfVideo = "never gonna give you up";

    player.Subtitles();
    std::cout << player.time << '\n';
    std::cout << player.IsRunning  << "\n";
    std::cout << player.nameOfVideo  << "\n";

    return 0;
 }
