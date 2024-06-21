//
// Created by adamt on 20.6.2024.
//

#ifndef FILESELECTOR_H
#define FILESELECTOR_H
#include <filesystem>
#include <vector>


namespace fs = std::filesystem;

class FileSelector {
public:
    static fs::path* ListFiles(const fs::path& type, const fs::path& fpath);
private:
    static std::vector<fs::path> getfiles(const fs::path& root, const fs::path& ext);

};



#endif //FILESELECTOR_H
