import UIKit

class ViewController: UIViewController {
    
    let softTime = 5
    let mediumTIme = 7
    let hardTime = 12
    
    let eggTimes = ["Soft": 5, "medium": 7, "hard": 12]
    
    var secondsRemaining = 60
    
    @IBAction func hardnessSelected(_ sender: UIButton) {
        
        let hardness = sender.currentTitle // Soft, Medium, Hard
        
        secondsRemaining = eggTimes[hardness]!
        
        
        Timer.scheduledTimer(withTimeInterval: 1.0, repeats: true) { (Timer) in
            if self.secondsRemaining > 0 {
                    print ("\(self.secondsRemaining) seconds")
                    self.secondsRemaining -= 1
                } else {
                    Timer.invalidate()
                }
            }
        
    }
    
}
