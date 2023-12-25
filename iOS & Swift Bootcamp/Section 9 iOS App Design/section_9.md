<h2>iOS App design patterns and code structuring</h2>

What is covered in this section

- Show quiz questions
- Check the answers
- Learn about Swift Structures
- Learn about design patterns and use the Model View Controller pattern.
- Learn about Swift Functions that can have outputs.
- Understand immutability.

---

<h5>Setting up the Quizzler Project and SWhowing the Questions</h5>

<p style="color: FireBrick">Start by linking the code with the design</p>

- Create an `IBOutlet` from my Qestion label as well as my progress view. inside the `UIViewController`
  - name the Question label `questionLabel`
  - name the Preogress view `progressView`
- Do the same for the true and false buttons. Named them `trueButton` and `falseButton`.
- Add IBAction when eiher the true or false button gets pressed.
  - Add the true button and false buttons, name it `answerButtonPressed`.

```swift
class ViewController: UIViewController {

    @IBOutlet weak var progressView: UIProgressView!
    @IBOutlet weak var questionLabel: UILabel!
    @IBOutlet weak var trueButton: UIButton!
    @IBOutlet weak var falseButton: UIButton!

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func answerButtonPressed(_ sender: UIButton) {
    }
}
```

- Next step is creating an array `quiz`

```swift
let quiz = [
  "Four + Two is equal to Six",
  "Five - Three is greater that One",
  "Three + Eight is less tahn Ten"
]
```

- Track which question the user is currently reading by creaating a variable `questionNumber`

```swift
questionNumber = 0;
```

- Update the `questionLabel.text`

```swift
questionLabel.text = quiz[questionNumber]
```

- Create a new function `updateUi`

```swift
func updateUI () {
  questionLabel.text = quiz[questionNumber]
}
```

---

<h5>Checking Answers using 2-Dimensional Arrays</h5>

```swift
// 1D Array
  "Four + Two is equal to Six"
  "Five - Three is greater that One"
  "Three + Eight is less tahn Ten"

// 2D Array
  "Four + Two is equal to Six",         "True"
  "Five - Three is greater that One",   "False"
  "Three + Eight is less tahn Ten"      "False"
```

- Update the code

```swift
  let quiz = [
      ["Four + Two is equal to Six", "True"],
      ["Five - Three is greater that One", "True"],
      ["Three + Eight is less tahn Ten", "False"]
    ]
```

- Figure out what the user choose by creating a new variable `userAnswer`

```swift
// create the var in the `answerButtonPressed`

let userAnswer = sender.currentTitle // True, falses
```

- Create var `actualAnswer`

```swift
let actualAnswer = quiz[questionNumber][1]
```

- Create an if statement

```swift
if userAnswer == actualAnswer {
  print("Right")
} else {
  print("Wrong")
}
```

- Create another if statement

```swift
if questionNumber + 1 < quiz.count {
  questionNumber += 1
}

```

- Reseet the `questionNumer` back to 0

```swift
if questionNumber + 1 < quiz.count {
  questionNumber += 1
} else {
  questionNumber = 0
}
```

---

<h5>Structures, Methods and Properties</h5>

Structures help us create custom data types.

```swift
// Defining the Structure
struct MyStruct {}

// Initialisng the Structure
MyStruct()
```

<details>
  <summary>Struct Example</summary>

```swift
struct Town {
  let name = "Todorland"
  var citizens = ["Todor", "Batman"]
  var resources = ["Grain": 100, "Ore": 42, "Wool": 42]

  func fortify() {
      print("Defences increased!")
  }
}

var myTown = Town()

print(myTown.citizens) // ["Todor", "Batman"]
print("\(myTown.name) has \(myTown.resources["Grain"]!) bags of grain")

myTown.citizens.append("John Wick")
print(myTown.citizens) // ["Todor", "Batman", "John Wick"]

myTown.fortify()

// The name, citizens and the resources are the properties of the struct
// fortifty is the method of the struct
```

</details>

Struct = Blueprint

```swift
// Creating the initialiser
init() {}
```
