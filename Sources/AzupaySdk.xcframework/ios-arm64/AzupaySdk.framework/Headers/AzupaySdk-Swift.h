// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef AZUPAYSDK_SWIFT_H
#define AZUPAYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AzupaySdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum CheckmarkStyle : NSInteger;
enum BorderStyle : NSInteger;
@class NSNumber;
@class UIColor;
@class NSCoder;
@class UIEvent;

/// Checkbox is a simple, animation free checkbox and UISwitch alternative designed
/// to be performant and easy to implement.
IB_DESIGNABLE
SWIFT_CLASS("_TtC9AzupaySdk8Checkbox")
@interface Checkbox : UIControl
/// Shape of the center checkmark that appears when <code>Checkbox.isChecked == true</code>.
/// <em>Default:</em> <code>CheckmarkStyle.square</code>
@property (nonatomic) enum CheckmarkStyle checkmarkStyle;
/// Shape of the outside border containing the checkmarks contents.
/// Used as a visual indication of where the user can tap.
/// <em>Default:</em> <code>BorderStyle.square</code>
@property (nonatomic) enum BorderStyle borderStyle;
/// Width of the borders stroke.
/// <em>NOTE</em>
/// Diagonal/rounded lines tend to appear thicker, so border styles
/// that use these (.circle) have had their border widths halved to compensate
/// in order appear similar next to other border styles.
/// <em>Default:</em> <code>2</code>
@property (nonatomic) IBInspectable CGFloat borderLineWidth;
/// Size of the center checkmark element.
/// Drawn as a percentage of the size of the Checkbox’s draw rect.
/// <em>Default:</em> <code>0.5</code>
@property (nonatomic) IBInspectable CGFloat checkmarkSize;
/// The checboxes border color in its unchecked state.
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified uncheckedBorderColor;
/// The checboxes border color in its checked state.
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified checkedBorderColor;
/// <em>Default:</em> The current tintColor.
@property (nonatomic, strong) IBInspectable UIColor * _Null_unspecified checkmarkColor;
/// The checkboxes fill color.
/// <em>Default:</em> <code>UIColoe.Clear</code>
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull checkboxFillColor;
/// Sets the corner radius for the checkbox border.
/// <em>Default:</em> <code>0.0</code>
/// note:
/// Only applies to checkboxes with <code>BorderStyle.square</code>
@property (nonatomic) IBInspectable CGFloat borderCornerRadius;
/// Increases the controls touch area.
/// Checkbox’s tend to be smaller than regular UIButton elements
/// and in some cases making them difficult to interact with.
/// This property helps with that.
/// <em>Default:</em> <code>5</code>
@property (nonatomic) IBInspectable CGFloat increasedTouchRadius;
/// Indicates whether the checkbox is currently in a state of being
/// checked or not.
@property (nonatomic) IBInspectable BOOL isChecked;
/// Determines if tapping the checkbox generates haptic feedback to the user.
/// <em>Default:</em> <code>true</code>
@property (nonatomic) IBInspectable BOOL useHapticFeedback;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end

/// Shape of the center checkmark that appears when <code>Checkbox.isChecked == true</code>.
typedef SWIFT_ENUM(NSInteger, CheckmarkStyle, open) {
/// ■
  CheckmarkStyleSquare = 0,
/// ●
  CheckmarkStyleCircle = 1,
/// ╳
  CheckmarkStyleCross = 2,
/// ✓
  CheckmarkStyleTick = 3,
};

/// Shape of the outside box containing the checkmarks contents.
/// Used as a visual indication of where the user can tap.
typedef SWIFT_ENUM(NSInteger, BorderStyle, open) {
/// ▢
  BorderStyleSquare = 0,
/// ◯
  BorderStyleCircle = 1,
};



SWIFT_CLASS("_TtC9AzupaySdk11SDKSettings")
@interface SDKSettings : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
enum SVPinViewStyle : NSInteger;
enum SVPinViewDeleteButtonAction : NSInteger;
@class UIFont;

