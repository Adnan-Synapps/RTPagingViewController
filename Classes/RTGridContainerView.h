//
//  RTGridContainerView.h
//  RTPagingViewController
//
//  Created by ricky on 15/9/10.
//  Copyright (c) 2015年 ricky. All rights reserved.
//

#import <UIKit/UIKit.h>

extern const CGFloat RTGridSizeDynamicSize;


IB_DESIGNABLE
@interface RTGridContainerView : UIView
@property (nonatomic, assign) IBInspectable CGSize gridSize;
@property (nonatomic, assign) IBInspectable CGFloat itemMargin;
@property (nonatomic, assign) IBInspectable UIEdgeInsets contentInset;

@property (nonatomic, strong) NSArray *gridItems;
@end
