//
//  CommonTextController.h
//  HandSight
//
//  Created by Ruofei Du on 8/12/14.
//  Copyright (c) 2014 Ruofei Du. All rights reserved.
//

#import "CommonController.h"
#import "HSMultiView.h"
#import "HSViz.h"

@interface CommonTextController : CommonController {
    UIButton* m_btnBack;
    HSMultiView *m_text;
    HSViz *m_viz;
}
- (void)addControls;

@end
