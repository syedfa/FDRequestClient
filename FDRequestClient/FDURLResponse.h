@import Foundation;


#pragma mark Enumerations

typedef enum
{
	FDURLResponseStatusSucceed,
	FDURLResponseStatusFailed,
	FDURLResponseStatusCancelled
} FDURLResponseStatus;


#pragma mark - Class Interface

@interface FDURLResponse : NSObject


#pragma mark - Properties

@property (nonatomic, readonly) FDURLResponseStatus status;
@property (nonatomic, strong, readonly) id content;
@property (nonatomic, strong, readonly) NSError *error;
@property (nonatomic, strong, readonly) NSURLResponse *rawURLResponse;


@end