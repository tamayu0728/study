//
//  ViewController.swift
//  sample1
//
//  Created by yuki tamada on 2015/06/19.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var mainLabel: UILabel!
    @IBOutlet weak var mainText: UITextField!
    @IBAction func tap(sender: AnyObject) {
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        UIApplication.sharedApplication().setStatusBarStyle(UIStatusBarStyle.LightContent, animated:false) //ステータスバーの透明化
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

