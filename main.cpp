#include <filesystem>
#include <iostream>

int main() {
    std::cout << "osu! to RoboCassette Converter v1 (but now in C++)" << std::endl;
    std::cout << "Rewritten by: @bluwubby" << std::endl;

    char choice;
    do {
        std::cout << "Convert bpm(1) or map(2)?" << std::endl;
        std::cin >> choice;
    } while (choice != '1' || choice != '2');
    bool convertMap = choice - '1';

    std::filesystem::path fpath;
    do {
        std::cout << "Enter the path to the folder or the .osz file" << std::endl;
        std::cin >> fpath;
    } while (!std::filesystem::exists(fpath));


    return 0;
}
