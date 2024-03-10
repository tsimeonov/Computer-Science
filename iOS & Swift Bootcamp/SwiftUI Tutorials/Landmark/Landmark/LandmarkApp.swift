//
//  LandmarkApp.swift
//  Landmark
//
//  Created by Todor simeonov on 10/03/2024.
//

import SwiftUI
import Foundation

@main
struct LandmarkApp: App {
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}

struct Landmark: Hashable, Codable {
    var id: Int
    var name: String
    var park: String
    var state: String
    var description: String
    
    private var imageName: String
    var image: Image {
        Image(imageName)
    }
}
