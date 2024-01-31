import UIKit

class ViewController: UIViewController {
    
    let eggTimes = ["Soft": 5, "medium": 7, "hard": 12]
    
    var secondsRemaining = 60
    
    @IBAction func hardnessSelected(_ sender: UIButton) {
        
        let hardness = sender.currentTitle // Soft, Medium, Hard
        
        secondsRemaining = eggTimes[hardness!]!
        
        Timer.scheduledTimer(timeInterval: 1.0, target: self, selector: #selector(updateTimer), userInfo:nil, repeats: <#T##Bool#>)
    }
    
    @objc func updateTimer() {
        if secondsRemaining > 0 {
            print("\(secondsRemaining) seconds")
            secondsRemaining -= 1
        }
    }
    
}
