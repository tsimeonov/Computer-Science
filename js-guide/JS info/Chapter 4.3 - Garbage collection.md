## 4.3.1 Reachability

Simply put, "reachable" values are those that are accessible or usable somehow.

1. There's base set of inherently reachable valuesm that cannot be deleted for obvious reasons.
   For instance:

- The current executing function, its local variables and parametres
- Other functions on the current chain of nested calls, their local varialbes and parameters.
- Global varialbes.

2. Any other value is considered reachable if it's reacahble from a root by a reference or by a chain of reference.

There's a background process in the JS engine that is called `garbage collector`.
It monitors all obkects and removes those that have become unreachable.
