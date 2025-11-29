#include "AbstractAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "print_utils.hpp"

// For every exercise, you have to provide the most complete tests you can.
// Constructors and destructors of each class must display specific messages. Don’t use the
// same message for all classes.
// Start by implementing a simple base class called AbstractAnimal. It has one protected
// attribute:
// • std::string type;
// Implement a Dog class that inherits from AbstractAnimal.
// Implement a Cat class that inherits from AbstractAnimal.
// These two derived classes must set their type field depending on their name. Then,
// the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
// The type of the AbstractAnimal class can be left empty or set to the value of your choice.
// Every AbstractAnimal must be able to use the member function:
// makeSound()
// It will print an appropriate sound (cats don’t bark).
// 8
// C++ - Module 04 Subtype Polymorphism, Abstract Classes, and Interfaces
// Running this code should print the specific sounds of the Dog and Cat classes, not
// the AbstractAnimal’s.

// To ensure you understood how it works, implement a WrongCat class that inherits
// from a WrongAnimal class. If you replace the AbstractAnimal and the Cat by the wrong ones
// in the code above, the WrongCat should output the WrongAnimal sound.
// Implement and turn in more tests than the ones given above.

int main(void)
{
    AbstractAnimal **arr;
    size_t arrSize=10;
    size_t arrSizeHalf=arrSize/2;

    arr = new AbstractAnimal*[arrSize];
    for (size_t i=0; i<arrSizeHalf;i++)
    {
        Dog *dog = new Dog;
        arr[i] = dog;
    }
    for (size_t j=arrSizeHalf;j<arrSize;j++)
    {
        Cat *cat = new Cat;
        arr[j] = cat;
    }
    for (size_t i=0;i<arrSize;i++)
        arr[i]->makeSound();
    for (size_t i=0; i<arrSize;i++)
        delete (arr[i]);
    delete (arr);
    // AbstractAnimal animal = Animal();this cannot compile.
    WrongAnimal *wrong_cat = new WrongCat();
    wrong_cat->makeSound();//this should be meaow initially, but if abstract,it won't. 
    delete (wrong_cat);
    return 0;
}
