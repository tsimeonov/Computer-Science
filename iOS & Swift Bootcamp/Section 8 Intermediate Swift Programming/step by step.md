<h2>Egg Timer</h2>

<h5 style="color: FireBrick">Step 1: Setup the skeleton Project</h5>

If you want a large font size for your label, but you want to be able to render on a smaller screen size.

There are a few options:

1. Click on the label, type 0 lines in the `atribute inspector`.
2. Again in the `atribute inspector` under autoshrink select `minimum font size` to 15 for example.

The next action is to create an IBaction called `hardnessSelected` and link the three buttons `Soft`, `Medium` and `Hard`.

```swift
// Add this piece of code to print the title of the buttons when clicked.
 print(sender.currentTitle!)
```

Create three variables `softTime`, `mediumTime` and `hardTime`.

```swift
let softTime = 5
let midiumTIme = 7
let hardTime = 12
```

Create a new variable `hardness`, remove the print statment from before and replace it with the following

```swift
let hardness = sender.currentTitle!
```

<h5 style="color: FireBrick">Step 2: Create the timer</h5>

```swift
let eggTimes = ["Soft": 300, "Medium": 420, "Hard": 720];

var secondsRemaining = 60
```

Type the following in the `IBAction hardnessSelected`

```swift
secondsRemaining = eggTimes[hardness!]!

Timer.scheduledTimer(timeInterval: 1.0, target: self, selector: #selector(updateTimer), userInfo:nil, repeats: <#T##Bool#>)
```

Outside the `IBAction` type the following:

```swift
@objc func updateTimer() {
    if secondsRemaining > 0 {
        print("\(secondsRemaining) seconds")
        secondsRemaining -= 1
    }
}
```

Create a new variable `timer`

```swift
let timer = Timer()
```

Invalidate the `timer`, stop it and cancel it, so that the next time we create a timer, we acually create a brand new one.

```swift
timer.invalidate()
```

Assing the `timer` varialbe to the `Timer()`

```swift
timer = Timer.scheduledTimer(timeInterval: 1.0, target: self, selector: #selector(updateTimer), userInfo:nil, repeats: <#T##Bool#>)
```

The whole code should look like this:

```swift
import UIKit

class ViewController: UIViewController {

    let eggTimes = ["Soft": 5, "Medium": 7, "Hard": 12]

    var secondsRemaining = 60

    var timer = Timer()

    @IBAction func hardnessSelected(_ sender: UIButton) {

        timer.invalidate()

        let hardness = sender.currentTitle! // Soft, Medium, Hard

        secondsRemaining = eggTimes[hardness]!

        timer = Timer.scheduledTimer(timeInterval: 1.0, target:self, selector: #selector(updateTimer), userInfo:nil, repeats: true)
    }

    @objc func updateTimer() {
        if secondsRemaining > 0 {
            print("\(secondsRemaining) seconds")
            secondsRemaining -= 1
        }
    }
}
```

<h5 style="color: FireBrick">Step 3: Change the text in the title label</h5>

Create an IBOutlet called `titleLabel`.

```swift
@IBOutlet weak var titleLabel: UILabel!
```

In the function updateTimer(), change the text of the titleLabel.

```swift
@objc func updateTimer() {
    if secondsRemaining > 0 {
        print("\(secondsRemaining) seconds")
        secondsRemaining -= 1
    } else {
        timer.invalidate()
        titleLabel.text = "DONE!"
    }
}
```

<h5 style="color: FireBrick">Step 5: Create the progress bar</h5>

- Press the show library button, search for progress view.
  Drag the progress view under the Timer View in the `View Controller Scene`.
- Select the Progress view and click on `Add new constraints`.
  Type `0` from the left and `0` from the right.
- Click on the `Align` button and make sure that the progress view is `Vertically in Container`.
- Select the `Progress View`, click on `add new constraints`, increase the height to 10px.
- Select the `Progress View`, in the `Progress Tint` select `System yellow color`, in the `Track Tint` select `System Gray Color`
- Link the progress bar to the `viewController`, name it `progressBar`

```swift
 @IBOutlet weak var progressBar: UIProgressView!
```

Type the following code on the `hardnessSelected` IBAction.

```swift
progressBar.progress = 1.0
```
