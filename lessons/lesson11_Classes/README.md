# Classes

## Lesson contains
- What is a class
- How to declare a class
- How to create an object
- The difference between private and public
- How to access methods and attributes
- How to use class inherence

## Description
### Classes and objects
Classes are structures to have a virtual representation of objects. To do so, classes are composed of methods and attributes. Attributes are variables related to its parents object while methods are functions that can access the attributes of the same object. The classes are the blue prints of the object type it represents. An object is an instance of a class.

To create a class use `class className{}` and add your methods and attributes within the brackets.
Use `private` to create attributes and methods only accessable within the class and `public` for any instance accessable ouside of the object.

Add a constructor with `className(inputType param1, ...){}` with no declarators and the parameters your class need to create an object. Then include the function and set the attributes need withinh the parenthesis.

### inheritence
Classes can inherit from other classes. This means that the child class will have the same methods and attributes than their parent class. You can then add more methods to create a more detailed class. This allows for ex: fruits to have a prent class to define apples and oranges.

To inherit use `class childClassName: public parentClassName` and to execute the parent constructor specify it in the child constructor as follow `childClassName(childParams): parentClassName(parentParams)` where the parent parameters are the input parameter of the parent class as define in the children parameter domain.