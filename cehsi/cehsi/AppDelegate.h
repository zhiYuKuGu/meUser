//
//  AppDelegate.h
//  cehsi
//
//  Created by Doris on 2017/11/30.
//  Copyright © 2017年 ZJK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

