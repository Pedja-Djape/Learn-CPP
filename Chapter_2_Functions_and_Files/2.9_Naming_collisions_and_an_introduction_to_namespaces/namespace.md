# Namespaces

Namespaces provide a different type of scope region - the namespace scope. Namespaces can
only contain declarations and definitions. For example, you can define a function, which 
can contain its own executable statements, but you can't execute that function (i.e., call
that function).

Namespaces are useful because 2 different namespaces can have the same names and signatures for all their
functions, and yet they won't have any naming collisions.

## The Global Namespace

Any name not defined in a class, function, or a namespace is considered to be a part of the
global namespace (usually referred to as the global scope).

For now, there are two things you should know:

- Identifiers declared inside the global scope are in scope from the point of declaration to the end of the file.
- Although variables can be defined in the global namespace, this should generally be avoided

Example:

```
#include <iostream> // imports the declaration of std::cout into the global scope

// All of the following statements are part of the global namespace

void foo();    // okay: function forward declaration
int x;         // compiles but strongly discouraged: non-const global variable definition (without initializer)
int y { 5 };   // compiles but strongly discouraged: non-const global variable definition (with initializer)
x = 5;         // compile error: executable statements are not allowed in namespaces

int main()     // okay: function definition
{
    return 0;
}

void goo();    // okay: A function forward declaration
```

## Using namespace std (and why to avoid it)

A `using` directive allows us to access the names in a namespace without using a namespace prefix. 
For example, when adding `using namespace std` in your code, you don't need to use `std::cout` and
can just use `cout`. 

Generally, it's a good idea to avoid using a using-directive because *any* identifier can conflict with *any*
identically named identifer in the namespace of interest. Naming collisions will become much more difficult to
avoid if you use using-directives for larger projects with several namespaces.