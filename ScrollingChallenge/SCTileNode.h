//
//  SCTileNode.h
//  ScrollingChallenge
//
//  Created by J Hastwell on 12/04/2014.
//  Copyright (c) 2014 J Hastwell. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SCTileNode : SKSpriteNode

@property (nonatomic) SCTileNode *nextTile;
@property (nonatomic) SCTileNode *prevTile;

@end
