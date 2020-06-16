@interface SBUIBiometricResource: NSObject
+ (id)sharedInstance;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOn;
@end

@interface MRPlatterViewController: UIViewController
@end

@interface SBUIFlashlightController: NSObject
+ (id)sharedInstance;
- (NSInteger)level;
@end

@interface SBCoverSheetPanelBackgroundContainerView: UIView
- (void)_setCornerRadius: (double)arg1;
@end

@interface UIScreen ()
- (double)_displayCornerRadius;
@end

@interface UICoverSheetButton: UIControl
- (NSString*)localizedAccessoryTitle;
@end

@interface CSQuickActionsButton: UIControl
- (long long)type;
@end

@interface SBFLockScreenDateView: UIView
@property(nonatomic, retain) UIImageView *dndImageView;
@property(nonatomic, retain) UIImageView *silentImageView;
- (id)initWithFrame: (CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIndicatorImageView;
@end
