//
//  PBPresentable.h
//  GitX
//
//  Created by Tomasz Krasnyk on 10-11-06.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//


@protocol PBPresentable<NSObject>
- (NSImage *) icon;
- (NSString *) displayDescription;
- (NSString *) popupDescription;
@end
