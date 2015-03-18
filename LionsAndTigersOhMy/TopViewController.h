//
//  TopViewController.h
//  LionsAndTigersOhMy
//
//  Created by Michael Sevy on 3/18/15.
//  Copyright (c) 2015 Michael Sevy. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TopDelegate <NSObject>

@optional

-(void)topRevealButtonTapped:(id)TopViewController revealButtonTapped:(UIButton *)button;

@end

@interface TopViewController : UIViewController

@property (nonatomic, assign) id <TopDelegate> delegate;

@end

