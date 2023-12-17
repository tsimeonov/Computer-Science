<h1>Section 7 Using and Understanding Apple Documentation</h1>

---

<h5>What you'll make by the end of this module</h5>

Xylophone - music app

---

<h5>Setting up the Xylophone Project</h5>

---

<h5>The 5 step approach to solve any programming problem</h5>

1. Google

```
<What i want my app to do> + <Which programming language> + <Which resource>
```

example: Play sound Swift StackOverflow

2. Stack Overflow
3. Implement
4. Docs
   Hold the options key and click on the keyword for quick look at the documentaion.

5. Customise

---

<h5>Functions and scope</h5>

Creating the function

```swift
func getMilk () {
   // do stuff
}

```

Calling the function

```swift
getMilk()
```

---

<h5>Linking multiple buttons to the same IBAction</h5>

Click and drag the round icon to the buttons you want to use.

---

<h5>Functions with Inputs ant Type Inference<h5>

Create a function with Input

```swift
func myFunction (parameter: DataType) {
   // Do something with input
}
```

Assign a data type to a variable

```swift
val myAge: String = "Three"
```

Creating the function

```swift
func getMilk (bottles Int) {
   var cost = bottles * 1.5
}

// bottles --> Name
// Int --> Data type
```

Calling the function

```swift
getMilk(bottles: 2)

// parameter --> bottles
// argument --> 2
```

---

<h5>Play different sounds for different buttons</h5>

---
