#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int numbers_animals = 4;
    const Animal* animals[numbers_animals];

    for(int i = 0; i < 4; i++)
    {
        if (i >= numbers_animals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for(int i = 0; i < numbers_animals; i++)
    {
        animals[i]->makeSound();
    }

    for(int i = 0; i < numbers_animals; i++)
    {
        delete(animals[i]);
    }
    
    return 0;
}
