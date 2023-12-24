import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var progressView: UIProgressView!
    @IBOutlet weak var questionLabel: UILabel!
    @IBOutlet weak var trueButton: UIButton!
    @IBOutlet weak var falseButton: UIButton!
    
    let quiz = [
      "Four + Two is equal to Six",
      "Five - Three is greater that One",
      "Three + Eight is less tahn Ten"
    ]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        questionLabel.text = "four + two is equal to six"
    }

    @IBAction func answerButtonPressed(_ sender: UIButton) {
    }
    
}

