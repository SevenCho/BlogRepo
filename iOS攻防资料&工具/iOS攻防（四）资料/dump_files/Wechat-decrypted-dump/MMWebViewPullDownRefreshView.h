//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EGORefreshTableHeaderView.h"

@class MMActivityIndicator, UIImageView;

@interface MMWebViewPullDownRefreshView : EGORefreshTableHeaderView
{
    MMActivityIndicator *m_reflashImageView;
    UIImageView *m_tipBkg;
    BOOL _bIsDrag;
}

- (void).cxx_destruct;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIsDragView:(BOOL)arg1;

@end

