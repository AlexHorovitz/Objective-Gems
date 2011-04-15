//
//  KSITunesLinks.h
//  Objective-Gems
//
//  Created by Karl Stenerud on 10-04-09.
//
// Copyright 2010 Karl Stenerud
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//


/**
 * Generates links, or opens links to the iTunes store.
 */
@interface KSITunesLinks : NSObject
{
}

/** Get the URL for an application's rating page.
 *
 * @param appId The application id to get the page for.
 * @return The URL of the page.
 */
+ (NSURL*) ratingPageUrlForAppId:(NSString*) appId;

/** Open the URL for an application's rating page.
 *
 * @param appId The application id to open the page for.
 */
+ (void) openRatingPageForAppId:(NSString*) appId;

/** Get the URL for an application's main page.
 *
 * @param appId The application id to get the page for.
 * @return The URL of the page.
 */
+ (NSURL*) applicationPageUrlForAppId:(NSString*) appId;

/** Open the URL for an application's main page.
 *
 * @param appId The application id to open the page for.
 */
+ (void) openApplicationPageForAppId:(NSString*) appId;

@end
