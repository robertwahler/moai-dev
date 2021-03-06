// ConfigViewController.h -- preferences view
// by allen brunson  february 3 2012


/******************************************************************************/
/*                                                                            */
/***  ConfigViewController class                                            ***/
/*                                                                            */
/******************************************************************************/

@interface ConfigViewController: VGConfigViewController
{
    @private
}

// class methods

+(ConfigViewController*)controller;

// construction and destruction

-(void)dealloc;
-(id)initWithStyle:(UITableViewStyle)style;

// @private

-(VGConfigGroup*)groupControls;
-(VGConfigGroup*)groupDebug;
-(VGConfigGroup*)groupDebugFakeAd;
-(VGConfigGroup*)groupDebugSettings;
-(VGConfigGroup*)groupSettings;

-(VGConfigItem*)itemAdOrientation;
-(VGConfigItem*)itemAdType;

// VGConfigViewController methods

-(NSArray*)loadGroups;

// UIViewController methods

-(void)viewDidDisappear:(BOOL)animated;

/**
 * To add "Config baseUrl" option on preference screen
 */
-(VGConfigItem*)itemConfigBaseUrl;


@end


/******************************************************************************/
/*                                                                            */
/***  ConfigViewController class                                            ***/
/*                                                                            */
/******************************************************************************

overview
--------

this app's local prefs view

*/
