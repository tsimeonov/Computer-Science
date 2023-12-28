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

The clearing of the button happens, so fast that the user is unable to see the color of the button `green` or `red`.

```swift
Timer.scheduledTimer(timeInterval: 0.2, target: self, selector: #selector(updateUI), userInfo: nil, repeats: false)
```
