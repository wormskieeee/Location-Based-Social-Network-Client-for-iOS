//
//  ProfileViewController.h
//  single101
//
//  Created by Manav Kataria on 12/4/12.
//  Copyright (c) 2012 Manav Kataria. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileViewController : UIViewController

@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) NSDictionary *userProfile;
@property (nonatomic) double userDistance;

- (void) renderUserProfile;
- (NSInteger) birthdayStringToAge:(NSString *) dateString;
@end
