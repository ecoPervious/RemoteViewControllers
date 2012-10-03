//
//  ViewController.m
//  RemoteViewControllers
//
//  Created by Ole Begemann on 02.10.12.
//  Copyright (c) 2012 Ole Begemann. All rights reserved.
//

#import "ViewController.h"

@interface UIView (RecursiveDescription)
// Declare the private recursiveDescription method here to silence compiler errors
- (NSString *)recursiveDescription;
@end

@interface ViewController () <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>

- (IBAction)openMailComposer:(id)sender;
- (IBAction)openMessageComposer:(id)sender;
- (IBAction)openTweetComposer:(id)sender;
- (IBAction)openFacebookSharing:(id)sender;

@end


@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

#pragma mark - IBActions

- (IBAction)openMailComposer:(id)sender
{
    if (![MFMailComposeViewController canSendMail]) {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Not Available" message:@"E-Mail is not configured on your device." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles:nil];
        [alert show];
        return;
    }
    MFMailComposeViewController *controller = [[MFMailComposeViewController alloc] init];
    [controller setMailComposeDelegate:self];
    [self presentViewController:controller animated:YES completion:^{
        // Log the view hierarchy here to see what's going on
        NSLog(@"View hierarchy: %@", [controller.view recursiveDescription]);
    }];
}

- (IBAction)openMessageComposer:(id)sender
{
    if (![MFMessageComposeViewController canSendText]) {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Not Available" message:@"SMS/iMessage sharing is not available on your device." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles:nil];
        [alert show];
        return;
    }
    MFMessageComposeViewController *controller = [[MFMessageComposeViewController alloc] init];
    [controller setMessageComposeDelegate:self];
    [self presentViewController:controller animated:YES completion:^{
        // Log the view hierarchy here to see what's going on
        NSLog(@"View hierarchy: %@", [controller.view recursiveDescription]);
    }];
}

- (IBAction)openTweetComposer:(id)sender
{
    if (![SLComposeViewController class])
    {
        // SLComposeViewController is not available, possibly because we're running on iOS <6.0
        // Try to use TWTweetComposeViewController
        if (![TWTweetComposeViewController class] || ![TWTweetComposeViewController canSendTweet]) {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Not Available" message:@"Twitter sharing is not available on your device." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles:nil];
            [alert show];
            return;
        }
        TWTweetComposeViewController *twitterController = [[TWTweetComposeViewController alloc] init];
        twitterController.completionHandler = ^(TWTweetComposeViewControllerResult result) {
            [self dismissViewControllerAnimated:YES completion:nil];
        };
        [self presentViewController:twitterController animated:YES completion:^{
            // Log the view hierarchy here to see what's going on
            NSLog(@"View hierarchy: %@", [twitterController.view recursiveDescription]);
        }];
    }
    else
    {
        // Use SLComposeViewController
        if (![SLComposeViewController isAvailableForServiceType:SLServiceTypeTwitter]) {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Not Available" message:@"Twitter sharing is not available on your device." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles:nil];
            [alert show];
            return;
        }
        SLComposeViewController *sharingController = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
        sharingController.completionHandler = ^(SLComposeViewControllerResult result) {
            [self dismissViewControllerAnimated:YES completion:nil];
        };
        [self presentViewController:sharingController animated:YES completion:^{
            // Log the view hierarchy here to see what's going on
            NSLog(@"View hierarchy: %@", [sharingController.view recursiveDescription]);
        }];
    }
}

- (IBAction)openFacebookSharing:(id)sender
{
    if (![SLComposeViewController class] || ![SLComposeViewController isAvailableForServiceType:SLServiceTypeFacebook]) {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Not Available" message:@"Facebook sharing is not available on your device." delegate:nil cancelButtonTitle:@"Close" otherButtonTitles:nil];
        [alert show];
        return;
    }
    
    SLComposeViewController *controller = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeFacebook];
    controller.completionHandler = ^(SLComposeViewControllerResult result) {
        [self dismissViewControllerAnimated:YES completion:nil];
    };
    [self presentViewController:controller animated:YES completion:^{
        // Log the view hierarchy here to see what's going on
        NSLog(@"View hierarchy: %@", [controller.view recursiveDescription]);
    }];
}

#pragma mark - MFMailComposeViewControllerDelegate

- (void)mailComposeController:(MFMailComposeViewController *)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError *)error
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - MFMessageComposeViewControllerDelegate

- (void)messageComposeViewController:(MFMessageComposeViewController *)controller didFinishWithResult:(MessageComposeResult)result
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
