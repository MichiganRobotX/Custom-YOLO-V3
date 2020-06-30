#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string path =
    "/home/bhushan/Projects/RobotX/Floating-Buoy-Detection/dataset/labelled/";

    std::ofstream fout;
    fout.open("test.txt");

    for (size_t count = 80; count < 96; ++count) {
        std::stringstream filename;
        filename << "buoy_0000" << count << ".png";
        fout << path << filename.str() <<"\n";
    }
    fout.close();
    return 0;
}
