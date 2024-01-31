<h2>Egg Timer</h2>

<h5 style="color: FireBrick">Step 1: Setup the skeleton Project</h5>

If you want a large font size for your label, but you want it to also be able to render on a samller screen size.

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

<h5 style="color: FireBrick">Step 1: Create the timer</h5>

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