SWIFT_CLASS("_TtC9AzupaySdk9SVPinView")
@interface SVPinView : UIView
@property (nonatomic) IBInspectable NSInteger pinLength;
@property (nonatomic, copy) IBInspectable NSString * _Nonnull secureCharacter;
@property (nonatomic) IBInspectable CGFloat interSpace;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull textColor;
@property (nonatomic) IBInspectable BOOL shouldSecureText;
@property (nonatomic) IBInspectable NSInteger secureTextDelay;
@property (nonatomic) IBInspectable BOOL allowsWhitespaces;
@property (nonatomic, copy) IBInspectable NSString * _Nonnull placeholder;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull borderLineColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull activeBorderLineColor;
@property (nonatomic) IBInspectable CGFloat borderLineThickness;
@property (nonatomic) IBInspectable CGFloat activeBorderLineThickness;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull fieldBackgroundColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull activeFieldBackgroundColor;
@property (nonatomic) IBInspectable CGFloat fieldCornerRadius;
@property (nonatomic) IBInspectable CGFloat activeFieldCornerRadius;
@property (nonatomic) enum SVPinViewStyle style;
@property (nonatomic) enum SVPinViewDeleteButtonAction deleteButtonAction;
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic) UIKeyboardType keyboardType;
@property (nonatomic) UIKeyboardAppearance keyboardAppearance;
@property (nonatomic) BOOL isContentTypeOneTimeCode;
@property (nonatomic) BOOL shouldDismissKeyboardOnEmptyFirstField;
@property (nonatomic, strong) UIView * _Nullable pinInputAccessoryView;
@property (nonatomic, copy) void (^ _Nullable didFinishCallback)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didChangeCallback)(NSString * _Nonnull);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Returns the entered PIN; returns empty string if incomplete
///
/// returns:
/// The entered PIN.
- (NSString * _Nonnull)getPin SWIFT_WARN_UNUSED_RESULT;
/// Clears the entered PIN and refreshes the view
/// \param completionHandler Called after the pin is cleared the view is re-rendered.
///
- (void)clearPinWithCompletionHandler:(void (^ _Nullable)(void))completionHandler;
/// Clears the entered PIN and refreshes the view.
/// (internally calls the clearPin method; re-declared since the name is more intuitive)
/// \param completionHandler Called after the pin is cleared the view is re-rendered.
///
- (void)refreshViewWithCompletionHandler:(void (^ _Nullable)(void))completionHandler;
/// Pastes the PIN onto the PinView
/// \param pin The pin which is to be entered onto the PinView.
///
- (void)pastePinWithPin:(NSString * _Nonnull)pin;
@end


@class UITextField;

@interface SVPinView (SWIFT_EXTENSION(AzupaySdk)) <UITextFieldDelegate>
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
@end

@class UICollectionView;
@class NSIndexPath;
@class UICollectionViewCell;
@class UICollectionViewLayout;

@interface SVPinView (SWIFT_EXTENSION(AzupaySdk)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)layoutSubviews;
@end

typedef SWIFT_ENUM(NSInteger, SVPinViewDeleteButtonAction, open) {
/// Deletes the contents of the current field and moves the cursor to the previous field.
  SVPinViewDeleteButtonActionDeleteCurrentAndMoveToPrevious = 0,
/// Simply deletes the content of the current field without moving the cursor.
/// If there is no value in the field, the cursor moves to the previous field.
  SVPinViewDeleteButtonActionDeleteCurrent = 1,
/// Moves the cursor to the previous field and delets the contents.
/// When any field is focused, its contents are deleted.
  SVPinViewDeleteButtonActionMoveToPreviousAndDelete = 2,
};

typedef SWIFT_ENUM(NSInteger, SVPinViewStyle, open) {
  SVPinViewStyleNone = 0,
  SVPinViewStyleUnderline = 1,
  SVPinViewStyleBox = 2,
};










#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
