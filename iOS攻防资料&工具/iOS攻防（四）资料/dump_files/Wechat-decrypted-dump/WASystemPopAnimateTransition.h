//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMUIViewControllerTransitionInfo.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIViewController, WAWebViewController;

@interface WASystemPopAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting;
    UIViewController *animatedTransitionRespondViewController;
    WAWebViewController *_currentWebviewController;
}

@property(nonatomic) __weak WAWebViewController *currentWebviewController; // @synthesize currentWebviewController=_currentWebviewController;
@property(nonatomic) BOOL isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

