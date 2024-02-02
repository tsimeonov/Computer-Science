<h2>Step by Step Guide for creating the Quiz App</h2>

<p style="color: FireBrick">Step 1: Start by linking the code with the design</p>

- Create an `IBOutlet` from my Qestion label as well as my progress view. inside the `UIViewController`
  - name the Question label `questionLabel`
  - name the Progress view `progressView`
- Do the same for the true and false buttons. Name them `trueButton` and `falseButton`.
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

<p style="color: FireBrick">Step 2: Creating an array `quiz`</p>

```swift
let quiz = [
  "Four + Two is equal to Six",
  "Five - Three is greater that One",
  "Three + Eight is less tahn Ten"
]
```

- Track which question the user is currently reading by creating a variable `questionNumber`

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

<p style="color: FireBrick">Step 3</p>

Remove the `print` stetements from the function `answerButtonPressed` and add the following:

```swift
if userAnswer == actualAnswer {
    sender.backgroundColor = UIColor.green
} else {
    sender.backgroundColor = UIColor.red
}
```

Right now the `backgroudColor` stays on the button, to clear it follow the code:

```swift
func updateUI () {
    questionLabel.text = quiz[questionNumber].text
    trueButton.backgroundColor = UIColor.clear
    falseButton.backgroundColor = UIColor.clear
}
```

The clearing of the button happens, so fast that the user is unable to see the color of the button `green` or `red`.

```swift
Timer.scheduledTimer(timeInterval: 0.2, target: self, selector: #selector(updateUI), userInfo: nil, repeats: false)
```

<p style="color: FireBrick">Step 4</p>

Complete the `progressBar`

```swift
progressBar.progress = Float(questionNumber) / Float(quiz.count)
```

You need to add `+1`, so the progress bar can represent that we are currently working on qestion 1.

```swift
progressBar.progress = Float(questionNumber + 1) / Float(quiz.count)
```

<p style="color: FireBrick">Step 5: Start implementig the MVC Design Pattern</p>

- Right click on the `Question.swift` and select `New Group from Selection`
- Rename the folder `Model`
- Right click on the `Main.storyboard` and select `New Group from Selection`
- Rename the folder `View`
- Right click on the `ViewController.swift` and select `New Group from Selection`
- Rename the folder `Controller`

<p style="color: FireBrick">Step 6</p>

- Right click on the `Model` folder, and select `New File...`, name the file `QuizBrain` which it will handle the logic.
- Move the `quiz` array from the `Main` to `QuizBrain`

```swift
struct QuizBrain {
    let quiz = [
        Question(q: "A slug's blood is green.", a: "True"),
        Question(q: "Approximately one quarter of human bones are in the feet.", a: "True"),
        Question(q: "The total surface area of two human lungs is approximately 70 square metres.", a: "True"),
        Question(q: "In West Virginia, USA, if you accidentally hit an animal with your car, you are free to take it home to eat.", a: "True"),
        Question(q: "In London, UK, if you happen to die in the House of Parliament, you are technically entitled to a state funeral, because the building is considered too sacred a place.", a: "False"),
        Question(q: "It is illegal to pee in the Ocean in Portugal.", a: "True"),
        Question(q: "You can lead a cow down stairs but not up stairs.", a: "False"),
        Question(q: "Google was originally called 'Backrub'.", a: "True"),
        Question(q: "Buzz Aldrin's mother's maiden name was 'Moon'.", a: "True"),
        Question(q: "The loudest sound produced by any animal is 188 decibels. That animal is the African Elephant.", a: "False"),
        Question(q: "No piece of square dry paper can be folded in half more than 7 times.", a: "False"),
        Question(q: "Chocolate affects a dog's heart and nervous system; a few ounces are enough to kill a small dog.", a: "True")
    ]
}
```

- Move the `questionNumber` from the `Main` to `QuizBrain`
- Create a new variable `quizBrain` in the `UIViewController`

```swift
var quizBrain = QuizBrain()
```

- Create a function `checkAnswer`, the parameter is a String in the `QuizBrain`

```swift
func checkAnswer(userAnswer: String) {
}
```

- Remove the and replace the code:

```swift
// Remove the code
let actualAnswer = quiz[questionNumber].answer
```

```swift
// Add this code
quizBrain.checkAnswer(userAnswer: userAnswer)
```

- Add the `!` to the end of

```swift
let userAnswer = sender.currentTitle!
```

<p style="color: FireBrick">Step 7</p>

- Modify the `checkAnswer` function to allow for an output `Bool`

```swift
func checkAnswer(userAnswer: String) -> Bool{
  if userAnswer == quiz[questionNumber].answer {
      // User got it right
      return true
  } else {
      // User got it wrong
      return false
  }
}
```

- Create a var `userGotItRight`

```swift
let userGotItRight = quizBrain.checkAnswer(userAnswer: userAnswer)
```

- Remove the `userAnswer == actualAnswer` from the if statement and type `userGotItRight`

- Create a new function `getQuestionText` with an output of `String` inside the `QuizBrain`

```swift
func getQuestionText () -> String  {
  return quiz[questionNumber].text
}
```

Inside the `Main` edit the `updateUI` function:

```swift
questionLabel.text = quizBrain.getQuestionText()
```

- Create a new function `getProgress()` inside the `QuizBrain`

```swift
func getProgress () -> Float{
    let progress = Float(questionNumber + 1) / Float(quiz.count)
    return progress
}
```

- Update the `updateUI` function in the `Main`

```swift
progressView.progress = quizBrain.getProgress()
```

- Cut out the quiz progression functionality from the `main`

```swift
if questionNumber + 1 < quiz.count {
    questionNumber += 1
} else {
    questionNumber = 0
}
```

- Add the `quizBrain.nextQuestion()` to the `Main`

```swift
quizBrain.nextQuestion()
```

- Mark the function `nextQestion` with mutating keyword

```swift
mutating func nextQuestion() {
  if questionNumber + 1 < quiz.count {
      questionNumber += 1
  } else {
      questionNumber = 0
  }
}
```

<p style="color: FireBrick">Step 8</p>

- Add a `label` and place it under the `Stack View`
- Modify the properties of the label
  - Change the text color to white
- Create an `IBAutlet` that links the label to the `ViewController`
- Name the label `scoreLabel`
- Go under the `/Controller/ViewController` under the `updateUI()`type the following

```swift
scoreLabel.text = "Score: \(quizBrain.getScore())"
```

- Create a variable `score`. Place it under the `questionNumer` in the `quizBrain`

```swfit
var score = 0;
```

- Increase the score by 1, if the user got the answer right. Place it in the `checkAnswer` function

```swift
mutating func checkAnswer(userAnswer: String) -> Bool{
  if userAnswer == quiz[questionNumber].answer {
      // User got it right
      score += 1
      return true
  } else {
      // User got it wrong
      return false
  }
}
```

- Create a new function `getScore` that returns an Integer

```swift
func getScore() -> Int {
  return score
}
```

- Reset the `score` to 0 when the quiz restarts.

```swift
mutating func nextQuestion() {
  if questionNumber + 1 < quiz.count {
      questionNumber += 1
  } else {
      questionNumber = 0
      score = 0
  }
}
```
