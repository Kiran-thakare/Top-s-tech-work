//WAP to show difference between Structure and Union.
Structures (struct):
A structure is a composite data type that groups together variables of different data types under a single name.
Members of a structure can have different data types.
Each member of a structure has its own memory location.
The memory occupied by a structure is the sum of the memory occupied by its individual members.
Structures are commonly used to represent records, objects, or entities with multiple attributes.
Example:
struct Point {
    int x;
    int y;
};

Unions (union):
A union is also a composite data type that groups together variables of different data types under a single name.
Members of a union share the same memory location (i.e., they overlap).
Only one member of a union can hold a value at a time.
The memory occupied by a union is equal to the size of its largest member.
Unions are useful when memory efficiency is critical (e.g., in embedded systems).
Example:
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

Key Differences:

Memory Allocation:
Structures allocate separate memory for each member.
Unions share memory among their members.
Size:
Structure size is the sum of the sizes of its members.
Union size is equal to the size of its largest member.
Access:
In a structure, all members are accessible simultaneously.
In a union, only one member can be accessed at a time.
Use Cases:
Use structures when you need to store multiple attributes with distinct memory locations.
Use unions when memory efficiency is crucial and only one attribute needs to be accessed at a time.
Remember to choose between structures and unions based on your specific requirements! 🚀
