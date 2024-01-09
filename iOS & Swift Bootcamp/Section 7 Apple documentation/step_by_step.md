<h2>Xylophone</h2>

<h5 style="color: FireBrick">Step 1: Link the buttons</h5>

- Link the first button `C` to the `ViewController`. Hold the `control ^` key on the keyboard and the the button to the `ViewController`.
- Name the action `keyPressed` and change thet type to `UIButton`.

```swift
@IBAction func keyPressed(_ sender: UIButton) {
}
```

<h5 style="color: FireBrick">Step 2: How to play sound using Swift</h5>

- import the `AVFoundation` in the project.

```swift
import AVFoundation
```

- Create a variable `player` and specify the data type `AVAudioPlayer`

```swift
var player: AVAudioPlayer?
```

- Paste the code in the project

```swift
func playSound() {
    guard let url = Bundle.main.url(forResource: "soundName", withExtension: "mp3") else { return }

    do {
        try AVAudioSession.sharedInstance().setCategory(.playback, mode: .default)
        try AVAudioSession.sharedInstance().setActive(true)

        player = try AVAudioPlayer(contentsOf: url, fileTypeHint: AVFileType.mp3.rawValue)

        guard let player = player else { return }

        player.play()

    } catch let error {
        print(error.localizedDescription)
    }
}
```

- Rename the `"SoundName"` to `"C"` and the `mp3` to `wav`
- Call the `playSound()` from the `keyPressed()`

- Edit the playSound() function

```swift
func playSound() {
    let url = Bundle.main.url (forResource: "C", withExtension: "wav")
    player = try! AVAudioPlayer(contentsOf: url!)
    player.play()
}
```

- Change the `?` to `!` in the `player` variable

```swift
var player: AVAudioPlayer!
```

- Good to know information about the `!` and `?`

The exclamation mark `!` is used as a force-unwrapping operator when dealing with optionals. For instance, if a variable is an optional string (`String?`) and you want to force-unwrap it to access its underlying value, you would `!` at the end of the variable to force-unwrap it.

```swift
let optionalString: String? = "Hello"
let unwrappedString = optionalString!   // force-unwrapping the optional
print(unwrappedString) // This will print "Hello"
```

<h5 style="color: FireBrick">Step 3: Link all the buttons</h5>

- Drag the line that appers from clicking on the circle next to the `IBAction func keyPressed()`

<h5 style="color: FireBrick">Step 4: Playing different sounds</h5>

- Modify the function `playSound` with a parameter of `soundName` with a data type of String.

```swift
func playSound(soundName: String) {
    let url = Bundle.main.url (forResource: soundName, withExtension: "wav")
    player = try! AVAudioPlayer(contentsOf: url!)
    player.play()
}
```
