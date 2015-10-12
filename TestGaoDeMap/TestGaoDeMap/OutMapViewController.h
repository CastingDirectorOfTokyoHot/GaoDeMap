//
//  ViewController.h
//  TestGaoDeMap
//
//  Created by libo on 15/9/18.
//  Copyright (c) 2015年 libo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OutRouteViewController.h"
#import "OutSearchViewController.h"
#import "OutNaviViewController.h"


@interface OutMapViewController : UIViewController

/**
 *  被选中的目标地点
 */
@property (nonatomic , strong, readonly) GaoBaseAnnotation *destAnnotation;

@end

