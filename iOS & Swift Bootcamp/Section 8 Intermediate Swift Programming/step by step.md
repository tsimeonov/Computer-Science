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
