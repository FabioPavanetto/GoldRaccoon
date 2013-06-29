//
//  GRRequestListDirectory.h
//  GoldRaccoon
//
//  Created by Valentin Radu on 8/23/11.
//  Copyright 2011 Valentin Radu. All rights reserved.
//
//  Modified and/or redesigned by Lloyd Sargent to be ARC compliant.
//  Copyright 2012 Lloyd Sargent. All rights reserved.
//
//  Modified and redesigned by Alberto De Bortoli.
//  Copyright 2013 Alberto De Bortoli. All rights reserved.
//

#import "GRGlobal.h"
#import "GRRequest.h"

@interface GRRequestListDirectory : GRRequest

@property NSArray *filesInfo;
@property (strong) NSMutableData *receivedData;

- (BOOL)fileExists:(NSString *)fileNamePath;

@end
