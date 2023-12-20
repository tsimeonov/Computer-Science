<h1>Section 8: Intermediate Swift Programming: Control Flow and Optionals</h1>

<h5>Set up the Skeleton Project</h5>

---

<h5>If/Else control flow</h5>

```swift
if trafficLight == "green" {
    go ()
} else if trafficLight == "amber" {
    slowDown()
} else {
    stop()
}
```

---

<h5>Swith Statement</h5>

```swift
switch hardness {
    case "Soft":
        print(5)
    case "Medium":
        print(7)
    case "Hard":
        print(12)
    default:
    print("Error")
}
```

Swift range operator

```swift
// closed range
a...b

// half-open range
a..<b

// One sided range
...b
```

---

<h5>Dictionary</h5>

```swift
var dictionary = ["Brewery": "a place where beer is made"]
```

```swift
// Creating the Dictionary
var dict : [String : Int] = ["Angela": 2343242, "Philip": 224124]

// Retrieve the value drom the dictionary
dict["Angela"] // output: 2343242
```

---

<h5>Defining and Unwrapping options</h5>

```swift
var hardness: String?
// String is a data Type
// By adding a ? at the end it becomes opotional, meaning it can be empty
```

```swift
var player1Username: String? = nil
player1Username = "jackbaur"
print(player1Username) // Output Optional("jackbaur")
// Unwrapping the Optional
print(player1Username?) // Output jackbaur
```
