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
    
    var questionNumber = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        questionLabel.text = quiz[questionNumber]
    }

    @IBAction func answerButtonPressed(_ sender: UIButton) {
    }
    
}

