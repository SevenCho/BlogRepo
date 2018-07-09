//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, MMUIViewController, NSAttributedString, NSMutableArray, NSString, UITableView, UIView, WNParagraphInfo;

@protocol WNParaCellViewDelegate <NSObject>

@optional
@property(nonatomic) BOOL m_bMemuSelectText;
- (void)onCellStopRecordAlertViewWillShow;
- (BOOL)ifTextLengthExceedLimit:(int)arg1;
- (void)onTextViewPaste;
- (BOOL)shouldLetTextViewHandleSelectAll;
- (void)onSelectAll;
- (void)onSelectObjectView:(UIView *)arg1;
- (void)onSelectionChanged:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
- (void)onCellViewResighFirstResponser;
- (BOOL)canEdit;
- (BOOL)isEditing;
- (NSMutableArray *)getDataArray;
- (FavoritesItem *)getFavItem;
- (MMUIViewController *)getViewController;
- (void)OnTodoCheckChange;
- (void)OnListStyleTextKeyboardReturn:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2 Atlocation:(int)arg3;
- (void)OnObjectCellDelTextRight:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)OnObjectCellDelTextLeft:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)OnObjectCellKeyboardReturnRight:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)OnObjectCellKeyboardReturnLeft:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)OnObjectCellAddTextRight:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2 newText:(NSAttributedString *)arg3;
- (void)OnObjectCellAddTextLeft:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2 newText:(NSAttributedString *)arg3;
- (void)onMainTextKeyboardBack:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)onCellContentChanged:(WNParagraphInfo *)arg1;
- (void)onTextTooLongNeedCut:(WNParagraphInfo *)arg1 inRange:(struct _NSRange)arg2 withText:(NSString *)arg3;
- (void)onTextChanged:(WNParagraphInfo *)arg1 newText:(NSAttributedString *)arg2;
- (void)updateEditingCellInfo:(UIView *)arg1;
- (void)textCellShouldEndEditing:(UIView *)arg1;
- (void)textCellDidBeginEditing:(UIView *)arg1;
- (void)textCellShouldBeginEditing:(UIView *)arg1;
- (void)updataTableViewHeight:(UITableView *)arg1;
@end

