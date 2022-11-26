//
// Created by Rogue on 11/16/2022.
//

#include "ACM.h"



ACM::ACM() {
    std::cout<<"Create Table"<<std::endl;
}

void ACM::createSubjects(std::string (&subjects)[4]) {
    //subjects[0] = "--------";
    subjects[0] = "S1";
    subjects[1] = "S2";
    subjects[2] = "S3";

}

void ACM::createFiles(std::string (&files)[2]) {
    files[0] = "F1";
    files[1] = "F2";
}

void ACM::createProcesses(std::string (&processes)[2]) {
    processes[0] = "P1";
    processes[1] = "P2";
}

void ACM::createDiskDrives(std::string (&drives)[2]) {
    drives[0] = "D1";
    drives[1] = "D2";
}

void ACM::createObjects(std::string (&objects)[10], std::string (&subjects)[4], std::string (&files)[2], std::string (&processes)[2], std::string (&drives)[2]) {
    objects[0] = "--";
    objects[1] = subjects[0];
    objects[2] = subjects[1];
    objects[3] = subjects[2];
    objects[4] = files[0];
    objects[5] = files[1];
    objects[6] = processes[0];
    objects[7] = processes[1];
    objects[8] = drives[0];
    objects[9] = drives[1];
}


void ACM::printMatrix(std::string (&objects)[10], std::string (&subjects)[4]) {
    std::string matrix[4][10] = {
            {objects[0], objects[1],objects[2],objects[3],objects[4],objects[5],objects[6],objects[7],objects[8],objects[9]},
            {subjects[0],"Admin", "Reviewer","Admin,Reviewer","Reviewer","Reviewer,Admin ","Editor","Editor","Associate Editor","Admin"},
            {subjects[1],"","Admin","","Author","Associate Editor","","","Admin","Associate Editor"},
            {subjects[2],"","","Admin","","Author","Editor","","Editor",""}
    };


    int m = 4, n = 10;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)

            // Prints ' ' if j != n-1 else prints '\n'
            std::cout << matrix[i][j] << " \n"[j == n-1];
}