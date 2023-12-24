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

---
