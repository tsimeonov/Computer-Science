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
