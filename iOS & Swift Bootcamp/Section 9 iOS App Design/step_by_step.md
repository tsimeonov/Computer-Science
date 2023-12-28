<h2>Step by Step Guide for creating the Quiz App</h2>

- Step ...

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
