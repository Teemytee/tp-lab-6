//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once

class Driver:public  Personal{
public:
    Driver(int id, string name, int worktime, int base): Personal(id,  name, worktime, base){};
    ~Driver() = default;
    void drive_someone_to_somewhere(){
        cout<<"Poehali!";
    }
};

