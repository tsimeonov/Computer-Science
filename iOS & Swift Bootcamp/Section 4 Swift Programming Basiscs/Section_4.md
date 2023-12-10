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
