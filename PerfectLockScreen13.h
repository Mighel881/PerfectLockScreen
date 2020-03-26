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
