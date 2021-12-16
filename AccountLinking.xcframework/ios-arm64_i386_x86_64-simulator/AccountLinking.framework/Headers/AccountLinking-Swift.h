#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef ACCOUNTLINKING_SWIFT_H
#define ACCOUNTLINKING_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AccountLinking",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum Retailer : NSInteger;
@class NSString;
@class NSNumber;

SWIFT_CLASS("_TtC14AccountLinking7Account")
@interface Account : NSObject
@property (nonatomic) enum Retailer retailer;
@property (nonatomic, copy) NSString * _Nonnull username;
@property (nonatomic, copy) NSString * _Nonnull password;
@property (nonatomic) BOOL returnLatestOrdersOnly;
- (nonnull instancetype)initWithRetailer:(enum Retailer)retailer username:(NSString * _Nonnull)username password:(NSString * _Nonnull)password OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum AccountLinkingViewMode : NSInteger;
@class NSData;
@class UIViewController;
@class NSError;

SWIFT_CLASS("_TtC14AccountLinking21AccountLinkingManager")
@interface AccountLinkingManager : NSObject
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) NSString * _Nullable identifier1;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AccountLinkingManager * _Nonnull shared;)
+ (AccountLinkingManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) void (^ _Nullable analytics)(id _Nonnull);
@property (nonatomic, copy) void (^ _Nullable logMessage)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable displayDebugView)(id _Nullable);
@property (nonatomic) enum AccountLinkingViewMode viewMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Reset the stored history of orders for provided retailer
/// \param retailer A retailer for which to remove the cached orders
///
- (void)resetOrdersHistoryForRetailer:(enum Retailer)retailer;
/// Clears any user’s related data for a retailer
/// \param retailer A retailer for which to remove the user’s data
///
- (void)removeUserDataForRetailer:(enum Retailer)retailer completion:(void (^ _Nonnull)(void))completion;
/// Update retailer’s config file
/// \param data Configuration data object
///
- (void)updateConfiguration:(NSData * _Nonnull)data;
/// It validates stored credentials for retailer
/// <ul>
///   <li>
///     return:
///     An error if not able to authenticate with provided credentials
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)verifyAccount:(Account * _Nonnull)account completion:(void (^ _Nonnull)(NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
/// It fetches new orders for the specific time range for a retailer
/// <ul>
///   <li>
///     return:
///     A list with orders if available, otherwise empty.
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param dayCutoff Epox timestamp in seconds in the past from currnet day.
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)grabNewOrders:(Account * _Nonnull)account dayCutoff:(double)dayCutoff completion:(void (^ _Nonnull)(NSArray<NSDictionary *> * _Nonnull, NSInteger, NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
@end


typedef SWIFT_ENUM(NSInteger, AccountLinkingViewMode, open) {
  AccountLinkingViewModeAutomatic = -100,
  AccountLinkingViewModeUserAuth = 1,
};

@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC14AccountLinking27AuthorizationViewController")
@interface AuthorizationViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, Retailer, open) {
  RetailerTarget = 1,
  RetailerCostco = 2,
  RetailerCvs = 3,
  RetailerDollarGeneral = 4,
  RetailerDollarTree = 5,
  RetailerKroger = 6,
  RetailerSamsClub = 9,
  RetailerPublix = 7,
  RetailerWalgreens = 10,
  RetailerWalmart = 11,
  RetailerStaples = 12,
  RetailerHomeDepot = 15,
  RetailerLowes = 16,
  RetailerMeijer = 19,
  RetailerShopRite = 22,
  RetailerHeb = 44,
  RetailerBjsWholesale = 45,
  RetailerWegmans = 52,
  RetailerHyVee = 56,
  RetailerRiteAid = 143,
  RetailerGiantEagle = 144,
  RetailerFoodLion = 142,
  RetailerFamilyDollar = 165,
  RetailerSephora = 171,
  RetailerBestBuy = 177,
  RetailerWalmartCA = 5849,
  RetailerMarshalls = 5917,
  RetailerTjMaxx = 5921,
  RetailerKohls = 5929,
  RetailerBedBathAndBeyond = 6074,
  RetailerStaplesCA = 6127,
  RetailerDicksSportingGoods = 6162,
  RetailerMacys = 6802,
  RetailerStarbucks = 6677,
  RetailerDominosPizza = 8366,
  RetailerTacoBell = 8598,
  RetailerInstacart = 8652,
  RetailerNike = 8712,
  RetailerShipt = 9016,
  RetailerUberEats = 9137,
  RetailerChewy = 9947,
  RetailerSeamless = 10068,
  RetailerGrubhub = 10208,
  RetailerDoordash = 10241,
  RetailerDrizly = 10934,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef ACCOUNTLINKING_SWIFT_H
#define ACCOUNTLINKING_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AccountLinking",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum Retailer : NSInteger;
@class NSString;
@class NSNumber;

SWIFT_CLASS("_TtC14AccountLinking7Account")
@interface Account : NSObject
@property (nonatomic) enum Retailer retailer;
@property (nonatomic, copy) NSString * _Nonnull username;
@property (nonatomic, copy) NSString * _Nonnull password;
@property (nonatomic) BOOL returnLatestOrdersOnly;
- (nonnull instancetype)initWithRetailer:(enum Retailer)retailer username:(NSString * _Nonnull)username password:(NSString * _Nonnull)password OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum AccountLinkingViewMode : NSInteger;
@class NSData;
@class UIViewController;
@class NSError;

SWIFT_CLASS("_TtC14AccountLinking21AccountLinkingManager")
@interface AccountLinkingManager : NSObject
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) NSString * _Nullable identifier1;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AccountLinkingManager * _Nonnull shared;)
+ (AccountLinkingManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) void (^ _Nullable analytics)(id _Nonnull);
@property (nonatomic, copy) void (^ _Nullable logMessage)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable displayDebugView)(id _Nullable);
@property (nonatomic) enum AccountLinkingViewMode viewMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Reset the stored history of orders for provided retailer
/// \param retailer A retailer for which to remove the cached orders
///
- (void)resetOrdersHistoryForRetailer:(enum Retailer)retailer;
/// Clears any user’s related data for a retailer
/// \param retailer A retailer for which to remove the user’s data
///
- (void)removeUserDataForRetailer:(enum Retailer)retailer completion:(void (^ _Nonnull)(void))completion;
/// Update retailer’s config file
/// \param data Configuration data object
///
- (void)updateConfiguration:(NSData * _Nonnull)data;
/// It validates stored credentials for retailer
/// <ul>
///   <li>
///     return:
///     An error if not able to authenticate with provided credentials
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)verifyAccount:(Account * _Nonnull)account completion:(void (^ _Nonnull)(NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
/// It fetches new orders for the specific time range for a retailer
/// <ul>
///   <li>
///     return:
///     A list with orders if available, otherwise empty.
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param dayCutoff Epox timestamp in seconds in the past from currnet day.
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)grabNewOrders:(Account * _Nonnull)account dayCutoff:(double)dayCutoff completion:(void (^ _Nonnull)(NSArray<NSDictionary *> * _Nonnull, NSInteger, NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
@end


typedef SWIFT_ENUM(NSInteger, AccountLinkingViewMode, open) {
  AccountLinkingViewModeAutomatic = -100,
  AccountLinkingViewModeUserAuth = 1,
};

@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC14AccountLinking27AuthorizationViewController")
@interface AuthorizationViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, Retailer, open) {
  RetailerTarget = 1,
  RetailerCostco = 2,
  RetailerCvs = 3,
  RetailerDollarGeneral = 4,
  RetailerDollarTree = 5,
  RetailerKroger = 6,
  RetailerSamsClub = 9,
  RetailerPublix = 7,
  RetailerWalgreens = 10,
  RetailerWalmart = 11,
  RetailerStaples = 12,
  RetailerHomeDepot = 15,
  RetailerLowes = 16,
  RetailerMeijer = 19,
  RetailerShopRite = 22,
  RetailerHeb = 44,
  RetailerBjsWholesale = 45,
  RetailerWegmans = 52,
  RetailerHyVee = 56,
  RetailerRiteAid = 143,
  RetailerGiantEagle = 144,
  RetailerFoodLion = 142,
  RetailerFamilyDollar = 165,
  RetailerSephora = 171,
  RetailerBestBuy = 177,
  RetailerWalmartCA = 5849,
  RetailerMarshalls = 5917,
  RetailerTjMaxx = 5921,
  RetailerKohls = 5929,
  RetailerBedBathAndBeyond = 6074,
  RetailerStaplesCA = 6127,
  RetailerDicksSportingGoods = 6162,
  RetailerMacys = 6802,
  RetailerStarbucks = 6677,
  RetailerDominosPizza = 8366,
  RetailerTacoBell = 8598,
  RetailerInstacart = 8652,
  RetailerNike = 8712,
  RetailerShipt = 9016,
  RetailerUberEats = 9137,
  RetailerChewy = 9947,
  RetailerSeamless = 10068,
  RetailerGrubhub = 10208,
  RetailerDoordash = 10241,
  RetailerDrizly = 10934,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef ACCOUNTLINKING_SWIFT_H
#define ACCOUNTLINKING_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AccountLinking",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum Retailer : NSInteger;
@class NSString;
@class NSNumber;

SWIFT_CLASS("_TtC14AccountLinking7Account")
@interface Account : NSObject
@property (nonatomic) enum Retailer retailer;
@property (nonatomic, copy) NSString * _Nonnull username;
@property (nonatomic, copy) NSString * _Nonnull password;
@property (nonatomic) BOOL returnLatestOrdersOnly;
- (nonnull instancetype)initWithRetailer:(enum Retailer)retailer username:(NSString * _Nonnull)username password:(NSString * _Nonnull)password OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum AccountLinkingViewMode : NSInteger;
@class NSData;
@class UIViewController;
@class NSError;

SWIFT_CLASS("_TtC14AccountLinking21AccountLinkingManager")
@interface AccountLinkingManager : NSObject
@property (nonatomic, copy) NSString * _Nullable identifier;
@property (nonatomic, copy) NSString * _Nullable identifier1;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AccountLinkingManager * _Nonnull shared;)
+ (AccountLinkingManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) void (^ _Nullable analytics)(id _Nonnull);
@property (nonatomic, copy) void (^ _Nullable logMessage)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable displayDebugView)(id _Nullable);
@property (nonatomic) enum AccountLinkingViewMode viewMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Reset the stored history of orders for provided retailer
/// \param retailer A retailer for which to remove the cached orders
///
- (void)resetOrdersHistoryForRetailer:(enum Retailer)retailer;
/// Clears any user’s related data for a retailer
/// \param retailer A retailer for which to remove the user’s data
///
- (void)removeUserDataForRetailer:(enum Retailer)retailer completion:(void (^ _Nonnull)(void))completion;
/// Update retailer’s config file
/// \param data Configuration data object
///
- (void)updateConfiguration:(NSData * _Nonnull)data;
/// It validates stored credentials for retailer
/// <ul>
///   <li>
///     return:
///     An error if not able to authenticate with provided credentials
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)verifyAccount:(Account * _Nonnull)account completion:(void (^ _Nonnull)(NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
/// It fetches new orders for the specific time range for a retailer
/// <ul>
///   <li>
///     return:
///     A list with orders if available, otherwise empty.
///   </li>
/// </ul>
/// \param account A user <code>Account</code> object
///
/// \param dayCutoff Epox timestamp in seconds in the past from currnet day.
///
/// \param completion A callback to get results or provide additional user input if required
///
- (void)grabNewOrders:(Account * _Nonnull)account dayCutoff:(double)dayCutoff completion:(void (^ _Nonnull)(NSArray<NSDictionary *> * _Nonnull, NSInteger, NSString * _Nonnull, UIViewController * _Nullable, NSError * _Nullable))completion;
@end


typedef SWIFT_ENUM(NSInteger, AccountLinkingViewMode, open) {
  AccountLinkingViewModeAutomatic = -100,
  AccountLinkingViewModeUserAuth = 1,
};

@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC14AccountLinking27AuthorizationViewController")
@interface AuthorizationViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, Retailer, open) {
  RetailerTarget = 1,
  RetailerCostco = 2,
  RetailerCvs = 3,
  RetailerDollarGeneral = 4,
  RetailerDollarTree = 5,
  RetailerKroger = 6,
  RetailerSamsClub = 9,
  RetailerPublix = 7,
  RetailerWalgreens = 10,
  RetailerWalmart = 11,
  RetailerStaples = 12,
  RetailerHomeDepot = 15,
  RetailerLowes = 16,
  RetailerMeijer = 19,
  RetailerShopRite = 22,
  RetailerHeb = 44,
  RetailerBjsWholesale = 45,
  RetailerWegmans = 52,
  RetailerHyVee = 56,
  RetailerRiteAid = 143,
  RetailerGiantEagle = 144,
  RetailerFoodLion = 142,
  RetailerFamilyDollar = 165,
  RetailerSephora = 171,
  RetailerBestBuy = 177,
  RetailerWalmartCA = 5849,
  RetailerMarshalls = 5917,
  RetailerTjMaxx = 5921,
  RetailerKohls = 5929,
  RetailerBedBathAndBeyond = 6074,
  RetailerStaplesCA = 6127,
  RetailerDicksSportingGoods = 6162,
  RetailerMacys = 6802,
  RetailerStarbucks = 6677,
  RetailerDominosPizza = 8366,
  RetailerTacoBell = 8598,
  RetailerInstacart = 8652,
  RetailerNike = 8712,
  RetailerShipt = 9016,
  RetailerUberEats = 9137,
  RetailerChewy = 9947,
  RetailerSeamless = 10068,
  RetailerGrubhub = 10208,
  RetailerDoordash = 10241,
  RetailerDrizly = 10934,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
