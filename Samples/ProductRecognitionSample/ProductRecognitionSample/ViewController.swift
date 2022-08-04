import UIKit
import ProductRecognition

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    @IBAction func openSinglePhoto(_ sender: Any) {
        let singlePhotoVC = SinglePhotoVC()
        singlePhotoVC.modalPresentationStyle = .fullScreen
        self.present(singlePhotoVC, animated: true)
    }
}
