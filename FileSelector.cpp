//
// Created by adamt on 20.6.2024.
//

#include "FileSelector.h"

#include <iostream>
namespace fs = std::filesystem;


// I love stackoverflow
// Hippity, hoppity your code is now in my project
std::vector<fs::path> FileSelector::getfiles(const fs::path& root, const fs::path& ext) {
    std::vector<fs::path> paths;

    if (fs::exists(root) && fs::is_directory(root)) {
        for (auto const &entry: fs::directory_iterator(root)) {
            if (fs::is_regular_file(entry) && entry.path().extension() == ext)
                paths.emplace_back(entry.path().filename());
        }
    }

    return paths;
}

fs::path* FileSelector::ListFiles(const fs::path& type, const fs::path& fpath) {
    if(!fs::exists(fpath)) return nullptr;

    std::vector<fs::path> files = getfiles(fpath,type);

    if (files.empty()) {
        std::cout << "No files were found with extension: ." << type << std::endl;
        return nullptr;
    }

    if (files.size() == 1) return &files[1];

    std::cout << "Select file: " << std::endl;
    for (int i = 0; i < files.size(); i++) {
        std::cout << i+1 << ". - " << files[i] << std::endl;
    }
    std::cout << "Selection: " << std::endl;
    int selection = -1;

    while (selection < 0 ||  selection > files.size()) {
        std::cin >> selection;
    }

    return &files[selection];
}


