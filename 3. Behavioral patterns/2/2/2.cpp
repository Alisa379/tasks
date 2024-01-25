
#include <iostream>
#include <vector>
#include <fstream>

class Observed {
public:
    void AddObserver(Observer* observer) {
        observers.push_back(observer);
    }
    void RemoveObserver(Observer* observer) {
        auto it = std::remove(observers.begin(), observers.end(), observer);
        observers.erase(it, observers.end());
    }
    void warning(const std::string& message) const {
        for (auto observer : observers) {
            observer->onWarning(message);
        }
    }
    void error(const std::string& message) const {
        for (auto observer : observers) {
            observer->onError(message);
        }
    }
    void fatalError(const std::string& message) const {
        for (auto observer : observers) {
            observer->onFatalError(message);
        }
    }
private:
    std::vector<Observer*> observers;
};

class Observer {
public:
    virtual void onWarning(const std::string& message) {}
    virtual void onError(const std::string& message) {}
    virtual void onFatalError(const std::string& message) {}
};

class warning_Observer : Observer {
public:
    void onWarning(const std::string& message) override {
        std::cout << message << std::endl;
    }
};

class error_Observer : Observer {
public:
    void onError(const std::string& message) override {
        std::ofstream file("D:\\file.txt");
        file << message << std::endl;
    }
};

class fatal_Observer : Observer {
public:
    void onFatalError(const std::string& message) override {
        std::cout << message << std::endl;
        std::ofstream file("D:\\file.txt");
        file << message << std::endl;
    }
};

int main()
{
    Observer ob;
    Observed obd;
    obd.AddObserver(&ob);
    obd.warning("Warning!");
    obd.error("Error!");
    obd.fatalError("Fatal error!");
}

