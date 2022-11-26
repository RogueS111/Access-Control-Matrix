#include <iostream>
#include "ACM.h"


int main() {
    std::string subjects[4];

    std::string files[2];
    std::string processes[2];
    std::string drives[2];

    std::string objects[10];

    std::string name, role;
    int decision;

    ACM acm;
    acm.createSubjects(subjects);
    acm.createFiles(files);
    acm.createProcesses(processes);
    acm.createDiskDrives(drives);
    acm.createObjects(objects, subjects, files, processes, drives);
    acm.printMatrix(objects, subjects);

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "\nEnter valid role: ";
    std::cin >> role;

    if (role == "Author"){
        std::cout << name << std::endl;
        std::cout << "1) Submit credentials" << std::endl;
    }
    else if (role == "Editor"){
        std::cout << name << std::endl;
        std::cout << "1) Receive credentials" << std::endl;
        std::cout << "2) Invite editors" << std::endl;
    }
    else if (role == "Associate"){
        std::cout << name << std::endl;
        std::cout << "1) Submit manuscripts for review" << std::endl;
        std::cout << "Enter a valid decision number: ";
        std::cin >> decision;
        if(decision == 1){
            std::cout << "\n\t1) Accept the manuscript as is" << std::endl;
            std::cout << "\t2) Accept the manuscript with minor changes" << std::endl;
            std::cout << "\t3) Accept the manuscript with major changes" << std::endl;
            std::cout << "\t4) Reject the manuscripts" << std::endl;
            std::cout << "\t5) Report copyright issues with the manuscripts" << std::endl;
        }
        else{
            std::cout << name << std::endl;
            std::cout << "Invalid decision" << std::endl;
        }
    }
    else if (role == "Reviewer"){
        std::cout << name << std::endl;
        std::cout << "1) Accept review invitations" << std::endl;
        std::cout << "2) Review manuscripts" << std::endl;
    }
    else if (role == "Administrator"){
        std::cout << name << std::endl;
        std::cout << "1) Manage roles" << std::endl;
        std::cout << "2) View objects" << std::endl;
    }
    else {
        std::cout << name << std::endl;
        std::cout << "Invalid role" << std::endl;
    }

    return 0;
}
