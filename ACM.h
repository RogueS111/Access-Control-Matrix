//
// Created by Rogue on 11/16/2022.
//

#ifndef PROJECT2ACM_ACM_H
#define PROJECT2ACM_ACM_H

#include <string>
#include <iostream>

class ACM {
public:
    /*/
    std::string subjects[3];

    std::string files[2];
    std::string processes[2];
    std::string drives[2];

    std::string objects[9];

    std::string matrix[4][10] = {
            {"placeholder", objects[0], objects[1], objects[2], objects[3], objects[4], objects[5], objects[6], objects[7], objects[8]},
            {subjects[0], "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder"},
            {subjects[1], "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder"},
            {subjects[2], "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder", "placeholder"}
    };
     /*/

    ACM();

    void createSubjects(std::string (&subjects)[4]);

    void createFiles(std::string (&files)[2]);
    void createProcesses(std::string (&processes)[2]);
    void createDiskDrives(std::string (&drives)[2]);

    void createObjects(std::string (&objects)[10], std::string (&subjects)[4], std::string (&files)[2], std::string (&processes)[2], std::string (&drives)[2]);

    void printMatrix(std::string (&objects)[10], std::string (&subjects)[4]);
};


#endif //PROJECT2ACM_ACM_H
