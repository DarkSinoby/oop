#include <string>
#include <utility>

class Animal
{
protected:
    std::string m_name;

    explicit Animal(std::string& name)
        : m_name(name)
    {
    }

public:
     std::string getName() { return m_name; }
};

class  Cat : public Animal
{
public:
     explicit Cat(std::string& name)
        : Animal(name)
    {
    }

};

class  Dog : public Animal
{
public:
     explicit Dog(std::string& name)
        : Animal(name)
    {
    }

};
class  Bird : public Animal {
public:
     explicit Bird(std::string name)
        : Animal(name) {
    }
};
int main() {
    return 0;
}