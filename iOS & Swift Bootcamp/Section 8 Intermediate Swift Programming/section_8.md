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

---

<h5>Egg timer</h5>

```swift
import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var titleLabel: UILabel!
    let eggTimer = ["Soft": 3, "Medium": 4, "Hard": 7]

    var secondsRemainig = 60

    var timer = Timer()

    @IBAction func hardnessSelected (_ sender: UIButton) {

        timer.invalidate()

        let hardness = sender.currentTitle! // Soft, Medium, Hard

        secondsRemainig = eggTimer[hardness]!

        timer = Timer.scheduledTimer(timeInterval: 1.0, target: self, selector: #selector(updateTimer), userInfo: nil, repeats: true)
    }

    @objc func updateTimer() {
        if secondsRemainig > 0 {
            print("\(secondsRemainig) seconds")
            secondsRemainig -= 1
        } else {
            timer.invalidate()
            titleLabel.text = "Done"
        }
    }
}

```

---

<h5>Showing the Timer to the User with a Progress Views</h5>

Drag the Progress Bar to the `UIViewController`

```swift
 @IBOutlet weak var progressBar: UIProgressView!
```

in the `@IBAction hardnessSelected` add the following

```swift
@IBAction func hardnessSelected (_ sender: UIButton) {

        progressBar.progress = 1.0
}
```

---

<h5>Calculating the Progress Percentage</h5>

---

<h5>Using the 5 step approach to debug our App</h5>

1. What did you expect your dode to do?
2. What happened instead?
3. What does your expectation depend upon?
4. How can we test the things our expectations depend on?
5. Fix our code to make reality match expectations

---
