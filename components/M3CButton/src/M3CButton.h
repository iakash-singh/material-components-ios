#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, M3CButtonSize);

NS_ASSUME_NONNULL_BEGIN
@class MDCShadow;

__attribute__((objc_subclassing_restricted))
@interface M3CButton : UIButton

/**
Sets the button's size.

This method allows you to specify the size of the button using the M3CButtonSize enum.
The size affects various aspects of the button's appearance, including font, corner radius,
and edge insets. This method is available in iOS 15.0 and later.

@param buttonSize The desired button size, specified using the M3CButtonSize enum.
*/
- (void)setButtonSize:(M3CButtonSize)buttonSize API_AVAILABLE(ios(15.0));

/**
 A color used as the button's @c backgroundColor.

 If left unset or reset to nil for a given state, then a default blue color is used.

 @param color The background color.
 @param state The state.
*/
- (void)setBackgroundColor:(nullable UIColor *)color forState:(UIControlState)state;

/**
 A color used as the button's @c tintColor.

 If left unset or reset to nil for a given state, then a default blue color is used.

 @param color The tint color.
 @param state The state.
*/
- (void)setTintColor:(nullable UIColor *)color forState:(UIControlState)state;

/**
 Sets the border color for a particular control state. Sets the @c borderColor of the layer.

 @param borderColor The border color to set.
 @param state The state to set.
*/
- (void)setBorderColor:(nullable UIColor *)borderColor forState:(UIControlState)state;

/**
 Sets the shadow for a particular control state. Sets the @c shadow of the
 layer.

 @param shadow The shadow to set.
 @param state The state to set.
*/
- (void)setShadow:(nullable MDCShadow *)shadow forState:(UIControlState)state;

/**
 Sets the font for a particular size.

 @note This font is applied to the label.

 @seealso @c setSymbolFont:forSize:

 @param font The font to be applied to the button.
 @param size The size of the button.
 */
- (void)setFont:(UIFont *)font forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the font for a particular size.

 @note This font is applied to the icon.

 @seealso @c setFont:forSize:

 @param symbolSize The initial size of the image.
 @param textStyle The scaling curve applied to the image size to support dynamic type.
 @param size The size of the button.
 */
- (void)setSymbolSize:(CGFloat)symbolSize
            textStyle:(UIFontTextStyle)textStyle
              forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the corner radius for a particular size.

 @param cornerRadius The corner radius to be applied to the button.
 @param size The size of the button.
 */
- (void)setCornerRadius:(CGFloat)cornerRadius forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the corner radius for a particular size when pressed.

 @param cornerRadius The corner radius to be applied to the button.
 @param size The size of the button.
 */
- (void)setPressedCornerRadius:(CGFloat)cornerRadius
                       forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the @c imageEdgeInsetsWithImageAndTitle for a particular size.

 @param imageEdgeInsets The preferred @c imageEdgeInsets for a button with an image and title.
 @param size The size at which the @c imageEdgeInsets will be used for.
 */
- (void)setImageEdgeInsets:(UIEdgeInsets)imageEdgeInsets
                   forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the @c edgeInsetsWithImageAndTitle for a particular size.

 @param edgeInsetsWithImageAndTitle The preferred @c imageEdgeInsets for a button with an image and
 title.
 @param size The size at which the @c imageEdgeInsets will be used for.
 */
- (void)setEdgeInsetsWithImageAndTitle:(UIEdgeInsets)edgeInsetsWithImageAndTitle
                               forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the @c imageEdgeInsetsWithImage for a particular size.

 @param edgeInsetsWithImage The preferred @c imageEdgeInsets for a button with an image and
 title.
 @param size The size at which the @c imageEdgeInsets will be used for.
 */
- (void)setEdgeInsetsWithImage:(UIEdgeInsets)edgeInsetsWithImage
                       forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 Sets the @c edgeInsetsWithTitle for a particular size.

 @param edgeInsetsWithTitle The preferred @c imageEdgeInsets for a button with an image and title.
 @param size The size at which the @c imageEdgeInsets will be used for.
 */
- (void)setEdgeInsetsWithTitle:(UIEdgeInsets)edgeInsetsWithTitle
                       forSize:(M3CButtonSize)size API_AVAILABLE(ios(15.0));

/**
 The preferred imageEdgeInsets for a button with an image and title.
*/
@property(nonatomic) UIEdgeInsets imageEdgeInsetsWithImageAndTitle;

/**
 The preferred contentEdgeInsets for a button with an image and title.
*/
@property(nonatomic) UIEdgeInsets edgeInsetsWithImageAndTitle;

/**
 The preferred contentEdgeInsets for a button with an image only.
*/
@property(nonatomic) UIEdgeInsets edgeInsetsWithImageOnly;

/**
 The preferred contentEdgeInsets for a button with a title only.
*/
@property(nonatomic) UIEdgeInsets edgeInsetsWithTitleOnly;

/**
 The width of the border of the button.

 @note Using @c self.layer.borderWidth is discouraged.
 */
@property(nonatomic, assign) CGFloat borderWidth;

/**
 The minimum height of the button.
*/
@property(nonatomic) CGFloat minimumHeight;

/**
 The minimum width of the button.
*/
@property(nonatomic) CGFloat minimumWidth;

/**
 Is the button a capsule shape.
*/
@property(nonatomic) BOOL isCapsuleShape;

/**
 The time interval used to animate the transintion between button states.
*/
@property(nonatomic) NSTimeInterval animationDuration;

#pragma mark - Enabling multi-line layout

/**
 When enabled, makes use of constraints to enable the title label to wrap to multiple lines.

 Note: this property does not currently support buttons with images. Enabling this property when an
 image is present will result in undefined behavior. On iOS 15+, please consider using @c
 UIButtonConfiguration for multiline button.

 Precondition: use this property to enable multiline button only under auto layout. Use @c
 textCanWrap under manual layout.

 Default value is @c NO.
 */
@property(nonatomic) BOOL layoutTitleWithConstraints;

/**
 Should the button's label be rendered on multiple lines. If you set this
 property to YES, make sure that your button has either its
 @c titleLabel.preferredMaxLayoutWidth property set, or that the button's frame
 width is set as desired.
 Otherwise, the button will not be able to calculate a multiline layout.

 @note If using @c isCapsuleShape enabled with this API be sure to consider accessibility needs as
 the label may extend outside the cut corner.
 */
@property(nonatomic) BOOL textCanWrap;

@end

NS_ASSUME_NONNULL_END
