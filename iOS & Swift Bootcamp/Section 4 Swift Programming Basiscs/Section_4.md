<h5>Cloning from GitHub</h5>

---

<h5>How to Design your app</h5>

Different content modes

- Aspect fit
- Scale to fill
- Aspect fill

---

<h5>Let's link our design to our code</h5>

main -> adjust editor options -> assistant

```swift
@IBOutlet weak var diceImageView1: UIImageView! // Interface buider outlet
```

use the #imageLiteral

```swift
class ViewController: UIViewController {
    @IBOutlet weak var diceImageView1: UIImageView!
    @IBOutlet weak var diceImageView2: UIImageView!

    override func viewDidLoad() {
        super.viewDidLoad()

        diceImageView1.image = #imageLiteral(resourceName: "DiceSix")
        diceImageView1.alpha = 0.5

        diceImageView2.image = #imageLiteral(resourceName: "DiceTwo")
    }


}
```

---

<h5>Responding to user interactions</h5>

```swift
@IBAction // Interface Builder Action
```

---

<h5>Storting data using variables and arrays</h5>

An array is ordered sequence of items.

```swift
class ViewController: UIViewController {
    @IBOutlet weak var diceImageView1: UIImageView!
    @IBOutlet weak var diceImageView2: UIImageView!

    var leftDiceNumber = 1
    var rightDiceNumer = 5

    override func viewDidLoad() {
        super.viewDidLoad()


    }

    @IBAction func rollButtonPressed(_ sender: UIButton) {

        diceImageView1.image = [ #imageLiteral(resourceName: "DiceOne"), #imageLiteral(resourceName: "DiceTwo"), #imageLiteral(resourceName: "DiceThree"), #imageLiteral(resourceName: "DiceFour"), #imageLiteral(resourceName: "DiceFive"), #imageLiteral(resourceName: "DiceSix") ][leftDiceNumber]
        leftDiceNumber = leftDiceNumber + 1

        diceImageView2.image = [ #imageLiteral(resourceName: "DiceOne"), #imageLiteral(resourceName: "DiceTwo"), #imageLiteral(resourceName: "DiceThree"), #imageLiteral(resourceName: "DiceFour"), #imageLiteral(resourceName: "DiceFive"), #imageLiteral(resourceName: "DiceSix") ][rightDiceNumer]
        rightDiceNumer = rightDiceNumer - 1

    }


}
```

---
