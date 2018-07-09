//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTReaderItemCellView.h"

#import "IDownloadImageExt.h"

@class BTImageItemCellViewModel, CAGradientLayer, MMUILabel, NSString, UIImageView;

@interface BTImageItemCellView : BTReaderItemCellView <IDownloadImageExt>
{
    CAGradientLayer *m_maskLayer;
    UIImageView *m_imageIcon;
    MMUILabel *m_imageNumLabel;
}

- (void).cxx_destruct;
- (void)onImageClicked;
- (void)OnDownloadImageOk:(id)arg1;
- (void)layoutSubviewsTopItemNoLandingPage;
- (void)layoutSubviewsTopItemWithLandingPage;
- (void)layoutSubviewsTopItem;
- (void)initNumLabelAndIcon;
- (void)onUpdateViewModel;
- (void)initCoverWithLandingPage;
- (void)initCoverWithNoLandingPage;
- (void)initTopReaderItem;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTImageItemCellViewModel *viewModel; // @dynamic viewModel;

@end

