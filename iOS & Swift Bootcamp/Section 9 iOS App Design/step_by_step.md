<h2>Step by Step Guide for creating the Quiz App</h2>

<p style="color: FireBrick">Step 1: Start by linking the code with the design</p>

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

<p style="color: FireBrick">Step 2: Creating an array `quiz`</p>

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
