#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A predefined size for button elements. Be sure to configure the button touch target to meet
 accessibility requirements.

 See more details at:
 https://developer.apple.com/design/human-interface-guidelines/accessibility#Buttons-and-controls

 - M3CButtonSizeMini: Displays button elements at a mini size.
 - M3CButtonSizeSmall: Displays button elements at a small size.
 - M3CButtonSizeRegular: Displays button elements at a regular size.
 - M3CButtonSizeLarge: Displays button elements at a large size.
 - M3CButtonSizeExtraLarge: Displays button elements at an extra large size.
 */
typedef NS_ENUM(NSInteger, M3CButtonSize) {
  M3CButtonSizeMini = 0,
  M3CButtonSizeSmall,
  M3CButtonSizeRegular,
  M3CButtonSizeLarge,
  M3CButtonSizeExtraLarge
} API_AVAILABLE(ios(15.0)) API_UNAVAILABLE(watchos);

NS_ASSUME_NONNULL_END
