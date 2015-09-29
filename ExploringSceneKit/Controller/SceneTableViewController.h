//
//  SceneTableViewController.h
//  ChicioSceneKit
//
//  Created by Fabrizio Duroni on 25/09/15.
//  Copyright © 2015 Fabrizio Duroni. All rights reserved.
//

#import "SceneSelection.h"

@import UIKit;

@interface SceneTableViewController : UITableViewController

/// Delegate of the SceneTableViewController.
@property (nonatomic, strong) id<SceneSelection> delegate;

@end