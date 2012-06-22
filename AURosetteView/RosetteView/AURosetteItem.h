//
//  AURosetteItem.h
//
//  Created by Emil Wojtaszek on 22.06.2012.
//

//Frameworks
#import <Foundation/Foundation.h>

@interface AURosetteItem : NSObject

@property (nonatomic) SEL action;
@property (nonatomic, assign) id target;
@property (nonatomic, strong) UIImage* normalImage;
@property (nonatomic, strong) UIImage* highlitedImage;

- (id)initWithNormalImage:(UIImage *)normalImage highlitedImage:(UIImage *)highlitedImage target:(id)target action:(SEL)action;

@end