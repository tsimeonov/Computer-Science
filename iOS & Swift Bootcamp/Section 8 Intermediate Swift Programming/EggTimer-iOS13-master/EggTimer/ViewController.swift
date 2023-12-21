import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var titleLabel: UILabel!
    let eggTimer = ["Soft": 3, "Medium": 4, "Hard": 7]
    
    var secondsRemainig = 60
    
    var timer = Timer()
    
    @IBAction func hardnessSelected (_ sender: UIButton) {
        
        timer.invalidate()
        
        let hardness = sender.currentTitle! // Soft, Medium, Hard
        
        secondsRemainig = eggTimer[hardness]!
        
        timer = Timer.scheduledTimer(timeInterval: 1.0, target: self, selector: #selector(updateTimer), userInfo: nil, repeats: true)
    }
    
    @objc func updateTimer() {
        if secondsRemainig > 0 {
            print("\(secondsRemainig) seconds")
            secondsRemainig -= 1
        } else {
            timer.invalidate()
            titleLabel.text = "Done"
        }
    }
}
