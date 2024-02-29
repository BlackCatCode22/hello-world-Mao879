#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(const string& _name, int _age, const string& _species): name(name), age(age), species(species) {}

    std::string getName() const {return name;}
    int getAge() const {return age;}
    std::string getSpecies() const {return species;}

    void setName(const std::string& _name) {name = _name;}
    void setAge(int _age) {age = _age;}
    void setSpecies(const std::string& _species) {species = _species;}

    virtual void printDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
    }
};


class Hyena: public Animal {
public:
    Hyena(const std::string& _name, int _age): Animal(_name, _age, "Zig") {}

    void laugh() const{
        std::cout << "Zig" << name << " is laughing!" << std::endl;
    }
};

class Lion: public Animal {
public:
    Lion(const std::string& _name, int _age): Animal(_name, _age, "Scar") {}

    void roar() const{
        std::cout << "Scar" << name << " is roaring!" << std::endl;}
};

class Tiger: public Animal {
public:
    Tiger(const std::string& _name, int _age): Animal(_name, _age, "Yogi") {}

    void jump() const{
        std::cout << "Yogi" << name << " is jumping!" << std::endl;}
};

class Bear: public Animal {
public:
    Bear(const std::string& _name, int _age): Animal(_name, _age, "Amber") {}

    void fish() const{
        std::cout << "Amber" << name << " is fishing!" << std::endl;}
};

int main() {
    std::vector<Animal*> animals;
    std::map<std::string, int> speciesCount;
    string filename

    std::ifstream inputFile("C:/kawai/Downloads/arrivingAnimals.txt");
    std::string name;
    int age;
    std::string species;

    while (inputFile >> name >> age >> species) {

        Animal* newAnimal;
        if (species == "Hyena")
            newAnimal = new Hyena(name, age);
        else if (species == "Lion")
            newAnimal = new Lion(name, age);
        else if (species == "Tiger")
            newAnimal = new Tiger(name, age);
        else if (species == "Bear")
            newAnimal = new Bear(name, age);
        else
            continue;

        animals.push_back(newAnimal);

        speciesCount[species]++;
    }
    std::ofstream outputFile("newAnimals.txt");
    for (const auto& animal: animals) {
        animal-> printDetails();
    }

    std::cout << "\nSpecies Count:\n";
    for (const auto& pair: speciesCount) {
        std::cout << pair.first << ": " << pair.second << " animals\n";
    }

    for (auto& animal: animals) {
        delete animal;
    }
    return 0;
}
