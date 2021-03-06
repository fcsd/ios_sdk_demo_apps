/*
 *
 *  ZDCImageViewer.h
 *  ZDCChat
 *
 *  Created by Zendesk on 05/11/2014.
 *
 *  Copyright (c) 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */


#import <UIKit/UIKit.h>


/**
 * In-chat image viewer.
 */
@interface ZDCImageViewer : UIViewController <UIScrollViewDelegate>


/**
 * The Scrollview providing scrolling.
 */
@property (nonatomic, strong) UIScrollView *scrollView;

/**
 * Mask providing independent background color.
 */
@property (nonatomic, strong) UIView *mask;

/**
 * The image view itself.
 */
@property (nonatomic, strong) UIImageView *imageView;

/**
 * The image view that triggered this viewer.
 */
@property (nonatomic, strong) UIImageView *sourceImageView;

/**
 * The initial scale of the image.
 */
@property (nonatomic, assign) CGFloat originalScale;


/**
 * New instance.
 * @param image the image to be presented
 * @param sourceImageView the image view we are transitioning from
 */
- (instancetype) initWithImage:(UIImage*)image sourceImageView:(UIImageView*)sourceImageView;

/**
 * Animate in.
 */
- (void) present;


@end

