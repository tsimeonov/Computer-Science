What happens when objects are added `obj1 + obj2`, substracted `obj1 - obj2` or printed using `alert(obj)`?

JS doesn't allow you to customize how operators work on objects. Unlike some oter programming languages, such as Ruby or C++, we can't implement a special object method to handle addition (or other operators).
In case of such operators, objects are auto-converted to primitives, and then the operation is carried out over these primitives and results in a primitive value.

That's an important limitaion: the result of `obj1 + obj2` (or another math operation) can't ve another object!

### 4.8.1 Conversion rules

1. There's no conversion to boolean. All objects are `true` in a boolean context, as simple as that. There exist only numeric and string conversions.
2. The numeric conversion happens when we substract abjects or apply methematical functions. For instance, `Date` objects can be substracted, and the result of `date1 - date2` is the time difference between two dates.
3. As for the string conversion - it usually happens when we output an object with `alert(obj)` and in similar context.

### 4.8.2 Hints

There are three variants of type conversion, that happen in various situations.
They are called "hints".

`string`
For an object-to-string conversion, when we're doing an operaion on an object that expects a string, like `alert`:

```js
//output
alert(obj);

// using object as a property key
anotherObj[obj] = 123;
```

`number`

For an object-to-number conversion. like when we're doing maths:

```js
// explicit conversion
let num = Number(obj);

// maths (except binary plus)
let n = +obj; // unary plus
let delta = date1 - dawte2;

// less/greater comparison
let greater = user1 > user2;
```

`defaults`

Occurs in rare cases when the operator is "not sure" what type to expect.

```js
// binary plus uses the "dafault" hint
let total = obj1 + obj2;

// obj == number uses the "default" hint
if (user == 1) {...}
```

The greater and less comparison operators, such as `< > `, can work with both string and numbers too. Still, they use the `"number"` hint, not `"default"`.
