#pragma once
#include <iostream>
#include <stack>
using namespace std;

class USBConnection {
private:
    int ID;
    USBConnection(int id) : ID(id) {}
    static stack<int> ids;

public:
    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            return nullptr;
        } else {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);
        }
    }

    ~USBConnection() {
        ids.push(ID);
    }

    int get_id() const {
        return ID;
    }
};

stack<int> USBConnection::ids = stack<int>({3,2,1});


