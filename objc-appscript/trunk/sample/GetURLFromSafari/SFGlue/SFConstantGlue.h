/*
 * SFConstantGlue.h
 *
 * /Applications/Safari.app
 * osaglue 0.4.0
 *
 */

#import <Foundation/Foundation.h>


#import "Appscript/Appscript.h"


@interface SFConstant : ASConstant
+ (id)constantWithCode:(OSType)code_;

/* Enumerators */

+ (SFConstant *)applicationResponses;
+ (SFConstant *)ask;
+ (SFConstant *)case;
+ (SFConstant *)detailed;
+ (SFConstant *)diacriticals;
+ (SFConstant *)expansion;
+ (SFConstant *)hyphens;
+ (SFConstant *)no;
+ (SFConstant *)numericStrings;
+ (SFConstant *)punctuation;
+ (SFConstant *)standard;
+ (SFConstant *)whitespace;
+ (SFConstant *)yes;

/* Types and properties */

+ (SFConstant *)April;
+ (SFConstant *)August;
+ (SFConstant *)December;
+ (SFConstant *)EPSPicture;
+ (SFConstant *)February;
+ (SFConstant *)Friday;
+ (SFConstant *)GIFPicture;
+ (SFConstant *)JPEGPicture;
+ (SFConstant *)January;
+ (SFConstant *)July;
+ (SFConstant *)June;
+ (SFConstant *)March;
+ (SFConstant *)May;
+ (SFConstant *)Monday;
+ (SFConstant *)November;
+ (SFConstant *)October;
+ (SFConstant *)PICTPicture;
+ (SFConstant *)RGB16Color;
+ (SFConstant *)RGB96Color;
+ (SFConstant *)RGBColor;
+ (SFConstant *)Saturday;
+ (SFConstant *)September;
+ (SFConstant *)Sunday;
+ (SFConstant *)TIFFPicture;
+ (SFConstant *)Thursday;
+ (SFConstant *)Tuesday;
+ (SFConstant *)URL;
+ (SFConstant *)Wednesday;
+ (SFConstant *)alias;
+ (SFConstant *)anything;
+ (SFConstant *)application;
+ (SFConstant *)applicationBundleID;
+ (SFConstant *)applicationSignature;
+ (SFConstant *)applicationURL;
+ (SFConstant *)attachment;
+ (SFConstant *)attributeRun;
+ (SFConstant *)best;
+ (SFConstant *)boolean;
+ (SFConstant *)boundingRectangle;
+ (SFConstant *)bounds;
+ (SFConstant *)centimeters;
+ (SFConstant *)character;
+ (SFConstant *)classInfo;
+ (SFConstant *)class_;
+ (SFConstant *)closeable;
+ (SFConstant *)collating;
+ (SFConstant *)color;
+ (SFConstant *)colorTable;
+ (SFConstant *)copies;
+ (SFConstant *)cubicCentimeters;
+ (SFConstant *)cubicFeet;
+ (SFConstant *)cubicInches;
+ (SFConstant *)cubicMeters;
+ (SFConstant *)cubicYards;
+ (SFConstant *)currentTab;
+ (SFConstant *)dashStyle;
+ (SFConstant *)data;
+ (SFConstant *)date;
+ (SFConstant *)decimalStruct;
+ (SFConstant *)degreesCelsius;
+ (SFConstant *)degreesFahrenheit;
+ (SFConstant *)degreesKelvin;
+ (SFConstant *)document;
+ (SFConstant *)doubleInteger;
+ (SFConstant *)elementInfo;
+ (SFConstant *)encodedString;
+ (SFConstant *)endingPage;
+ (SFConstant *)enumerator;
+ (SFConstant *)errorHandling;
+ (SFConstant *)eventInfo;
+ (SFConstant *)extendedFloat;
+ (SFConstant *)faxNumber;
+ (SFConstant *)feet;
+ (SFConstant *)fileName;
+ (SFConstant *)fileRef;
+ (SFConstant *)fileSpecification;
+ (SFConstant *)fileURL;
+ (SFConstant *)fixed;
+ (SFConstant *)fixedPoint;
+ (SFConstant *)fixedRectangle;
+ (SFConstant *)float128bit;
+ (SFConstant *)float_;
+ (SFConstant *)floating;
+ (SFConstant *)font;
+ (SFConstant *)frontmost;
+ (SFConstant *)gallons;
+ (SFConstant *)grams;
+ (SFConstant *)graphicText;
+ (SFConstant *)id_;
+ (SFConstant *)inches;
+ (SFConstant *)index;
+ (SFConstant *)integer;
+ (SFConstant *)internationalText;
+ (SFConstant *)internationalWritingCode;
+ (SFConstant *)item;
+ (SFConstant *)kernelProcessID;
+ (SFConstant *)kilograms;
+ (SFConstant *)kilometers;
+ (SFConstant *)list;
+ (SFConstant *)liters;
+ (SFConstant *)locationReference;
+ (SFConstant *)longFixed;
+ (SFConstant *)longFixedPoint;
+ (SFConstant *)longFixedRectangle;
+ (SFConstant *)longPoint;
+ (SFConstant *)longRectangle;
+ (SFConstant *)machPort;
+ (SFConstant *)machine;
+ (SFConstant *)machineLocation;
+ (SFConstant *)meters;
+ (SFConstant *)miles;
+ (SFConstant *)miniaturizable;
+ (SFConstant *)miniaturized;
+ (SFConstant *)missingValue;
+ (SFConstant *)modal;
+ (SFConstant *)modified;
+ (SFConstant *)name;
+ (SFConstant *)null;
+ (SFConstant *)ounces;
+ (SFConstant *)pagesAcross;
+ (SFConstant *)pagesDown;
+ (SFConstant *)paragraph;
+ (SFConstant *)parameterInfo;
+ (SFConstant *)path;
+ (SFConstant *)pixelMapRecord;
+ (SFConstant *)point;
+ (SFConstant *)pounds;
+ (SFConstant *)printSettings;
+ (SFConstant *)processSerialNumber;
+ (SFConstant *)properties;
+ (SFConstant *)property;
+ (SFConstant *)propertyInfo;
+ (SFConstant *)quarts;
+ (SFConstant *)record;
+ (SFConstant *)reference;
+ (SFConstant *)requestedPrintTime;
+ (SFConstant *)resizable;
+ (SFConstant *)rotation;
+ (SFConstant *)script;
+ (SFConstant *)shortFloat;
+ (SFConstant *)shortInteger;
+ (SFConstant *)size;
+ (SFConstant *)source;
+ (SFConstant *)squareFeet;
+ (SFConstant *)squareKilometers;
+ (SFConstant *)squareMeters;
+ (SFConstant *)squareMiles;
+ (SFConstant *)squareYards;
+ (SFConstant *)startingPage;
+ (SFConstant *)string;
+ (SFConstant *)styledClipboardText;
+ (SFConstant *)styledText;
+ (SFConstant *)suiteInfo;
+ (SFConstant *)tab;
+ (SFConstant *)targetPrinter;
+ (SFConstant *)text;
+ (SFConstant *)textStyleInfo;
+ (SFConstant *)titled;
+ (SFConstant *)typeClass;
+ (SFConstant *)unicodeText;
+ (SFConstant *)unsignedInteger;
+ (SFConstant *)utf16Text;
+ (SFConstant *)utf8Text;
+ (SFConstant *)version;
+ (SFConstant *)version_;
+ (SFConstant *)visible;
+ (SFConstant *)window;
+ (SFConstant *)word;
+ (SFConstant *)writingCode;
+ (SFConstant *)yards;
+ (SFConstant *)zoomable;
+ (SFConstant *)zoomed;
@end


