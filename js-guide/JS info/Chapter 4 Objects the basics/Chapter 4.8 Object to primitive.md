What happens when objects are added `obj1 + obj2`, substracted `obj1 - obj2` or printed using `alert(obj)`?

JS doesn't allow you to customize how operators work on objects. Unlike some oter programming languages, such as Ruby or C++, we can't implement a special object method to handle addition (or other operators).
In case of such operators, objects are auto-converted to primitives, and then the operation is carried out over these primitives and results in a primitive value.

That's an important limitaion: the result of `obj1 + obj2` (or another math operation) can't ve another object!
