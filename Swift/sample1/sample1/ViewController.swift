//
//  ViewController.swift
//  sample1
//
//  Created by yuki tamada on 2015/06/19.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

import UIKit

class ViewController: UIViewController{
    
    var titleArray:[String] = ["大吉","吉","中吉","小吉","末吉","凶"]
    var messageArray = ["すげーいい","結構いい","まあいい","いい","ぎりいい","だめ"]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    @IBAction func tapAlert(sender: AnyObject) {
        var randNumber:Int = Int(arc4random() % 6)
        var alertController = UIAlertController(title: titleArray[randNumber], message: messageArray[randNumber], preferredStyle: .Alert)
        alertController.addAction(UIAlertAction(title: "OK", style: .Default, handler: nil))
        presentViewController(alertController, animated: true, completion: nil)
    }
}

