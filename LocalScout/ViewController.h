//
//  ViewController.h
//  LocalScout
//
//  Created by Thomas Theakanath on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMessageComposeViewController.h>

@interface ViewController : UIViewController <MFMessageComposeViewControllerDelegate>

-(IBAction)buttonclicked:(id)sender;
@end
