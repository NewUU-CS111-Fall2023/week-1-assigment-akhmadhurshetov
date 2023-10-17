#include <string>
class FamilyMember {
protected:
    std::string name;
    int age;

public:
    FamilyMember(std::string n, int a) : name(n), age(a) {}
    virtual void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Derived class representing a child
class Child : public FamilyMember {
private:
    std::string schoolName;

public:
    Child(std::string n, int a, std::string s) : FamilyMember(n, a), schoolName(s) {}
    void display() override {
        std::cout << "Child's Name: " << name << ", Age: " << age << ", School: " << schoolName << std::endl;
    }
};

// Derived class representing a parent
class Parent : public FamilyMember {
private:
    std::string occupation;

public:
    Parent(std::string n, int a, std::string o) : FamilyMember(n, a), occupation(o) {}
    void display() override {
        std::cout << "Parent's Name: " << name << ", Age: " << age << ", Occupation: " << occupation << std::endl;
    }
};
