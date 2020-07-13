//
//  ViewController.swift
//  ffmpeg_mac
//
//  Created by konglee on 2020/7/13.
//  Copyright © 2020 konglee. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }
    
    @IBAction func ffmpegAudioReadTestAction(_ sender: Any) {
        ffmpegTestReadAudio()
    }
    
    

}

