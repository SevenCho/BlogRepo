//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@class NSString;

@interface MailMessageViewModel : BaseMessageViewModel
{
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) BOOL hasAttachment;
@property(readonly, nonatomic) NSString *mailTitle;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

