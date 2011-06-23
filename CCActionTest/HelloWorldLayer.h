//
//  HelloWorldLayer.h
//  CCActionTest
//
//  Created by Craig Hinrichs on 6/23/11.
//  Copyright Authentic-Battle-Damage.com 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
    CCRotateTo *rotate;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
