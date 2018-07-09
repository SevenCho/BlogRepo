//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TouchBarController.h"

#import "NSTouchBarDelegate.h"

@class NSButton, NSString, NSTouchBar;

@interface BasicAdvancedTouchBarController : TouchBarController <NSTouchBarDelegate>
{
    int _mode;
    BOOL _secondaryActive;
    BOOL _rpnActive;
    BOOL _clearActive;
    NSTouchBar *_basicTouchBar;
    NSTouchBar *_advancedTouchBar;
    NSButton *f_decimalPointButton;
    NSButton *f_commaButton;
    NSButton *f_clearButton;
    NSButton *f_allClearButton;
    NSButton *f_equalButton;
    NSButton *f_additionButton;
    NSButton *f_multiplicationButton;
    NSButton *f_subtractionButton;
    NSButton *f_divisionButton;
    NSButton *f_negateButton;
    NSButton *f_percentButton;
    NSButton *f_memPlusButton;
    NSButton *f_memClearButton;
    NSButton *f_memMinusButton;
    NSButton *f_memRecallButton;
    NSButton *f_xSquaredButton;
    NSButton *f_xCubedButton;
    NSButton *f_xToTheYButton;
    NSButton *f_tenToTheXButton;
    NSButton *f_xFactorial_button;
    NSButton *f_oneOverXButton;
    NSButton *f_squareRootButton;
    NSButton *f_cubeRootButton;
    NSButton *f_nthRootButton;
    NSButton *f_exponentialButton;
    NSButton *f_sineButton;
    NSButton *f_cosineButton;
    NSButton *f_tangentButton;
    NSButton *f_hyperSinButton;
    NSButton *f_hyperCosButton;
    NSButton *f_hyperTanButton;
    NSButton *f_logButton;
    NSButton *f_lnButton;
    NSButton *f_piButton;
    NSButton *f_eButton;
    NSButton *f_modeButton;
    NSButton *f_parenRightButton;
    NSButton *f_parenLeftButton;
    NSButton *f_secondFunctionButton;
    NSButton *f_randomNumberButton;
    NSButton *f_eeButton;
    NSButton *f_yToTheXButton;
    NSButton *f_twoToTheXButton;
    NSButton *f_logBaseYButton;
    NSButton *f_logBase2Button;
    NSButton *f_arcSineButton;
    NSButton *f_arcCosineButton;
    NSButton *f_arcTangentButton;
    NSButton *f_inverseHyperSinButton;
    NSButton *f_inverseHyperCosButton;
    NSButton *f_inverseHyperTanButton;
    NSButton *f_enterButton;
    id xToTheY_target;
    SEL xToTheY_action;
    id exponential_target;
    SEL exponential_action;
}

- (id)escapeButtons;
- (id)operatorButtons;
- (id)allButtons;
- (id)allGroupIdentifiers;
- (id)allButtonIdentifiers;
- (id)advancedAllowedIdentifiers;
- (id)basicRequiredIdentifiers;
- (id)advancedDefaultIdentifierSet;
- (id)basicDefaultIdentifierSet;
- (id)parenthesesGroup;
- (id)memoryGroup;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)setClearActive:(BOOL)arg1;
- (void)setRPNActive:(BOOL)arg1;
- (void)setSecondaryActive:(BOOL)arg1;
- (id)advancedTouchBar;
- (id)basicTouchBar;
- (id)touchBar;
- (void)awakeFromNib;
- (void)setMode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

