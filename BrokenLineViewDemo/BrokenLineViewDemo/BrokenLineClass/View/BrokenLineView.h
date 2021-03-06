//
//  BrokenLineView.h
//  DrawRect
//
//  Created by LiuZhiwei on 16/1/5.
//  Copyright © 2016年 smartdot.mau. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BrokenLineViewDelegate <NSObject>

@required
- (void)showStepValue:(NSString *)stepValue point:(NSString *)point;

@end

@interface BrokenLineView : UIView

@property (nonatomic, strong, readwrite) NSArray   *points;
@property (nonatomic, strong, readwrite) NSArray   *stepCounts;
@property (nonatomic, assign) id <BrokenLineViewDelegate> delegate;

@end
