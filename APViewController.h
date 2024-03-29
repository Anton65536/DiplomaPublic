//
//  APViewController.h
//  Diploma
//
//  Created by Антон Пераш on 8/16/19.
//  Copyright © 2019 Антон Пераш. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface APViewController : UIViewController

@property(weak,nonatomic) UITextField *cityNameProperty;
@property(weak,nonatomic) UILabel* previousCityProperty;
@property(weak,nonatomic) UILabel* letterLabelProperty;
@property(weak,nonatomic) UIButton* buttonProperty;
@property(weak,nonatomic) UIButton* buttonHelpWithCityProperty;
@property(strong,nonatomic) NSMutableSet *citiesSet;
@property(strong,nonatomic) NSMutableSet *usedCitiesSet;
@property(assign,nonatomic) NSUInteger countdownForHelpAttempts;
@property(strong,nonatomic) UILabel *cityInfo;
@property(strong,nonatomic) NSDictionary *citiesAndDescription;

@end

NS_ASSUME_NONNULL_END
/*Choate,Choate,America/New_York
 US,DE,Christiana,Christiana,America/New_York
 US,DE,Christiana Hundred,Christiana Hundred,America/New_York
 US,DE,Christiana Village,Christiana Village,America/New_York
 US,DE,Christina Manor,Christina Manor,America/New_York
 US,DE,Clarksville,Clarksville,America/New_York
 US,DE,Claymont,Claymont,America/New_York
 US,DE,Claymont Addition,Claymont Addition,America/New_York
 US,DE,Clearview Manor,Clearview Manor,America/New_York
 US,DE,Clermont,Clermont,America/New_York
 US,DE,Cocked Hat,Cocked Hat,America/New_York
 US,DE,Clearfield,Clearfield,America/New_York
 US,DE,Cokesbury Village,Cokesbury Village,America/New_York
 US,DE,Collins And Russell Development,Collins And Russell Development,America/New_York
 US,DE,Colmar Manor,Colmar Manor,America/New_York
 US,DE,Columbia,Columbia,America/New_York
 US,DE,Concord,Concord,America/New_York
 US,DE,Concord Manor,Concord Manor,America/New_York
 US,DE,Corbit,Corbit,America/New_York
 US,DE,Country Village,Country Village,America/New_York
 US,DE,Countryside Farms,Countryside Farms,America/New_York
 US,DE,Coventry,Coventry,America/New_York
 US,DE,Corner Ketch,Corner Ketch,America/New_York
 US,DE,Crestfield,Crestfield,America/New_York
 US,DE,Cristine Manor,Cristine Manor,America/New_York
 US,DE,Crossgates,Crossgates,America/New_York
 US,DE,Dagsboro Hundred,Dagsboro Hundred,America/New_York
 US,DE,Daniels Tract,Daniels Tract,America/New_York
 US,DE,Deakyneville,Deakyneville,America/New_York
 US,DE,Deerhurst,Deerhurst,America/New_York
 US,DE,Deerwood,Deerwood,America/New_York
 US,DE,Delaire,Delaire,America/New_York
 US,DE,Delaplane Manor,Delaplane Manor,America/New_York
 US,DE,Delaware,Delaware,America/New_York
 US,DE,Delpark Manor,Delpark Manor,America/New_York
 US,DE,Delshire,Delshire,America/New_York
 US,DE,Delwoods,Delwoods,America/New_York
 US,DE,Denton Manor,Denton Manor,America/New_York
 US,DE,Derby Shores,Derby Shores,America/New_York
 US,DE,Devon,Devon,America/New_York
 US,DE,Devonshire,Devonshire,America/New_York
 US,DE,Dobbinsville,Dobbinsville,America/New_York
 US,DE,Donovan Development,Donovan Development,America/New_York
 US,DE,Douglas Forge,Douglas Forge,America/New_York
 US,DE,Drawbridge,Drawbridge,America/New_York
 US,DE,Duck Creek Hundred,Duck Creek Hundred,America/New_York
 US,DE,Duncan Glen,Duncan Glen,America/New_York
 US,DE,Duncan Village,Duncan Village,America/New_York
 US,DE,Dunleith,Dunleith,America/New_York
 US,DE,Dupont,Dupont,America/New_York
 US,DE,Dupont Manor,Dupont Manor,America/New_York
 US,DE,Dutch Neck Farms,Dutch Neck Farms,America/New_York
 US,DE,East Minquadale,East Minquadale,America/New_York
 US,DE,East Side Village,East Side Village,America/New_York
 US,DE,Eastburn Farms,Eastburn Farms,America/New_York
 US,DE,East Dover Hundred,East Dover Hundred,America/New_York
 US,DE,Eberton,Eberton,America/New_York
 US,DE,Ebright,Ebright,America/New_York
 US,DE,Eden Roc,Eden Roc,America/New_York
 US,DE,Edenridge,Edenridge,America/New_York
 US,DE,Edgebrooke,Edgebrooke,America/New_York
 US,DE,Edgemoor,Edgemoor,America/New_York
 US,DE,Edgewater,Edgewater,America/New_York
 US,DE,Edgewood Manor,Edgewood Manor,America/New_York
 US,DE,Edward Cordrey Subdivision,Edward Cordrey Subdivision,America/New_York
 US,DE,Edwardsville,Edwardsville,America/New_York
 US,DE,Elmhurst,Elmhurst,America/New_York
 US,DE,English Village,English Village,America/New_York
 US,DE,Evergreen Farms,Evergreen Farms,America/New_York
 US,DE,Fairfax,Fairfax,America/New_York
 US,DE,Fairfield,Fairfield,America/New_York
 US,DE,Fairfield Farms,Fairfield Farms,America/New_York
 US,DE,Fairthorne,Fairthorne,America/New_York
 US,DE,Fairview,Fairview,America/New_York
 US,DE,Fairway Villas,Fairway Villas,America/New_York
 US,DE,Fairwinds,Fairwinds,America/New_York
 US,DE,Fairmount,Fairmount,America/New_York
 US,DE,Farnhurst,Farnhurst,America/New_York
 US,DE,Faulkland,Faulkland,America/New_York
 US,DE,Federalsburg,Federalsburg,America/New_York
 US,DE,Felton Manor,Felton Manor,America/New_York
 US,DE,Fern Hook,Fern Hook,America/New_York
 US,DE,Fieldsboro,Fieldsboro,America/New_York
 US,DE,Fieldwood Addition,Fieldwood Addition,America/New_York
 US,DE,Five Points,Five Points,America/New_York
 US,DE,Florence,Florence,America/New_York
 US,DE,Forest,Forest,America/New_York
 US,DE,Forest Brook Glen,Forest Brook Glen,America/New_York
 US,DE,Forwood,Forwood,America/New_York
 US,DE,Foxfield,Foxfield,America/New_York
 US,DE,Foxfire,Foxfire,America/New_York
 US,DE,Foxhall Courtside,Foxhall Courtside,America/New_York
 US,DE,Friedel Property,Friedel Property,America/New_York
 US,DE,Galewood,Galewood,America/New_York
 US,DE,Garton Development,Garton Development,America/New_York
 US,DE,Gateway Farms,Gateway Farms,America/New_York
 US,DE,Generals Greene,Generals Greene,America/New_York
 US,DE,George Meyers Development,George Meyers Development,America/New_York
 US,DE,Georgetown Hundred,Georgetown Hundred,America/New_York
 US,DE,Frenchs Mobile Homes,Frenchs Mobile Homes,America/New_York
 US,DE,Glasgow Pines,Glasgow Pines,America/New_York
 US,DE,Glendale,Glendale,America/New_York
 US,DE,Glenville,Glenville,America/New_York
 US,DE,Goldsboro,Goldsboro,America/New_York
 US,DE,Glasgow,Glasgow,America/New_York
 US,DE,Granogue,Granogue,America/New_York
 US,DE,Gran-Ville,Gran-Ville,America/New_York
 US,DE,Great Oak Farms,Great Oak Farms,America/New_York
 US,DE,Green Briar,Green Briar,America/New_York
 US,DE,Greenbank,Greenbank,America/New_York
 US,DE,Greenbridge,Greenbridge,America/New_York
 US,DE,Greenleaf Manor,Greenleaf Manor,America/New_York
 US,DE,Greens Of Dover,Greens Of Dover,America/New_York
 US,DE,Greentop,Greentop,America/New_York
 US,DE,Greenview,Greenview,America/New_York
 US,DE,Greenville,Greenville,America/New_York
 US,DE,Greenville Development,Greenville Development,America/New_York
 US,DE,Greenville Manor,Greenville Manor,America/New_York
 US,DE,Grendon Farms,Grendon Farms,America/New_York
 US,DE,Greylag,Greylag,America/New_York
 US,DE,Gulls Nest,Gulls Nest,America/New_York
 US,DE,Gumboro,Gumboro,America/New_York
 US,DE,Gumboro Hundred,Gumboro Hundred,America/New_York
 US,DE,Gumwood,Gumwood,America/New_York
 US,DE,Gwinhurst,Gwinhurst,America/New_York
 US,DE,Hammville,Hammville,America/New_York
 US,DE,Hampton,Hampton,America/New_York
 US,DE,Guyencourt,Guyencourt,America/New_York
 US,DE,Harbeson,Harbeson,America/New_York
 US,DE,Hardscrabble,Hardscrabble,America/New_York
 US,DE,Harlemtown,Harlemtown,America/New_York
 US,DE,Harmon,Harmon,America/New_York
 US,DE,Harmony,Harmony,America/New_York
 US,DE,Haverford,Haverford,America/New_York
 US,DE,Hazeldell,Hazeldell,America/New_York
 US,DE,Hazelwood,Hazelwood,America/New_York
 US,DE,Hazlettville,Hazlettville,America/New_York
 US,DE,Heatherton,Heatherton,America/New_York
 US,DE,Henry Clay,Henry Clay,America/New_York
 US,DE,Heritage,Heritage,America/New_York
 US,DE,Heritage Farms,Heritage Farms,America/New_York
 US,DE,Heritage Village,Heritage Village,America/New_York
 US,DE,Heronwood,Heronwood,America/New_York
 US,DE,Hill N Dale,Hill N Dale,America/New_York
 US,DE,Hilldale,Hilldale,America/New_York
 US,DE,Hillendale,Hillendale,America/New_York
 US,DE,Hillstream,Hillstream,America/New_York
 US,DE,Hilltop Manor,Hilltop Manor,America/New_York
 US,DE,Hillcrest,Hillcrest,America/New_York
 US,DE,Hoagland Subdivision,Hoagland Subdivision,America/New_York
 US,DE,Hoars Addition,Hoars Addition,America/New_York
 US,DE,Hockessin,Hockessin,America/New_York
 US,DE,Hockessin Hunt,Hockessin Hunt,America/New_York
 US,DE,Holiday Pines,Holiday Pines,America/New_York
 US,DE,Hollandsville,Hollandsville,America/New_York
 US,DE,Hollingsworth Development,Hollingsworth Development,America/New_York
 US,DE,Holly Knoll,Holly Knoll,America/New_York
 US,DE,Hollymount,Hollymount,America/New_York
 US,DE,Hollyville,Hollyville,America/New_York
 US,DE,Hourglass,Hourglass,America/New_York
 US,DE,Howard Manor,Howard Manor,America/New_York
 US,DE,Huntley,Huntley,America/New_York
 US,DE,Huntley Circle,Huntley Circle,America/New_York
 US,DE,Idela,Idela,America/New_York
 US,DE,Indian Harbor Villa,Indian Harbor Villa,America/New_York
 US,DE,Indiantown Farms,Indiantown Farms,America/New_York
 US,DE,Iron Gates,Iron Gates,America/New_York
 US,DE,Israel Haul,Israel Haul,America/New_York
 US,DE,Jamestowne,Jamestowne,America/New_York
 US,DE,Jarrell Farms,Jarrell Farms,America/New_York
 US,DE,Jefferson Farms,Jefferson Farms,America/New_York
 US,DE,Jimtown,Jimtown,America/New_York
 US,DE,Johnson Development,Johnson Development,America/New_York
 US,DE,Keen-Wik,Keen-Wik,America/New_York
 US,DE,Keeney,Keeney,America/New_York
 US,DE,Kent County,Kent County,America/New_York
 US,DE,Kenton Hundred,Kenton Hundred,America/New_York
 US,DE,Keystone,Keystone,America/New_York
 US,DE,Kiamensi,Kiamensi,America/New_York
 US,DE,Kentmere,Kentmere,America/New_York
 US,DE,Kings Croft,Kings Croft,America/New_York
 US,DE,Kings Grant,Kings Grant,America/New_York
 US,DE,Kings Second Addition,Kings Second Addition,America/New_York
 US,DE,Kirkwood,Kirkwood,America/New_York
 US,DE,Kitts Hummock,Kitts Hummock,America/New_York
 US,DE,Lakecroft Ii,Lakecroft Ii,America/New_York
 US,DE,Lakeside Manor,Lakeside Manor,America/New_York
 US,DE,Lakewind,Lakewind,America/New_York
 US,DE,Lakewind Iii,Lakewind Iii,America/New_York
 US,DE,Lakewood,Lakewood,America/New_York
 US,DE,Lakewood Development,Lakewood Development,America/New_York
 US,DE,Lamatan I,Lamatan I,America/New_York
 US,DE,Lamatan Ii,Lamatan Ii,America/New_York
 US,DE,Lambeth Riding,Lambeth Riding,America/New_York
 US,DE,Lancashire,Lancashire,America/New_York
 US,DE,Lancaster Village,Lancaster Village,America/New_York
 US,DE,Land Of Pleasant Living,Land Of Pleasant Living,America/New_York
 US,DE,Landlith,Landlith,America/New_York
 US,DE,Lantern Lane Mobile Villa,Lantern Lane Mobile Villa,America/New_York
 US,DE,Larchmont,Larchmont,America/New_York
 US,DE,Larence Cordrey Subdivision,Larence Cordrey Subdivision,America/New_York
 US,DE,Lauren Farms,Lauren Farms,America/New_York
 US,DE,Lawndale,Lawndale,America/New_York
 US,DE,Lebanon,Lebanon,America/New_York
 US,DE,Lewes And Rehoboth Hundred,Lewes And Rehoboth Hundred,America/New_York
 US,DE,Liberty,Liberty,America/New_York
 US,DE,Liftwood,Liftwood,America/New_York
 US,DE,Lightfoots Furnace,Lightfoots Furnace,America/New_York
 US,DE,Limestone Gardene,Limestone Gardene,America/New_York
 US,DE,Lincoln,Lincoln,America/New_York
 US,DE,Lincoln Village,Lincoln Village,America/New_York
 US,DE,Lindamere,Lindamere,America/New_York
 US,DE,Lindell Village,Lindell Village,America/New_York
 US,DE,Linden Heath,Linden Heath,America/New_York
 US,DE,Little Baltimore,Little Baltimore,America/New_York
 US,DE,Little Creek Hundred,Little Creek Hundred,America/New_York
 US,DE,Little Heaven,Little Heaven,America/New_York
 US,DE,Little Jersey,Little Jersey,America/New_York
 US,DE,Lochwood,Lochwood,America/New_York
 US,DE,Locustville,Locustville,America/New_York
 US,DE,London Village,London Village,America/New_York
 US,DE,Long Neck,Long Neck,America/New_York
 US,DE,Longview Farms,Longview Farms,America/New_York
 US,DE,Longwood,Longwood,America/New_York
 US,DE,Loveville,Loveville,America/New_York
 US,DE,Lowe,Lowe,America/New_York
 US,DE,Lumbrook,Lumbrook,America/New_York
 US,DE,Lums Pond Estates Ii,Lums Pond Estates Ii,America/New_York
 US,DE,Lyndalia,Lyndalia,America/New_York
 US,DE,Lynnfield,Lynnfield,America/New_York
 US,DE,Magnolia Shores,Magnolia Shores,America/New_York
 US,DE,Mahan,Mahan,America/New_York
 US,DE,Manley,Manley,America/New_York
 US,DE,Maplewood,Maplewood,America/New_York
 US,DE,Marshallton,Marshallton,America/New_York
 US,DE,Marshallton Heights Ii,Marshallton Heights Ii,America/New_York
 US,DE,Marshtown,Marshtown,America/New_York
 US,DE,Maplecrest,Maplecrest,America/New_York
 US,DE,Marydel,Marydel,America/New_York
 US,DE,Masonicville,Masonicville,America/New_York
 US,DE,Marydale,Marydale,America/New_York
 US,DE,Mayfield,Mayfield,America/New_York
 US,DE,Mayview Manor,Mayview Manor,America/New_York
 US,DE,Mcclellandville,Mcclellandville,America/New_York
 US,DE,Mayfair,Mayfair,America/New_York
 US,DE,Mcdonough,Mcdonough,America/New_York
 US,DE,Meadow Glen,Meadow Glen,America/New_York
 US,DE,Meadow Vista,Meadow Vista,America/New_York
 US,DE,Meadowbrook,Meadowbrook,America/New_York
 US,DE,Meadowbrook Farms,Meadowbrook Farms,America/New_York
 US,DE,Meadowood,Meadowood,America/New_York
 US,DE,Meadows,Meadows,America/New_York
 US,DE,Mechanicsville,Mechanicsville,America/New_York
 US,DE,Melanie,Melanie,America/New_York
 US,DE,Melody Meadows Ii,Melody Meadows Ii,America/New_York
 US,DE,Melvins,Melvins,America/New_York
 US,DE,Mendenhall Village,Mendenhall Village,America/New_York
 US,DE,Messick Development,Messick Development,America/New_York
 US,DE,Mermaid,Mermaid,America/New_York
 US,DE,Middleboro Manor,Middleboro Manor,America/New_York
 US,DE,Middleford,Middleford,America/New_York
 US,DE,Midnight Thicket,Midnight Thicket,America/New_York
 US,DE,Midvale,Midvale,America/New_York
 US,DE,Midvalf,Midvalf,America/New_York
 US,DE,Midway,Midway,America/New_York
 US,DE,Milford Hundred,Milford Hundred,America/New_York
 US,DE,Mill Creek Hundred,Mill Creek Hundred,America/New_York
 US,DE,Mill Creek Manor,Mill Creek Manor,America/New_York
 US,DE,Millside,Millside,America/New_York
 US,DE,Milltown,Milltown,America/New_York
 US,DE,Minquadale,Minquadale,America/New_York
 US,DE,Minquadale Trailer Village,Minquadale Trailer Village,America/New_York
 US,DE,Mispillion Hundred,Mispillion Hundred,America/New_York
 US,DE,Mission,Mission,America/New_York
 US,DE,Montchan,Montchan,America/New_York
 US,DE,Montchanin,Montchanin,America/New_York
 US,DE,Montclare,Montclare,America/New_York
 US,DE,Moores Lake Development,Moores Lake Development,America/New_York
 US,DE,Murrays Development,Murrays Development,America/New_York
 US,DE,Murrays Haven,Murrays Haven,America/New_York
 US,DE,Naaman,Naaman,America/New_York
 US,DE,Naamans Manor,Naamans Manor,America/New_York
 US,DE,Nanticoke Farms,Nanticoke Farms,America/New_York
 US,DE,Nanticoke Hundred,Nanticoke Hundred,America/New_York
 US,DE,Nassau,Nassau,America/New_York
 US,DE,Nentego Manor,Nentego Manor,America/New_York
 US,DE,New Castle County,New Castle County,America/New_York
 US,DE,New Castle Hundred,New Castle Hundred,America/New_York
 US,DE,Normandy Manor,Normandy Manor,America/New_York
 US,DE,North Minister,North Minister,America/New_York
 US,DE,North Murderkill Hundred,North Murderkill Hundred,America/New_York
 US,DE,North Shores,North Shores,America/New_York
 US,AR,Abbott,Abbott,America/Chicago
 US,AR,Abco,Abco,America/Chicago
 US,AR,Aberdeen,Aberdeen,America/Chicago
 US,AR,Accident,Accident,America/Chicago
 US,AR,Acorn,Acorn,America/Chicago
 US,AR,Ada,Ada,America/Chicago
 US,AR,Adona,Adona,America/Chicago
 US,AR,Advance,Advance,America/Chicago
 US,AR,Aetna,Aetna,America/Chicago
 US,AR,Agnos,Agnos,America/Chicago
 US,AR,Ain,Ain,America/Chicago
 US,AR,Airport Village,Airport Village,America/Chicago
 US,AR,Alabam,Alabam,America/Chicago
 US,AR,Alamo,Alamo,America/Chicago
 US,AR,Albert,Albert,America/Chicago
 US,AR,Albion,Albion,America/Chicago
 US,AR,Alco,Alco,America/Chicago
 US,AR,Alexander,Alexander,America/Chicago
 US,AR,Alf,Alf,America/Chicago
 US,AR,Alfrey,Alfrey,America/Chicago
 US,AR,Algoa,Algoa,America/Chicago
 US,AR,Alix,Alix,America/Chicago
 US,AR,Allbrook,Allbrook,America/Chicago
 US,AR,Alleene,Alleene,America/Chicago
 US,AR,Allendale,Allendale,America/Chicago
 US,AR,Allis,Allis,America/Chicago
 US,AR,Allison,Allison,America/Chicago
 US,AR,Alma,Alma,America/Chicago
 US,AR,Almond,Almond,America/Chicago
 US,AR,Alpha,Alpha,America/Chicago
 US,AR,Alpine,Alpine,America/Chicago
 US,AR,Alread,Alread,America/Chicago
 US,AR,Altheimer,Altheimer,America/Chicago
 US,AR,Altus,Altus,America/Chicago
 US,AR,Amanca,Amanca,America/Chicago
 US,AR,Aly,Aly,America/Chicago
 US,AR,Amboy,Amboy,America/Chicago
 US,AR,Ames,Ames,America/Chicago
 US,AR,Amity,Amity,America/Chicago
 US,AR,Amos,Amos,America/Chicago
 US,AR,Amy,Amy,America/Chicago
 US,AR,Anderson,Anderson,America/Chicago
 US,AR,Anderson Tully,Anderson Tully,America/Chicago
 US,AR,Andrews,Andrews,America/Chicago
 US,AR,Annieville,Annieville,America/Chicago
 US,AR,Anthony Subdivision,Anthony Subdivision,America/Chicago
 US,AR,Antioch,Antioch,America/Chicago
 US,AR,Apalco,Apalco,America/Chicago
 US,AR,Apex,Apex,America/Chicago
 US,AR,Aplin,Aplin,America/Chicago
 US,AR,Appleby,Appleby,America/Chicago
 US,AR,Appleton,Appleton,America/Chicago
 US,AR,Apt,Apt,America/Chicago
 US,AR,Arbaugh,Arbaugh,America/Chicago
 US,AR,Arcadia,Arcadia,America/Chicago
 US,AR,Ard,Ard,America/Chicago
 US,AR,Arden,Arden,America/Chicago
 US,AR,Arkana,Arkana,America/Chicago
 US,AR,Arkansas City,Arkansas City,America/Chicago
 US,DE,North Shores Addition,North Shores Addition,America/New_York
 US,DE,North Star,North Star,America/New_York
 US,DE,North Star Addition,North Star Addition,America/New_York
 US,DE,Northcrest,Northcrest,America/New_York
 US,DE,Northshire,Northshire,America/New_York
 US,DE,Northwest Fork Hundred,Northwest Fork Hundred,America/New_York
 US,DE,Northwood,Northwood,America/New_York
 US,DE,Nottingham Manor,Nottingham Manor,America/New_York
 US,DE,Oak Drive,Oak Drive,America/New_York
 US,DE,Oak Lane Manor,Oak Lane Manor,America/New_York
 US,DE,Oak Orchard,Oak Orchard,America/New_York
 US,DE,Oakdale,Oakdale,America/New_York
 US,DE,Oakland,Oakland,America/New_York
 US,DE,Oakley,Oakley,America/New_York
 US,DE,Oakmont,Oakmont,America/New_York
 US,DE,Ocean Village,Ocean Village,America/New_York
 US,DE,Ogletown,Ogletown,America/New_York
 US,DE,Old Furnace,Old Furnace,America/New_York
 US,DE,Omar,Omar,America/New_York
 US,DE,Orchard Manor,Orchard Manor,America/New_York
 US,DE,Overbrook,Overbrook,America/New_York
 US,DE,Overbrook Shores,Overbrook Shores,America/New_York
 US,DE,Overlook Colony,Overlook Colony,America/New_York
 US,DE,Owens,Owens,America/New_York
 US,DE,Owls Nest,Owls Nest,America/New_York
 US,DE,Paris Villa,Paris Villa,America/New_York
 US,DE,Parkwood,Parkwood,America/New_York
 US,DE,Parkside,Parkside,America/New_York
 US,DE,Penarth,Penarth,America/New_York
 US,DE,Pencader,Pencader,America/New_York
 US,DE,Pencader Farms,Pencader Farms,America/New_York
 US,DE,Pencader Hundred,Pencader Hundred,America/New_York
 US,DE,Pencader Village,Pencader Village,America/New_York
 US,DE,Pendrew Manor,Pendrew Manor,America/New_York
 US,DE,Penn Rose,Penn Rose,America/New_York
 US,DE,Penndrew Manor,Penndrew Manor,America/New_York
 US,DE,Pennington,Pennington,America/New_York
 US,DE,Pennock,Pennock,America/New_York
 US,DE,Pennwood,Pennwood,America/New_York
 US,DE,Penrock,Penrock,America/New_York
 US,DE,Pentland,Pentland,America/New_York
 US,DE,Pepper,Pepper,America/New_York
 US,DE,Pembrey,Pembrey,America/New_York
 US,DE,Pepperbox,Pepperbox,America/New_York
 US,DE,Perth,Perth,America/New_York
 US,DE,Petersburg,Petersburg,America/New_York
 US,DE,Pierson Farms,Pierson Farms,America/New_York
 US,DE,Pilottown,Pilottown,America/New_York
 US,DE,Pine Lake Development,Pine Lake Development,America/New_York
 US,DE,Pine Lodge Addition,Pine Lodge Addition,America/New_York
 US,DE,Pine Valley Farms,Pine Valley Farms,America/New_York
 US,DE,Pinecrest,Pinecrest,America/New_York
 US,DE,Pinetown,Pinetown,America/New_York
 US,DE,Piney Grove Manor,Piney Grove Manor,America/New_York
 US,DE,Pleasantville,Pleasantville,America/New_York
 US,DE,Plymouth,Plymouth,America/New_York
 US,DE,Piney Glade,Piney Glade,America/New_York
 US,DE,Point Breeze,Point Breeze,America/New_York
 US,DE,Port Mahon,Port Mahon,America/New_York
 US,DE,Port Penn,Port Penn,America/New_York
 US,DE,Porter,Porter,America/New_York
 US,DE,Portsville,Portsville,America/New_York
 US,DE,Powelton,Powelton,America/New_York
 US,DE,Princeton Wood Ii,Princeton Wood Ii,America/New_York
 US,DE,Pusey Development,Pusey Development,America/New_York
 US,DE,Quakertown,Quakertown,America/New_York
 US,DE,Quarryville,Quarryville,America/New_York
 US,DE,Queens Quest,Queens Quest,America/New_York
 US,DE,Raintree Village,Raintree Village,America/New_York
 US,DE,Ralphs,Ralphs,America/New_York
 US,DE,Redden,Redden,America/New_York
 US,DE,Rehoboth Manor,Rehoboth Manor,America/New_York
 US,DE,Reybold,Reybold,America/New_York
 US,DE,Ridgewood,Ridgewood,America/New_York
 US,DE,Rising Sun,Rising Sun,America/New_York
 US,DE,Riverdale,Riverdale,America/New_York
 US,DE,Riverside,Riverside,America/New_York
 US,DE,Riverview,Riverview,America/New_York
 US,DE,Robbins,Robbins,America/New_York
 US,DE,Robinsonville,Robinsonville,America/New_York
 US,DE,Robscott Manor,Robscott Manor,America/New_York
 US,DE,Rock Manor,Rock Manor,America/New_York
 US,DE,Rockland,Rockland,America/New_York
 US,DE,Red Lion Hundred,Red Lion Hundred,America/New_York
 US,DE,Rodney Village,Rodney Village,America/New_York
 US,DE,Rodric Village,Rodric Village,America/New_York
 US,DE,Roesville,Roesville,America/New_York
 US,DE,Rogers Development,Rogers Development,America/New_York
 US,DE,Rogers Haven,Rogers Haven,America/New_York
 US,DE,Rogers Manor,Rogers Manor,America/New_York
 US,DE,Rosegate,Rosegate,America/New_York
 US,DE,Ross,Ross,America/New_York
 US,DE,Roxana,Roxana,America/New_York
 US,DE,Roxford,Roxford,America/New_York
 US,DE,Royal Grant,Royal Grant,America/New_York
 US,DE,Ruthby,Ruthby,America/New_York
 US,DE,Rutherford,Rutherford,America/New_York
 US,DE,Saienni Farms,Saienni Farms,America/New_York
 US,DE,Saint George,Saint George,America/New_York
 US,DE,Saint Georges,Saint Georges,America/New_York
 US,DE,Runnymeade,Runnymeade,America/New_York
 US,DE,Saint Georges Hundred,Saint Georges Hundred,America/New_York
 US,AR,Alto,Alto,America/Chicago
 US,AR,Carrollton,Carrollton,America/Chicago
 US,AR,Clow,Clow,America/Chicago
 US,AR,Patrick,Patrick,America/Chicago
 US,AR,Fern,Fern,America/Chicago
 US,AR,Elgin,Elgin,America/Chicago
 US,AR,Estes,Estes,America/Chicago
 US,AR,Huff,Huff,America/Chicago
 US,AR,Little Arkansaw,Little Arkansaw,America/Chicago
 US,AR,Lodi,Lodi,America/Chicago
 US,AR,Milo,Milo,America/Chicago
 US,AR,Mandalay,Mandalay,America/Chicago
 US,AR,Metalton,Metalton,America/Chicago
 US,AR,North Pitts,North Pitts,America/Chicago
 US,DE,Whigville,Whigville,America/New_York
 US,AR,Sherwood,Sherwood,America/Chicago
 US,AR,Rosie,Rosie,America/Chicago
 US,AR,Salado,Salado,America/Chicago
 US,AR,Smead,Smead,America/Chicago
 US,AR,Watalula,Watalula,America/Chicago
 US,DE,Candlewicke,Candlewicke,America/New_York
 US,DE,Monterey Farms,Monterey Farms,America/New_York
 US,FL,Eva,Eva,America/New_York
 US,FL,Postil,Postil,America/Chicago
 US,FL,Kendrick,Kendrick,America/New_York
 US,FL,Sandalwood,Sandalwood,America/New_York
 US,FL,Tallevast,Tallevast,America/New_York
 US,FL,Sycamore,Sycamore,America/New_York
 US,FL,Grant-Valkaria,Grant-Valkaria,America/New_York
 US,AR,Helena-West Helena,Helena-West Helena,America/Chicago
 US,FL,Alafaya,Alafaya,America/New_York
 US,FL,East Ridge Retirement Village,East Ridge Retirement Village,America/New_York
 US,FL,Courtly Manor,Courtly Manor,America/New_York
 US,FL,Lone Pines Mobile Village,Lone Pines Mobile Village,America/New_York
 US,FL,Medley Mobile Homes,Medley Mobile Homes,America/New_York
 US,FL,Little Havana,Little Havana,America/New_York
 US,FL,Latin Quarter,Latin Quarter,America/New_York
 US,FL,Hibiscus Mobile Homes,Hibiscus Mobile Homes,America/New_York
 US,FL,Golden Shores,Golden Shores,America/New_York
 US,FL,Sun Haven Of Aventura,Sun Haven Of Aventura,America/New_York
 US,FL,Royal Colonial Mobile,Royal Colonial Mobile,America/New_York
 US,FL,Royal Country,Royal Country,America/New_York
 US,FL,Renaissance,Renaissance,America/New_York
 US,FL,Lighthouse Pt,Lighthouse Pt,America/New_York
 US,FL,Champions Gate,Champions Gate,America/New_York
 US,DE,Analine Village,Analine Village,America/New_York
 US,DE,Ballymeade,Ballymeade,America/New_York
 US,DE,Brandywine Commons,Brandywine Commons,America/New_York
 US,DE,Cedartree,Cedartree,America/New_York
 US,DE,Centreville Tract,Centreville Tract,America/New_York
 US,AR,Bayless,Bayless,America/Chicago
 US,AR,Brumley,Brumley,America/Chicago
 US,AR,Billstown,Billstown,America/Chicago
 US,AR,Duce,Duce,America/Chicago
 US,AR,Canaan,Canaan,America/Chicago
 US,AR,Bulltown,Bulltown,America/Chicago
 US,AR,Collins,Collins,America/Chicago
 US,AR,Cove,Cove,America/Chicago
 US,AR,Delaney,Delaney,America/Chicago
 US,AR,Etna,Etna,America/Chicago
 US,AR,Elba,Elba,America/Chicago
 US,AR,Gepp,Gepp,America/Chicago
 US,AR,Hicks,Hicks,America/Chicago
 US,AR,Hasty,Hasty,America/Chicago
 US,AR,Little Red,Little Red,America/Chicago
 US,AR,Johnston,Johnston,America/Chicago
 US,AR,Holman,Holman,America/Chicago
 US,AR,Kearney,Kearney,America/Chicago
 US,AR,Lignite,Lignite,America/Chicago
 US,AR,Palmer,Palmer,America/Chicago
 US,AR,Onia,Onia,America/Chicago
 US,AR,Pitman,Pitman,America/Chicago
 US,AR,Petit Jean,Petit Jean,America/Chicago
 US,AR,Provo,Provo,America/Chicago
 US,AR,Smith,Smith,America/Chicago
 US,FL,Eugene,Eugene,America/New_York
 US,AR,Tag,Tag,America/Chicago
 US,AR,Springfield,Springfield,America/Chicago
 US,AR,Walcott,Walcott,America/Chicago
 US,DE,Chestnut Knoll,Chestnut Knoll,America/New_York
 US,DE,Bayard,Bayard,America/New_York
 US,DE,Brenford,Brenford,America/New_York
 US,DE,Woodbury,Woodbury,America/New_York
 US,DE,Red Lion,Red Lion,America/New_York
 US,DE,Johnson,Johnson,America/New_York
 US,FL,Bardin,Bardin,America/New_York
 US,FL,Anona,Anona,America/New_York
 US,FL,Blocker,Blocker,America/New_York
 US,FL,Conant,Conant,America/New_York
 US,FL,Cromanton,Cromanton,America/Chicago
 US,FL,Hedges,Hedges,America/New_York
 US,FL,Majette,Majette,America/Chicago
 US,FL,Matlacha,Matlacha,America/New_York
 US,FL,Port Leon,Port Leon,America/New_York
 US,FL,Trinity,Trinity,America/New_York
 US,FL,Villas,Villas,America/New_York
 US,FL,Wulfert,Wulfert,America/New_York
 US,AR,Dewitt,Dewitt,America/Chicago
 US,FL,Mount Dora,Mount Dora,America/New_York
 US,AR,Mount Ida,Mount Ida,America/Chicago
 US,AR,Mountain Pine,Mountain Pine,America/Chicago
 US,AR,Mountainburg,Mountainburg,America/Chicago
 US,AR,Pollard,Pollard,America/Chicago
 US,FL,Jacob City,Jacob City,America/Chicago
 US,FL,Lake Alfred,Lake Alfred,America/New_York
 US,FL,Lake Buena Vista,Lake Buena Vista,America/New_York
 US,AR,Arkansas County,Arkansas County,America/Chicago
 US,AR,Arkansas Post,Arkansas Post,America/Chicago
 US,AR,Arkansas,Arkansas,America/Chicago
 US,AR,Arkawana,Arkawana,America/Chicago
 US,AR,Arkinda,Arkinda,America/Chicago
 US,AR,Arkmo,Arkmo,America/Chicago
 US,AR,Arkola,Arkola,America/Chicago
 US,AR,Arlberg,Arlberg,America/Chicago
 US,AR,Armorel,Armorel,America/Chicago
 US,AR,Armstrong,Armstrong,America/Chicago
 US,AR,Arnett,Arnett,America/Chicago
 US,AR,Artesian,Artesian,America/Chicago
 US,AR,Artex,Artex,America/Chicago
 US,AR,Arthur,Arthur,America/Chicago
 US,AR,Asher,Asher,America/Chicago
 US,AR,Ashley County,Ashley County,America/Chicago
 US,AR,Ashton,Ashton,America/Chicago
 US,AR,Athens,Athens,America/Chicago
 US,AR,Athelstan,Athelstan,America/Chicago
 US,AR,Atkins,Atkins,America/Chicago
 US,AR,Atlanta,Atlanta,America/Chicago
 US,AR,Attica,Attica,America/Chicago
 US,AR,Atwood,Atwood,America/Chicago
 US,AR,Augsburg,Augsburg,America/Chicago
 US,AR,Augusta,Augusta,America/Chicago
 US,AR,Aurelle,Aurelle,America/Chicago
 US,AR,Aurora,Aurora,America/Chicago
 US,AR,Austin,Austin,America/Chicago
 US,AR,Auvergne,Auvergne,America/Chicago
 US,AR,Ava,Ava,America/Chicago
 US,AR,Avant,Avant,America/Chicago
 US,AR,Avery,Avery,America/Chicago
 US,AR,Avon,Avon,America/Chicago
 US,AR,Azor,Azor,America/Chicago
 US,AR,Avilla,Avilla,America/Chicago
 US,AR,Back Gate,Back Gate,America/Chicago
 US,AR,Bailey,Bailey,America/Chicago
 US,AR,Bailey Addition,Bailey Addition,America/Chicago
 US,AR,Baker,Baker,America/Chicago
 US,AR,Balch,Balch,America/Chicago
 US,AR,Baldwin,Baldwin,America/Chicago
 US,AR,Ball,Ball,America/Chicago
 US,AR,Ballard,Ballard,America/Chicago
 US,AR,Banner,Banner,America/Chicago
 US,AR,Banyard,Banyard,America/Chicago
 US,AR,Barber,Barber,America/Chicago
 US,AR,Bard,Bard,America/Chicago
 US,AR,Bardstown,Bardstown,America/Chicago
 US,AR,Bare Stone,Bare Stone,America/Chicago
 US,AR,Barfield,Barfield,America/Chicago
 US,AR,Barger Addition,Barger Addition,America/Chicago
 US,AR,Barham,Barham,America/Chicago
 US,AR,Barcelona,Barcelona,America/Chicago
 US,AR,Barkada,Barkada,America/Chicago
 US,AR,Barnes,Barnes,America/Chicago
 US,AR,Barney,Barney,America/Chicago
 US,AR,Barrettsville,Barrettsville,America/Chicago
 US,DE,Chapelcrest,Chapelcrest,America/New_York
 US,DE,Cherrington,Cherrington,America/New_York
 US,DE,Clair Manor,Clair Manor,America/New_York
 US,DE,Country Gates,Country Gates,America/New_York
 US,DE,Dartmouth Woods Ii,Dartmouth Woods Ii,America/New_York
 US,DE,Kimberly Chase,Kimberly Chase,America/New_York
 US,DE,Maplechase,Maplechase,America/New_York
 US,DE,Munsee,Munsee,America/New_York
 US,DE,Quintynnes,Quintynnes,America/New_York
 US,DE,Shipley Chase,Shipley Chase,America/New_York
 US,DE,Sunnybrae,Sunnybrae,America/New_York
 US,DE,Talley Farms,Talley Farms,America/New_York
 US,DE,Westbrite,Westbrite,America/New_York
 US,DE,Wexford Chapelcroft,Wexford Chapelcroft,America/New_York
 US,DE,White Village,White Village,America/New_York
 US,DE,Williamhurst,Williamhurst,America/New_York
 US,DE,Winterset Farms,Winterset Farms,America/New_York
 US,DE,Woodacres,Woodacres,America/New_York
 US,DE,Wynleigh,Wynleigh,America/New_York
 US,FL,Lakeview Terrace Retirement Village,Lakeview Terrace Retirement Village,America/New_York
 US,DE,Ellendale,Ellendale,America/New_York
 US,DE,Elsmere,Elsmere,America/New_York
 US,DE,Farmington,Farmington,America/New_York
 US,DE,Felton,Felton,America/New_York
 US,DE,Frankford,Frankford,America/New_York
 US,DE,Frederica,Frederica,America/New_York
 US,DE,Georgetown,Georgetown,America/New_York
 US,DE,Greenwood,Greenwood,America/New_York
 US,DE,Hartly,Hartly,America/New_York
 US,DE,Houston,Houston,America/New_York
 US,DE,Dover,Dover,America/New_York
 US,DE,Harrington,Harrington,America/New_York
 US,DE,Lewes,Lewes,America/New_York
 US,DE,Milford,Milford,America/New_York
 US,DE,Newark,Newark,America/New_York
 US,DE,Seaford,Seaford,America/New_York
 US,DE,Wilmington,Wilmington,America/New_York
 US,DE,Bellefonte,Bellefonte,America/New_York
 US,DE,Bethel,Bethel,America/New_York
 US,DE,Blades,Blades,America/New_York
 US,DE,Bowers,Bowers,America/New_York
 US,DE,Bridgeville,Bridgeville,America/New_York
 US,DE,Camden,Camden,America/New_York
 US,DE,Cheswold,Cheswold,America/New_York
 US,DE,Clayton,Clayton,America/New_York
 US,DE,Dagsboro,Dagsboro,America/New_York
 US,DE,Delmar,Delmar,America/New_York
 US,DE,Kenton,Kenton,America/New_York
 US,DE,Laurel,Laurel,America/New_York
 US,DE,Leipsic,Leipsic,America/New_York
 US,DE,Magnolia,Magnolia,America/New_York
 US,DE,Middletown,Middletown,America/New_York
 US,DE,Millsboro,Millsboro,America/New_York
 US,DE,Millville,Millville,America/New_York
 US,DE,Milton,Milton,America/New_York
 US,DE,Newport,Newport,America/New_York
 US,DE,Odessa,Odessa,America/New_York
 US,DE,Selbyville,Selbyville,America/New_York
 US,DE,Smyrna,Smyrna,America/New_York
 US,DE,South Bethany,South Bethany,America/New_York
 US,DE,Townsend,Townsend,America/New_York
 US,DE,Ravenwood,Ravenwood,America/New_York
 US,DE,Gardenside,Gardenside,America/New_York
 US,DE,West Shore,West Shore,America/New_York
 US,DE,Sheriden,Sheriden,America/New_York
 US,DE,Burtonwood Village,Burtonwood Village,America/New_York
 US,DE,Ridgewood Manor,Ridgewood Manor,America/New_York
 US,DE,Sunnyside Village,Sunnyside Village,America/New_York
 US,DE,Kentbourne Ii,Kentbourne Ii,America/New_York
 US,DE,Wind Song Farms,Wind Song Farms,America/New_York
 US,DE,Pheasant Point Ii,Pheasant Point Ii,America/New_York
 US,DE,Forest Gate,Forest Gate,America/New_York
 US,DE,Cheswold Farms,Cheswold Farms,America/New_York
 US,DE,Lakeshore Village,Lakeshore Village,America/New_York
 US,DE,Northridge,Northridge,America/New_York
 US,DE,Maplehurst,Maplehurst,America/New_York
 US,DE,Cedar Chase,Cedar Chase,America/New_York
 US,DE,Oak Shadows,Oak Shadows,America/New_York
 US,DE,Shadybrook Farms,Shadybrook Farms,America/New_York
 US,DE,Independence Village,Independence Village,America/New_York
 US,DE,Pharsalia,Pharsalia,America/New_York
 US,DE,Westover,Westover,America/New_York
 US,DE,Presidential Courts,Presidential Courts,America/New_York
 US,DE,Four Seasons,Four Seasons,America/New_York
 US,DE,Heatherfield,Heatherfield,America/New_York
 US,DE,Quails Nest,Quails Nest,America/New_York
 US,DE,Rehak,Rehak,America/New_York
 US,DE,Melbourne Manor,Melbourne Manor,America/New_York
 US,DE,Woodfield,Woodfield,America/New_York
 US,DE,Alexanders Village,Alexanders Village,America/New_York
 US,DE,Normansmeade,Normansmeade,America/New_York
 US,DE,Townsend Fields,Townsend Fields,America/New_York
 US,DE,Derbywood,Derbywood,America/New_York
 US,DE,Barclay Farms,Barclay Farms,America/New_York
 US,DE,Allee,Allee,America/New_York
 US,DE,Eagles Nest,Eagles Nest,America/New_York
 US,DE,Misty Pines,Misty Pines,America/New_York
 US,DE,Harrison Knoll,Harrison Knoll,America/New_York
 US,DE,Canterbury Trails,Canterbury Trails,America/New_York
 US,DE,Hudson Trails,Hudson Trails,America/New_York
 US,DE,Oaknoll,Oaknoll,America/New_York
 US,DE,Canterville,Canterville,America/New_York
 US,DE,Summerfield Village,Summerfield Village,America/New_York
 US,DE,Fernwood,Fernwood,America/New_York
 US,FL,Neve Block,Neve Block,America/New_York
 US,FL,Newberger Pines,Newberger Pines,America/New_York
 US,FL,Newnan,Newnan,America/New_York
 US,FL,Nine Eagles,Nine Eagles,America/New_York
 US,FL,Nistals,Nistals,America/New_York
 US,FL,Nix,Nix,America/New_York
 US,FL,Nordica,Nordica,America/New_York
 US,FL,Norris,Norris,America/New_York
 US,FL,North Bon Air,North Bon Air,America/New_York
 US,FL,North Boulevard,North Boulevard,America/New_York
 US,FL,North Branch Shores,North Branch Shores,America/New_York
 US,FL,North Campobello,North Campobello,America/New_York
 US,FL,North Hillsboro,North Hillsboro,America/New_York
 US,FL,North Oakcrest,North Oakcrest,America/New_York
 US,FL,North Oaks Manor,North Oaks Manor,America/New_York
 US,FL,North Pinecrest,North Pinecrest,America/New_York
 US,FL,North Pointe,North Pointe,America/New_York
 US,FL,North Shore,North Shore,America/New_York
 US,FL,North Side Homes,North Side Homes,America/New_York
 US,FL,Northbridge At Lake Pretty,Northbridge At Lake Pretty,America/New_York
 US,FL,Northlake Village,Northlake Village,America/New_York
 US,FL,Northpointe At Bayshore,Northpointe At Bayshore,America/New_York
 US,FL,Northside Mobile Villa,Northside Mobile Villa,America/New_York
 US,FL,Northton Groves,Northton Groves,America/New_York
 US,FL,Northwood Village,Northwood Village,America/New_York
 US,FL,Northwoods,Northwoods,America/New_York
 US,FL,Nunez,Nunez,America/New_York
 US,FL,Oak Glen,Oak Glen,America/New_York
 US,FL,Oak Knoll,Oak Knoll,America/New_York
 US,FL,Oak Ledge,Oak Ledge,America/New_York
 US,FL,Oak Mont,Oak Mont,America/New_York
 US,FL,Oak Pointe,Oak Pointe,America/New_York
 US,FL,Oak Regency,Oak Regency,America/New_York
 US,FL,Oak Shadows,Oak Shadows,America/New_York
 US,FL,Oak Trace,Oak Trace,America/New_York
 US,FL,Oak Villa,Oak Villa,America/New_York
 US,FL,Oakbriar,Oakbriar,America/New_York
 US,FL,Oakellar,Oakellar,America/New_York
 US,FL,Oakford,Oakford,America/New_York
 US,FL,Oakhaven,Oakhaven,America/New_York
 US,FL,Oakhurst,Oakhurst,America/New_York
 US,FL,Oaklan,Oaklan,America/New_York
 US,FL,Oaklyn,Oaklyn,America/New_York
 US,FL,Oakmont Manor,Oakmont Manor,America/New_York
 US,FL,Oakrest,Oakrest,America/New_York
 US,FL,Oakridge,Oakridge,America/New_York
 US,FL,Oakridge Manor,Oakridge Manor,America/New_York
 US,FL,Oaks At Riverview,Oaks At Riverview,America/New_York
 US,FL,Oaks At Valrico,Oaks At Valrico,America/New_York
 US,FL,Oaks At Windemere,Oaks At Windemere,America/New_York
 US,FL,Oakwood,Oakwood,America/New_York
 US,FL,Oakwood Knoll,Oakwood Knoll,America/New_York
 US,FL,Oakwood Manor,Oakwood Manor,America/New_York
 US,FL,Oakwood Ravine,Oakwood Ravine,America/New_York
 US,FL,Oakwood Villa,Oakwood Villa,America/New_York
 US,FL,Occident,Occident,America/New_York
 US,FL,O'Hara,O'Hara,America/New_York
 US,FL,Old Hickery,Old Hickery,America/New_York
 US,FL,Omar,Omar,America/New_York
 US,FL,Oran,Oran,America/New_York
 US,FL,Orange Haven,Orange Haven,America/New_York
 US,FL,Orange Villa,Orange Villa,America/New_York
 US,FL,Orangeland,Orangeland,America/New_York
 US,FL,Orangewood,Orangewood,America/New_York
 US,FL,Orangewood Manor,Orangewood Manor,America/New_York
 US,FL,Orendain,Orendain,America/New_York
 US,FL,Oriole,Oriole,America/New_York
 US,FL,Oscawana,Oscawana,America/New_York
 US,FL,Otis,Otis,America/New_York
 US,FL,Otterman,Otterman,America/New_York
 US,FL,Overlook,Overlook,America/New_York
 US,FL,Overton,Overton,America/New_York
 US,FL,Ownahome,Ownahome,America/New_York
 US,FL,Ownby,Ownby,America/New_York
 US,FL,Packwood,Packwood,America/New_York
 US,FL,Palermo,Palermo,America/New_York
 US,FL,Palma Vista,Palma Vista,America/New_York
 US,FL,Palma Vista At Tampa Palms,Palma Vista At Tampa Palms,America/New_York
 US,FL,Palmaria,Palmaria,America/New_York
 US,FL,Palmere,Palmere,America/New_York
 US,FL,Panama,Panama,America/New_York
 US,FL,Panther Trace,Panther Trace,America/New_York
 US,FL,Paradise,Paradise,America/New_York
 US,FL,Pardeau Shores,Pardeau Shores,America/New_York
 US,FL,Parkdale,Parkdale,America/New_York
 US,FL,Parkside Village,Parkside Village,America/New_York
 US,FL,Parkwood Manor,Parkwood Manor,America/New_York
 US,FL,Parkwood Village,Parkwood Village,America/New_York
 US,FL,Parrish,Parrish,America/New_York
 US,FL,Parsons Pointe,Parsons Pointe,America/New_York
 US,FL,Patbur,Patbur,America/New_York
 US,FL,Pats,Pats,America/New_York
 US,FL,Pauls Manor,Pauls Manor,America/New_York
 US,FL,Pebble Creek Village,Pebble Creek Village,America/New_York
 US,FL,Pebblebrook,Pebblebrook,America/New_York
 US,FL,Pemberton Trace,Pemberton Trace,America/New_York
 US,FL,Penner,Penner,America/New_York
 US,FL,Pennington Village,Pennington Village,America/New_York
 US,FL,Perrywood,Perrywood,America/New_York
 US,FL,Peru,Peru,America/New_York
 US,FL,Phillips,Phillips,America/New_York
 US,FL,Phipps,Phipps,America/New_York
 US,FL,Picadilly,Picadilly,America/New_York
 US,FL,Pickron,Pickron,America/New_York
 US,FL,Waterstone,Waterstone,America/New_York
 US,FL,Watkins,Watkins,America/New_York
 US,FL,Watrous,Watrous,America/New_York
 US,FL,Watts,Watts,America/New_York
 US,FL,Waugh,Waugh,America/New_York
 US,FL,Waverly,Waverly,America/New_York
 US,FL,Weatherby,Weatherby,America/New_York
 US,FL,Weiland,Weiland,America/New_York
 US,FL,Weiss,Weiss,America/New_York
 US,FL,Welikit Retreat,Welikit Retreat,America/New_York
 US,FL,Wellington,Wellington,America/New_York
 US,FL,Wellington Homes At Countryway,Wellington Homes At Countryway,America/New_York
 US,FL,Wellington Manor,Wellington Manor,America/New_York
 US,FL,Wellington Manors,Wellington Manors,America/New_York
 US,FL,Wells,Wells,America/New_York
 US,FL,Wellswood,Wellswood,America/New_York
 US,FL,West Hampton,West Hampton,America/New_York
 US,FL,West Highlands,West Highlands,America/New_York
 US,FL,West Lake Farms,West Lake Farms,America/New_York
 US,FL,West Land,West Land,America/New_York
 US,FL,West Naples,West Naples,America/New_York
 US,FL,West North Tampa,West North Tampa,America/New_York
 US,FL,West Pinecrest,West Pinecrest,America/New_York
 US,FL,West Plant City,West Plant City,America/New_York
 US,FL,West Plant City Farms,West Plant City Farms,America/New_York
 US,FL,West Port,West Port,America/New_York
 US,FL,West Rosedale,West Rosedale,America/New_York
 US,FL,West Shore Manor,West Shore Manor,America/New_York
 US,FL,West Waters Village,West Waters Village,America/New_York
 US,FL,Westbrook,Westbrook,America/New_York
 US,FL,Westhigh,Westhigh,America/New_York
 US,FL,Westlake,Westlake,America/New_York
 US,FL,Westminster,Westminster,America/New_York
 US,FL,Westmoreland Pines,Westmoreland Pines,America/New_York
 US,FL,Westridge Village,Westridge Village,America/New_York
 US,FL,Wests,Wests,America/New_York
 US,FL,Westwego,Westwego,America/New_York
 US,FL,Westwood,Westwood,America/New_York
 US,FL,Wetherington,Wetherington,America/New_York
 US,FL,Wheeler Crossings,Wheeler Crossings,America/New_York
 US,FL,Wheeler Groves,Wheeler Groves,America/New_York
 US,FL,White Pine,White Pine,America/New_York
 US,FL,White Trout Lake Shores,White Trout Lake Shores,America/New_York
 US,FL,White Trout Manor,White Trout Manor,America/New_York
 US,FL,Whitesburg,Whitesburg,America/New_York
 US,FL,Whitlock,Whitlock,America/New_York
 US,FL,Whittemore,Whittemore,America/New_York
 US,FL,Wiggins Trace,Wiggins Trace,America/New_York
 US,FL,Wil Jo,Wil Jo,America/New_York
 US,FL,Wild Rose,Wild Rose,America/New_York
 US,FL,Wilder Trace,Wilder Trace,America/New_York
 US,FL,Wilderness Crossings,Wilderness Crossings,America/New_York
 US,FL,Wildewood Village,Wildewood Village,America/New_York
 US,FL,Wildwood,Wildwood,America/New_York
 US,FL,Wilhelmina,Wilhelmina,America/New_York
 US,FL,Williams Road Mobile Villa,Williams Road Mobile Villa,America/New_York
 US,FL,Willow Pines,Willow Pines,America/New_York
 US,FL,Willow Shores,Willow Shores,America/New_York
 US,FL,Willowbrae Village,Willowbrae Village,America/New_York
 US,FL,Wilma,Wilma,America/New_York
 US,FL,Wilma Farms,Wilma Farms,America/New_York
 US,FL,Wilma Highlands,Wilma Highlands,America/New_York
 US,FL,Wilsons,Wilsons,America/New_York
 US,FL,Windcall,Windcall,America/New_York
 US,FL,Windcrest Commons,Windcrest Commons,America/New_York
 US,FL,Windemere,Windemere,America/New_York
 US,FL,Windhorst Village,Windhorst Village,America/New_York
 US,FL,Windmill Pointe,Windmill Pointe,America/New_York
 US,FL,Wingate Village,Wingate Village,America/New_York
 US,FL,Winifred Highlands,Winifred Highlands,America/New_York
 US,FL,Winners Circle,Winners Circle,America/New_York
 US,FL,Winnipeg,Winnipeg,America/New_York
 US,FL,Winston Manor,Winston Manor,America/New_York
 US,FL,Witchmere,Witchmere,America/New_York
 US,FL,Wolfson,Wolfson,America/New_York
 US,FL,Wood Lynne,Wood Lynne,America/New_York
 US,FL,Woodacre Estates Of Northdale,Woodacre Estates Of Northdale,America/New_York
 US,FL,Woodards Manor,Woodards Manor,America/New_York
 US,FL,Woodbriar Village,Woodbriar Village,America/New_York
 US,FL,Woodcleft,Woodcleft,America/New_York
 US,FL,Woodfield Village,Woodfield Village,America/New_York
 US,FL,Woodham Farms,Woodham Farms,America/New_York
 US,FL,Woodhaven,Woodhaven,America/New_York
 US,FL,Woodmont,Woodmont,America/New_York
 US,FL,Woodward,Woodward,America/New_York
 US,FL,Wyndgate,Wyndgate,America/New_York
 US,FL,Wynstone,Wynstone,America/New_York
 US,FL,Yalaha,Yalaha,America/New_York
 US,FL,Yent,Yent,America/New_York
 US,FL,Yocam Village,Yocam Village,America/New_York
 US,FL,Yorkshire,Yorkshire,America/New_York
 US,FL,Younkin,Younkin,America/New_York
 US,FL,Zambito,Zambito,America/New_York
 US,FL,Zion Height,Zion Height,America/New_York
 US,FL,Sanctuary On Livingston,Sanctuary On Livingston,America/New_York
 US,FL,Sandpiper,Sandpiper,America/New_York
 US,FL,Sandranita,Sandranita,America/New_York
 US,FL,Sapphire Lake Ranchitos,Sapphire Lake Ranchitos,America/New_York
 US,FL,Scaglione,Scaglione,America/New_York
 US,FL,Scarboro,Scarboro,America/New_York
 US,FL,Scheurer,Scheurer,America/New_York
 US,FL,Schley,Schley,America/New_York
 US,FL,Schneider,Schneider,America/New_York
 US,FL,Scotts Little Farms,Scotts Little Farms,America/New_York
 US,FL,Seabron,Seabron,America/New_York
 US,FL,Sedita,Sedita,America/New_York
 US,FL,Sedona De Avila,Sedona De Avila,America/New_York
 US,FL,Seiver,Seiver,America/New_York
 US,FL,Seldomridge,Seldomridge,America/New_York
 US,FL,Selma,Selma,America/New_York
 US,FL,Selnerville,Selnerville,America/New_York
 US,FL,Seminole Heights Of North Tampa,Seminole Heights Of North Tampa,America/New_York
 US,FL,Seneca,Seneca,America/New_York
 US,FL,Sergi,Sergi,America/New_York
 US,FL,Serralles,Serralles,America/New_York
 US,FL,Seth Country Tracts,Seth Country Tracts,America/New_York
 US,FL,Settlers Pointe,Settlers Pointe,America/New_York
 US,FL,Shadberry Village,Shadberry Village,America/New_York
 US,FL,Shaded Stand,Shaded Stand,America/New_York
 US,FL,Shadowlawn,Shadowlawn,America/New_York
 US,FL,Shadowlawn Village,Shadowlawn Village,America/New_York
 US,FL,Shady Lake Shores,Shady Lake Shores,America/New_York
 US,FL,Shady Nook,Shady Nook,America/New_York
 US,FL,Shady Pines,Shady Pines,America/New_York
 US,FL,Shady Stables,Shady Stables,America/New_York
 US,FL,Shagbark,Shagbark,America/New_York
 US,FL,Shangri La,Shangri La,America/New_York
 US,FL,Shapiro,Shapiro,America/New_York
 US,FL,Sheldon Chase,Sheldon Chase,America/New_York
 US,FL,Shepherd,Shepherd,America/New_York
 US,FL,Sheridan,Sheridan,America/New_York
 US,FL,Sherwood,Sherwood,America/New_York
 US,FL,Shooks Folly,Shooks Folly,America/New_York
 US,FL,Sico,Sico,America/New_York
 US,FL,Sidney Highlands,Sidney Highlands,America/New_York
 US,FL,Siglo Viente,Siglo Viente,America/New_York
 US,FL,Sill Manor,Sill Manor,America/New_York
 US,FL,Silliman,Silliman,America/New_York
 US,FL,Silva City,Silva City,America/New_York
 US,FL,Silvan,Silvan,America/New_York
 US,FL,Silver Moon,Silver Moon,America/New_York
 US,FL,Sinewood,Sinewood,America/New_York
 US,FL,Singletary,Singletary,America/New_York
 US,AR,Barringer,Barringer,America/Chicago
 US,AR,Barson,Barson,America/Chicago
 US,AR,Barton,Barton,America/Chicago
 US,AR,Base Line,Base Line,America/Chicago
 US,AR,Bashe,Bashe,America/Chicago
 US,AR,Bass,Bass,America/Chicago
 US,AR,Batavia,Batavia,America/Chicago
 US,AR,Bates,Bates,America/Chicago
 US,AR,Batesville,Batesville,America/Chicago
 US,AR,Batson,Batson,America/Chicago
 US,AR,Battlefield,Battlefield,America/Chicago
 US,AR,Baucum,Baucum,America/Chicago
 US,AR,Baxter,Baxter,America/Chicago
 US,AR,Baxter County,Baxter County,America/Chicago
 US,AR,Bay,Bay,America/Chicago
 US,AR,Bay Village,Bay Village,America/Chicago
 US,AR,Beacon Addition,Beacon Addition,America/Chicago
 US,AR,Bear,Bear,America/Chicago
 US,AR,Bearden,Bearden,America/Chicago
 US,AR,Beasley,Beasley,America/Chicago
 US,AR,Beaton,Beaton,America/Chicago
 US,AR,Beaty,Beaty,America/Chicago
 US,AR,Beav-O-Rama,Beav-O-Rama,America/Chicago
 US,AR,Beauchamp,Beauchamp,America/Chicago
 US,AR,Beaver Shores,Beaver Shores,America/Chicago
 US,AR,Beck,Beck,America/Chicago
 US,AR,Becks,Becks,America/Chicago
 US,AR,Becton,Becton,America/Chicago
 US,AR,Beechwood,Beechwood,America/Chicago
 US,AR,Beirne,Beirne,America/Chicago
 US,AR,Belcher,Belcher,America/Chicago
 US,AR,Belfast,Belfast,America/Chicago
 US,AR,Bell City,Bell City,America/Chicago
 US,AR,Bellair,Bellair,America/Chicago
 US,AR,Bellaire,Bellaire,America/Chicago
 US,AR,Belle Meade,Belle Meade,America/Chicago
 US,AR,Belleville,Belleville,America/Chicago
 US,AR,Bellville,Bellville,America/Chicago
 US,AR,Belview,Belview,America/Chicago
 US,AR,Bemis,Bemis,America/Chicago
 US,AR,Ben,Ben,America/Chicago
 US,AR,Ben Hur,Ben Hur,America/Chicago
 US,AR,Bengel,Bengel,America/Chicago
 US,AR,Bend,Bend,America/Chicago
 US,AR,Benton County,Benton County,America/Chicago
 US,AR,Bentonville,Bentonville,America/Chicago
 US,AR,Benzal,Benzal,America/Chicago
 US,AR,Berea,Berea,America/Chicago
 US,AR,Berger,Berger,America/Chicago
 US,AR,Berlin,Berlin,America/Chicago
 US,AR,Bernice,Bernice,America/Chicago
 US,AR,Berryville,Berryville,America/Chicago
 US,AR,Bertig,Bertig,America/Chicago
 US,AR,Beryl,Beryl,America/Chicago
 US,AR,Bethany,Bethany,America/Chicago
 US,AR,Bethel,Bethel,America/Chicago
 US,FL,Sito,Sito,America/New_York
 US,FL,Skinners,Skinners,America/New_York
 US,FL,Small Farms,Small Farms,America/New_York
 US,FL,Smith,Smith,America/New_York
 US,FL,Solitude,Solitude,America/New_York
 US,FL,Somerset,Somerset,America/New_York
 US,FL,Sonia,Sonia,America/New_York
 US,FL,Souders,Souders,America/New_York
 US,FL,South Farmington,South Farmington,America/New_York
 US,FL,South Florida Terraces,South Florida Terraces,America/New_York
 US,FL,South Lake Shores,South Lake Shores,America/New_York
 US,FL,South Plant City Farms,South Plant City Farms,America/New_York
 US,FL,South Pointe,South Pointe,America/New_York
 US,FL,South Tampa Villa,South Tampa Villa,America/New_York
 US,FL,Southern Comfort Homes,Southern Comfort Homes,America/New_York
 US,FL,Southern Pines,Southern Pines,America/New_York
 US,FL,Southfork At Van Dyke Farms,Southfork At Van Dyke Farms,America/New_York
 US,FL,Southgreen,Southgreen,America/New_York
 US,FL,Southland,Southland,America/New_York
 US,FL,Southwind,Southwind,America/New_York
 US,FL,Sperry,Sperry,America/New_York
 US,FL,Spillers,Spillers,America/New_York
 US,FL,Spivey Miller,Spivey Miller,America/New_York
 US,FL,Springoak,Springoak,America/New_York
 US,FL,Springwood Village,Springwood Village,America/New_York
 US,FL,Stallwood,Stallwood,America/New_York
 US,FL,Stansell,Stansell,America/New_York
 US,FL,Starlite,Starlite,America/New_York
 US,FL,Stasia,Stasia,America/New_York
 US,FL,Steeplechase,Steeplechase,America/New_York
 US,FL,Stelling Village,Stelling Village,America/New_York
 US,FL,Stephen Foster Highlands,Stephen Foster Highlands,America/New_York
 US,FL,Sterling,Sterling,America/New_York
 US,FL,Sterlingwood,Sterlingwood,America/New_York
 US,FL,Stevens Manor,Stevens Manor,America/New_York
 US,FL,Stewart,Stewart,America/New_York
 US,FL,Stewart Manor,Stewart Manor,America/New_York
 US,FL,Stiggins,Stiggins,America/New_York
 US,FL,Stockwell,Stockwell,America/New_York
 US,FL,Stone Hedge,Stone Hedge,America/New_York
 US,FL,Stonegate,Stonegate,America/New_York
 US,FL,Stonehedge,Stonehedge,America/New_York
 US,FL,Stonehouse,Stonehouse,America/New_York
 US,FL,Stoneleigh,Stoneleigh,America/New_York
 US,FL,Stonewood,Stonewood,America/New_York
 US,FL,Straits,Straits,America/New_York
 US,FL,Stratford,Stratford,America/New_York
 US,FL,Strathmore,Strathmore,America/New_York
 US,FL,Strawberry Village,Strawberry Village,America/New_York
 US,FL,Strickland,Strickland,America/New_York
 US,FL,Studley,Studley,America/New_York
 US,FL,Suarez,Suarez,America/New_York
 US,FL,Suburb Royal,Suburb Royal,America/New_York
 US,FL,Sudsanguan,Sudsanguan,America/New_York
 US,FL,Sultana Glade,Sultana Glade,America/New_York
 US,FL,Sultenfuss,Sultenfuss,America/New_York
 US,FL,Summerfield Crossings,Summerfield Crossings,America/New_York
 US,FL,Summerfield Village,Summerfield Village,America/New_York
 US,FL,Summerfield Wimauma,Summerfield Wimauma,America/New_York
 US,FL,Sunniland,Sunniland,America/New_York
 US,FL,Sunningdale,Sunningdale,America/New_York
 US,FL,Sunny Pines,Sunny Pines,America/New_York
 US,FL,Sunny Shores,Sunny Shores,America/New_York
 US,FL,Sunny Slopes,Sunny Slopes,America/New_York
 US,FL,Sunrise Manor,Sunrise Manor,America/New_York
 US,FL,Sunrise Villas Of Tampa,Sunrise Villas Of Tampa,America/New_York
 US,FL,Sunset Manor,Sunset Manor,America/New_York
 US,FL,Sunshine Village,Sunshine Village,America/New_York
 US,FL,Sunway,Sunway,America/New_York
 US,FL,Surrey Chase,Surrey Chase,America/New_York
 US,FL,Susieanna,Susieanna,America/New_York
 US,FL,Suydam,Suydam,America/New_York
 US,FL,Suzie Trace,Suzie Trace,America/New_York
 US,FL,Svensson,Svensson,America/New_York
 US,FL,Swann Albany,Swann Albany,America/New_York
 US,FL,Swannsylvania,Swannsylvania,America/New_York
 US,FL,Sweat Farms,Sweat Farms,America/New_York
 US,FL,Sweetwater,Sweetwater,America/New_York
 US,FL,Sweetwater Farms,Sweetwater Farms,America/New_York
 US,FL,Sydney Crossings,Sydney Crossings,America/New_York
 US,FL,Sylvan Dale,Sylvan Dale,America/New_York
 US,FL,Sylvia,Sylvia,America/New_York
 US,FL,Sylvia Manor,Sylvia Manor,America/New_York
 US,FL,Symmes Manor,Symmes Manor,America/New_York
 US,FL,Symphony Isles,Symphony Isles,America/New_York
 US,FL,Taft,Taft,America/New_York
 US,FL,Tagliarini,Tagliarini,America/New_York
 US,FL,Tall Pines,Tall Pines,America/New_York
 US,FL,Tampa Overlook,Tampa Overlook,America/New_York
 US,FL,Tampa Palms,Tampa Palms,America/New_York
 US,FL,Tampania,Tampania,America/New_York
 US,FL,Tangelo,Tangelo,America/New_York
 US,FL,Tangerine Trails,Tangerine Trails,America/New_York
 US,FL,Tanglewood,Tanglewood,America/New_York
 US,FL,Tarawood,Tarawood,America/New_York
 US,FL,Temple Braska,Temple Braska,America/New_York
 US,FL,Temple Highlands,Temple Highlands,America/New_York
 US,FL,Temple Knoll,Temple Knoll,America/New_York
 US,FL,Temple Terrace Gables,Temple Terrace Gables,America/New_York
 US,FL,Temple Terrace Golfview,Temple Terrace Golfview,America/New_York
 US,FL,Temple Terrace Riverside,Temple Terrace Riverside,America/New_York
 US,FL,Temple Terraces,Temple Terraces,America/New_York
 US,FL,Terra Del Toro,Terra Del Toro,America/New_York
 US,FL,Terra Nova,Terra Nova,America/New_York
 US,FL,Terrace Gables,Terrace Gables,America/New_York
 US,FL,Terrace Highlands,Terrace Highlands,America/New_York
 US,FL,Terrace Overlook,Terrace Overlook,America/New_York
 US,FL,Terrace Village,Terrace Village,America/New_York
 US,FL,Thea Simmons,Thea Simmons,America/New_York
 US,FL,Theresa Arbor,Theresa Arbor,America/New_York
 US,FL,Thrashers,Thrashers,America/New_York
 US,FL,Tibbettsville,Tibbettsville,America/New_York
 US,FL,Tierra De Amigos,Tierra De Amigos,America/New_York
 US,FL,Tiffany Lake Manors,Tiffany Lake Manors,America/New_York
 US,FL,Tilsen Manor,Tilsen Manor,America/New_York
 US,FL,Timber Knoll,Timber Knoll,America/New_York
 US,FL,Timberland,Timberland,America/New_York
 US,FL,Timberlane,Timberlane,America/New_York
 US,FL,Torrens,Torrens,America/New_York
 US,FL,Toulon,Toulon,America/New_York
 US,FL,Towsley,Towsley,America/New_York
 US,FL,Tradewinds,Tradewinds,America/New_York
 US,FL,Traditions At Woodmont,Traditions At Woodmont,America/New_York
 US,FL,Trails At Durant,Trails At Durant,America/New_York
 US,FL,Treehouses At Mohr Loop,Treehouses At Mohr Loop,America/New_York
 US,FL,Treviso,Treviso,America/New_York
 US,FL,Trezevant,Trezevant,America/New_York
 US,FL,Triangle,Triangle,America/New_York
 US,FL,Trifoliata,Trifoliata,America/New_York
 US,FL,Triple Lake Shores,Triple Lake Shores,America/New_York
 US,FL,Tromble,Tromble,America/New_York
 US,FL,Tropical Pines,Tropical Pines,America/New_York
 US,FL,Trout Creek Commons,Trout Creek Commons,America/New_York
 US,FL,Turleys,Turleys,America/New_York
 US,FL,Turner,Turner,America/New_York
 US,FL,Turner Trace,Turner Trace,America/New_York
 US,FL,Twelve Oaks Village,Twelve Oaks Village,America/New_York
 US,FL,Tyndell-Maxwell,Tyndell-Maxwell,America/New_York
 US,FL,Tyner,Tyner,America/New_York
 US,FL,Uceta Pines,Uceta Pines,America/New_York
 US,FL,Uleta,Uleta,America/New_York
 US,FL,Unity Circle,Unity Circle,America/New_York
 US,FL,Urania,Urania,America/New_York
 US,FL,Urbanrest,Urbanrest,America/New_York
 US,FL,Val Villa,Val Villa,America/New_York
 US,FL,Valencia Manor,Valencia Manor,America/New_York
 US,FL,Valkenwal,Valkenwal,America/New_York
 US,FL,Lake Butler,Lake Butler,America/New_York
 US,FL,Lake Helen,Lake Helen,America/New_York
 US,FL,Lake Mary,Lake Mary,America/New_York
 US,AR,Lake Village,Lake Village,America/Chicago
 US,FL,Lake Wales,Lake Wales,America/New_York
 US,FL,Lake Worth,Lake Worth,America/New_York
 US,AR,Alicia,Alicia,America/Chicago
 US,AR,Allport,Allport,America/Chicago
 US,AR,Almyra,Almyra,America/Chicago
 US,AR,Alpena,Alpena,America/Chicago
 US,AR,Amagon,Amagon,America/Chicago
 US,AR,Anthonyville,Anthonyville,America/Chicago
 US,AR,Antoine,Antoine,America/Chicago
 US,AR,Aubrey,Aubrey,America/Chicago
 US,AR,Avoca,Avoca,America/Chicago
 US,AR,Banks,Banks,America/Chicago
 US,AR,Bassett,Bassett,America/Chicago
 US,AR,Bauxite,Bauxite,America/Chicago
 US,AR,Beaver,Beaver,America/Chicago
 US,AR,Beedeville,Beedeville,America/Chicago
 US,AR,Bella Vista,Bella Vista,America/Chicago
 US,FL,Belleair Shore,Belleair Shore,America/New_York
 US,AR,Bellefonte,Bellefonte,America/Chicago
 US,AR,Ben Lomond,Ben Lomond,America/Chicago
 US,AR,Bergman,Bergman,America/Chicago
 US,AR,Bigelow,Bigelow,America/Chicago
 US,AR,Biggers,Biggers,America/Chicago
 US,AR,Birdsong,Birdsong,America/Chicago
 US,AR,Blue Eye,Blue Eye,America/Chicago
 US,AR,Bluff City,Bluff City,America/Chicago
 US,AR,Bodcaw,Bodcaw,America/Chicago
 US,AR,Brookland,Brookland,America/Chicago
 US,AR,Burdette,Burdette,America/Chicago
 US,AR,Caldwell,Caldwell,America/Chicago
 US,AR,Cale,Cale,America/Chicago
 US,AR,Salesville,Salesville,America/Chicago
 US,AR,Thornton,Thornton,America/Chicago
 US,AR,Haynes,Haynes,America/Chicago
 US,AR,Hector,Hector,America/Chicago
 US,AR,Hermitage,Hermitage,America/Chicago
 US,AR,Higden,Higden,America/Chicago
 US,AR,Higginson,Higginson,America/Chicago
 US,AR,Highfill,Highfill,America/Chicago
 US,AR,Hindsville,Hindsville,America/Chicago
 US,AR,Houston,Houston,America/Chicago
 US,FL,Howey-In-The-Hills,Howey-In-The-Hills,America/New_York
 US,AR,Hunter,Hunter,America/Chicago
 US,AR,Imboden,Imboden,America/Chicago
 US,AR,Jacksonport,Jacksonport,America/Chicago
 US,AR,Jennette,Jennette,America/Chicago
 US,AR,Jericho,Jericho,America/Chicago
 US,AR,Jerome,Jerome,America/Chicago
 US,FL,Jupiter Inlet Colony,Jupiter Inlet Colony,America/New_York
 US,AR,Keo,Keo,America/Chicago
 US,AR,Knoxville,Knoxville,America/Chicago
 US,AR,Lafe,Lafe,America/Chicago
 US,AR,Lagrange,Lagrange,America/Chicago
 US,FL,Lake Clarke Shores,Lake Clarke Shores,America/New_York
 US,FL,Lake Hamilton,Lake Hamilton,America/New_York
 US,FL,Lake Placid,Lake Placid,America/New_York
 US,AR,Leola,Leola,America/Chicago
 US,AR,Letona,Letona,America/Chicago
 US,AR,Lexa,Lexa,America/Chicago
 US,AR,Lonsdale,Lonsdale,America/Chicago
 US,AR,Louann,Louann,America/Chicago
 US,AR,Lynn,Lynn,America/Chicago
 US,AR,Magness,Magness,America/Chicago
 US,AR,Marie,Marie,America/Chicago
 US,AR,Maynard,Maynard,America/Chicago
 US,AR,Mccaskill,Mccaskill,America/Chicago
 US,AR,Mcdougal,Mcdougal,America/Chicago
 US,AR,Mcnab,Mcnab,America/Chicago
 US,AR,Menifee,Menifee,America/Chicago
 US,AR,Midland,Midland,America/Chicago
 US,AR,Midway,Midway,America/Chicago
 US,AR,Minturn,Minturn,America/Chicago
 US,AR,Moorefield,Moorefield,America/Chicago
 US,AR,Moro,Moro,America/Chicago
 US,AR,Mount Pleasant,Mount Pleasant,America/Chicago
 US,AR,Mount Vernon,Mount Vernon,America/Chicago
 US,AR,Casa,Casa,America/Chicago
 US,AR,Cash,Cash,America/Chicago
 US,AR,Caulksville,Caulksville,America/Chicago
 US,AR,Chester,Chester,America/Chicago
 US,AR,Concord,Concord,America/Chicago
 US,AR,Corinth,Corinth,America/Chicago
 US,AR,Coy,Coy,America/Chicago
 US,AR,Crawfordsville,Crawfordsville,America/Chicago
 US,AR,Daisy,Daisy,America/Chicago
 US,AR,Damascus,Damascus,America/Chicago
 US,AR,Datto,Datto,America/Chicago
 US,AR,Delaplaine,Delaplaine,America/Chicago
 US,AR,Dell,Dell,America/Chicago
 US,AR,Denning,Denning,America/Chicago
 US,AR,Donaldson,Donaldson,America/Chicago
 US,AR,Dyess,Dyess,America/Chicago
 US,AR,East Camden,East Camden,America/Chicago
 US,AR,Edmondson,Edmondson,America/Chicago
 US,AR,Egypt,Egypt,America/Chicago
 US,AR,Emerson,Emerson,America/Chicago
 US,AR,Enola,Enola,America/Chicago
 US,AR,Etowah,Etowah,America/Chicago
 US,AR,Everton,Everton,America/Chicago
 US,AR,Fargo,Fargo,America/Chicago
 US,AR,Felsenthal,Felsenthal,America/Chicago
 US,AR,Fourche,Fourche,America/Chicago
 US,AR,Franklin,Franklin,America/Chicago
 US,AR,Fredonia (Biscoe),Fredonia (Biscoe),America/Chicago
 US,AR,Friendship,Friendship,America/Chicago
 US,AR,Fulton,Fulton,America/Chicago
 US,AR,Garfield,Garfield,America/Chicago
 US,AR,Garland,Garland,America/Chicago
 US,AR,Garner,Garner,America/Chicago
 US,AR,Gateway,Gateway,America/Chicago
 US,AR,Georgetown,Georgetown,America/Chicago
 US,AR,Gilbert,Gilbert,America/Chicago
 US,AR,Gillham,Gillham,America/Chicago
 US,AR,Goshen,Goshen,America/Chicago
 US,AR,Griffithville,Griffithville,America/Chicago
 US,AR,Guion,Guion,America/Chicago
 US,AR,Guy,Guy,America/Chicago
 US,AR,Harrell,Harrell,America/Chicago
 US,AR,Hatfield,Hatfield,America/Chicago
 US,AR,Strawberry,Strawberry,America/Chicago
 US,AR,Subiaco,Subiaco,America/Chicago
 US,AR,Success,Success,America/Chicago
 US,AR,Sunset,Sunset,America/Chicago
 US,AR,Tinsman,Tinsman,America/Chicago
 US,AR,Tollette,Tollette,America/Chicago
 US,AR,Tull,Tull,America/Chicago
 US,AR,Tupelo,Tupelo,America/Chicago
 US,AR,Twin Groves,Twin Groves,America/Chicago
 US,AR,Ulm,Ulm,America/Chicago
 US,AR,Vandervoort,Vandervoort,America/Chicago
 US,AR,Victoria,Victoria,America/Chicago
 US,AR,Viola,Viola,America/Chicago
 US,AR,Wabbaseka,Wabbaseka,America/Chicago
 US,AR,Waldenburg,Waldenburg,America/Chicago
 US,AR,Weldon,Weldon,America/Chicago
 US,AR,Wickes,Wickes,America/Chicago
 US,AR,Widener,Widener,America/Chicago
 US,AR,Williford,Williford,America/Chicago
 US,AR,Willisville,Willisville,America/Chicago
 US,AR,Winchester,Winchester,America/Chicago
 US,AR,Wooster,Wooster,America/Chicago
 US,AR,Zinc,Zinc,America/Chicago
 US,AR,Nimmons,Nimmons,America/Chicago
 US,AR,Norman,Norman,America/Chicago
 US,AR,Oakhaven,Oakhaven,America/Chicago
 US,AR,Oden,Oden,America/Chicago
 US,AR,Oil Trough,Oil Trough,America/Chicago
 US,AR,O'Kean,O'Kean,America/Chicago
 US,AR,Okolona,Okolona,America/Chicago
 US,AR,Omaha,Omaha,America/Chicago
 US,AR,Ozan,Ozan,America/Chicago
 US,AR,Patmos,Patmos,America/Chicago
 US,AR,Perla,Perla,America/Chicago
 US,AR,Perry,Perry,America/Chicago
 US,AR,Perrytown,Perrytown,America/Chicago
 US,AR,Pindall,Pindall,America/Chicago
 US,AR,Pineville,Pineville,America/Chicago
 US,AR,Portia,Portia,America/Chicago
 US,AR,Powhatan,Powhatan,America/Chicago
 US,AR,Poyen,Poyen,America/Chicago
 US,AR,Prattsville,Prattsville,America/Chicago
 US,AR,Pyatt,Pyatt,America/Chicago
 US,AR,Ravenden,Ravenden,America/Chicago
 US,AR,Reed,Reed,America/Chicago
 US,AR,Roe,Roe,America/Chicago
 US,AR,Rondo,Rondo,America/Chicago
 US,AR,Rose Bud,Rose Bud,America/Chicago
 US,AR,Rosston,Rosston,America/Chicago
 US,AR,Rudy,Rudy,America/Chicago
 US,AR,Russell,Russell,America/Chicago
 US,AR,Saint Charles,Saint Charles,America/Chicago
 US,AR,Saint Joe,Saint Joe,America/Chicago
 US,AR,Saint Paul,Saint Paul,America/Chicago
 US,AR,Sedgwick,Sedgwick,America/Chicago
 US,AR,Sherrill,Sherrill,America/Chicago
 US,AR,Shirley,Shirley,America/Chicago
 US,AR,Sidney,Sidney,America/Chicago
 US,AR,Smithville,Smithville,America/Chicago
 US,AR,Springtown,Springtown,America/Chicago
 US,FL,Belvedere Homes,Belvedere Homes,America/New_York
 US,FL,Broadview,Broadview,America/New_York
 US,FL,Chula Vista Isles,Chula Vista Isles,America/New_York
 US,FL,Fremd Village,Fremd Village,America/New_York
 US,FL,Hillsboro Pines,Hillsboro Pines,America/New_York
 US,FL,Hillsboro Ranches,Hillsboro Ranches,America/New_York
 US,FL,Leisureville,Leisureville,America/New_York
 US,FL,Loch Lomond,Loch Lomond,America/New_York
 US,FL,Matlacha Isles,Matlacha Isles,America/New_York
 US,FL,Matlacha Shores,Matlacha Shores,America/New_York
 US,FL,Nassau Village,Nassau Village,America/New_York
 US,FL,Royal Palm Ranches,Royal Palm Ranches,America/New_York
 US,FL,Utopia,Utopia,America/New_York
 US,FL,Coconut Creek Trust Land,Coconut Creek Trust Land,America/New_York
 US,FL,Seminole Trust Land,Seminole Trust Land,America/New_York
 US,FL,Stewart Mobile Village,Stewart Mobile Village,America/New_York
 US,FL,Palm Terrace Mobile Manor,Palm Terrace Mobile Manor,America/New_York
 US,FL,Southgate Mobile Homes,Southgate Mobile Homes,America/New_York
 US,FL,Cape Canaveral Trailer Village,Cape Canaveral Trailer Village,America/New_York
 US,FL,Windsong Mobile Village,Windsong Mobile Village,America/New_York
 US,FL,Seabreeze Mobile Manor,Seabreeze Mobile Manor,America/New_York
 US,FL,Emerald Lakes Mobile Village,Emerald Lakes Mobile Village,America/New_York
 US,FL,Eastern Shores Mobile Village,Eastern Shores Mobile Village,America/New_York
 US,FL,Tahiti Mobile Village,Tahiti Mobile Village,America/New_York
 US,FL,Lauder Lakes Mobile Homes,Lauder Lakes Mobile Homes,America/New_York
 US,FL,Westgate Mobile Manor,Westgate Mobile Manor,America/New_York
 US,FL,Tropical Trailer Village,Tropical Trailer Village,America/New_York
 US,FL,Travel Trailer Town,Travel Trailer Town,America/New_York
 US,FL,Sunset Harbor Trailer Village,Sunset Harbor Trailer Village,America/New_York
 US,FL,Palm Shores Mobile Village,Palm Shores Mobile Village,America/New_York
 US,FL,Paradise Mobile Village,Paradise Mobile Village,America/New_York
 US,FL,Coopers Mobile Village,Coopers Mobile Village,America/New_York
 US,FL,Hometown Lake Worth Village,Hometown Lake Worth Village,America/New_York
 US,FL,Georgetowne Mobile Manor,Georgetowne Mobile Manor,America/New_York
 US,FL,Palm Ridge Mobile Village,Palm Ridge Mobile Village,America/New_York
 US,FL,Gulf View Trailer Haven,Gulf View Trailer Haven,America/New_York
 US,FL,Hibiscus Mobile Haven,Hibiscus Mobile Haven,America/New_York
 US,FL,Pinewood Mobile Village,Pinewood Mobile Village,America/New_York
 US,FL,Southwind Mobile Village,Southwind Mobile Village,America/New_York
 US,FL,South Mobile Village,South Mobile Village,America/New_York
 US,FL,South Lake Conway Villa,South Lake Conway Villa,America/New_York
 US,FL,Wheel Estates Mobile Manor,Wheel Estates Mobile Manor,America/New_York
 US,FL,Bali Hai Mobile Village,Bali Hai Mobile Village,America/New_York
 US,FL,Pine Isle Mobile Villa,Pine Isle Mobile Villa,America/New_York
 US,FL,Kurras Mobile Village,Kurras Mobile Village,America/New_York
 US,FL,Shangri La Mobile Villa,Shangri La Mobile Villa,America/New_York
 US,FL,Pickwick Village,Pickwick Village,America/New_York
 US,FL,Live Oak Mobile Village,Live Oak Mobile Village,America/New_York
 US,FL,Whispering Palms Mobile Village,Whispering Palms Mobile Village,America/New_York
 US,FL,Sunshine Mobile Manor,Sunshine Mobile Manor,America/New_York
 US,FL,Tween Waters Mobile Manor,Tween Waters Mobile Manor,America/New_York
 US,FL,Garden Mobile Village,Garden Mobile Village,America/New_York
 US,FL,Grove Shores Mobile Colony,Grove Shores Mobile Colony,America/New_York
 US,FL,Armistead Manor,Armistead Manor,America/New_York
 US,FL,Ashbrook,Ashbrook,America/New_York
 US,FL,Askew,Askew,America/New_York
 US,FL,Aston Villas,Aston Villas,America/New_York
 US,FL,Auburn Highlands,Auburn Highlands,America/New_York
 US,FL,Aurora,Aurora,America/New_York
 US,FL,Avendale,Avendale,America/New_York
 US,FL,Avondale,Avondale,America/New_York
 US,FL,Avondale Groves,Avondale Groves,America/New_York
 US,FL,Badgers Lair,Badgers Lair,America/New_York
 US,FL,Bakers Addition,Bakers Addition,America/New_York
 US,FL,Ball,Ball,America/New_York
 US,FL,Balo,Balo,America/New_York
 US,FL,Banks,Banks,America/New_York
 US,FL,Barbers Lakeview,Barbers Lakeview,America/New_York
 US,FL,Barker,Barker,America/New_York
 US,FL,Barlee,Barlee,America/New_York
 US,FL,Barmac,Barmac,America/New_York
 US,FL,Barnelia,Barnelia,America/New_York
 US,FL,Barnhart,Barnhart,America/New_York
 US,FL,Barr City,Barr City,America/New_York
 US,FL,Barrett Manor,Barrett Manor,America/New_York
 US,FL,Barrington,Barrington,America/New_York
 US,FL,Bast,Bast,America/New_York
 US,FL,Bates,Bates,America/New_York
 US,FL,Bay Breeze,Bay Breeze,America/New_York
 US,FL,Bay Port Colony,Bay Port Colony,America/New_York
 US,FL,Bay Villa,Bay Villa,America/New_York
 US,FL,Bay Vista,Bay Vista,America/New_York
 US,FL,Baya Vista,Baya Vista,America/New_York
 US,FL,Bayamo,Bayamo,America/New_York
 US,FL,Bayfair,Bayfair,America/New_York
 US,FL,Bayhaven,Bayhaven,America/New_York
 US,FL,Bayonnes At Cheval,Bayonnes At Cheval,America/New_York
 US,FL,Baypointe,Baypointe,America/New_York
 US,FL,Bayport Village,Bayport Village,America/New_York
 US,FL,Bayshore And Interbay Village,Bayshore And Interbay Village,America/New_York
 US,FL,Bayshore Beautiful,Bayshore Beautiful,America/New_York
 US,FL,Bayshore Haven,Bayshore Haven,America/New_York
 US,FL,Bayshore Palms,Bayshore Palms,America/New_York
 US,FL,Bayside,Bayside,America/New_York
 US,FL,Bayside Village,Bayside Village,America/New_York
 US,FL,Bayview Homes,Bayview Homes,America/New_York
 US,FL,Baywood,Baywood,America/New_York
 US,FL,Beans,Beans,America/New_York
 US,FL,Bearss Glen,Bearss Glen,America/New_York
 US,FL,Beau Rivage,Beau Rivage,America/New_York
 US,FL,Bel Grand,Bel Grand,America/New_York
 US,FL,Bel Hazzan,Bel Hazzan,America/New_York
 US,FL,Bel Mar Shores,Bel Mar Shores,America/New_York
 US,FL,Bel Wil,Bel Wil,America/New_York
 US,FL,Bella Farms,Bella Farms,America/New_York
 US,FL,Bella Mar,Bella Mar,America/New_York
 US,FL,Bella Vita,Bella Vita,America/New_York
 US,FL,Belle Glen,Belle Glen,America/New_York
 US,FL,Belle Glen Addition,Belle Glen Addition,America/New_York
 US,FL,Belle Timbre,Belle Timbre,America/New_York
 US,FL,Belle Vista,Belle Vista,America/New_York
 US,FL,Bellefield Village,Bellefield Village,America/New_York
 US,FL,Belmont,Belmont,America/New_York
 US,FL,Belvoir,Belvoir,America/New_York
 US,FL,Ben Hur,Ben Hur,America/New_York
 US,FL,Benjamins Farms,Benjamins Farms,America/New_York
 US,FL,Bens,Bens,America/New_York
 US,FL,Benson,Benson,America/New_York
 US,FL,Bettis,Bettis,America/New_York
 US,FL,Beulah,Beulah,America/New_York
 US,FL,Biarritz Village,Biarritz Village,America/New_York
 US,FL,Big Pines,Big Pines,America/New_York
 US,FL,Bindshedler,Bindshedler,America/New_York
 US,FL,Bingham,Bingham,America/New_York
 US,AR,Bertha,Bertha,America/Chicago
 US,AR,Bethesda,Bethesda,America/Chicago
 US,AR,Bethlehem,Bethlehem,America/Chicago
 US,AR,Beulah,Beulah,America/Chicago
 US,AR,Beverly,Beverly,America/Chicago
 US,AR,Bexar,Bexar,America/Chicago
 US,AR,Biddle,Biddle,America/Chicago
 US,AR,Bidville,Bidville,America/Chicago
 US,AR,Bingen,Bingen,America/Chicago
 US,AR,Bingham,Bingham,America/Chicago
 US,AR,Birdell,Birdell,America/Chicago
 US,AR,Birdeye,Birdeye,America/Chicago
 US,AR,Birdtown,Birdtown,America/Chicago
 US,AR,Birmac,Birmac,America/Chicago
 US,AR,Birta,Birta,America/Chicago
 US,AR,Biscoe,Biscoe,America/Chicago
 US,AR,Bismarck,Bismarck,America/Chicago
 US,AR,Black Cat,Black Cat,America/Chicago
 US,AR,Black Diamond,Black Diamond,America/Chicago
 US,AR,Black Jack,Black Jack,America/Chicago
 US,AR,Blackburn,Blackburn,America/Chicago
 US,AR,Blackfish,Blackfish,America/Chicago
 US,AR,Blackfoot,Blackfoot,America/Chicago
 US,AR,Blackton,Blackton,America/Chicago
 US,AR,Blackville,Blackville,America/Chicago
 US,AR,Blackwell,Blackwell,America/Chicago
 US,AR,Blakely,Blakely,America/Chicago
 US,AR,Blakemore,Blakemore,America/Chicago
 US,AR,Blanchton,Blanchton,America/Chicago
 US,AR,Blanco,Blanco,America/Chicago
 US,AR,Bland,Bland,America/Chicago
 US,AR,Blansett,Blansett,America/Chicago
 US,AR,Blanton,Blanton,America/Chicago
 US,AR,Bledsoe,Bledsoe,America/Chicago
 US,AR,Blick,Blick,America/Chicago
 US,AR,Blevins,Blevins,America/Chicago
 US,AR,Blocher,Blocher,America/Chicago
 US,AR,Bloomer,Bloomer,America/Chicago
 US,AR,Bloomfield,Bloomfield,America/Chicago
 US,AR,Blossom,Blossom,America/Chicago
 US,AR,Blue Ball,Blue Ball,America/Chicago
 US,AR,Bluffton,Bluffton,America/Chicago
 US,AR,Boeuf,Boeuf,America/Chicago
 US,AR,Boggy,Boggy,America/Chicago
 US,AR,Bohannon,Bohannon,America/Chicago
 US,AR,Bolding,Bolding,America/Chicago
 US,AR,Boles,Boles,America/Chicago
 US,AR,Bonair,Bonair,America/Chicago
 US,AR,Bonanza,Bonanza,America/Chicago
 US,AR,Bondsville,Bondsville,America/Chicago
 US,AR,Bone Town,Bone Town,America/Chicago
 US,AR,Bonnerdale,Bonnerdale,America/Chicago
 US,AR,Bono,Bono,America/Chicago
 US,AR,Booker,Booker,America/Chicago
 US,AR,Boone,Boone,America/Chicago
 US,AR,Boone County,Boone County,America/Chicago
 US,AR,Booster,Booster,America/Chicago
 US,AR,Boothe,Boothe,America/Chicago
 US,AR,Boston,Boston,America/Chicago
 US,AR,Boswell,Boswell,America/Chicago
 US,AR,Boughton,Boughton,America/Chicago
 US,AR,Botkinburg,Botkinburg,America/Chicago
 US,AR,Bovine,Bovine,America/Chicago
 US,AR,Bowen,Bowen,America/Chicago
 US,AR,Bowman,Bowman,America/Chicago
 US,AR,Boxley,Boxley,America/Chicago
 US,AR,Boyd,Boyd,America/Chicago
 US,AR,Boydell,Boydell,America/Chicago
 US,AR,Boydsville,Boydsville,America/Chicago
 US,AR,Boynton,Boynton,America/Chicago
 US,AR,Bradford,Bradford,America/Chicago
 US,AR,Bradley,Bradley,America/Chicago
 US,AR,Bradley County,Bradley County,America/Chicago
 US,AR,Bragg City,Bragg City,America/Chicago
 US,AR,Brakebill,Brakebill,America/Chicago
 US,AR,Branch,Branch,America/Chicago
 US,AR,Branchville,Branchville,America/Chicago
 US,AR,Brandenburg,Brandenburg,America/Chicago
 US,AR,Brandon,Brandon,America/Chicago
 US,AR,Brannon,Brannon,America/Chicago
 US,AR,Brasfield,Brasfield,America/Chicago
 US,AR,Brashears,Brashears,America/Chicago
 US,AR,Brawley,Brawley,America/Chicago
 US,AR,Brentwood,Brentwood,America/Chicago
 US,AR,Brewer,Brewer,America/Chicago
 US,AR,Briar,Briar,America/Chicago
 US,AR,Briarcliff,Briarcliff,America/Chicago
 US,AR,Briark,Briark,America/Chicago
 US,AR,Brice,Brice,America/Chicago
 US,AR,Brickeys,Brickeys,America/Chicago
 US,AR,Briggsville,Briggsville,America/Chicago
 US,AR,Bright,Bright,America/Chicago
 US,AR,Brighton,Brighton,America/Chicago
 US,AR,Brightstar,Brightstar,America/Chicago
 US,AR,Brightwater,Brightwater,America/Chicago
 US,AR,Brittain,Brittain,America/Chicago
 US,AR,Broad,Broad,America/Chicago
 US,AR,Brister,Brister,America/Chicago
 US,AR,Brockett,Brockett,America/Chicago
 US,AR,Brockwell,Brockwell,America/Chicago
 US,AR,Brookings,Brookings,America/Chicago
 US,AR,Brooks,Brooks,America/Chicago
 US,AR,Broomfield,Broomfield,America/Chicago
 US,AR,Browns,Browns,America/Chicago
 US,AR,Brownstown,Brownstown,America/Chicago
 US,AR,Brownsville,Brownsville,America/Chicago
 US,AR,Bruins,Bruins,America/Chicago
 US,AR,Brummitt,Brummitt,America/Chicago
 US,AR,Bruno,Bruno,America/Chicago
 US,AR,Bryan,Bryan,America/Chicago
 US,AR,Bryanville,Bryanville,America/Chicago
 US,AR,Buck Snort,Buck Snort,America/Chicago
 US,AR,Buckeye,Buckeye,America/Chicago
 US,AR,Buckhorn,Buckhorn,America/Chicago
 US,AR,Buckner,Buckner,America/Chicago
 US,AR,Bucksnort,Bucksnort,America/Chicago
 US,AR,Buell,Buell,America/Chicago
 US,AR,Buena Vista,Buena Vista,America/Chicago
 US,AR,Buffalo City,Buffalo City,America/Chicago
 US,AR,Buford,Buford,America/Chicago
 US,AR,Buie,Buie,America/Chicago
 US,AR,Bunney,Bunney,America/Chicago
 US,AR,Bunn,Bunn,America/Chicago
 US,AR,Burg,Burg,America/Chicago
 US,AR,Burks,Burks,America/Chicago
 US,AR,Burlington,Burlington,America/Chicago
 US,AR,Burna,Burna,America/Chicago
 US,AR,Burnt Cane,Burnt Cane,America/Chicago
 US,AR,Burnville,Burnville,America/Chicago
 US,AR,Buroak,Buroak,America/Chicago
 US,AR,Burtsell,Burtsell,America/Chicago
 US,AR,Burton,Burton,America/Chicago
 US,AR,Busch,Busch,America/Chicago
 US,AR,Bussey,Bussey,America/Chicago
 US,AR,Butler,Butler,America/Chicago
 US,AR,Butlerville,Butlerville,America/Chicago
 US,AR,Buttermilk,Buttermilk,America/Chicago
 US,AR,Butterfield,Butterfield,America/Chicago
 US,AR,Byron,Byron,America/Chicago
 US,AR,Cabanal,Cabanal,America/Chicago
 US,AR,Cabot,Cabot,America/Chicago
 US,AR,Cades,Cades,America/Chicago
 US,AR,Caglesville,Caglesville,America/Chicago
 US,AR,Cain,Cain,America/Chicago
 US,AR,Cairo,Cairo,America/Chicago
 US,AR,Calamine,Calamine,America/Chicago
 US,AR,Caledonia,Caledonia,America/Chicago
 US,AR,Calhoun,Calhoun,America/Chicago
 US,AR,Calhoun County,Calhoun County,America/Chicago
 US,AR,Calion,Calion,America/Chicago
 US,AR,Calmer,Calmer,America/Chicago
 US,AR,Calvin,Calvin,America/Chicago
 US,AR,Calumet,Calumet,America/Chicago
 US,AR,Camark,Camark,America/Chicago
 US,AR,Cammack Village,Cammack Village,America/Chicago
 US,AR,Camp,Camp,America/Chicago
 US,AR,Campbell,Campbell,America/Chicago
 US,AR,Canale,Canale,America/Chicago
 US,AR,Caney,Caney,America/Chicago
 US,AR,Canfield,Canfield,America/Chicago
 US,AR,Cannongate Addition,Cannongate Addition,America/Chicago
 US,AR,Capps,Capps,America/Chicago
 US,AR,Capps City,Capps City,America/Chicago
 US,AR,Caraway,Caraway,America/Chicago
 US,AR,Carbon City,Carbon City,America/Chicago
 US,AR,Carden Bottoms,Carden Bottoms,America/Chicago
 US,AR,Cardiff,Cardiff,America/Chicago
 US,AR,Cargile,Cargile,America/Chicago
 US,AR,Carlisle,Carlisle,America/Chicago
 US,AR,Carmel,Carmel,America/Chicago
 US,AR,Carmi,Carmi,America/Chicago
 US,AR,Carnis,Carnis,America/Chicago
 US,AR,Carolan,Carolan,America/Chicago
 US,AR,Carpenter,Carpenter,America/Chicago
 US,AR,Carroll County,Carroll County,America/Chicago
 US,AR,Carryville,Carryville,America/Chicago
 US,AR,Cartney,Cartney,America/Chicago
 US,AR,Carthage,Carthage,America/Chicago
 US,AR,Carver,Carver,America/Chicago
 US,AR,Cary,Cary,America/Chicago
 US,AR,Case,Case,America/Chicago
 US,AR,Casey,Casey,America/Chicago
 US,AR,Casscoe,Casscoe,America/Chicago
 US,AR,Cassidy,Cassidy,America/Chicago
 US,AR,Cass,Cass,America/Chicago
 US,AR,Catalpa,Catalpa,America/Chicago
 US,AR,Catcher,Catcher,America/Chicago
 US,AR,Cato,Cato,America/Chicago
 US,AR,Catesville,Catesville,America/Chicago
 US,AR,Catron,Catron,America/Chicago
 US,AR,Cauthron,Cauthron,America/Chicago
 US,AR,Cavanaugh,Cavanaugh,America/Chicago
 US,AR,Cavell,Cavell,America/Chicago
 US,AR,Cecil,Cecil,America/Chicago
 US,AR,Cedarville,Cedarville,America/Chicago
 US,AR,Center,Center,America/Chicago
 US,AR,Centerton,Centerton,America/Chicago
 US,AR,Centerville,Centerville,America/Chicago
 US,AR,Central,Central,America/Chicago
 US,AR,Central City,Central City,America/Chicago
 US,AR,Cerrogordo,Cerrogordo,America/Chicago
 US,AR,Champagnolle,Champagnolle,America/Chicago
 US,AR,Chambersville,Chambersville,America/Chicago
 US,AR,Chancel,Chancel,America/Chicago
 US,AR,Chandler,Chandler,America/Chicago
 US,AR,Chanticleer,Chanticleer,America/Chicago
 US,AR,Chapman,Chapman,America/Chicago
 US,AR,Charleston,Charleston,America/Chicago
 US,AR,Charlotte,Charlotte,America/Chicago
 US,AR,Chatfield,Chatfield,America/Chicago
 US,AR,Cheatham,Cheatham,America/Chicago
 US,AR,Chelford,Chelford,America/Chicago
 US,AR,Cherokee City,Cherokee City,America/Chicago
 US,AR,Cherokee Village,Cherokee Village,America/Chicago
 US,AR,Chickalah,Chickalah,America/Chicago
 US,AR,Chickasawba,Chickasawba,America/Chicago
 US,AR,Chicot,Chicot,America/Chicago
 US,AR,Chicot County,Chicot County,America/Chicago
 US,AR,Chidester,Chidester,America/Chicago
 US,AR,Childers,Childers,America/Chicago
 US,AR,Childress,Childress,America/Chicago
 US,AR,Chilson,Chilson,America/Chicago
 US,AR,Chimes,Chimes,America/Chicago
 US,AR,Chismville,Chismville,America/Chicago
 US,AR,Choctaw,Choctaw,America/Chicago
 US,AR,Choctaw Pines,Choctaw Pines,America/Chicago
 US,AR,Chula,Chula,America/Chicago
 US,AR,Cincinnati,Cincinnati,America/Chicago
 US,AR,Cicalla,Cicalla,America/Chicago
 US,AR,Circle B Addition,Circle B Addition,America/Chicago
 US,AR,Cisco,Cisco,America/Chicago
 US,AR,Clantonville,Clantonville,America/Chicago
 US,AR,Clarendon,Clarendon,America/Chicago
 US,AR,Clark County,Clark County,America/Chicago
 US,AR,Clarkedale,Clarkedale,America/Chicago
 US,AR,Clarkridge,Clarkridge,America/Chicago
 US,AR,Claude,Claude,America/Chicago
 US,AR,Claunch,Claunch,America/Chicago
 US,AR,Clay,Clay,America/Chicago
 US,AR,Clay County,Clay County,America/Chicago
 US,AR,Clearwater,Clearwater,America/Chicago
 US,AR,Cleburne County,Cleburne County,America/Chicago
 US,AR,Cleveland,Cleveland,America/Chicago
 US,AR,Cleveland County,Cleveland County,America/Chicago
 US,AR,Clifty,Clifty,America/Chicago
 US,AR,Clinton,Clinton,America/Chicago
 US,AR,Clipper,Clipper,America/Chicago
 US,AR,Cloar,Cloar,America/Chicago
 US,AR,Cloverdale,Cloverdale,America/Chicago
 US,AR,Clyde,Clyde,America/Chicago
 US,AR,Coaldale,Coaldale,America/Chicago
 US,AR,Cobbs,Cobbs,America/Chicago
 US,AR,Cody,Cody,America/Chicago
 US,AR,Coffeeville,Coffeeville,America/Chicago
 US,AR,Coffman,Coffman,America/Chicago
 US,AR,Coin,Coin,America/Chicago
 US,AR,Coldwater,Coldwater,America/Chicago
 US,AR,Cole,Cole,America/Chicago
 US,AR,Coleman,Coleman,America/Chicago
 US,AR,Coler,Coler,America/Chicago
 US,AR,Colfax,Colfax,America/Chicago
 US,AR,Collietown,Collietown,America/Chicago
 US,AR,Colona,Colona,America/Chicago
 US,AR,Colt,Colt,America/Chicago
 US,AR,Cominto,Cominto,America/Chicago
 US,AR,Columbia County,Columbia County,America/Chicago
 US,AR,Columbus,Columbus,America/Chicago
 US,AR,Comal,Comal,America/Chicago
 US,AR,Combs,Combs,America/Chicago
 US,AR,Compton,Compton,America/Chicago
 US,AR,Comet,Comet,America/Chicago
 US,AR,Conant,Conant,America/Chicago
 US,AR,Congo,Congo,America/Chicago
 US,AR,Conner,Conner,America/Chicago
 US,AR,Conway,Conway,America/Chicago
 US,AR,Conway County,Conway County,America/Chicago
 US,AR,Cooleyville,Cooleyville,America/Chicago
 US,AR,Cooney,Cooney,America/Chicago
 US,AR,Cooper Addition,Cooper Addition,America/Chicago
 US,AR,Copeland,Copeland,America/Chicago
 US,AR,Cord,Cord,America/Chicago
 US,AR,Corley,Corley,America/Chicago
 US,AR,Cornerstone,Cornerstone,America/Chicago
 US,AR,Cornerville,Cornerville,America/Chicago
 US,AR,Cornie,Cornie,America/Chicago
 US,AR,Cosgrove,Cosgrove,America/Chicago
 US,AR,Cotter,Cotter,America/Chicago
 US,AR,Cotton Belt,Cotton Belt,America/Chicago
 US,AR,Cotton Town,Cotton Town,America/Chicago
 US,AR,Cottondale,Cottondale,America/Chicago
 US,AR,Council,Council,America/Chicago
 US,AR,County Line,County Line,America/Chicago
 US,AR,Countiss,Countiss,America/Chicago
 US,AR,Cowan,Cowan,America/Chicago
 US,AR,Cowell,Cowell,America/Chicago
 US,AR,Cowlingsville,Cowlingsville,America/Chicago
 US,AR,Cozahome,Cozahome,America/Chicago
 US,AR,Crabtree,Crabtree,America/Chicago
 US,AR,Craighead County,Craighead County,America/Chicago
 US,AR,Crain City,Crain City,America/Chicago
 US,AR,Cram,Cram,America/Chicago
 US,AR,Craney,Craney,America/Chicago
 US,AR,Cravens,Cravens,America/Chicago
 US,AR,Crawford,Crawford,America/Chicago
 US,AR,Crawford County,Crawford County,America/Chicago
 US,AR,Creech,Creech,America/Chicago
 US,AR,Crescent,Crescent,America/Chicago
 US,AR,Crest,Crest,America/Chicago
 US,AR,Creswell,Creswell,America/Chicago
 US,AR,Creigh,Creigh,America/Chicago
 US,AR,Cricket,Cricket,America/Chicago
 US,AR,Crigler,Crigler,America/Chicago
 US,AR,Crittenden,Crittenden,America/Chicago
 US,AR,Crittenden County,Crittenden County,America/Chicago
 US,AR,Crocker,Crocker,America/Chicago
 US,AR,Crockett,Crockett,America/Chicago
 US,AR,Crosby,Crosby,America/Chicago
 US,AR,Cross County,Cross County,America/Chicago
 US,AR,Cross Lanes,Cross Lanes,America/Chicago
 US,AR,Cross Roads,Cross Roads,America/Chicago
 US,AR,Crosses,Crosses,America/Chicago
 US,AR,Crossroad,Crossroad,America/Chicago
 US,AR,Crossroads,Crossroads,America/Chicago
 US,AR,Crowley,Crowley,America/Chicago
 US,AR,Crows,Crows,America/Chicago
 US,AR,Crumpler Subdivision,Crumpler Subdivision,America/Chicago
 US,AR,Crumrod,Crumrod,America/Chicago
 US,AR,Cullendale,Cullendale,America/Chicago
 US,AR,Culler,Culler,America/Chicago
 US,AR,Culp,Culp,America/Chicago
 US,AR,Culpepper,Culpepper,America/Chicago
 US,AR,Cumi,Cumi,America/Chicago
 US,AR,Cummins,Cummins,America/Chicago
 US,AR,Curtis,Curtis,America/Chicago
 US,AR,Cushman,Cushman,America/Chicago
 US,AR,Cypert,Cypert,America/Chicago
 US,AR,Dabney,Dabney,America/Chicago
 US,AR,Daggett,Daggett,America/Chicago
 US,AR,Dagmar,Dagmar,America/Chicago
 US,AR,Dalark,Dalark,America/Chicago
 US,AR,Daleville,Daleville,America/Chicago
 US,AR,Dallas County,Dallas County,America/Chicago
 US,AR,Dalton,Dalton,America/Chicago
 US,AR,Dallas,Dallas,America/Chicago
 US,AR,Dansby,Dansby,America/Chicago
 US,AR,Danville,Danville,America/Chicago
 US,AR,Dardanelle,Dardanelle,America/Chicago
 US,AR,Dave,Dave,America/Chicago
 US,AR,Davidson,Davidson,America/Chicago
 US,AR,Day,Day,America/Chicago
 US,AR,Dayton,Dayton,America/Chicago
 US,AR,De Ann,De Ann,America/Chicago
 US,AR,De Boer,De Boer,America/Chicago
 US,AR,De Gray,De Gray,America/Chicago
 US,AR,De Queen,De Queen,America/Chicago
 US,AR,De Roche,De Roche,America/Chicago
 US,AR,De Witt,De Witt,America/Chicago
 US,AR,Deview,Deview,America/Chicago
 US,AR,Dean,Dean,America/Chicago
 US,AR,Deane,Deane,America/Chicago
 US,AR,Deanyville,Deanyville,America/Chicago
 US,AR,Dearman,Dearman,America/Chicago
 US,AR,Deberrie,Deberrie,America/Chicago
 US,AR,Decatur,Decatur,America/Chicago
 US,AR,Deckerville,Deckerville,America/Chicago
 US,AR,Deep Elm,Deep Elm,America/Chicago
 US,AR,Deer,Deer,America/Chicago
 US,AR,Deer Creek Subdivision,Deer Creek Subdivision,America/Chicago
 US,AR,Deerfield,Deerfield,America/Chicago
 US,AR,Degelow,Degelow,America/Chicago
 US,AR,Deglow,Deglow,America/Chicago
 US,AR,Delaware,Delaware,America/Chicago
 US,AR,Delfore,Delfore,America/Chicago
 US,AR,Delight,Delight,America/Chicago
 US,AR,Delmar,Delmar,America/Chicago
 US,AR,Delpro,Delpro,America/Chicago
 US,AR,Delta,Delta,America/Chicago
 US,AR,Deluce,Deluce,America/Chicago
 US,AR,Democrat,Democrat,America/Chicago
 US,AR,Denmark,Denmark,America/Chicago
 US,AR,Dennard,Dennard,America/Chicago
 US,AR,Denton,Denton,America/Chicago
 US,AR,Denver,Denver,America/Chicago
 US,AR,Denwood,Denwood,America/Chicago
 US,AR,Des Arc,Des Arc,America/Chicago
 US,AR,Desha,Desha,America/Chicago
 US,AR,Desha County,Desha County,America/Chicago
 US,AR,Detonti,Detonti,America/Chicago
 US,AR,Dewey,Dewey,America/Chicago
 US,AR,Dexter,Dexter,America/Chicago
 US,AR,Diamond Cave,Diamond Cave,America/Chicago
 US,AR,Diamondhead,Diamondhead,America/Chicago
 US,AR,Dicus,Dicus,America/Chicago
 US,AR,Dierks,Dierks,America/Chicago
 US,AR,Dillen,Dillen,America/Chicago
 US,AR,Dilworth,Dilworth,America/Chicago
 US,AR,Dimple,Dimple,America/Chicago
 US,AR,Dinsmore,Dinsmore,America/Chicago
 US,AR,Dixie,Dixie,America/Chicago
 US,AR,Dobell,Dobell,America/Chicago
 US,AR,Dobyville,Dobyville,America/Chicago
 US,AR,Dodd City,Dodd City,America/Chicago
 US,AR,Doddridge,Doddridge,America/Chicago
 US,AR,Dodge City,Dodge City,America/Chicago
 US,AR,Dodson,Dodson,America/Chicago
 US,AR,Dogpatch,Dogpatch,America/Chicago
 US,AR,Dogwood,Dogwood,America/Chicago
 US,AR,Dolph,Dolph,America/Chicago
 US,AR,Donaldsonville,Donaldsonville,America/Chicago
 US,AR,Donbey,Donbey,America/Chicago
 US,AR,Dongola,Dongola,America/Chicago
 US,AR,Doniphan,Doniphan,America/Chicago
 US,AR,Donnick,Donnick,America/Chicago
 US,AR,Dooley,Dooley,America/Chicago
 US,AR,Dora,Dora,America/Chicago
 US,AR,Dorothy,Dorothy,America/Chicago
 US,AR,Dota,Dota,America/Chicago
 US,AR,Dotson,Dotson,America/Chicago
 US,AR,Double Wells,Double Wells,America/Chicago
 US,AR,Douglas,Douglas,America/Chicago
 US,AR,Douglasville,Douglasville,America/Chicago
 US,AR,Dowdy,Dowdy,America/Chicago
 US,AR,Doyle,Doyle,America/Chicago
 US,AR,Doylestown,Doylestown,America/Chicago
 US,AR,Drasco,Drasco,America/Chicago
 US,AR,Drew County,Drew County,America/Chicago
 US,AR,Driftwood,Driftwood,America/Chicago
 US,AR,Driftwood Shores,Driftwood Shores,America/Chicago
 US,AR,Driggs,Driggs,America/Chicago
 US,AR,Driver,Driver,America/Chicago
 US,AR,Dryfork,Dryfork,America/Chicago
 US,AR,Dub,Dub,America/Chicago
 US,AR,Dryden,Dryden,America/Chicago
 US,AR,Dublin,Dublin,America/Chicago
 US,AR,Duckett,Duckett,America/Chicago
 US,AR,Duff,Duff,America/Chicago
 US,AR,Dugger,Dugger,America/Chicago
 US,AR,Dumas,Dumas,America/Chicago
 US,AR,Dumas City,Dumas City,America/Chicago
 US,AR,Duncan,Duncan,America/Chicago
 US,AR,Dunlap,Dunlap,America/Chicago
 US,AR,Dunn,Dunn,America/Chicago
 US,AR,Dunnington,Dunnington,America/Chicago
 US,AR,Durham,Durham,America/Chicago
 US,AR,Duvall,Duvall,America/Chicago
 US,AR,Dutton,Dutton,America/Chicago
 US,AR,Dyer,Dyer,America/Chicago
 US,AR,Eagletie,Eagletie,America/Chicago
 US,AR,Eagleton,Eagleton,America/Chicago
 US,AR,Earle,Earle,America/Chicago
 US,AR,Earnheart,Earnheart,America/Chicago
 US,AR,East Pocahontas,East Pocahontas,America/Chicago
 US,AR,East Richwoods,East Richwoods,America/Chicago
 US,AR,Eastview,Eastview,America/Chicago
 US,AR,Eastwood,Eastwood,America/Chicago
 US,AR,Eaton,Eaton,America/Chicago
 US,AR,Ebb,Ebb,America/Chicago
 US,AR,Ebenezer,Ebenezer,America/Chicago
 US,AR,Ebling,Ebling,America/Chicago
 US,AR,Ebony,Ebony,America/Chicago
 US,AR,Echo,Echo,America/Chicago
 US,AR,Economy,Economy,America/Chicago
 US,AR,Eden,Eden,America/Chicago
 US,AR,Edgemont,Edgemont,America/Chicago
 US,AR,Edgewood,Edgewood,America/Chicago
 US,AR,Edna,Edna,America/Chicago
 US,AR,Edwards,Edwards,America/Chicago
 US,AR,Eglantine,Eglantine,America/Chicago
 US,AR,El Paso,El Paso,America/Chicago
 US,AR,Elaine,Elaine,America/Chicago
 US,AR,Elberta,Elberta,America/Chicago
 US,AR,Elcana,Elcana,America/Chicago
 US,AR,Elizabeth,Elizabeth,America/Chicago
 US,AR,Elkhorn Tavern,Elkhorn Tavern,America/Chicago
 US,AR,Elkins,Elkins,America/Chicago
 US,AR,Elliott,Elliott,America/Chicago
 US,AR,Ellison,Ellison,America/Chicago
 US,AR,Ellisville,Ellisville,America/Chicago
 US,AR,Elmo,Elmo,America/Chicago
 US,AR,Elmwood,Elmwood,America/Chicago
 US,AR,Elnora,Elnora,America/Chicago
 US,AR,Eminence,Eminence,America/Chicago
 US,AR,Emmet,Emmet,America/Chicago
 US,AR,Emmons,Emmons,America/Chicago
 US,AR,Emon,Emon,America/Chicago
 US,AR,Empire,Empire,America/Chicago
 US,AR,Enders,Enders,America/Chicago
 US,AR,Engelberg,Engelberg,America/Chicago
 US,AR,England,England,America/Chicago
 US,AR,English,English,America/Chicago
 US,AR,Enon,Enon,America/Chicago
 US,AR,Enright,Enright,America/Chicago
 US,AR,Enterprise,Enterprise,America/Chicago
 US,AR,Erbie,Erbie,America/Chicago
 US,AR,Eros,Eros,America/Chicago
 US,AR,Erwin,Erwin,America/Chicago
 US,AR,Essex,Essex,America/Chicago
 US,AR,Estico,Estico,America/Chicago
 US,AR,Ethel,Ethel,America/Chicago
 US,AR,Euclid,Euclid,America/Chicago
 US,AR,Eula,Eula,America/Chicago
 US,AR,Eunice,Eunice,America/Chicago
 US,AR,Eureka Garden,Eureka Garden,America/Chicago
 US,AR,Evadale,Evadale,America/Chicago
 US,AR,Evansville,Evansville,America/Chicago
 US,AR,Evening Shade,Evening Shade,America/Chicago
 US,AR,Evening Star,Evening Star,America/Chicago
 US,AR,Ewal,Ewal,America/Chicago
 US,AR,Excelsior,Excelsior,America/Chicago
 US,AR,Experiment,Experiment,America/Chicago
 US,AR,Faber,Faber,America/Chicago
 US,AR,Fairbanks,Fairbanks,America/Chicago
 US,AR,Fairfield,Fairfield,America/Chicago
 US,AR,Fairland,Fairland,America/Chicago
 US,AR,Fairman,Fairman,America/Chicago
 US,AR,Fairmount,Fairmount,America/Chicago
 US,AR,Fairview,Fairview,America/Chicago
 US,AR,Faith,Faith,America/Chicago
 US,AR,Falcon,Falcon,America/Chicago
 US,AR,Fallis,Fallis,America/Chicago
 US,AR,Fallsville,Fallsville,America/Chicago
 US,AR,Fannie,Fannie,America/Chicago
 US,AR,Farewell,Farewell,America/Chicago
 US,AR,Farindale,Farindale,America/Chicago
 US,AR,Farmington,Farmington,America/Chicago
 US,AR,Farmville,Farmville,America/Chicago
 US,AR,Farrville,Farrville,America/Chicago
 US,AR,Faulkner County,Faulkner County,America/Chicago
 US,AR,Faulknerville,Faulknerville,America/Chicago
 US,AR,Felco,Felco,America/Chicago
 US,AR,Feenyville,Feenyville,America/Chicago
 US,AR,Felkner Town,Felkner Town,America/Chicago
 US,AR,Felton,Felton,America/Chicago
 US,AR,Fender,Fender,America/Chicago
 US,AR,Fendley,Fendley,America/Chicago
 US,AR,Fenter,Fenter,America/Chicago
 US,AR,Ferda,Ferda,America/Chicago
 US,AR,Ferguson,Ferguson,America/Chicago
 US,AR,Ferndale,Ferndale,America/Chicago
 US,AR,Fiftysix,Fiftysix,America/Chicago
 US,AR,Fifty-Six,Fifty-Six,America/Chicago
 US,AR,Finch,Finch,America/Chicago
 US,AR,Fisher,Fisher,America/Chicago
 US,AR,Fitzgerald,Fitzgerald,America/Chicago
 US,AR,Fitzhugh,Fitzhugh,America/Chicago
 US,AR,Fivemile,Fivemile,America/Chicago
 US,AR,Flag,Flag,America/Chicago
 US,AR,Flat,Flat,America/Chicago
 US,AR,Flatwoods,Flatwoods,America/Chicago
 US,AR,Flippin,Flippin,America/Chicago
 US,AR,Floodway,Floodway,America/Chicago
 US,AR,Floral,Floral,America/Chicago
 US,AR,Florence,Florence,America/Chicago
 US,AR,Floss,Floss,America/Chicago
 US,AR,Floyd,Floyd,America/Chicago
 US,AR,Flynn,Flynn,America/Chicago
 US,AR,Fomby,Fomby,America/Chicago
 US,AR,Fontaine,Fontaine,America/Chicago
 US,AR,Foreman,Foreman,America/Chicago
 US,AR,Fordyce,Fordyce,America/Chicago
 US,AR,Forester,Forester,America/Chicago
 US,AR,Forrest Bonner,Forrest Bonner,America/Chicago
 US,AR,Forrest City,Forrest City,America/Chicago
 US,AR,Formosa,Formosa,America/Chicago
 US,AR,Unorganized Territory Of Fort Chaffee,Unorganized Territory Of Fort Chaffee,America/Chicago
 US,AR,Fort Douglas,Fort Douglas,America/Chicago
 US,AR,Fort Lynn,Fort Lynn,America/Chicago
 US,AR,Fort Chaffee,Fort Chaffee,America/Chicago
 US,AR,Fortune,Fortune,America/Chicago
 US,AR,Forum,Forum,America/Chicago
 US,AR,Four Forks,Four Forks,America/Chicago
 US,AR,Four Gums,Four Gums,America/Chicago
 US,AR,Fox,Fox,America/Chicago
 US,AR,Fowler,Fowler,America/Chicago
 US,AR,Francis,Francis,America/Chicago
 US,AR,Franklin County,Franklin County,America/Chicago
 US,AR,Freck,Freck,America/Chicago
 US,AR,French,French,America/Chicago
 US,AR,Frenchport,Frenchport,America/Chicago
 US,AR,Fresno,Fresno,America/Chicago
 US,AR,Friley,Friley,America/Chicago
 US,AR,Frisco,Frisco,America/Chicago
 US,AR,Fritz,Fritz,America/Chicago
 US,AR,Frog Town,Frog Town,America/Chicago
 US,AR,Fryatt,Fryatt,America/Chicago
 US,AR,Fulton County,Fulton County,America/Chicago
 US,AR,Furlow,Furlow,America/Chicago
 US,AR,Furry,Furry,America/Chicago
 US,AR,Funston,Funston,America/Chicago
 US,AR,Gainesville,Gainesville,America/Chicago
 US,AR,Gainsboro,Gainsboro,America/Chicago
 US,AR,Gaither,Gaither,America/Chicago
 US,AR,Galena,Galena,America/Chicago
 US,AR,Galet,Galet,America/Chicago
 US,AR,Galilee,Galilee,America/Chicago
 US,AR,Gallatin,Gallatin,America/Chicago
 US,AR,Gamaliel,Gamaliel,America/Chicago
 US,AR,Galloway,Galloway,America/Chicago
 US,AR,Gammon,Gammon,America/Chicago
 US,AR,Gap Rancheros,Gap Rancheros,America/Chicago
 US,AR,Garber,Garber,America/Chicago
 US,AR,Gardner,Gardner,America/Chicago
 US,AR,Garland County,Garland County,America/Chicago
 US,AR,Garlandville,Garlandville,America/Chicago
 US,AR,Garnett,Garnett,America/Chicago
 US,AR,Garrett,Garrett,America/Chicago
 US,AR,Garson,Garson,America/Chicago
 US,AR,Gassett,Gassett,America/Chicago
 US,AR,Gassville,Gassville,America/Chicago
 US,AR,Gaston,Gaston,America/Chicago
 US,AR,Gaulett,Gaulett,America/Chicago
 US,AR,Gavin,Gavin,America/Chicago
 US,AR,Gayler,Gayler,America/Chicago
 US,AR,Geneva,Geneva,America/Chicago
 US,AR,Genoa,Genoa,America/Chicago
 US,AR,Gentry,Gentry,America/Chicago
 US,AR,George,George,America/Chicago
 US,AR,Geridge,Geridge,America/Chicago
 US,AR,Gertrude,Gertrude,America/Chicago
 US,AR,Gethsemane,Gethsemane,America/Chicago
 US,AR,Gibbs,Gibbs,America/Chicago
 US,AR,Gibson,Gibson,America/Chicago
 US,AR,Gid,Gid,America/Chicago
 US,AR,Gieseck,Gieseck,America/Chicago
 US,AR,Gifford,Gifford,America/Chicago
 US,AR,Gilkerson,Gilkerson,America/Chicago
 US,AR,Gill,Gill,America/Chicago
 US,AR,Gillett,Gillett,America/Chicago
 US,AR,Gillian Settlement,Gillian Settlement,America/Chicago
 US,AR,Gilmore,Gilmore,America/Chicago
 US,AR,Gin City,Gin City,America/Chicago
 US,AR,Gipson,Gipson,America/Chicago
 US,AR,Gladden,Gladden,America/Chicago
 US,AR,Glade,Glade,America/Chicago
 US,AR,Gladewood Addition,Gladewood Addition,America/Chicago
 US,AR,Gleason,Gleason,America/Chicago
 US,AR,Glen Rose,Glen Rose,America/Chicago
 US,AR,Glencoe,Glencoe,America/Chicago
 US,AR,Glendale,Glendale,America/Chicago
 US,AR,Glenlake,Glenlake,America/Chicago
 US,AR,Glenville,Glenville,America/Chicago
 US,AR,Glenwood,Glenwood,America/Chicago
 US,AR,Gobell,Gobell,America/Chicago
 US,AR,Gobbler,Gobbler,America/Chicago
 US,AR,Golden City,Golden City,America/Chicago
 US,AR,Goldman,Goldman,America/Chicago
 US,AR,Goobertown,Goobertown,America/Chicago
 US,AR,Goodman,Goodman,America/Chicago
 US,AR,Goodrich,Goodrich,America/Chicago
 US,AR,Goodwin,Goodwin,America/Chicago
 US,AR,Gorby,Gorby,America/Chicago
 US,AR,Gosnell,Gosnell,America/Chicago
 US,AR,Gospoda,Gospoda,America/Chicago
 US,AR,Gould,Gould,America/Chicago
 US,AR,Gourd,Gourd,America/Chicago
 US,AR,Gourd Neck,Gourd Neck,America/Chicago
 US,AR,Grady,Grady,America/Chicago
 US,AR,Grand Glaise,Grand Glaise,America/Chicago
 US,AR,Grandfield,Grandfield,America/Chicago
 US,AR,Grandview,Grandview,America/Chicago
 US,AR,Grannis,Grannis,America/Chicago
 US,AR,Grant County,Grant County,America/Chicago
 US,AR,Grants,Grants,America/Chicago
 US,AR,Grape,Grape,America/Chicago
 US,AR,Grapevine,Grapevine,America/Chicago
 US,AR,Graphic,Graphic,America/Chicago
 US,AR,Grassy Lake Bottom,Grassy Lake Bottom,America/Chicago
 US,AR,Gravelly,Gravelly,America/Chicago
 US,AR,Gravelridge,Gravelridge,America/Chicago
 US,AR,Gravesville,Gravesville,America/Chicago
 US,AR,Gravette,Gravette,America/Chicago
 US,AR,Grays,Grays,America/Chicago
 US,AR,Grayson,Grayson,America/Chicago
 US,AR,Graysonia,Graysonia,America/Chicago
 US,AR,Graytown,Graytown,America/Chicago
 US,AR,Green High,Green High,America/Chicago
 US,AR,Greenbrier,Greenbrier,America/Chicago
 US,AR,Greene County,Greene County,America/Chicago
 US,AR,Greenfield,Greenfield,America/Chicago
 US,AR,Greenland,Greenland,America/Chicago
 US,AR,Greenville,Greenville,America/Chicago
 US,AR,Greenway,Greenway,America/Chicago
 US,AR,Greenwood,Greenwood,America/Chicago
 US,AR,Gregory,Gregory,America/Chicago
 US,AR,Greyhawk Addition,Greyhawk Addition,America/Chicago
 US,AR,Grider,Grider,America/Chicago
 US,AR,Griffin,Griffin,America/Chicago
 US,AR,Griffithtown,Griffithtown,America/Chicago
 US,AR,Grubbs,Grubbs,America/Chicago
 US,AR,Guernsey,Guernsey,America/Chicago
 US,AR,Gulledge,Gulledge,America/Chicago
 US,AR,Gulley,Gulley,America/Chicago
 US,AR,Gurdon,Gurdon,America/Chicago
 US,AR,Habberton,Habberton,America/Chicago
 US,AR,Hackett,Hackett,America/Chicago
 US,AR,Hagarville,Hagarville,America/Chicago
 US,AR,Hagler,Hagler,America/Chicago
 US,AR,Haig,Haig,America/Chicago
 US,AR,Haleside,Haleside,America/Chicago
 US,AR,Half Moon,Half Moon,America/Chicago
 US,AR,Halfway,Halfway,America/Chicago
 US,AR,Halley,Halley,America/Chicago
 US,AR,Halliday,Halliday,America/Chicago
 US,AR,Hallsville,Hallsville,America/Chicago
 US,AR,Hamburg,Hamburg,America/Chicago
 US,AR,Hamil,Hamil,America/Chicago
 US,AR,Hamilton,Hamilton,America/Chicago
 US,AR,Hamiter,Hamiter,America/Chicago
 US,AR,Hamlet,Hamlet,America/Chicago
 US,AR,Hamlin,Hamlin,America/Chicago
 US,AR,Hammondsville,Hammondsville,America/Chicago
 US,AR,Hammons,Hammons,America/Chicago
 US,AR,Hampton,Hampton,America/Chicago
 US,AR,Hancock,Hancock,America/Chicago
 US,AR,Hannaberry,Hannaberry,America/Chicago
 US,AR,Hanna,Hanna,America/Chicago
 US,AR,Hanover,Hanover,America/Chicago
 US,AR,Happy,Happy,America/Chicago
 US,AR,Hardin,Hardin,America/Chicago
 US,AR,Hardy,Hardy,America/Chicago
 US,AR,Haretown,Haretown,America/Chicago
 US,AR,Harlow,Harlow,America/Chicago
 US,AR,Harmon,Harmon,America/Chicago
 US,AR,Harmontown,Harmontown,America/Chicago
 US,FL,Valley View Garden Homes,Valley View Garden Homes,America/New_York
 US,FL,Valmar,Valmar,America/New_York
 US,FL,Valrico Groves,Valrico Groves,America/New_York
 US,FL,Valrico Highlands,Valrico Highlands,America/New_York
 US,FL,Valrico Manor,Valrico Manor,America/New_York
 US,FL,Valrico Village,Valrico Village,America/New_York
 US,FL,Valrico Vista,Valrico Vista,America/New_York
 US,FL,Valrico Woodland,Valrico Woodland,America/New_York
 US,FL,Van Dyke Commons,Van Dyke Commons,America/New_York
 US,FL,Van Eyck,Van Eyck,America/New_York
 US,FL,Van Sant,Van Sant,America/New_York
 US,FL,Vedado,Vedado,America/New_York
 US,FL,Venetian Shores,Venetian Shores,America/New_York
 US,FL,Ventana,Ventana,America/New_York
 US,FL,Vicente Guerra,Vicente Guerra,America/New_York
 US,FL,Vick,Vick,America/New_York
 US,FL,Villa Bonnieventure,Villa Bonnieventure,America/New_York
 US,FL,Villa Casecta,Villa Casecta,America/New_York
 US,FL,Villa Di Treviso,Villa Di Treviso,America/New_York
 US,FL,Villa Largo,Villa Largo,America/New_York
 US,FL,Villa Questol,Villa Questol,America/New_York
 US,FL,Villa Rica,Villa Rica,America/New_York
 US,FL,Villa Roma,Villa Roma,America/New_York
 US,FL,Villa Saint Louis,Villa Saint Louis,America/New_York
 US,FL,Villages At Lithia,Villages At Lithia,America/New_York
 US,FL,Villages Of Bloomingdale,Villages Of Bloomingdale,America/New_York
 US,FL,Villages Of Lake Saint Charles,Villages Of Lake Saint Charles,America/New_York
 US,FL,Villas Delfin,Villas Delfin,America/New_York
 US,FL,Villas Of Northdale,Villas Of Northdale,America/New_York
 US,FL,Villas Of San Marino At Carrollwood,Villas Of San Marino At Carrollwood,America/New_York
 US,FL,Vista Bonita,Vista Bonita,America/New_York
 US,FL,Vista Cay,Vista Cay,America/New_York
 US,FL,Vista Del Rio,Vista Del Rio,America/New_York
 US,FL,Vultee,Vultee,America/New_York
 US,FL,Waco,Waco,America/New_York
 US,FL,Walden Groves,Walden Groves,America/New_York
 US,FL,Walden Lake Fairway Villas,Walden Lake Fairway Villas,America/New_York
 US,FL,Wallace,Wallace,America/New_York
 US,FL,Wallcraft,Wallcraft,America/New_York
 US,FL,Wallis,Wallis,America/New_York
 US,FL,Wanakah,Wanakah,America/New_York
 US,FL,Waterbridge,Waterbridge,America/New_York
 US,FL,Waterchase,Waterchase,America/New_York
 US,FL,Waterford,Waterford,America/New_York
 US,DE,Dover Base Housing,Dover Base Housing,America/New_York
 US,DE,Rising Sun-Lebanon,Rising Sun-Lebanon,America/New_York
 US,FL,De Land Southwest,De Land Southwest,America/New_York
 US,AR,Harmony,Harmony,America/Chicago
 US,AR,Harness,Harness,America/Chicago
 US,AR,Haroldton,Haroldton,America/Chicago
 US,AR,Harp,Harp,America/Chicago
 US,AR,Harriet,Harriet,America/Chicago
 US,AR,Harris,Harris,America/Chicago
 US,AR,Harrisburg,Harrisburg,America/Chicago
 US,AR,Harrison,Harrison,America/Chicago
 US,AR,Harrys,Harrys,America/Chicago
 US,AR,Hart,Hart,America/Chicago
 US,AR,Hartford,Hartford,America/Chicago
 US,AR,Hartley,Hartley,America/Chicago
 US,AR,Hartman,Hartman,America/Chicago
 US,AR,Hartwell,Hartwell,America/Chicago
 US,AR,Harvard,Harvard,America/Chicago
 US,AR,Harvey,Harvey,America/Chicago
 US,AR,Harwood,Harwood,America/Chicago
 US,AR,Haskell,Haskell,America/Chicago
 US,AR,Hatchie Coon,Hatchie Coon,America/Chicago
 US,AR,Hattieville,Hattieville,America/Chicago
 US,AR,Hatton,Hatton,America/Chicago
 US,AR,Havana,Havana,America/Chicago
 US,AR,Hawes,Hawes,America/Chicago
 US,AR,Hawkins,Hawkins,America/Chicago
 US,AR,Hayley,Hayley,America/Chicago
 US,AR,Haywood,Haywood,America/Chicago
 US,AR,Heafer,Heafer,America/Chicago
 US,AR,Heart,Heart,America/Chicago
 US,AR,Hazen,Hazen,America/Chicago
 US,AR,Hebron,Hebron,America/Chicago
 US,AR,Heelstring,Heelstring,America/Chicago
 US,AR,Heffington,Heffington,America/Chicago
 US,AR,Helena,Helena,America/Chicago
 US,AR,Hempstead County,Hempstead County,America/Chicago
 US,AR,Hempwallace,Hempwallace,America/Chicago
 US,AR,Henderson,Henderson,America/Chicago
 US,AR,Henry,Henry,America/Chicago
 US,AR,Hensley,Hensley,America/Chicago
 US,AR,Herbert,Herbert,America/Chicago
 US,AR,Herbine,Herbine,America/Chicago
 US,AR,Hergett,Hergett,America/Chicago
 US,AR,Herma,Herma,America/Chicago
 US,AR,Herman,Herman,America/Chicago
 US,AR,Herndon,Herndon,America/Chicago
 US,AR,Herpel,Herpel,America/Chicago
 US,AR,Herron,Herron,America/Chicago
 US,AR,Hervey,Hervey,America/Chicago
 US,AR,Heth,Heth,America/Chicago
 US,AR,Heubner,Heubner,America/Chicago
 US,AR,Heustess,Heustess,America/Chicago
 US,AR,Hickeytown,Hickeytown,America/Chicago
 US,AR,Hickman,Hickman,America/Chicago
 US,AR,Hickoria,Hickoria,America/Chicago
 US,AR,Hicksville,Hicksville,America/Chicago
 US,AR,Hico,Hico,America/Chicago
 US,AR,Higgins,Higgins,America/Chicago
 US,AR,High,High,America/Chicago
 US,DE,Saint Johnstown,Saint Johnstown,America/New_York
 US,DE,Salem Village,Salem Village,America/New_York
 US,DE,Sand Dunes Village,Sand Dunes Village,America/New_York
 US,DE,Sandy Brae,Sandy Brae,America/New_York
 US,DE,Sandtown,Sandtown,America/New_York
 US,DE,Saulsbury Switch,Saulsbury Switch,America/New_York
 US,DE,Sea Colony,Sea Colony,America/New_York
 US,DE,Sea Dunes,Sea Dunes,America/New_York
 US,DE,Sea Farers Village,Sea Farers Village,America/New_York
 US,DE,Sea Spray Village,Sea Spray Village,America/New_York
 US,DE,Seabreak,Seabreak,America/New_York
 US,DE,Seabreeze,Seabreeze,America/New_York
 US,DE,Seaford Hundred,Seaford Hundred,America/New_York
 US,DE,Seaside Villas,Seaside Villas,America/New_York
 US,DE,Seatowne,Seatowne,America/New_York
 US,DE,Sedgley Farms,Sedgley Farms,America/New_York
 US,DE,Seeneytown,Seeneytown,America/New_York
 US,DE,Seven Hickories,Seven Hickories,America/New_York
 US,DE,Shady Side,Shady Side,America/New_York
 US,DE,Shaffer Property,Shaffer Property,America/New_York
 US,DE,Sharpley,Sharpley,America/New_York
 US,DE,Shawnee,Shawnee,America/New_York
 US,DE,Sheffield Manor,Sheffield Manor,America/New_York
 US,DE,Shellburne,Shellburne,America/New_York
 US,DE,Shelley Farms,Shelley Farms,America/New_York
 US,DE,Sherwood,Sherwood,America/New_York
 US,DE,Shenandoah,Shenandoah,America/New_York
 US,DE,Shockley Manor,Shockley Manor,America/New_York
 US,DE,Shortly,Shortly,America/New_York
 US,DE,Silverbrook,Silverbrook,America/New_York
 US,DE,Silverside,Silverside,America/New_York
 US,DE,Silview,Silview,America/New_York
 US,DE,Six Forks,Six Forks,America/New_York
 US,DE,Skyline Orchard,Skyline Orchard,America/New_York
 US,DE,Slaughter,Slaughter,America/New_York
 US,DE,South Bowers,South Bowers,America/New_York
 US,DE,South Murderkill Hundred,South Murderkill Hundred,America/New_York
 US,DE,South Wilmington,South Wilmington,America/New_York
 US,DE,Southwood,Southwood,America/New_York
 US,DE,Springfield Farms Addition,Springfield Farms Addition,America/New_York
 US,DE,Spruance City,Spruance City,America/New_York
 US,DE,Stage Road Development,Stage Road Development,America/New_York
 US,DE,Stanton,Stanton,America/New_York
 US,DE,Staytonville,Staytonville,America/New_York
 US,DE,Stirrup Farms,Stirrup Farms,America/New_York
 US,DE,Stockdale,Stockdale,America/New_York
 US,DE,Stockley,Stockley,America/New_York
 US,DE,Stanley Manor,Stanley Manor,America/New_York
 US,DE,Stonehaven,Stonehaven,America/New_York
 US,FL,East Bronson,East Bronson,America/New_York
 US,FL,East Williston,East Williston,America/New_York
 US,FL,Greater Northdale,Greater Northdale,America/New_York
 US,FL,Hamptons At Boca Raton,Hamptons At Boca Raton,America/New_York
 US,FL,Boca Del Mar,Boca Del Mar,America/New_York
 US,FL,Boca Pointe,Boca Pointe,America/New_York
 US,FL,Boyette,Boyette,America/New_York
 US,FL,Century Village,Century Village,America/New_York
 US,FL,Southeast Arcadia,Southeast Arcadia,America/New_York
 US,FL,Sylvan Shores,Sylvan Shores,America/New_York
 US,FL,Matlacha Isles-Matlacha Shores,Matlacha Isles-Matlacha Shores,America/New_York
 US,FL,Nassau Village-Ratliff,Nassau Village-Ratliff,America/New_York
 US,FL,North Weeki Wachee,North Weeki Wachee,America/New_York
 US,FL,Palm River-Clair Mel,Palm River-Clair Mel,America/New_York
 US,DE,Delaware City,Delaware City,America/New_York
 US,AR,Arkadelphia,Arkadelphia,America/Chicago
 US,AR,Ashdown,Ashdown,America/Chicago
 US,AR,Barling,Barling,America/Chicago
 US,AR,Dover,Dover,America/Chicago
 US,FL,Dunnellon,Dunnellon,America/New_York
 US,AR,El Dorado,El Dorado,America/Chicago
 US,AR,Eudora,Eudora,America/Chicago
 US,AR,Fayetteville,Fayetteville,America/Chicago
 US,FL,Fellsmere,Fellsmere,America/New_York
 US,FL,Florida City,Florida City,America/New_York
 US,AR,Fort Smith,Fort Smith,America/Chicago
 US,AR,Fouke,Fouke,America/Chicago
 US,FL,Greenacres,Greenacres,America/New_York
 US,AR,Beebe,Beebe,America/Chicago
 US,AR,Benton,Benton,America/Chicago
 US,AR,Blytheville,Blytheville,America/Chicago
 US,AR,Booneville,Booneville,America/Chicago
 US,AR,Brinkley,Brinkley,America/Chicago
 US,AR,Bryant,Bryant,America/Chicago
 US,AR,Camden,Camden,America/Chicago
 US,AR,Cave City,Cave City,America/Chicago
 US,AR,Clarksville,Clarksville,America/Chicago
 US,FL,Coleman,Coleman,America/New_York
 US,AR,Corning,Corning,America/Chicago
 US,FL,Crescent City,Crescent City,America/New_York
 US,AR,Crossett,Crossett,America/Chicago
 US,FL,Dade City,Dade City,America/New_York
 US,AR,Dermott,Dermott,America/Chicago
 US,AR,Diamond City,Diamond City,America/Chicago
 US,AR,Diaz,Diaz,America/Chicago
 US,AR,Morrilton,Morrilton,America/Chicago
 US,FL,New Port Richey,New Port Richey,America/New_York
 US,FL,Newberry,Newberry,America/New_York
 US,AR,Newport,Newport,America/Chicago
 US,FL,North Bay Village,North Bay Village,America/New_York
 US,AR,Highland,Highland,America/Chicago
 US,AR,Hillcrest,Hillcrest,America/Chicago
 US,AR,Hillemann,Hillemann,America/Chicago
 US,AR,Hillsboro,Hillsboro,America/Chicago
 US,AR,Hilo,Hilo,America/Chicago
 US,AR,Hilton,Hilton,America/Chicago
 US,AR,Hinkle,Hinkle,America/Chicago
 US,AR,Hiram,Hiram,America/Chicago
 US,AR,Hiwasse,Hiwasse,America/Chicago
 US,AR,Hobbtown,Hobbtown,America/Chicago
 US,AR,Hog Jaw,Hog Jaw,America/Chicago
 US,AR,Hogan,Hogan,America/Chicago
 US,AR,Hogeye,Hogeye,America/Chicago
 US,AR,Holdridge,Holdridge,America/Chicago
 US,AR,Holland,Holland,America/Chicago
 US,AR,Hollis,Hollis,America/Chicago
 US,AR,Hollywood,Hollywood,America/Chicago
 US,AR,Homan,Homan,America/Chicago
 US,AR,Hon,Hon,America/Chicago
 US,AR,Homewood,Homewood,America/Chicago
 US,AR,Hooker,Hooker,America/Chicago
 US,AR,Hoover Addition,Hoover Addition,America/Chicago
 US,AR,Hope,Hope,America/Chicago
 US,AR,Hopeville,Hopeville,America/Chicago
 US,AR,Hopewell,Hopewell,America/Chicago
 US,AR,Hopper,Hopper,America/Chicago
 US,AR,Horatio,Horatio,America/Chicago
 US,AR,Horsehead,Horsehead,America/Chicago
 US,AR,Horseshoe,Horseshoe,America/Chicago
 US,AR,Hough,Hough,America/Chicago
 US,AR,Howard,Howard,America/Chicago
 US,AR,Howard County,Howard County,America/Chicago
 US,AR,Howell,Howell,America/Chicago
 US,AR,Hoyt,Hoyt,America/Chicago
 US,AR,Hoxie,Hoxie,America/Chicago
 US,AR,Hubbard,Hubbard,America/Chicago
 US,AR,Huddleston,Huddleston,America/Chicago
 US,AR,Hudspeth,Hudspeth,America/Chicago
 US,AR,Huffman,Huffman,America/Chicago
 US,AR,Hughes,Hughes,America/Chicago
 US,AR,Hulbert,Hulbert,America/Chicago
 US,AR,Huma,Huma,America/Chicago
 US,AR,Humnoke,Humnoke,America/Chicago
 US,AR,Humphrey,Humphrey,America/Chicago
 US,AR,Hunt,Hunt,America/Chicago
 US,AR,Huntington,Huntington,America/Chicago
 US,AR,Huntsville,Huntsville,America/Chicago
 US,AR,Hurds,Hurds,America/Chicago
 US,AR,Huskey,Huskey,America/Chicago
 US,AR,Hutchinson,Hutchinson,America/Chicago
 US,AR,Huttig,Huttig,America/Chicago
 US,AR,Hydrick,Hydrick,America/Chicago
 US,AR,Hyden,Hyden,America/Chicago
 US,AR,Ida,Ida,America/Chicago
 US,AR,Immanuel,Immanuel,America/Chicago
 US,AR,Imo,Imo,America/Chicago
 US,AR,Independence County,Independence County,America/Chicago
 US,DE,Stoneridge,Stoneridge,America/New_York
 US,DE,Stones Throw,Stones Throw,America/New_York
 US,DE,Stratford,Stratford,America/New_York
 US,DE,Sugar Loaf Chase,Sugar Loaf Chase,America/New_York
 US,DE,Sussex County,Sussex County,America/New_York
 US,DE,Sussex Shores,Sussex Shores,America/New_York
 US,DE,Swanwyck,Swanwyck,America/New_York
 US,DE,Sycamore,Sycamore,America/New_York
 US,DE,Sycamore Farms,Sycamore Farms,America/New_York
 US,DE,Talleyville,Talleyville,America/New_York
 US,DE,Swanendael,Swanendael,America/New_York
 US,DE,Tavistock,Tavistock,America/New_York
 US,DE,Taylortown,Taylortown,America/New_York
 US,DE,Tenby Chase,Tenby Chase,America/New_York
 US,DE,Tent,Tent,America/New_York
 US,DE,Thompson,Thompson,America/New_York
 US,DE,Thompsonville,Thompsonville,America/New_York
 US,DE,Thorntown,Thorntown,America/New_York
 US,DE,Tidbury Manor,Tidbury Manor,America/New_York
 US,DE,Trepagnier,Trepagnier,America/New_York
 US,DE,Trinity,Trinity,America/New_York
 US,DE,Truitts Midway Development,Truitts Midway Development,America/New_York
 US,DE,Turnkey,Turnkey,America/New_York
 US,DE,Tybrook,Tybrook,America/New_York
 US,DE,Twin Eagle Farms,Twin Eagle Farms,America/New_York
 US,DE,Vandyke,Vandyke,America/New_York
 US,DE,Varlano,Varlano,America/New_York
 US,DE,Vernon,Vernon,America/New_York
 US,DE,Viola,Viola,America/New_York
 US,DE,Walker,Walker,America/New_York
 US,DE,Vintage Village,Vintage Village,America/New_York
 US,DE,Waples,Waples,America/New_York
 US,DE,Ward,Ward,America/New_York
 US,DE,Warrington Manor,Warrington Manor,America/New_York
 US,DE,Warwick,Warwick,America/New_York
 US,DE,Weatherhill Farms,Weatherhill Farms,America/New_York
 US,DE,Webb Manor,Webb Manor,America/New_York
 US,DE,Wedgewood,Wedgewood,America/New_York
 US,DE,Weldin Farms,Weldin Farms,America/New_York
 US,DE,Weber Tract,Weber Tract,America/New_York
 US,DE,Welshire,Welshire,America/New_York
 US,DE,West Dover Hundred,West Dover Hundred,America/New_York
 US,DE,West Haven,West Haven,America/New_York
 US,DE,West Minquadale,West Minquadale,America/New_York
 US,DE,West Rehoboth,West Rehoboth,America/New_York
 US,DE,West Riding,West Riding,America/New_York
 US,DE,Westerlee,Westerlee,America/New_York
 US,DE,Westfield,Westfield,America/New_York
 US,DE,Westgate Farms,Westgate Farms,America/New_York
 US,DE,Westminster,Westminster,America/New_York
 US,DE,Westmont,Westmont,America/New_York
 US,FL,North Lauderdale,North Lauderdale,America/New_York
 US,FL,Opa-Locka,Opa-Locka,America/New_York
 US,AR,Osceola,Osceola,America/Chicago
 US,FL,Oviedo,Oviedo,America/New_York
 US,AR,Ozark,Ozark,America/Chicago
 US,FL,Parkland,Parkland,America/New_York
 US,FL,Pembroke Pines,Pembroke Pines,America/New_York
 US,AR,Piggott,Piggott,America/Chicago
 US,FL,Port Richey,Port Richey,America/New_York
 US,AR,Rogers,Rogers,America/Chicago
 US,AR,Russellville,Russellville,America/Chicago
 US,FL,Hawthorne,Hawthorne,America/New_York
 US,FL,Homestead,Homestead,America/New_York
 US,AR,Jacksonville,Jacksonville,America/Chicago
 US,AR,Jonesboro,Jonesboro,America/Chicago
 US,FL,Leesburg,Leesburg,America/New_York
 US,AR,Lonoke,Lonoke,America/Chicago
 US,AR,Magazine,Magazine,America/Chicago
 US,AR,Magnolia,Magnolia,America/Chicago
 US,AR,Malvern,Malvern,America/Chicago
 US,AR,Marianna,Marianna,America/Chicago
 US,FL,Mascotte,Mascotte,America/New_York
 US,FL,Saint Petersburg,Saint Petersburg,America/New_York
 US,FL,Sarasota,Sarasota,America/New_York
 US,FL,South Daytona,South Daytona,America/New_York
 US,AR,Springdale,Springdale,America/Chicago
 US,FL,Sunrise,Sunrise,America/New_York
 US,FL,Tamarac,Tamarac,America/New_York
 US,FL,Tampa,Tampa,America/New_York
 US,FL,Tavares,Tavares,America/New_York
 US,AR,Trumann,Trumann,America/Chicago
 US,FL,Umatilla,Umatilla,America/New_York
 US,AR,Waldron,Waldron,America/Chicago
 US,AR,West Memphis,West Memphis,America/Chicago
 US,FL,Weston,Weston,America/New_York
 US,FL,Williston,Williston,America/New_York
 US,AR,Wynne,Wynne,America/Chicago
 US,FL,Inglis,Inglis,America/New_York
 US,FL,Micanopy,Micanopy,America/New_York
 US,FL,Bella Vista,Bella Vista,America/New_York
 US,FL,Mar Lago Village,Mar Lago Village,America/New_York
 US,FL,Alexon Solero,Alexon Solero,America/New_York
 US,FL,Dickerson City,Dickerson City,America/Chicago
 US,FL,Leto,Leto,America/New_York
 US,FL,Northdale,Northdale,America/New_York
 US,FL,Bellamy,Bellamy,America/New_York
 US,FL,Blackwater,Blackwater,America/New_York
 US,FL,Alafia,Alafia,America/New_York
 US,FL,Burchwood,Burchwood,America/New_York
 US,FL,Caloosa,Caloosa,America/New_York
 US,FL,Clayton,Clayton,America/New_York
 US,FL,Lipsey,Lipsey,America/New_York
 US,FL,Livingston,Livingston,America/New_York
 US,FL,Hickory Hammock,Hickory Hammock,America/New_York
 US,AR,Index,Index,America/Chicago
 US,AR,Indian,Indian,America/Chicago
 US,AR,Ingalls,Ingalls,America/Chicago
 US,AR,Ingleside,Ingleside,America/Chicago
 US,AR,Ingram,Ingram,America/Chicago
 US,AR,Ink,Ink,America/Chicago
 US,AR,Ionia,Ionia,America/Chicago
 US,AR,Ione,Ione,America/Chicago
 US,AR,Irma,Irma,America/Chicago
 US,AR,Ironton,Ironton,America/Chicago
 US,AR,Iuka,Iuka,America/Chicago
 US,AR,Ivan,Ivan,America/Chicago
 US,AR,Ivy,Ivy,America/Chicago
 US,AR,Ivesville,Ivesville,America/Chicago
 US,AR,Izard County,Izard County,America/Chicago
 US,AR,Jacinto,Jacinto,America/Chicago
 US,AR,Jacks Isle,Jacks Isle,America/Chicago
 US,AR,Jackson County,Jackson County,America/Chicago
 US,AR,Jamestown,Jamestown,America/Chicago
 US,AR,Japton,Japton,America/Chicago
 US,AR,Jasmine,Jasmine,America/Chicago
 US,AR,Jasper,Jasper,America/Chicago
 US,AR,Jay,Jay,America/Chicago
 US,AR,Jeanette,Jeanette,America/Chicago
 US,AR,Jefferson,Jefferson,America/Chicago
 US,AR,Jefferson County,Jefferson County,America/Chicago
 US,AR,Jeffersonville,Jeffersonville,America/Chicago
 US,AR,Jeffrey,Jeffrey,America/Chicago
 US,AR,Jeffries,Jeffries,America/Chicago
 US,AR,Jennie,Jennie,America/Chicago
 US,AR,Jenny Lind,Jenny Lind,America/Chicago
 US,AR,Jenson,Jenson,America/Chicago
 US,AR,Jerrett,Jerrett,America/Chicago
 US,AR,Jersey,Jersey,America/Chicago
 US,AR,Jerusalem,Jerusalem,America/Chicago
 US,AR,Jessieville,Jessieville,America/Chicago
 US,AR,Jethro,Jethro,America/Chicago
 US,AR,Jesup,Jesup,America/Chicago
 US,AR,Jewell,Jewell,America/Chicago
 US,AR,Joan,Joan,America/Chicago
 US,AR,Johnson,Johnson,America/Chicago
 US,AR,Johnson County,Johnson County,America/Chicago
 US,AR,Johnstown,Johnstown,America/Chicago
 US,AR,Johnsville,Johnsville,America/Chicago
 US,AR,Joiner,Joiner,America/Chicago
 US,AR,Jonesville,Jonesville,America/Chicago
 US,AR,Jonquil,Jonquil,America/Chicago
 US,AR,Joplin,Joplin,America/Chicago
 US,AR,Jordan,Jordan,America/Chicago
 US,AR,Joyce City,Joyce City,America/Chicago
 US,AR,Joyland,Joyland,America/Chicago
 US,AR,Judsonia,Judsonia,America/Chicago
 US,AR,Joy,Joy,America/Chicago
 US,AR,Julius,Julius,America/Chicago
 US,AR,Jumbo,Jumbo,America/Chicago
 US,AR,Junction City,Junction City,America/Chicago
 US,DE,Westview,Westview,America/New_York
 US,DE,Westwood Manor,Westwood Manor,America/New_York
 US,DE,Westwoods,Westwoods,America/New_York
 US,DE,White Briar,White Briar,America/New_York
 US,DE,White Clay Creek Hundred,White Clay Creek Hundred,America/New_York
 US,DE,White Creek Manor,White Creek Manor,America/New_York
 US,DE,White Oak Farms,White Oak Farms,America/New_York
 US,DE,Whiteleysburg,Whiteleysburg,America/New_York
 US,DE,Whites Village,Whites Village,America/New_York
 US,DE,Whitesville,Whitesville,America/New_York
 US,DE,Wickwood,Wickwood,America/New_York
 US,DE,Wilgus Subdivision,Wilgus Subdivision,America/New_York
 US,DE,William Ritter Manor,William Ritter Manor,America/New_York
 US,DE,Williamsburg,Williamsburg,America/New_York
 US,DE,Williamsville,Williamsville,America/New_York
 US,DE,Wilmington Hundred,Wilmington Hundred,America/New_York
 US,DE,Wilmington Manor,Wilmington Manor,America/New_York
 US,DE,Wilmont,Wilmont,America/New_York
 US,DE,Wilson,Wilson,America/New_York
 US,DE,Winding Creek Village,Winding Creek Village,America/New_York
 US,DE,Windward,Windward,America/New_York
 US,DE,Winmill,Winmill,America/New_York
 US,DE,Winterbury,Winterbury,America/New_York
 US,DE,Winterthur,Winterthur,America/New_York
 US,DE,Woodbine,Woodbine,America/New_York
 US,DE,Woodbrook,Woodbrook,America/New_York
 US,DE,Woodcrest,Woodcrest,America/New_York
 US,DE,Wooddale,Wooddale,America/New_York
 US,DE,Woodenhawk,Woodenhawk,America/New_York
 US,DE,Woodland,Woodland,America/New_York
 US,DE,Woods Haven,Woods Haven,America/New_York
 US,DE,Woods Manor,Woods Manor,America/New_York
 US,DE,Woodshade,Woodshade,America/New_York
 US,DE,Woodside,Woodside,America/New_York
 US,DE,Woodside Manor,Woodside Manor,America/New_York
 US,DE,Worthland,Worthland,America/New_York
 US,DE,Wynnewood,Wynnewood,America/New_York
 US,DE,Wyoming,Wyoming,America/New_York
 US,DE,York Towne,York Towne,America/New_York
 US,DE,Yorklyn,Yorklyn,America/New_York
 US,DE,Yorkshire,Yorkshire,America/New_York
 US,DE,Zurkow Development,Zurkow Development,America/New_York
 US,FL,A Atkinson Or F P Sanchez Grant,A Atkinson Or F P Sanchez Grant,America/New_York
 US,FL,A Hanran Grant,A Hanran Grant,America/New_York
 US,FL,Aberdeen,Aberdeen,America/New_York
 US,FL,Achan,Achan,America/New_York
 US,FL,Acline,Acline,America/New_York
 US,DE,Zoar,Zoar,America/New_York
 US,FL,Adam,Adam,America/New_York
 US,FL,Adams,Adams,America/New_York
 US,AR,Junet,Junet,America/Chicago
 US,AR,Kalamazoo,Kalamazoo,America/Chicago
 US,AR,Kansas,Kansas,America/Chicago
 US,AR,Kate,Kate,America/Chicago
 US,AR,Kay,Kay,America/Chicago
 US,AR,Kedron,Kedron,America/Chicago
 US,AR,Keener,Keener,America/Chicago
 US,AR,Keevil,Keevil,America/Chicago
 US,AR,Keiser,Keiser,America/Chicago
 US,AR,Kellum,Kellum,America/Chicago
 US,AR,Kelly Addition,Kelly Addition,America/Chicago
 US,AR,Kelso,Kelso,America/Chicago
 US,AR,Kemp Addition,Kemp Addition,America/Chicago
 US,AR,Kensett,Kensett,America/Chicago
 US,AR,Kent,Kent,America/Chicago
 US,AR,Kentucky,Kentucky,America/Chicago
 US,AR,Kenwood,Kenwood,America/Chicago
 US,AR,Kenyon,Kenyon,America/Chicago
 US,AR,Kenova,Kenova,America/Chicago
 US,AR,Kerlin,Kerlin,America/Chicago
 US,AR,Kerr,Kerr,America/Chicago
 US,AR,Kibler,Kibler,America/Chicago
 US,AR,Kiblah,Kiblah,America/Chicago
 US,AR,Killin,Killin,America/Chicago
 US,AR,Kimball,Kimball,America/Chicago
 US,AR,Kimberley,Kimberley,America/Chicago
 US,AR,Kinard,Kinard,America/Chicago
 US,AR,Kindall,Kindall,America/Chicago
 US,AR,King,King,America/Chicago
 US,AR,Kingsland,Kingsland,America/Chicago
 US,AR,Kingston,Kingston,America/Chicago
 US,AR,Kingtown,Kingtown,America/Chicago
 US,AR,Kingwood Addition,Kingwood Addition,America/Chicago
 US,AR,Kinton,Kinton,America/Chicago
 US,AR,Kirby,Kirby,America/Chicago
 US,AR,Kirkland,Kirkland,America/Chicago
 US,AR,Kittle,Kittle,America/Chicago
 US,AR,Kittlers,Kittlers,America/Chicago
 US,AR,Kizer,Kizer,America/Chicago
 US,AR,Knob,Knob,America/Chicago
 US,AR,Knobel,Knobel,America/Chicago
 US,AR,Knowlton,Knowlton,America/Chicago
 US,AR,Kokomo,Kokomo,America/Chicago
 US,AR,Kress City,Kress City,America/Chicago
 US,AR,L'Anguille,L'Anguille,America/Chicago
 US,AR,La Grange,La Grange,America/Chicago
 US,AR,Lacrosse,Lacrosse,America/Chicago
 US,AR,Lagrue,Lagrue,America/Chicago
 US,AR,Lacey,Lacey,America/Chicago
 US,AR,Laconia,Laconia,America/Chicago
 US,AR,Ladd,Ladd,America/Chicago
 US,AR,Lafayette County,Lafayette County,America/Chicago
 US,AR,Ladelle,Ladelle,America/Chicago
 US,AR,Lafferty,Lafferty,America/Chicago
 US,AR,Lakehall,Lakehall,America/Chicago
 US,AR,Lakeport,Lakeport,America/Chicago
 US,AR,Lakeside,Lakeside,America/Chicago
 US,FL,Acosta Grant,Acosta Grant,America/New_York
 US,FL,Adamsville,Adamsville,America/New_York
 US,FL,Adventura,Adventura,America/New_York
 US,FL,Agneda Segui Grant,Agneda Segui Grant,America/New_York
 US,FL,Agricola,Agricola,America/New_York
 US,FL,Alachua County,Alachua County,America/New_York
 US,FL,Aladdin City,Aladdin City,America/New_York
 US,FL,Alachua,Alachua,America/New_York
 US,FL,Alamana,Alamana,America/New_York
 US,FL,Alcoma,Alcoma,America/New_York
 US,FL,Alexander Creighton Grant,Alexander Creighton Grant,America/New_York
 US,FL,Alexander Love Grant,Alexander Love Grant,America/Chicago
 US,FL,Alford,Alford,America/Chicago
 US,FL,Allandale,Allandale,America/New_York
 US,FL,Allanton,Allanton,America/Chicago
 US,FL,Allapattah,Allapattah,America/New_York
 US,FL,Allenhurst,Allenhurst,America/New_York
 US,FL,Allentown,Allentown,America/Chicago
 US,FL,Alliance,Alliance,America/Chicago
 US,FL,Alma,Alma,America/New_York
 US,FL,Aloma,Aloma,America/New_York
 US,FL,Altha,Altha,America/Chicago
 US,FL,Alton,Alton,America/New_York
 US,FL,Altoona,Altoona,America/New_York
 US,FL,Alturas,Alturas,America/New_York
 US,FL,Alva,Alva,America/New_York
 US,FL,Ambrose Hull Grant,Ambrose Hull Grant,America/New_York
 US,FL,Amelia City,Amelia City,America/New_York
 US,FL,Anastasia,Anastasia,America/New_York
 US,FL,Anclote,Anclote,America/New_York
 US,FL,Andalusia,Andalusia,America/New_York
 US,FL,Andrew,Andrew,America/New_York
 US,FL,Andrew Atkinson Grant,Andrew Atkinson Grant,America/New_York
 US,FL,Andrew Dewees Grant,Andrew Dewees Grant,America/New_York
 US,FL,Andrew Mitchell Grant,Andrew Mitchell Grant,America/Chicago
 US,FL,Andrew Storrs Grant,Andrew Storrs Grant,America/New_York
 US,FL,Andrews,Andrews,America/New_York
 US,FL,Andytown,Andytown,America/New_York
 US,FL,Angel City,Angel City,America/New_York
 US,FL,Anglevillas,Anglevillas,America/New_York
 US,FL,Ankona,Ankona,America/New_York
 US,FL,Anna Maria,Anna Maria,America/New_York
 US,FL,Antelm Gay Grant,Antelm Gay Grant,America/New_York
 US,FL,Anthony,Anthony,America/New_York
 US,FL,Antioch,Antioch,America/New_York
 US,FL,Antoine Collins Grant,Antoine Collins Grant,America/Chicago
 US,FL,Antonio Collin Grant,Antonio Collin Grant,America/Chicago
 US,FL,Antonio Huertas Grant,Antonio Huertas Grant,America/New_York
 US,FL,Antonio J Triay Grant,Antonio J Triay Grant,America/New_York
 US,FL,Apalachicola,Apalachicola,America/New_York
 US,AR,Lakeview,Lakeview,America/Chicago
 US,AR,Lakeway,Lakeway,America/Chicago
 US,AR,Lakewood,Lakewood,America/Chicago
 US,AR,Lamar,Lamar,America/Chicago
 US,AR,Lamartine,Lamartine,America/Chicago
 US,AR,Lambert,Lambert,America/Chicago
 US,AR,Lamberton,Lamberton,America/Chicago
 US,AR,Lambethville,Lambethville,America/Chicago
 US,AR,Lambrook,Lambrook,America/Chicago
 US,AR,Lamont,Lamont,America/Chicago
 US,AR,Lanark,Lanark,America/Chicago
 US,AR,Landers,Landers,America/Chicago
 US,AR,Landis,Landis,America/Chicago
 US,AR,Landmark,Landmark,America/Chicago
 US,AR,Laneburg,Laneburg,America/Chicago
 US,AR,Lanesport,Lanesport,America/Chicago
 US,AR,Langford,Langford,America/Chicago
 US,AR,Langley,Langley,America/Chicago
 US,AR,Lansbrook,Lansbrook,America/Chicago
 US,AR,Lansing,Lansing,America/Chicago
 US,AR,Lanty,Lanty,America/Chicago
 US,AR,Lapile,Lapile,America/Chicago
 US,AR,Larkin,Larkin,America/Chicago
 US,AR,Larue,Larue,America/Chicago
 US,AR,Latour,Latour,America/Chicago
 US,AR,Laughlin,Laughlin,America/Chicago
 US,AR,Lauratown,Lauratown,America/Chicago
 US,AR,Lavaca,Lavaca,America/Chicago
 US,AR,Lawrence County,Lawrence County,America/Chicago
 US,AR,Lawrenceville,Lawrenceville,America/Chicago
 US,AR,Lawson,Lawson,America/Chicago
 US,AR,Leachville,Leachville,America/Chicago
 US,AR,Leaning Pines,Leaning Pines,America/Chicago
 US,AR,Lebanon,Lebanon,America/Chicago
 US,AR,Ledwidge,Ledwidge,America/Chicago
 US,AR,Lee County,Lee County,America/Chicago
 US,AR,Leetown,Leetown,America/Chicago
 US,AR,Lehi,Lehi,America/Chicago
 US,AR,Leitner,Leitner,America/Chicago
 US,AR,Leland,Leland,America/Chicago
 US,AR,Lemsford,Lemsford,America/Chicago
 US,AR,Lena,Lena,America/Chicago
 US,AR,Lenham,Lenham,America/Chicago
 US,AR,Lennie,Lennie,America/Chicago
 US,AR,Lenox,Lenox,America/Chicago
 US,AR,Leonard,Leonard,America/Chicago
 US,AR,Lepanto,Lepanto,America/Chicago
 US,AR,Lerch,Lerch,America/Chicago
 US,AR,Leslie,Leslie,America/Chicago
 US,AR,Lester,Lester,America/Chicago
 US,AR,Lesterville,Lesterville,America/Chicago
 US,AR,Letchworth,Letchworth,America/Chicago
 US,AR,Levesque,Levesque,America/Chicago
 US,AR,Levy,Levy,America/Chicago
 US,AR,Lewis,Lewis,America/Chicago
 US,AR,Lewisburg,Lewisburg,America/Chicago
 US,FL,Blackburn,Blackburn,America/New_York
 US,FL,Blakes,Blakes,America/New_York
 US,FL,Bloomingdale Trails,Bloomingdale Trails,America/New_York
 US,FL,Bloomingdale Village,Bloomingdale Village,America/New_York
 US,FL,Bloomingdale Villas,Bloomingdale Villas,America/New_York
 US,FL,Boaz,Boaz,America/New_York
 US,FL,Bon Air,Bon Air,America/New_York
 US,FL,Bonita,Bonita,America/New_York
 US,FL,Bonnie Brae,Bonnie Brae,America/New_York
 US,FL,Bonniehaven,Bonniehaven,America/New_York
 US,FL,Bonniehurst,Bonniehurst,America/New_York
 US,FL,Bonnieventure,Bonnieventure,America/New_York
 US,FL,Bonterra,Bonterra,America/New_York
 US,FL,Boran,Boran,America/New_York
 US,FL,Bougenvista,Bougenvista,America/New_York
 US,FL,Boulevard Villas,Boulevard Villas,America/New_York
 US,FL,Bour Lands,Bour Lands,America/New_York
 US,FL,Boyette Farms,Boyette Farms,America/New_York
 US,FL,Boyles,Boyles,America/New_York
 US,FL,Bradford,Bradford,America/New_York
 US,FL,Braemar,Braemar,America/New_York
 US,FL,Branch Haven,Branch Haven,America/New_York
 US,FL,Branda Vista,Branda Vista,America/New_York
 US,FL,Abbey Trace,Abbey Trace,America/New_York
 US,FL,Aberdeen On Glen,Aberdeen On Glen,America/New_York
 US,FL,Ad Mer,Ad Mer,America/New_York
 US,FL,Al Mar,Al Mar,America/New_York
 US,FL,Alabama,Alabama,America/New_York
 US,FL,Alafia Shores,Alafia Shores,America/New_York
 US,FL,Alameda,Alameda,America/New_York
 US,FL,Alavista,Alavista,America/New_York
 US,FL,Albion,Albion,America/New_York
 US,FL,Alderman,Alderman,America/New_York
 US,FL,Alderman-Carlton Ranchettes,Alderman-Carlton Ranchettes,America/New_York
 US,FL,Aldermans Addition,Aldermans Addition,America/New_York
 US,FL,Alfredo Trujillo,Alfredo Trujillo,America/New_York
 US,FL,All Bright Shores,All Bright Shores,America/New_York
 US,FL,Alldredge,Alldredge,America/New_York
 US,FL,Allen Peacock,Allen Peacock,America/New_York
 US,FL,Allendale,Allendale,America/New_York
 US,FL,Allens,Allens,America/New_York
 US,FL,Alligator Bobs,Alligator Bobs,America/New_York
 US,FL,Almima,Almima,America/New_York
 US,FL,Alpine,Alpine,America/New_York
 US,FL,Alta Vista,Alta Vista,America/New_York
 US,FL,Alta Vista Tracts,Alta Vista Tracts,America/New_York
 US,FL,Altos Verdes,Altos Verdes,America/New_York
 US,FL,Amanda,Amanda,America/New_York
 US,FL,Amber Sweet Farms,Amber Sweet Farms,America/New_York
 US,FL,Amelia,Amelia,America/New_York
 US,FL,Americana,Americana,America/New_York
 US,AR,Lewisville,Lewisville,America/Chicago
 US,AR,Liberty,Liberty,America/Chicago
 US,AR,Light,Light,America/Chicago
 US,AR,Limedale,Limedale,America/Chicago
 US,AR,Lincoln,Lincoln,America/Chicago
 US,AR,Lincoln County,Lincoln County,America/Chicago
 US,AR,Linder,Linder,America/Chicago
 US,AR,Limestone,Limestone,America/Chicago
 US,AR,Lindsey,Lindsey,America/Chicago
 US,AR,Lindulake Addition,Lindulake Addition,America/Chicago
 US,AR,Linwood,Linwood,America/Chicago
 US,AR,Lisbon,Lisbon,America/Chicago
 US,AR,Little Dixie,Little Dixie,America/Chicago
 US,AR,Little Flock,Little Flock,America/Chicago
 US,AR,Little Garnett,Little Garnett,America/Chicago
 US,AR,Little Italy,Little Italy,America/Chicago
 US,AR,Little Texas,Little Texas,America/Chicago
 US,AR,Lloyd,Lloyd,America/Chicago
 US,AR,Loafer,Loafer,America/Chicago
 US,AR,Locke,Locke,America/Chicago
 US,AR,Lockesburg,Lockesburg,America/Chicago
 US,AR,Lockheart,Lockheart,America/Chicago
 US,AR,Lofton,Lofton,America/Chicago
 US,AR,Logan County,Logan County,America/Chicago
 US,AR,Logan,Logan,America/Chicago
 US,AR,Lollie,Lollie,America/Chicago
 US,AR,London,London,America/Chicago
 US,AR,Lone Elm,Lone Elm,America/Chicago
 US,AR,Lone Pine,Lone Pine,America/Chicago
 US,AR,Lone Star,Lone Star,America/Chicago
 US,AR,Long,Long,America/Chicago
 US,AR,Longino,Longino,America/Chicago
 US,AR,Longview,Longview,America/Chicago
 US,AR,Longwill,Longwill,America/Chicago
 US,AR,Lono,Lono,America/Chicago
 US,AR,Lonoke County,Lonoke County,America/Chicago
 US,AR,Lookout,Lookout,America/Chicago
 US,AR,Lorado,Lorado,America/Chicago
 US,AR,Lorays,Lorays,America/Chicago
 US,AR,Lorine,Lorine,America/Chicago
 US,AR,Lost Cane,Lost Cane,America/Chicago
 US,AR,Louise,Louise,America/Chicago
 US,AR,Lowell,Lowell,America/Chicago
 US,AR,Lower Boydsville,Lower Boydsville,America/Chicago
 US,AR,Lowden,Lowden,America/Chicago
 US,AR,Lowry,Lowry,America/Chicago
 US,AR,Loy,Loy,America/Chicago
 US,AR,Luber,Luber,America/Chicago
 US,AR,Lucas,Lucas,America/Chicago
 US,AR,Lucerne,Lucerne,America/Chicago
 US,AR,Ludwig,Ludwig,America/Chicago
 US,AR,Lumber,Lumber,America/Chicago
 US,AR,Luna,Luna,America/Chicago
 US,AR,Lundell,Lundell,America/Chicago
 US,AR,Lunenburg,Lunenburg,America/Chicago
 US,AR,Lunet,Lunet,America/Chicago
 US,FL,Apopka,Apopka,America/New_York
 US,FL,Aqui Esta,Aqui Esta,America/New_York
 US,FL,Araquey,Araquey,America/New_York
 US,FL,Arcadia,Arcadia,America/New_York
 US,FL,Archbold,Archbold,America/New_York
 US,FL,Argyle,Argyle,America/Chicago
 US,FL,Ariel,Ariel,America/New_York
 US,FL,Aripeka,Aripeka,America/New_York
 US,FL,Armstrong,Armstrong,America/New_York
 US,FL,Arno,Arno,America/New_York
 US,FL,Arran,Arran,America/New_York
 US,FL,Arrant Settlement,Arrant Settlement,America/Chicago
 US,FL,Arredondo,Arredondo,America/New_York
 US,FL,Arredondo Grant,Arredondo Grant,America/New_York
 US,FL,Arundel,Arundel,America/New_York
 US,FL,Ashmore,Ashmore,America/New_York
 US,FL,Ashton,Ashton,America/New_York
 US,FL,Ashville,Ashville,America/New_York
 US,FL,Astatula,Astatula,America/New_York
 US,FL,Astor,Astor,America/New_York
 US,FL,Astor Farms,Astor Farms,America/New_York
 US,FL,Athena,Athena,America/New_York
 US,FL,Atlantis,Atlantis,America/New_York
 US,FL,Auburn,Auburn,America/Chicago
 US,FL,Auburndale,Auburndale,America/New_York
 US,FL,Aucilla,Aucilla,America/New_York
 US,FL,Audubon,Audubon,America/New_York
 US,FL,Aurantia,Aurantia,America/New_York
 US,FL,Ave Maria,Ave Maria,America/New_York
 US,FL,Aventura,Aventura,America/New_York
 US,FL,Avoca,Avoca,America/New_York
 US,FL,Ayers,Ayers,America/New_York
 US,FL,Bagdad,Bagdad,America/Chicago
 US,FL,Bahia Shores,Bahia Shores,America/New_York
 US,FL,Bahia Subdivision,Bahia Subdivision,America/New_York
 US,FL,Bahoma,Bahoma,America/Chicago
 US,FL,Bailey,Bailey,America/New_York
 US,FL,Baird,Baird,America/New_York
 US,FL,Bairs Den,Bairs Den,America/New_York
 US,FL,Baker,Baker,America/Chicago
 US,FL,Baker County,Baker County,America/New_York
 US,FL,Baker Settlement,Baker Settlement,America/Chicago
 US,FL,Bakerstown,Bakerstown,America/New_York
 US,FL,Bakersville,Bakersville,America/New_York
 US,FL,Baldwin,Baldwin,America/New_York
 US,FL,Ballard Pines,Ballard Pines,America/New_York
 US,FL,Ballentine Manor,Ballentine Manor,America/New_York
 US,FL,Balm,Balm,America/New_York
 US,FL,Bamboo,Bamboo,America/New_York
 US,FL,Barber Quarters,Barber Quarters,America/New_York
 US,FL,Barberville,Barberville,America/New_York
 US,FL,Barcola,Barcola,America/New_York
 US,FL,Barth,Barth,America/Chicago
 US,FL,Bartolomeo De Castro Y Ferro Grant,Bartolomeo De Castro Y Ferro Grant,America/New_York
 US,AR,Lunsford,Lunsford,America/Chicago
 US,AR,Lurton,Lurton,America/Chicago
 US,AR,Lutherville,Lutherville,America/Chicago
 US,AR,Luxora,Luxora,America/Chicago
 US,AR,Lydalisk,Lydalisk,America/Chicago
 US,AR,Lydesdale,Lydesdale,America/Chicago
 US,AR,Mabelvale,Mabelvale,America/Chicago
 US,AR,Maberry,Maberry,America/Chicago
 US,AR,Macedonia,Macedonia,America/Chicago
 US,AR,Macey,Macey,America/Chicago
 US,AR,Macks,Macks,America/Chicago
 US,AR,Macon,Macon,America/Chicago
 US,AR,Madding,Madding,America/Chicago
 US,AR,Maddox,Maddox,America/Chicago
 US,AR,Madison,Madison,America/Chicago
 US,AR,Madison County,Madison County,America/Chicago
 US,AR,Majors,Majors,America/Chicago
 US,AR,Mandeville,Mandeville,America/Chicago
 US,AR,Manfred,Manfred,America/Chicago
 US,AR,Mangrum,Mangrum,America/Chicago
 US,AR,Manila,Manila,America/Chicago
 US,AR,Manning,Manning,America/Chicago
 US,AR,Mannstown,Mannstown,America/Chicago
 US,AR,Mansfield,Mansfield,America/Chicago
 US,AR,Manson,Manson,America/Chicago
 US,AR,Maple,Maple,America/Chicago
 US,AR,Marble,Marble,America/Chicago
 US,AR,Marcella,Marcella,America/Chicago
 US,AR,Marche,Marche,America/Chicago
 US,AR,Marion,Marion,America/Chicago
 US,AR,Marion County,Marion County,America/Chicago
 US,AR,Marmaduke,Marmaduke,America/Chicago
 US,AR,Marsden,Marsden,America/Chicago
 US,AR,Marsena,Marsena,America/Chicago
 US,AR,Marshall,Marshall,America/Chicago
 US,AR,Martin,Martin,America/Chicago
 US,AR,Martin Box,Martin Box,America/Chicago
 US,AR,Martindale,Martindale,America/Chicago
 US,AR,Martinville,Martinville,America/Chicago
 US,AR,Marvell,Marvell,America/Chicago
 US,AR,Marvinville,Marvinville,America/Chicago
 US,AR,Marysville,Marysville,America/Chicago
 US,AR,Masonville,Masonville,America/Chicago
 US,AR,Massard,Massard,America/Chicago
 US,AR,Mauldin,Mauldin,America/Chicago
 US,AR,Maumee,Maumee,America/Chicago
 US,AR,Maumelle,Maumelle,America/Chicago
 US,AR,Maxville,Maxville,America/Chicago
 US,AR,Mayfield,Mayfield,America/Chicago
 US,AR,Mayflower,Mayflower,America/Chicago
 US,AR,Mayos,Mayos,America/Chicago
 US,AR,Maysville,Maysville,America/Chicago
 US,AR,Mayton,Mayton,America/Chicago
 US,AR,Mayview,Mayview,America/Chicago
 US,AR,Mazarn,Mazarn,America/Chicago
 US,AR,Mcalmont,Mcalmont,America/Chicago
 US,FL,Bartow,Bartow,America/New_York
 US,FL,Barwal,Barwal,America/New_York
 US,FL,Bascom,Bascom,America/Chicago
 US,FL,Basinger,Basinger,America/New_York
 US,FL,Baskin,Baskin,America/New_York
 US,FL,Bass,Bass,America/New_York
 US,FL,Bass Haven,Bass Haven,America/New_York
 US,FL,Battle Ground Forks,Battle Ground Forks,America/Chicago
 US,FL,Baxter,Baxter,America/New_York
 US,FL,Baum,Baum,America/New_York
 US,FL,Bay City,Bay City,America/New_York
 US,FL,Bay County,Bay County,America/Chicago
 US,FL,Bay Pines,Bay Pines,America/New_York
 US,FL,Bayard,Bayard,America/New_York
 US,FL,Bayhead,Bayhead,America/Chicago
 US,FL,Bayshore,Bayshore,America/New_York
 US,FL,Bayshore Manor,Bayshore Manor,America/New_York
 US,FL,Bayview,Bayview,America/Chicago
 US,FL,Bayport,Bayport,America/New_York
 US,FL,Bayway,Bayway,America/New_York
 US,FL,Beach Haven,Beach Haven,America/Chicago
 US,FL,Beach Highlands,Beach Highlands,America/Chicago
 US,FL,Beachville,Beachville,America/New_York
 US,FL,Bean City,Bean City,America/New_York
 US,FL,Bealsville,Bealsville,America/New_York
 US,FL,Beauclerc,Beauclerc,America/New_York
 US,FL,Beck Hammock,Beck Hammock,America/New_York
 US,FL,Becker,Becker,America/New_York
 US,FL,Beckhamtown,Beckhamtown,America/New_York
 US,FL,Beechwood,Beechwood,America/New_York
 US,FL,Bel Marra,Bel Marra,America/New_York
 US,FL,Bel-Air,Bel-Air,America/New_York
 US,FL,Belair,Belair,America/New_York
 US,FL,Belandville,Belandville,America/Chicago
 US,FL,Bell,Bell,America/New_York
 US,FL,Bellair,Bellair,America/New_York
 US,FL,Belle Glade,Belle Glade,America/New_York
 US,FL,Belle Isle,Belle Isle,America/New_York
 US,FL,Belle Meade,Belle Meade,America/New_York
 US,FL,Belleair,Belleair,America/New_York
 US,FL,Belleair Bluffs,Belleair Bluffs,America/New_York
 US,FL,Belleair Shores,Belleair Shores,America/New_York
 US,FL,Belleview,Belleview,America/New_York
 US,FL,Bellview,Bellview,America/Chicago
 US,FL,Bellville,Bellville,America/New_York
 US,FL,Bellwood,Bellwood,America/New_York
 US,FL,Belmore,Belmore,America/New_York
 US,FL,Belspur,Belspur,America/New_York
 US,FL,Belton A Copp Grant,Belton A Copp Grant,America/New_York
 US,FL,Benbow,Benbow,America/New_York
 US,FL,Bennett,Bennett,America/Chicago
 US,FL,Benton,Benton,America/New_York
 US,FL,Bereah,Bereah,America/New_York
 US,FL,Beresford,Beresford,America/New_York
 US,AR,Mcarthur,Mcarthur,America/Chicago
 US,AR,Mccauley,Mccauley,America/Chicago
 US,AR,Mcclaren,Mcclaren,America/Chicago
 US,AR,Mcclelland,Mcclelland,America/Chicago
 US,AR,Mccormick,Mccormick,America/Chicago
 US,AR,Mccreanor,Mccreanor,America/Chicago
 US,AR,Mccrory,Mccrory,America/Chicago
 US,AR,Mcdaniel,Mcdaniel,America/Chicago
 US,AR,Mcdonald,Mcdonald,America/Chicago
 US,AR,Mcdermott Addition,Mcdermott Addition,America/Chicago
 US,AR,Mcfadden,Mcfadden,America/Chicago
 US,AR,Mcelroy,Mcelroy,America/Chicago
 US,AR,Mcferrin,Mcferrin,America/Chicago
 US,AR,Mcgehee,Mcgehee,America/Chicago
 US,AR,Mcgintytown,Mcgintytown,America/Chicago
 US,AR,Mcgregor,Mcgregor,America/Chicago
 US,AR,Mchue,Mchue,America/Chicago
 US,AR,Mcjester,Mcjester,America/Chicago
 US,AR,Mckamie,Mckamie,America/Chicago
 US,AR,Mckinney,Mckinney,America/Chicago
 US,AR,Mcnair,Mcnair,America/Chicago
 US,AR,Mcneil,Mcneil,America/Chicago
 US,AR,Mcrae,Mcrae,America/Chicago
 US,AR,Mcphearson,Mcphearson,America/Chicago
 US,AR,Meadowcliff,Meadowcliff,America/Chicago
 US,AR,Meadows,Meadows,America/Chicago
 US,AR,Medina,Medina,America/Chicago
 US,AR,Medlock,Medlock,America/Chicago
 US,AR,Meeks Settlement,Meeks Settlement,America/Chicago
 US,AR,Meg,Meg,America/Chicago
 US,AR,Melbourne,Melbourne,America/Chicago
 US,AR,Mellwood,Mellwood,America/Chicago
 US,AR,Melrose,Melrose,America/Chicago
 US,AR,Mena,Mena,America/Chicago
 US,AR,Mendenhall,Mendenhall,America/Chicago
 US,AR,Meneshea,Meneshea,America/Chicago
 US,AR,Meridian,Meridian,America/Chicago
 US,AR,Meroney,Meroney,America/Chicago
 US,AR,Mersman,Mersman,America/Chicago
 US,AR,Mesa,Mesa,America/Chicago
 US,AR,Meto,Meto,America/Chicago
 US,AR,Meyers,Meyers,America/Chicago
 US,AR,Mickles,Mickles,America/Chicago
 US,AR,Middlebrook,Middlebrook,America/Chicago
 US,AR,Middleton,Middleton,America/Chicago
 US,AR,Milford,Milford,America/Chicago
 US,AR,Miller,Miller,America/Chicago
 US,AR,Miller County,Miller County,America/Chicago
 US,AR,Millers,Millers,America/Chicago
 US,AR,Millerville,Millerville,America/Chicago
 US,AR,Mills,Mills,America/Chicago
 US,AR,Milltown,Milltown,America/Chicago
 US,AR,Millville,Millville,America/Chicago
 US,AR,Milrose,Milrose,America/Chicago
 US,AR,Mimosa,Mimosa,America/Chicago
 US,FL,Berkeley,Berkeley,America/New_York
 US,FL,Bermont,Bermont,America/New_York
 US,FL,Bernardo Segui Grant,Bernardo Segui Grant,America/New_York
 US,FL,Berry,Berry,America/New_York
 US,FL,Berrydale,Berrydale,America/Chicago
 US,FL,Bertha,Bertha,America/New_York
 US,FL,Bessemer,Bessemer,America/New_York
 US,FL,Bessent,Bessent,America/New_York
 US,FL,Bethany,Bethany,America/New_York
 US,FL,Bethel,Bethel,America/New_York
 US,FL,Bethlehem,Bethlehem,America/Chicago
 US,FL,Betts,Betts,America/Chicago
 US,FL,Bevens,Bevens,America/New_York
 US,FL,Beverly,Beverly,America/New_York
 US,FL,Bid-A-Wee,Bid-A-Wee,America/Chicago
 US,FL,Big Hammock,Big Hammock,America/Chicago
 US,FL,Big Pine,Big Pine,America/New_York
 US,FL,Big Scrub,Big Scrub,America/New_York
 US,FL,Biggar,Biggar,America/New_York
 US,FL,Biltmore,Biltmore,America/New_York
 US,FL,Bimini,Bimini,America/New_York
 US,FL,Birch Ocean Front,Birch Ocean Front,America/New_York
 US,FL,Biscayne Village,Biscayne Village,America/New_York
 US,FL,Bithlo,Bithlo,America/New_York
 US,FL,Black Diamond,Black Diamond,America/New_York
 US,FL,Black Hammock,Black Hammock,America/New_York
 US,FL,Blacks Still,Blacks Still,America/New_York
 US,FL,Blackman,Blackman,America/Chicago
 US,FL,Blake,Blake,America/New_York
 US,FL,Bland,Bland,America/New_York
 US,FL,Blanton,Blanton,America/New_York
 US,FL,Blitchton,Blitchton,America/New_York
 US,FL,Blitchville,Blitchville,America/New_York
 US,FL,Bloomingdale,Bloomingdale,America/New_York
 US,FL,Bloxham,Bloxham,America/New_York
 US,FL,Blountstown,Blountstown,America/Chicago
 US,FL,Blue Heron Pines,Blue Heron Pines,America/New_York
 US,FL,Bluefield,Bluefield,America/New_York
 US,FL,Bluffton,Bluffton,America/New_York
 US,FL,Boca Ciega,Boca Ciega,America/New_York
 US,FL,Boca Grande,Boca Grande,America/New_York
 US,FL,Boca Raton,Boca Raton,America/New_York
 US,FL,Boden,Boden,America/New_York
 US,FL,Boardman,Boardman,America/New_York
 US,FL,Bogia,Bogia,America/Chicago
 US,FL,Bohemia,Bohemia,America/Chicago
 US,FL,Bokeelia,Bokeelia,America/New_York
 US,FL,Bon Terra,Bon Terra,America/New_York
 US,FL,Bonaventure,Bonaventure,America/New_York
 US,FL,Bon Ami,Bon Ami,America/New_York
 US,FL,Bonifay,Bonifay,America/Chicago
 US,FL,Bonita Shores,Bonita Shores,America/New_York
 US,FL,Bonnie,Bonnie,America/New_York
 US,FL,Bonnie Loch,Bonnie Loch,America/New_York
 US,AR,Millwood,Millwood,America/Chicago
 US,AR,Mineola,Mineola,America/Chicago
 US,AR,Mineral,Mineral,America/Chicago
 US,AR,Minorca,Minorca,America/Chicago
 US,AR,Mississippi County,Mississippi County,America/Chicago
 US,AR,Mist,Mist,America/Chicago
 US,AR,Mitchell,Mitchell,America/Chicago
 US,AR,Mitchellville,Mitchellville,America/Chicago
 US,AR,Mixon,Mixon,America/Chicago
 US,AR,Moark,Moark,America/Chicago
 US,AR,Modoc,Modoc,America/Chicago
 US,AR,Mohawk,Mohawk,America/Chicago
 US,AR,Moko,Moko,America/Chicago
 US,AR,Monette,Monette,America/Chicago
 US,AR,Monica,Monica,America/Chicago
 US,AR,Monarch,Monarch,America/Chicago
 US,AR,Monroe,Monroe,America/Chicago
 US,AR,Monroe County,Monroe County,America/Chicago
 US,AR,Montana,Montana,America/Chicago
 US,AR,Monte Ne,Monte Ne,America/Chicago
 US,AR,Monte Ne Shores,Monte Ne Shores,America/Chicago
 US,AR,Monterey,Monterey,America/Chicago
 US,AR,Montgomery County,Montgomery County,America/Chicago
 US,AR,Monticello,Monticello,America/Chicago
 US,AR,Montongo,Montongo,America/Chicago
 US,AR,Montreal,Montreal,America/Chicago
 US,AR,Montrose,Montrose,America/Chicago
 US,AR,Moore,Moore,America/Chicago
 US,AR,Moran,Moran,America/Chicago
 US,AR,Moreland,Moreland,America/Chicago
 US,AR,Morgan,Morgan,America/Chicago
 US,AR,Morganton,Morganton,America/Chicago
 US,AR,Morning Star,Morning Star,America/Chicago
 US,AR,Morning Sun,Morning Sun,America/Chicago
 US,AR,Morris,Morris,America/Chicago
 US,AR,Morriston,Morriston,America/Chicago
 US,AR,Morrow,Morrow,America/Chicago
 US,AR,Morton,Morton,America/Chicago
 US,AR,Moscow,Moscow,America/Chicago
 US,AR,Mosley,Mosley,America/Chicago
 US,AR,Mossville,Mossville,America/Chicago
 US,AR,Mound City,Mound City,America/Chicago
 US,AR,Mounds,Mounds,America/Chicago
 US,AR,Mozart,Mozart,America/Chicago
 US,AR,Muir,Muir,America/Chicago
 US,AR,Mulberry,Mulberry,America/Chicago
 US,AR,Mull,Mull,America/Chicago
 US,AR,Mulligan,Mulligan,America/Chicago
 US,AR,Murfreesboro,Murfreesboro,America/Chicago
 US,AR,Murray,Murray,America/Chicago
 US,AR,Murta,Murta,America/Chicago
 US,AR,Myersville,Myersville,America/Chicago
 US,AR,Myron,Myron,America/Chicago
 US,AR,Myrtle,Myrtle,America/Chicago
 US,AR,Nail,Nail,America/Chicago
 US,AR,Nalle,Nalle,America/Chicago
 US,FL,Bookertown,Bookertown,America/New_York
 US,FL,Bostwick,Bostwick,America/New_York
 US,FL,Boulogne,Boulogne,America/New_York
 US,FL,Bowden,Bowden,America/New_York
 US,FL,Boyd,Boyd,America/New_York
 US,FL,Bradenton,Bradenton,America/New_York
 US,FL,Bradfordville,Bradfordville,America/New_York
 US,FL,Bradford County,Bradford County,America/New_York
 US,FL,Branchton,Branchton,America/New_York
 US,FL,Branchville,Branchville,America/New_York
 US,FL,Brandon,Brandon,America/New_York
 US,FL,Branchborough,Branchborough,America/New_York
 US,FL,Branford,Branford,America/New_York
 US,FL,Bratt,Bratt,America/Chicago
 US,FL,Brannonville,Brannonville,America/Chicago
 US,FL,Brent,Brent,America/Chicago
 US,FL,Brevard County,Brevard County,America/New_York
 US,FL,Brickell Hammock,Brickell Hammock,America/New_York
 US,FL,Brickton,Brickton,America/Chicago
 US,FL,Brickyard,Brickyard,America/Chicago
 US,FL,Bridgeport,Bridgeport,America/New_York
 US,FL,Bridges,Bridges,America/New_York
 US,FL,Briggs And Robertson Grant,Briggs And Robertson Grant,America/New_York
 US,FL,Brighton,Brighton,America/New_York
 US,FL,Brightsville,Brightsville,America/New_York
 US,FL,Briny Breezes,Briny Breezes,America/New_York
 US,FL,Bristol,Bristol,America/New_York
 US,FL,Broadwater,Broadwater,America/New_York
 US,FL,Brock Crossroad,Brock Crossroad,America/Chicago
 US,FL,Bronson,Bronson,America/New_York
 US,FL,Brooker,Brooker,America/New_York
 US,FL,Brooklyn,Brooklyn,America/New_York
 US,FL,Brookridge,Brookridge,America/New_York
 US,FL,Brookside,Brookside,America/New_York
 US,FL,Brooksville,Brooksville,America/New_York
 US,FL,Broscan,Broscan,America/New_York
 US,FL,Broward County,Broward County,America/New_York
 US,FL,Broward Highlands,Broward Highlands,America/New_York
 US,FL,Browardale,Browardale,America/New_York
 US,FL,Brown,Brown,America/New_York
 US,FL,Browns Still,Browns Still,America/New_York
 US,FL,Brownsdale,Brownsdale,America/Chicago
 US,FL,Brownsville,Brownsville,America/Chicago
 US,FL,Browntown,Browntown,America/Chicago
 US,FL,Brownville,Brownville,America/New_York
 US,FL,Broxson,Broxson,America/Chicago
 US,FL,Bruce,Bruce,America/Chicago
 US,FL,Bruceville,Bruceville,America/New_York
 US,FL,Bruing,Bruing,America/New_York
 US,FL,Bryant,Bryant,America/New_York
 US,FL,Bryceville,Bryceville,America/New_York
 US,FL,Buchanan,Buchanan,America/New_York
 US,AR,Nance,Nance,America/Chicago
 US,AR,Nasco,Nasco,America/Chicago
 US,AR,Nashville,Nashville,America/Chicago
 US,AR,Nathan,Nathan,America/Chicago
 US,AR,Natural Steps,Natural Steps,America/Chicago
 US,AR,Naylor,Naylor,America/Chicago
 US,AR,Nebo,Nebo,America/Chicago
 US,AR,Needham,Needham,America/Chicago
 US,AR,Needmore,Needmore,America/Chicago
 US,AR,Nella,Nella,America/Chicago
 US,AR,Nelsonville,Nelsonville,America/Chicago
 US,AR,Nemo,Nemo,America/Chicago
 US,AR,Nettleton,Nettleton,America/Chicago
 US,AR,Neuhardt,Neuhardt,America/Chicago
 US,AR,Nevada County,Nevada County,America/Chicago
 US,AR,Nevark,Nevark,America/Chicago
 US,AR,New Augusta,New Augusta,America/Chicago
 US,AR,New Blaine,New Blaine,America/Chicago
 US,AR,New Caledonia,New Caledonia,America/Chicago
 US,AR,New Dixie,New Dixie,America/Chicago
 US,AR,New Edinburg,New Edinburg,America/Chicago
 US,AR,New Gascony,New Gascony,America/Chicago
 US,AR,New Haroldton,New Haroldton,America/Chicago
 US,AR,New Jenny Lind,New Jenny Lind,America/Chicago
 US,AR,New Liberty,New Liberty,America/Chicago
 US,AR,New London,New London,America/Chicago
 US,AR,New Neely,New Neely,America/Chicago
 US,AR,New Salem,New Salem,America/Chicago
 US,AR,New Spadra,New Spadra,America/Chicago
 US,AR,New Town,New Town,America/Chicago
 US,AR,New Union,New Union,America/Chicago
 US,AR,Newark,Newark,America/Chicago
 US,AR,Newburg,Newburg,America/Chicago
 US,AR,Newcastle,Newcastle,America/Chicago
 US,AR,Newell,Newell,America/Chicago
 US,AR,Newnata,Newnata,America/Chicago
 US,AR,Newhope,Newhope,America/Chicago
 US,AR,Newton County,Newton County,America/Chicago
 US,AR,Newtown,Newtown,America/Chicago
 US,AR,Nimmo,Nimmo,America/Chicago
 US,AR,Nimrod,Nimrod,America/Chicago
 US,AR,Noahs,Noahs,America/Chicago
 US,AR,Nodena,Nodena,America/Chicago
 US,AR,Nogal,Nogal,America/Chicago
 US,AR,Nogo,Nogo,America/Chicago
 US,AR,Noland,Noland,America/Chicago
 US,AR,Norden,Norden,America/Chicago
 US,AR,Norfork,Norfork,America/Chicago
 US,AR,Norfork Village,Norfork Village,America/Chicago
 US,AR,Nola,Nola,America/Chicago
 US,AR,Norphlet,Norphlet,America/Chicago
 US,AR,North Bingen,North Bingen,America/Chicago
 US,AR,North Crossett,North Crossett,America/Chicago
 US,AR,North Dardanelle,North Dardanelle,America/Chicago
 US,FL,Buckville,Buckville,America/New_York
 US,FL,Buda,Buda,America/New_York
 US,FL,Buena Vista,Buena Vista,America/Chicago
 US,FL,Bunker,Bunker,America/Chicago
 US,FL,Bunker Donation,Bunker Donation,America/Chicago
 US,FL,Bunnell,Bunnell,America/New_York
 US,FL,Burbank,Burbank,America/New_York
 US,FL,Bushnell,Bushnell,America/New_York
 US,FL,Byrd,Byrd,America/New_York
 US,FL,Byrneville,Byrneville,America/Chicago
 US,FL,C E Mchardy Grant,C E Mchardy Grant,America/New_York
 US,FL,C W Bulow Grant,C W Bulow Grant,America/New_York
 US,FL,C W Clarke Grant,C W Clarke Grant,America/New_York
 US,FL,Cadillac,Cadillac,America/New_York
 US,FL,Cairo,Cairo,America/Chicago
 US,FL,Caleb,Caleb,America/New_York
 US,FL,Calhoun County,Calhoun County,America/Chicago
 US,FL,Callahan,Callahan,America/New_York
 US,FL,Callaway,Callaway,America/Chicago
 US,FL,Calphos,Calphos,America/New_York
 US,FL,Cambon,Cambon,America/New_York
 US,FL,Cameron City,Cameron City,America/New_York
 US,FL,Camp Echockotee,Camp Echockotee,America/New_York
 US,FL,Camp Ocala,Camp Ocala,America/New_York
 US,FL,Camp Roosevelt,Camp Roosevelt,America/New_York
 US,FL,Campbell,Campbell,America/New_York
 US,FL,Camps,Camps,America/New_York
 US,FL,Camps Still,Camps Still,America/New_York
 US,FL,Campton,Campton,America/Chicago
 US,FL,Campville,Campville,America/New_York
 US,FL,Cana,Cana,America/New_York
 US,FL,Canaan,Canaan,America/New_York
 US,FL,Candler,Candler,America/New_York
 US,FL,Campbellton,Campbellton,America/Chicago
 US,FL,Cannon Town,Cannon Town,America/Chicago
 US,FL,Cape Canaveral,Cape Canaveral,America/New_York
 US,FL,Cape Coral,Cape Coral,America/New_York
 US,FL,Cape Haze,Cape Haze,America/New_York
 US,FL,Capitola,Capitola,America/New_York
 US,FL,Capps,Capps,America/New_York
 US,FL,Captiva,Captiva,America/New_York
 US,FL,Cara,Cara,America/New_York
 US,FL,Carbur,Carbur,America/New_York
 US,FL,Cardwell,Cardwell,America/New_York
 US,FL,Carlson,Carlson,America/New_York
 US,FL,Carlton,Carlton,America/New_York
 US,FL,Carlton Village,Carlton Village,America/New_York
 US,FL,Carnestown,Carnestown,America/New_York
 US,FL,Carol City,Carol City,America/New_York
 US,FL,Carrabelle,Carrabelle,America/New_York
 US,FL,Carraway,Carraway,America/New_York
 US,FL,Carrollwood,Carrollwood,America/New_York
 US,FL,Carrollwood Village,Carrollwood Village,America/New_York
 US,FL,Carver,Carver,America/New_York
 US,FL,Carver Manor,Carver Manor,America/New_York
 US,FL,Carver Ranches,Carver Ranches,America/New_York
 US,FL,Carver Village,Carver Village,America/New_York
 US,FL,Cary,Cary,America/New_York
 US,FL,Caryville,Caryville,America/Chicago
 US,FL,Casa Blanco,Casa Blanco,America/New_York
 US,FL,Casa Cola,Casa Cola,America/New_York
 US,FL,Cassadaga,Cassadaga,America/New_York
 US,FL,Casselberry,Casselberry,America/New_York
 US,FL,Cassia,Cassia,America/New_York
 US,FL,Catawba,Catawba,America/New_York
 US,FL,Cayo Costa,Cayo Costa,America/New_York
 US,FL,Cayo Pelau,Cayo Pelau,America/New_York
 US,FL,Caxambas,Caxambas,America/New_York
 US,FL,Cedar Hammock,Cedar Hammock,America/New_York
 US,FL,Celebration,Celebration,America/New_York
 US,FL,Celestino Gonzalez Grant,Celestino Gonzalez Grant,America/Chicago
 US,FL,Centerville,Centerville,America/New_York
 US,FL,Central City,Central City,America/New_York
 US,FL,Century,Century,America/Chicago
 US,FL,Cerrogordo,Cerrogordo,America/Chicago
 US,FL,Chain O'Lakes,Chain O'Lakes,America/New_York
 US,FL,Chaires,Chaires,America/New_York
 US,FL,Championsgate,Championsgate,America/New_York
 US,FL,Chancey,Chancey,America/New_York
 US,FL,Chanticleer,Chanticleer,America/Chicago
 US,FL,Chapman,Chapman,America/New_York
 US,FL,Charles Beeler Grant,Charles Beeler Grant,America/Chicago
 US,FL,Charles Broward Grant,Charles Broward Grant,America/New_York
 US,FL,Charles De Viller Grant,Charles De Viller Grant,America/Chicago
 US,FL,Charles F Sibbald Grant,Charles F Sibbald Grant,America/Kentucky/Monticello
 US,FL,Charles Seton Grant,Charles Seton Grant,America/New_York
 US,FL,Charles Sibbold Grant,Charles Sibbold Grant,America/New_York
 US,FL,Charles W Clarke Grant,Charles W Clarke Grant,America/New_York
 US,FL,Charles And George Clarke Grant,Charles And George Clarke Grant,America/New_York
 US,FL,Charlotte County,Charlotte County,America/New_York
 US,FL,Chaseville,Chaseville,America/New_York
 US,FL,Chason,Chason,America/Chicago
 US,FL,Chassahowitzka,Chassahowitzka,America/New_York
 US,FL,Chatham,Chatham,America/New_York
 US,FL,Chattahoochee,Chattahoochee,America/New_York
 US,FL,Chatmire,Chatmire,America/New_York
 US,FL,Chester,Chester,America/New_York
 US,FL,Cheval,Cheval,America/New_York
 US,FL,Chiefland,Chiefland,America/New_York
 US,FL,Childs,Childs,America/New_York
 US,FL,Chipley,Chipley,America/Chicago
 US,FL,Chipola,Chipola,America/Chicago
 US,AR,North Fordyce,North Fordyce,America/Chicago
 US,AR,North Hughes,North Hughes,America/Chicago
 US,AR,North Lexa,North Lexa,America/Chicago
 US,AR,North Stuttgart,North Stuttgart,America/Chicago
 US,AR,Northview Subdivision,Northview Subdivision,America/Chicago
 US,AR,Northern Ohio,Northern Ohio,America/Chicago
 US,AR,Norvell,Norvell,America/Chicago
 US,AR,Norwood,Norwood,America/Chicago
 US,AR,Norwoodville,Norwoodville,America/Chicago
 US,AR,Noxobe,Noxobe,America/Chicago
 US,AR,Nuckles,Nuckles,America/Chicago
 US,AR,Noxburn,Noxburn,America/Chicago
 US,AR,Nugulf,Nugulf,America/Chicago
 US,AR,Nutts,Nutts,America/Chicago
 US,AR,Nunley,Nunley,America/Chicago
 US,AR,O'Neal,O'Neal,America/Chicago
 US,AR,Oak Bower,Oak Bower,America/Chicago
 US,AR,Oakgrove,Oakgrove,America/Chicago
 US,AR,Oakland,Oakland,America/Chicago
 US,AR,Oaklawn,Oaklawn,America/Chicago
 US,AR,Oakwood,Oakwood,America/Chicago
 US,AR,Oark,Oark,America/Chicago
 US,AR,Odell,Odell,America/Chicago
 US,AR,Ogden,Ogden,America/Chicago
 US,AR,Ogemaw,Ogemaw,America/Chicago
 US,AR,Okay,Okay,America/Chicago
 US,AR,Ola,Ola,America/Chicago
 US,AR,Old Alabam,Old Alabam,America/Chicago
 US,AR,Old Austin,Old Austin,America/Chicago
 US,AR,Old Botkinburg,Old Botkinburg,America/Chicago
 US,AR,Old Buffalo,Old Buffalo,America/Chicago
 US,AR,Old Bonnerdale,Old Bonnerdale,America/Chicago
 US,AR,Old De Roche,Old De Roche,America/Chicago
 US,AR,Old Hickory,Old Hickory,America/Chicago
 US,AR,Old Grand Glaise,Old Grand Glaise,America/Chicago
 US,AR,Old Jenny Lind,Old Jenny Lind,America/Chicago
 US,AR,Old Joe,Old Joe,America/Chicago
 US,AR,Old Lapile,Old Lapile,America/Chicago
 US,AR,Old Lexington,Old Lexington,America/Chicago
 US,AR,Old Milo,Old Milo,America/Chicago
 US,AR,Old Neely,Old Neely,America/Chicago
 US,AR,Old Reyno,Old Reyno,America/Chicago
 US,AR,Old Siloam,Old Siloam,America/Chicago
 US,AR,Old Texas,Old Texas,America/Chicago
 US,AR,Old Town,Old Town,America/Chicago
 US,AR,Old Union,Old Union,America/Chicago
 US,AR,Old Weona,Old Weona,America/Chicago
 US,AR,Olena,Olena,America/Chicago
 US,AR,Olio,Olio,America/Chicago
 US,AR,Oliver,Oliver,America/Chicago
 US,AR,Olvey,Olvey,America/Chicago
 US,AR,Olyphant,Olyphant,America/Chicago
 US,AR,Oma,Oma,America/Chicago
 US,AR,Omega,Omega,America/Chicago
 US,AR,Onda,Onda,America/Chicago
 US,AR,Olmstead,Olmstead,America/Chicago
 US,AR,Oneida,Oneida,America/Chicago
 US,AR,Opal,Opal,America/Chicago
 US,AR,Onyx,Onyx,America/Chicago
 US,AR,Ophir,Ophir,America/Chicago
 US,AR,Oppelo,Oppelo,America/Chicago
 US,AR,Optimus,Optimus,America/Chicago
 US,AR,Orion,Orion,America/Chicago
 US,AR,Orlando,Orlando,America/Chicago
 US,AR,Orton,Orton,America/Chicago
 US,AR,Osage,Osage,America/Chicago
 US,AR,Ott,Ott,America/Chicago
 US,AR,Otto,Otto,America/Chicago
 US,AR,Otwell,Otwell,America/Chicago
 US,AR,Ouachita,Ouachita,America/Chicago
 US,AR,Ouachita County,Ouachita County,America/Chicago
 US,AR,Ouitaville,Ouitaville,America/Chicago
 US,AR,Overcup,Overcup,America/Chicago
 US,AR,Owens,Owens,America/Chicago
 US,AR,Owensville,Owensville,America/Chicago
 US,AR,Owley,Owley,America/Chicago
 US,AR,Oxford,Oxford,America/Chicago
 US,AR,Oxley,Oxley,America/Chicago
 US,AR,Ozark Lithia,Ozark Lithia,America/Chicago
 US,AR,Ozone,Ozone,America/Chicago
 US,AR,Pace,Pace,America/Chicago
 US,AR,Pace City,Pace City,America/Chicago
 US,AR,Palarm,Palarm,America/Chicago
 US,AR,Palatka,Palatka,America/Chicago
 US,AR,Palestine,Palestine,America/Chicago
 US,AR,Palisades,Palisades,America/Chicago
 US,AR,Palmyra,Palmyra,America/Chicago
 US,AR,Pankey,Pankey,America/Chicago
 US,AR,Pankov,Pankov,America/Chicago
 US,AR,Pangburn,Pangburn,America/Chicago
 US,AR,Pansy,Pansy,America/Chicago
 US,AR,Paradise,Paradise,America/Chicago
 US,AR,Paragould,Paragould,America/Chicago
 US,AR,Paraloma,Paraloma,America/Chicago
 US,AR,Paris,Paris,America/Chicago
 US,AR,Parkdale,Parkdale,America/Chicago
 US,AR,Parkers,Parkers,America/Chicago
 US,AR,Parkin,Parkin,America/Chicago
 US,AR,Parks,Parks,America/Chicago
 US,AR,Parma,Parma,America/Chicago
 US,AR,Parnell,Parnell,America/Chicago
 US,AR,Paron,Paron,America/Chicago
 US,AR,Paroquet,Paroquet,America/Chicago
 US,AR,Partain,Partain,America/Chicago
 US,AR,Partee,Partee,America/Chicago
 US,AR,Parthenon,Parthenon,America/Chicago
 US,AR,Pastoria,Pastoria,America/Chicago
 US,AR,Patoka,Patoka,America/Chicago
 US,AR,Patterson,Patterson,America/Chicago
 US,AR,Pattonville,Pattonville,America/Chicago
 US,AR,Pattsville,Pattsville,America/Chicago
 US,FL,Choctaw,Choctaw,America/Chicago
 US,FL,Chokoloskee,Chokoloskee,America/New_York
 US,FL,Christmas,Christmas,America/New_York
 US,FL,Christopher Minchen Grant,Christopher Minchen Grant,America/New_York
 US,FL,Chumuckla,Chumuckla,America/Chicago
 US,FL,Chuluota,Chuluota,America/New_York
 US,FL,Citra,Citra,America/New_York
 US,FL,Citronelle,Citronelle,America/New_York
 US,FL,Citrus County,Citrus County,America/New_York
 US,FL,Clair-Mel City,Clair-Mel City,America/New_York
 US,FL,Clara,Clara,America/New_York
 US,FL,Clarcona,Clarcona,America/New_York
 US,FL,Clarke And Atkinson Grant,Clarke And Atkinson Grant,America/New_York
 US,FL,Clarksville,Clarksville,America/Chicago
 US,FL,Clarkwild,Clarkwild,America/New_York
 US,FL,Clay County,Clay County,America/New_York
 US,FL,Clay Sink,Clay Sink,America/New_York
 US,FL,Clayno,Clayno,America/New_York
 US,FL,Clearwater,Clearwater,America/New_York
 US,FL,Clermont,Clermont,America/New_York
 US,FL,Clewiston,Clewiston,America/New_York
 US,FL,Clifton,Clifton,America/New_York
 US,FL,Cliftonville,Cliftonville,America/New_York
 US,FL,Clinch,Clinch,America/New_York
 US,FL,Clio,Clio,America/New_York
 US,FL,Coachman,Coachman,America/New_York
 US,FL,Cleveland,Cleveland,America/New_York
 US,FL,Cobb Cross Roads,Cobb Cross Roads,America/Chicago
 US,FL,Cobbtown,Cobbtown,America/Chicago
 US,FL,Cocoa,Cocoa,America/New_York
 US,FL,Cody,Cody,America/New_York
 US,FL,Coker,Coker,America/New_York
 US,FL,Coconut,Coconut,America/New_York
 US,FL,Collier County,Collier County,America/New_York
 US,FL,Collier Manor,Collier Manor,America/New_York
 US,FL,Columbia,Columbia,America/New_York
 US,FL,Columbia County,Columbia County,America/New_York
 US,FL,Combee Settlement,Combee Settlement,America/New_York
 US,FL,Concord,Concord,America/New_York
 US,FL,Conner,Conner,America/New_York
 US,FL,Connersville,Connersville,America/New_York
 US,FL,Conrad,Conrad,America/New_York
 US,FL,Conrock,Conrock,America/New_York
 US,FL,Conway,Conway,America/New_York
 US,FL,Confer,Confer,America/New_York
 US,FL,Cook,Cook,America/Chicago
 US,FL,Cooks Hammock,Cooks Hammock,America/New_York
 US,FL,Cooper City,Cooper City,America/New_York
 US,FL,Coopertown,Coopertown,America/New_York
 US,FL,Copeland,Copeland,America/New_York
 US,FL,Copeland Settlement,Copeland Settlement,America/New_York
 US,FL,Coquina Gables,Coquina Gables,America/New_York
 US,AR,Pauls Switch,Pauls Switch,America/Chicago
 US,AR,Paup,Paup,America/Chicago
 US,AR,Pawheen,Pawheen,America/Chicago
 US,AR,Payne,Payne,America/Chicago
 US,AR,Payneway,Payneway,America/Chicago
 US,AR,Peak,Peak,America/Chicago
 US,AR,Peanut,Peanut,America/Chicago
 US,AR,Pearcy,Pearcy,America/Chicago
 US,AR,Peach Orchard,Peach Orchard,America/Chicago
 US,AR,Pearson,Pearson,America/Chicago
 US,AR,Pedro,Pedro,America/Chicago
 US,AR,Pee Dee,Pee Dee,America/Chicago
 US,AR,Peel,Peel,America/Chicago
 US,AR,Pendleton,Pendleton,America/Chicago
 US,AR,Pennington,Pennington,America/Chicago
 US,AR,Penjur,Penjur,America/Chicago
 US,AR,Pennys,Pennys,America/Chicago
 US,AR,Penrose,Penrose,America/Chicago
 US,AR,Perdue City,Perdue City,America/Chicago
 US,AR,Perkins,Perkins,America/Chicago
 US,AR,Perry County,Perry County,America/Chicago
 US,AR,Perryville,Perryville,America/Chicago
 US,AR,Peters,Peters,America/Chicago
 US,AR,Peter Pender,Peter Pender,America/Chicago
 US,AR,Pettigrew,Pettigrew,America/Chicago
 US,AR,Pettyview,Pettyview,America/Chicago
 US,AR,Pettyville,Pettyville,America/Chicago
 US,AR,Pettus,Pettus,America/Chicago
 US,AR,Peytonville,Peytonville,America/Chicago
 US,AR,Pfeiffer,Pfeiffer,America/Chicago
 US,AR,Phenix,Phenix,America/Chicago
 US,AR,Philadelphia,Philadelphia,America/Chicago
 US,AR,Phillips,Phillips,America/Chicago
 US,AR,Phillips County,Phillips County,America/Chicago
 US,AR,Pickens,Pickens,America/Chicago
 US,AR,Pickering,Pickering,America/Chicago
 US,AR,Picron,Picron,America/Chicago
 US,AR,Piercetown,Piercetown,America/Chicago
 US,AR,Pike City,Pike City,America/Chicago
 US,AR,Pike County,Pike County,America/Chicago
 US,AR,Pilgrims Rest,Pilgrims Rest,America/Chicago
 US,AR,Pillar,Pillar,America/Chicago
 US,AR,Pinckney,Pinckney,America/Chicago
 US,AR,Pine City,Pine City,America/Chicago
 US,AR,Pine Haven,Pine Haven,America/Chicago
 US,AR,Pine Knot,Pine Knot,America/Chicago
 US,AR,Pine Prairie,Pine Prairie,America/Chicago
 US,AR,Pinebergen,Pinebergen,America/Chicago
 US,AR,Pinetree,Pinetree,America/Chicago
 US,AR,Piney,Piney,America/Chicago
 US,AR,Pinnacle,Pinnacle,America/Chicago
 US,AR,Pisgah,Pisgah,America/Chicago
 US,AR,Pitts,Pitts,America/Chicago
 US,AR,Pittinger,Pittinger,America/Chicago
 US,AR,Plainfield,Plainfield,America/Chicago
 US,FL,Coral Gables,Coral Gables,America/New_York
 US,FL,Coral Manor,Coral Manor,America/New_York
 US,FL,Coral Ridge Isles,Coral Ridge Isles,America/New_York
 US,FL,Coral Villas,Coral Villas,America/New_York
 US,FL,Coral Way Village,Coral Way Village,America/New_York
 US,FL,Corey,Corey,America/New_York
 US,FL,Cornwell,Cornwell,America/New_York
 US,FL,Coronet,Coronet,America/New_York
 US,FL,Cortez,Cortez,America/New_York
 US,FL,Cosme,Cosme,America/New_York
 US,FL,Cosmo,Cosmo,America/New_York
 US,FL,Corkscrew,Corkscrew,America/New_York
 US,FL,Cotton Rawles Grant,Cotton Rawles Grant,America/New_York
 US,FL,Cottondale,Cottondale,America/Chicago
 US,FL,Couch,Couch,America/Chicago
 US,FL,Council,Council,America/New_York
 US,FL,Country Club Isles,Country Club Isles,America/New_York
 US,FL,Country Club Manor,Country Club Manor,America/New_York
 US,FL,Courtenay,Courtenay,America/New_York
 US,FL,Covington,Covington,America/New_York
 US,FL,Cove,Cove,America/Chicago
 US,FL,Cox,Cox,America/Chicago
 US,FL,Crackertown,Crackertown,America/New_York
 US,FL,Craggs,Craggs,America/New_York
 US,FL,Crandall,Crandall,America/New_York
 US,FL,Crawford,Crawford,America/New_York
 US,FL,Crawfordville,Crawfordville,America/New_York
 US,FL,Creels,Creels,America/New_York
 US,FL,Creighton,Creighton,America/New_York
 US,FL,Cresthaven,Cresthaven,America/New_York
 US,FL,Crestview,Crestview,America/Chicago
 US,FL,Crewsville,Crewsville,America/New_York
 US,FL,Croom,Croom,America/New_York
 US,FL,Cross City,Cross City,America/New_York
 US,FL,Crossley,Crossley,America/New_York
 US,FL,Crossroads,Crossroads,America/New_York
 US,FL,Crystal Lake Shores,Crystal Lake Shores,America/New_York
 US,FL,Cubitis,Cubitis,America/New_York
 US,FL,Cummings,Cummings,America/New_York
 US,FL,Cumpressco,Cumpressco,America/New_York
 US,FL,Curlew,Curlew,America/New_York
 US,FL,Curtis,Curtis,America/New_York
 US,FL,Cutler,Cutler,America/New_York
 US,FL,Cutlers,Cutlers,America/New_York
 US,FL,Cypress,Cypress,America/Chicago
 US,FL,Cypress Quarters,Cypress Quarters,America/New_York
 US,FL,Cyrus Briggs Grant,Cyrus Briggs Grant,America/New_York
 US,FL,D Bloodworth Grant,D Bloodworth Grant,America/New_York
 US,FL,D L Clinch Grant,D L Clinch Grant,America/New_York
 US,FL,Dahlberg,Dahlberg,America/New_York
 US,FL,Dahoma,Dahoma,America/New_York
 US,FL,Dalkeith,Dalkeith,America/Chicago
 US,AR,Plainview,Plainview,America/Chicago
 US,AR,Plant,Plant,America/Chicago
 US,AR,Plantersville,Plantersville,America/Chicago
 US,AR,Plata,Plata,America/Chicago
 US,AR,Plumerville,Plumerville,America/Chicago
 US,AR,Plunketts,Plunketts,America/Chicago
 US,AR,Poage Addition,Poage Addition,America/Chicago
 US,AR,Pocahontas,Pocahontas,America/Chicago
 US,AR,Poindexter,Poindexter,America/Chicago
 US,AR,Poinsett County,Poinsett County,America/Chicago
 US,AR,Point Cedar,Point Cedar,America/Chicago
 US,AR,Point Comfort,Point Comfort,America/Chicago
 US,AR,Point Peter,Point Peter,America/Chicago
 US,AR,Polk County,Polk County,America/Chicago
 US,AR,Ponca,Ponca,America/Chicago
 US,AR,Ponders,Ponders,America/Chicago
 US,AR,Pontoon,Pontoon,America/Chicago
 US,AR,Pope County,Pope County,America/Chicago
 US,AR,Poping,Poping,America/Chicago
 US,AR,Portland,Portland,America/Chicago
 US,AR,Posey,Posey,America/Chicago
 US,AR,Possum Grape,Possum Grape,America/Chicago
 US,AR,Postelle,Postelle,America/Chicago
 US,AR,Potter,Potter,America/Chicago
 US,AR,Pottsville,Pottsville,America/Chicago
 US,AR,Poughkeepsie,Poughkeepsie,America/Chicago
 US,AR,Powell,Powell,America/Chicago
 US,AR,Powers,Powers,America/Chicago
 US,AR,Prague,Prague,America/Chicago
 US,AR,Prairie County,Prairie County,America/Chicago
 US,AR,Prairie Union,Prairie Union,America/Chicago
 US,AR,Pratt,Pratt,America/Chicago
 US,AR,Prescott,Prescott,America/Chicago
 US,AR,Preston,Preston,America/Chicago
 US,AR,Price,Price,America/Chicago
 US,AR,Prim,Prim,America/Chicago
 US,AR,Princedale,Princedale,America/Chicago
 US,AR,Princeton,Princeton,America/Chicago
 US,AR,Process City,Process City,America/Chicago
 US,AR,Proctor,Proctor,America/Chicago
 US,AR,Promised Land,Promised Land,America/Chicago
 US,AR,Prosperity,Prosperity,America/Chicago
 US,AR,Providence,Providence,America/Chicago
 US,AR,Pruitt,Pruitt,America/Chicago
 US,AR,Pryor,Pryor,America/Chicago
 US,AR,Pugh,Pugh,America/Chicago
 US,AR,Pulaski,Pulaski,America/Chicago
 US,AR,Pulaski County,Pulaski County,America/Chicago
 US,AR,Pullman,Pullman,America/Chicago
 US,AR,Puryear,Puryear,America/Chicago
 US,AR,Push,Push,America/Chicago
 US,AR,Purdy,Purdy,America/Chicago
 US,AR,Quarles,Quarles,America/Chicago
 US,AR,Quinn,Quinn,America/Chicago
 US,FL,Dallas,Dallas,America/New_York
 US,FL,Dames Point Manor,Dames Point Manor,America/New_York
 US,FL,Dana,Dana,America/New_York
 US,FL,Daniel Clarke Grant,Daniel Clarke Grant,America/New_York
 US,FL,Danville,Danville,America/New_York
 US,FL,Darby,Darby,America/New_York
 US,FL,Darlington,Darlington,America/Chicago
 US,FL,Darsey,Darsey,America/New_York
 US,FL,Davenport,Davenport,America/New_York
 US,FL,David Scurry Grant,David Scurry Grant,America/New_York
 US,FL,Davie,Davie,America/New_York
 US,FL,Davis Shores,Davis Shores,America/New_York
 US,FL,Day,Day,America/New_York
 US,FL,Daysville,Daysville,America/New_York
 US,FL,Daytona Beach Shores,Daytona Beach Shores,America/New_York
 US,FL,Deland,Deland,America/New_York
 US,FL,Deland Highlands,Deland Highlands,America/New_York
 US,FL,De Soto City,De Soto City,America/New_York
 US,FL,Debary,Debary,America/New_York
 US,FL,Desoto County,Desoto County,America/New_York
 US,FL,Deanville,Deanville,America/New_York
 US,FL,Deem City,Deem City,America/New_York
 US,FL,Deerland,Deerland,America/Chicago
 US,FL,Del Rio,Del Rio,America/New_York
 US,FL,Delespine,Delespine,America/New_York
 US,FL,Delespine Grant,Delespine Grant,America/New_York
 US,FL,Dell,Dell,America/New_York
 US,FL,Dellwood,Dellwood,America/Chicago
 US,FL,Delray Shores,Delray Shores,America/New_York
 US,FL,Delta,Delta,America/New_York
 US,FL,Deltona,Deltona,America/New_York
 US,FL,Denaud,Denaud,America/New_York
 US,FL,Dennet,Dennet,America/New_York
 US,FL,Denver,Denver,America/New_York
 US,FL,Destin,Destin,America/Chicago
 US,FL,Dickert,Dickert,America/New_York
 US,FL,Dills,Dills,America/New_York
 US,FL,Dinsmore,Dinsmore,America/New_York
 US,FL,Dixietown,Dixietown,America/New_York
 US,FL,Dixon,Dixon,America/Chicago
 US,FL,Dixie County,Dixie County,America/New_York
 US,FL,Doctor Phillips,Doctor Phillips,America/New_York
 US,FL,Dogtown,Dogtown,America/New_York
 US,FL,Domingo Acosta Grant,Domingo Acosta Grant,America/New_York
 US,FL,Domingo Fernandez Grant,Domingo Fernandez Grant,America/New_York
 US,FL,Domingo Reyes Grant,Domingo Reyes Grant,America/New_York
 US,FL,Dona Vista,Dona Vista,America/New_York
 US,FL,Donner,Donner,America/New_York
 US,FL,Doral,Doral,America/New_York
 US,FL,Dorcas,Dorcas,America/Chicago
 US,FL,Dorcas Black Grant,Dorcas Black Grant,America/New_York
 US,FL,Douglas City,Douglas City,America/New_York
 US,AR,Quitman,Quitman,America/Chicago
 US,AR,Ragan,Ragan,America/Chicago
 US,AR,Raggio,Raggio,America/Chicago
 US,AR,Rago,Rago,America/Chicago
 US,AR,Ragsdale,Ragsdale,America/Chicago
 US,AR,Ragtown,Ragtown,America/Chicago
 US,AR,Ralph,Ralph,America/Chicago
 US,AR,Ramsey,Ramsey,America/Chicago
 US,AR,Rambo Riviera,Rambo Riviera,America/Chicago
 US,AR,Randall,Randall,America/Chicago
 US,AR,Randolph County,Randolph County,America/Chicago
 US,AR,Ranger,Ranger,America/Chicago
 US,AR,Raspberry,Raspberry,America/Chicago
 US,AR,Ratio,Ratio,America/Chicago
 US,AR,Ratcliff,Ratcliff,America/Chicago
 US,AR,Ravanna,Ravanna,America/Chicago
 US,AR,Rawlinson,Rawlinson,America/Chicago
 US,AR,Rawls,Rawls,America/Chicago
 US,AR,Reader,Reader,America/Chicago
 US,AR,Readland,Readland,America/Chicago
 US,AR,Reamey,Reamey,America/Chicago
 US,AR,Rector,Rector,America/Chicago
 US,AR,Red Gate,Red Gate,America/Chicago
 US,AR,Red Leaf,Red Leaf,America/Chicago
 US,AR,Red Line,Red Line,America/Chicago
 US,AR,Red Star,Red Star,America/Chicago
 US,AR,Red Wing,Red Wing,America/Chicago
 US,AR,Redding,Redding,America/Chicago
 US,AR,Redfern,Redfern,America/Chicago
 US,AR,Redfield,Redfield,America/Chicago
 US,AR,Redland,Redland,America/Chicago
 US,AR,Reedville,Reedville,America/Chicago
 US,AR,Reese,Reese,America/Chicago
 US,AR,Reeves,Reeves,America/Chicago
 US,AR,Reform,Reform,America/Chicago
 US,AR,Remmel,Remmel,America/Chicago
 US,AR,Rena,Rena,America/Chicago
 US,AR,Rendezvous,Rendezvous,America/Chicago
 US,AR,Republican,Republican,America/Chicago
 US,AR,Retta,Retta,America/Chicago
 US,AR,Revel,Revel,America/Chicago
 US,AR,Revilee,Revilee,America/Chicago
 US,AR,Rex,Rex,America/Chicago
 US,AR,Reyno,Reyno,America/Chicago
 US,AR,Reynolds,Reynolds,America/Chicago
 US,AR,Reydell,Reydell,America/Chicago
 US,AR,Rhea,Rhea,America/Chicago
 US,AR,Rhyne,Rhyne,America/Chicago
 US,AR,Riceville,Riceville,America/Chicago
 US,AR,Rich,Rich,America/Chicago
 US,AR,Richardson,Richardson,America/Chicago
 US,AR,Richmond,Richmond,America/Chicago
 US,AR,Richwoods,Richwoods,America/Chicago
 US,AR,Ricusky,Ricusky,America/Chicago
 US,AR,Ridge,Ridge,America/Chicago
 US,AR,Ridgecrest,Ridgecrest,America/Chicago
 US,AR,Ridgeway,Ridgeway,America/Chicago
 US,FL,Dover,Dover,America/New_York
 US,FL,Dreamworld,Dreamworld,America/New_York
 US,FL,Drexel,Drexel,America/New_York
 US,FL,Drifton,Drifton,America/New_York
 US,FL,Dublin,Dublin,America/New_York
 US,FL,Duette,Duette,America/New_York
 US,FL,Dukes,Dukes,America/New_York
 US,FL,Dundee,Dundee,America/New_York
 US,FL,Dunedin,Dunedin,America/New_York
 US,FL,Dunedin Isles,Dunedin Isles,America/New_York
 US,FL,Dupont,Dupont,America/New_York
 US,FL,Durant,Durant,America/New_York
 US,FL,Durbin,Durbin,America/New_York
 US,FL,Dutton Still,Dutton Still,America/New_York
 US,FL,Duval,Duval,America/New_York
 US,FL,Duval County,Duval County,America/New_York
 US,FL,Dynamite Docks,Dynamite Docks,America/New_York
 US,FL,E Hudnal Grant,E Hudnal Grant,America/New_York
 US,FL,E Hudnall Grant,E Hudnall Grant,America/New_York
 US,FL,Ealum,Ealum,America/Chicago
 US,FL,Earleton,Earleton,America/New_York
 US,FL,Early,Early,America/Chicago
 US,FL,Early Bird,Early Bird,America/New_York
 US,FL,East Mandarin,East Mandarin,America/New_York
 US,FL,East Mayport,East Mayport,America/New_York
 US,FL,East Milton,East Milton,America/Chicago
 US,FL,East Mims,East Mims,America/New_York
 US,FL,East Mulberry,East Mulberry,America/New_York
 US,FL,East Naples,East Naples,America/New_York
 US,FL,East Palatka,East Palatka,America/New_York
 US,FL,East Perrine,East Perrine,America/New_York
 US,FL,East Tampa,East Tampa,America/New_York
 US,FL,Eastern Shores,Eastern Shores,America/New_York
 US,FL,Eastgate,Eastgate,America/New_York
 US,FL,East Lake Weir,East Lake Weir,America/New_York
 US,FL,Eastport,Eastport,America/New_York
 US,FL,Eastwood,Eastwood,America/New_York
 US,FL,Eatonville,Eatonville,America/New_York
 US,FL,Eau Gallie,Eau Gallie,America/New_York
 US,FL,Ebenezer,Ebenezer,America/New_York
 US,FL,Ebro,Ebro,America/Chicago
 US,FL,Econfina,Econfina,America/Chicago
 US,FL,Ebb,Ebb,America/New_York
 US,FL,Eddy,Eddy,America/New_York
 US,FL,Eden,Eden,America/New_York
 US,FL,Edgar,Edgar,America/New_York
 US,FL,Edgeville,Edgeville,America/New_York
 US,FL,Edgewater,Edgewater,America/New_York
 US,FL,Edgewood,Edgewood,America/New_York
 US,FL,Edison,Edison,America/New_York
 US,FL,Edmond Doyles Grant,Edmond Doyles Grant,America/New_York
 US,FL,Edward Turner Grant,Edward Turner Grant,America/New_York
 US,FL,Eglin Village,Eglin Village,America/Chicago
 US,AR,Riggs,Riggs,America/Chicago
 US,AR,Riley,Riley,America/Chicago
 US,AR,Rio Vista,Rio Vista,America/Chicago
 US,AR,Rison,Rison,America/Chicago
 US,AR,Risher,Risher,America/Chicago
 US,AR,Ritchie,Ritchie,America/Chicago
 US,AR,Ritz,Ritz,America/Chicago
 US,AR,Riverdale,Riverdale,America/Chicago
 US,AR,Riverside,Riverside,America/Chicago
 US,AR,Rivervale,Rivervale,America/Chicago
 US,AR,Riverview,Riverview,America/Chicago
 US,AR,Rixey,Rixey,America/Chicago
 US,AR,Roark,Roark,America/Chicago
 US,AR,Rob Roy,Rob Roy,America/Chicago
 US,AR,Robertsville,Robertsville,America/Chicago
 US,AR,Robinson,Robinson,America/Chicago
 US,AR,Rochelle Riviera,Rochelle Riviera,America/Chicago
 US,AR,Rock,Rock,America/Chicago
 US,AR,Rockhouse,Rockhouse,America/Chicago
 US,AR,Rockport,Rockport,America/Chicago
 US,AR,Rockwell,Rockwell,America/Chicago
 US,AR,Rocky,Rocky,America/Chicago
 US,AR,Rocky Comfort,Rocky Comfort,America/Chicago
 US,AR,Rocky Mound,Rocky Mound,America/Chicago
 US,AR,Rodney,Rodney,America/Chicago
 US,AR,Rohwer,Rohwer,America/Chicago
 US,AR,Rokey,Rokey,America/Chicago
 US,AR,Roland,Roland,America/Chicago
 US,AR,Rolla,Rolla,America/Chicago
 US,AR,Romance,Romance,America/Chicago
 US,AR,Rone,Rone,America/Chicago
 US,AR,Roosevelt,Roosevelt,America/Chicago
 US,AR,Rosa,Rosa,America/Chicago
 US,AR,Rosboro,Rosboro,America/Chicago
 US,AR,Rose City,Rose City,America/Chicago
 US,AR,Rosedale,Rosedale,America/Chicago
 US,AR,Roseland,Roseland,America/Chicago
 US,AR,Rosenbaum,Rosenbaum,America/Chicago
 US,AR,Rosetta,Rosetta,America/Chicago
 US,AR,Roseville,Roseville,America/Chicago
 US,AR,Rosine,Rosine,America/Chicago
 US,AR,Ross,Ross,America/Chicago
 US,AR,Ross Van Ness,Ross Van Ness,America/Chicago
 US,AR,Rotan,Rotan,America/Chicago
 US,AR,Rottaken,Rottaken,America/Chicago
 US,AR,Rover,Rover,America/Chicago
 US,AR,Rowell,Rowell,America/Chicago
 US,AR,Roxton,Roxton,America/Chicago
 US,AR,Roy,Roy,America/Chicago
 US,AR,Royal,Royal,America/Chicago
 US,AR,Rubicon,Rubicon,America/Chicago
 US,AR,Rubie,Rubie,America/Chicago
 US,AR,Ruble,Ruble,America/Chicago
 US,AR,Rudd,Rudd,America/Chicago
 US,AR,Rule,Rule,America/Chicago
 US,AR,Rumley,Rumley,America/Chicago
 US,AR,Rupert,Rupert,America/Chicago
 US,FL,Egypt Lake-Leto,Egypt Lake-Leto,America/New_York
 US,FL,Ehren,Ehren,America/New_York
 US,FL,El Chico,El Chico,America/New_York
 US,FL,El Destinado,El Destinado,America/New_York
 US,FL,El Jobean,El Jobean,America/New_York
 US,FL,Eldora,Eldora,America/New_York
 US,FL,Eldorado,Eldorado,America/New_York
 US,FL,Eldred,Eldred,America/New_York
 US,FL,Eldridge,Eldridge,America/New_York
 US,FL,Eleanor,Eleanor,America/Chicago
 US,FL,Eleanor Hogans Grant,Eleanor Hogans Grant,America/New_York
 US,FL,Eleanor Pritchard Grant,Eleanor Pritchard Grant,America/New_York
 US,FL,Electra,Electra,America/New_York
 US,FL,Eleven Mile,Eleven Mile,America/New_York
 US,FL,Elfers,Elfers,America/New_York
 US,FL,Ellaville,Ellaville,America/Chicago
 US,FL,Ellenton,Ellenton,America/New_York
 US,FL,Ellerbee,Ellerbee,America/New_York
 US,FL,Ellerslie,Ellerslie,America/New_York
 US,FL,Ellinor Village,Ellinor Village,America/New_York
 US,FL,Ellis,Ellis,America/Chicago
 US,FL,Ellisville,Ellisville,America/New_York
 US,FL,Ellzey,Ellzey,America/New_York
 US,FL,Eloise,Eloise,America/New_York
 US,FL,Elthu Woodruff Grant,Elthu Woodruff Grant,America/New_York
 US,FL,Elwood,Elwood,America/New_York
 US,FL,Emathla,Emathla,America/New_York
 US,FL,Emporia,Emporia,America/New_York
 US,FL,Enon,Enon,America/Chicago
 US,FL,Ensley,Ensley,America/Chicago
 US,FL,Erie,Erie,America/New_York
 US,FL,Escambia County,Escambia County,America/Chicago
 US,FL,Escambia Farms,Escambia Farms,America/Chicago
 US,FL,Eridu,Eridu,America/New_York
 US,FL,Espanola,Espanola,America/New_York
 US,FL,Estero,Estero,America/New_York
 US,FL,Estiffanulga,Estiffanulga,America/New_York
 US,FL,Esto,Esto,America/Chicago
 US,FL,Ethel,Ethel,America/New_York
 US,FL,Eucheeanna,Eucheeanna,America/Chicago
 US,FL,Eustis,Eustis,America/New_York
 US,FL,Evans Pines,Evans Pines,America/New_York
 US,FL,Evans Subdivision,Evans Subdivision,America/New_York
 US,FL,Evansdale,Evansdale,America/New_York
 US,FL,Everglades City,Everglades City,America/New_York
 US,FL,Evinston,Evinston,America/New_York
 US,FL,Ewell,Ewell,America/New_York
 US,FL,F Bagleys Heirs Grant,F Bagleys Heirs Grant,America/New_York
 US,FL,F Bethune Grant,F Bethune Grant,America/New_York
 US,FL,F J Advice Grant,F J Advice Grant,America/New_York
 US,FL,F M Arredondo Grant,F M Arredondo Grant,America/New_York
 US,FL,F P Fatio Grant,F P Fatio Grant,America/New_York
 US,AR,Rush,Rush,America/Chicago
 US,AR,Rushing,Rushing,America/Chicago
 US,AR,Ruth,Ruth,America/Chicago
 US,AR,Rutherford,Rutherford,America/Chicago
 US,AR,Ryan,Ryan,America/Chicago
 US,AR,Rye,Rye,America/Chicago
 US,AR,Ryker,Ryker,America/Chicago
 US,AR,Saddle,Saddle,America/Chicago
 US,AR,Saffell,Saffell,America/Chicago
 US,AR,Sage,Sage,America/Chicago
 US,AR,Saint Claire,Saint Claire,America/Chicago
 US,AR,Saint Francis,Saint Francis,America/Chicago
 US,AR,Saginaw,Saginaw,America/Chicago
 US,AR,Saint Francis County,Saint Francis County,America/Chicago
 US,AR,Saint James,Saint James,America/Chicago
 US,AR,Saint Matthews,Saint Matthews,America/Chicago
 US,AR,Saint Scholastica,Saint Scholastica,America/Chicago
 US,AR,Saint Thomas,Saint Thomas,America/Chicago
 US,AR,Saint Vincent,Saint Vincent,America/Chicago
 US,AR,Salem,Salem,America/Chicago
 US,AR,Saline,Saline,America/Chicago
 US,AR,Saline County,Saline County,America/Chicago
 US,AR,Saltillo,Saltillo,America/Chicago
 US,AR,Salus,Salus,America/Chicago
 US,AR,Samples,Samples,America/Chicago
 US,AR,Sanders,Sanders,America/Chicago
 US,AR,Sandiff,Sandiff,America/Chicago
 US,AR,Sandtown,Sandtown,America/Chicago
 US,AR,Sandy,Sandy,America/Chicago
 US,AR,Sandy Land,Sandy Land,America/Chicago
 US,AR,Sans Souci,Sans Souci,America/Chicago
 US,AR,Sarassa,Sarassa,America/Chicago
 US,AR,Saratoga,Saratoga,America/Chicago
 US,AR,Sardis,Sardis,America/Chicago
 US,AR,Satuma,Satuma,America/Chicago
 US,AR,Saulsburg,Saulsburg,America/Chicago
 US,AR,Savoy,Savoy,America/Chicago
 US,AR,Sawmill,Sawmill,America/Chicago
 US,AR,Sayre,Sayre,America/Chicago
 US,AR,Schaal,Schaal,America/Chicago
 US,AR,Schaberg,Schaberg,America/Chicago
 US,AR,Schug,Schug,America/Chicago
 US,AR,Scipio,Scipio,America/Chicago
 US,AR,Scotia,Scotia,America/Chicago
 US,AR,Scotland,Scotland,America/Chicago
 US,AR,Scott,Scott,America/Chicago
 US,AR,Scott County,Scott County,America/Chicago
 US,AR,Scottsville,Scottsville,America/Chicago
 US,AR,Screeton,Screeton,America/Chicago
 US,AR,Scranton,Scranton,America/Chicago
 US,AR,Searcy,Searcy,America/Chicago
 US,AR,Searcy County,Searcy County,America/Chicago
 US,AR,Seaton,Seaton,America/Chicago
 US,AR,Sebastian County,Sebastian County,America/Chicago
 US,AR,Seba,Seba,America/Chicago
 US,FL,F P Sanchez Grant,F P Sanchez Grant,America/New_York
 US,FL,Facil,Facil,America/New_York
 US,FL,Fair Gate,Fair Gate,America/New_York
 US,FL,Fairbanks,Fairbanks,America/New_York
 US,FL,Fairfield,Fairfield,America/New_York
 US,FL,Fairlawn,Fairlawn,America/New_York
 US,FL,Fairview,Fairview,America/New_York
 US,FL,Fairview Shores,Fairview Shores,America/New_York
 US,FL,Fairvilla,Fairvilla,America/New_York
 US,FL,Evergreen,Evergreen,America/New_York
 US,FL,Fakahatchee,Fakahatchee,America/New_York
 US,FL,Falmouth,Falmouth,America/New_York
 US,FL,Fanlew,Fanlew,America/New_York
 US,FL,Farmdale,Farmdale,America/Chicago
 US,FL,Farmton,Farmton,America/New_York
 US,FL,Fatio,Fatio,America/New_York
 US,FL,Favoretta,Favoretta,America/New_York
 US,FL,Fedhaven,Fedhaven,America/New_York
 US,FL,Felda,Felda,America/New_York
 US,FL,Felicia,Felicia,America/New_York
 US,FL,Felkel,Felkel,America/New_York
 US,FL,Fellowship,Fellowship,America/New_York
 US,FL,Fenholloway,Fenholloway,America/New_York
 US,FL,Fermine De Viller Grant,Fermine De Viller Grant,America/Chicago
 US,FL,Fern Crest Village,Fern Crest Village,America/New_York
 US,FL,Ferndale,Ferndale,America/New_York
 US,FL,Festus,Festus,America/New_York
 US,FL,Fidelis,Fidelis,America/Chicago
 US,FL,Fiftone,Fiftone,America/New_York
 US,FL,Fincher,Fincher,America/New_York
 US,FL,Fish Hawk,Fish Hawk,America/New_York
 US,FL,Fishermens Village,Fishermens Village,America/New_York
 US,FL,Five Points,Five Points,America/New_York
 US,FL,Flagami,Flagami,America/New_York
 US,FL,Flagler County,Flagler County,America/New_York
 US,FL,Flamingo,Flamingo,America/New_York
 US,FL,Flamingo Village,Flamingo Village,America/New_York
 US,FL,Fleetwood Manor,Fleetwood Manor,America/New_York
 US,FL,Flemington,Flemington,America/New_York
 US,FL,Fletcher,Fletcher,America/New_York
 US,FL,Fleming Grant,Fleming Grant,America/New_York
 US,FL,Florahome,Florahome,America/New_York
 US,FL,Floral City,Floral City,America/New_York
 US,FL,Florence,Florence,America/New_York
 US,FL,Florence Villa,Florence Villa,America/New_York
 US,FL,Floresta,Floresta,America/New_York
 US,FL,Florida,Florida,America/New_York
 US,FL,Floridale,Floridale,America/Chicago
 US,FL,Floridatown,Floridatown,America/Chicago
 US,FL,Floritan,Floritan,America/New_York
 US,FL,Flowersville,Flowersville,America/Chicago
 US,FL,Foley,Foley,America/New_York
 US,AR,Segur,Segur,America/Chicago
 US,AR,Self,Self,America/Chicago
 US,AR,Sellers Addition,Sellers Addition,America/Chicago
 US,AR,Selma,Selma,America/Chicago
 US,AR,Sevier County,Sevier County,America/Chicago
 US,AR,Seyppel,Seyppel,America/Chicago
 US,AR,Shadow Oaks Addition,Shadow Oaks Addition,America/Chicago
 US,AR,Shady,Shady,America/Chicago
 US,AR,Shakertown,Shakertown,America/Chicago
 US,AR,Shannon,Shannon,America/Chicago
 US,AR,Shannondale,Shannondale,America/Chicago
 US,AR,Shannonville,Shannonville,America/Chicago
 US,AR,Sharman,Sharman,America/Chicago
 US,AR,Sharp,Sharp,America/Chicago
 US,AR,Sharp County,Sharp County,America/Chicago
 US,AR,Sharum,Sharum,America/Chicago
 US,AR,Shark,Shark,America/Chicago
 US,AR,Shaw,Shaw,America/Chicago
 US,AR,Shawmut,Shawmut,America/Chicago
 US,AR,Shawnee,Shawnee,America/Chicago
 US,AR,Shearerville,Shearerville,America/Chicago
 US,AR,Shelbyville,Shelbyville,America/Chicago
 US,AR,Sheppard,Sheppard,America/Chicago
 US,AR,Sheridan,Sheridan,America/Chicago
 US,AR,Shibley,Shibley,America/Chicago
 US,AR,Shiloh,Shiloh,America/Chicago
 US,AR,Shipp,Shipp,America/Chicago
 US,AR,Shippen,Shippen,America/Chicago
 US,AR,Shives,Shives,America/Chicago
 US,AR,Shoffner,Shoffner,America/Chicago
 US,AR,Shuler,Shuler,America/Chicago
 US,AR,Shumaker,Shumaker,America/Chicago
 US,AR,Sidon,Sidon,America/Chicago
 US,AR,Siedenstricker,Siedenstricker,America/Chicago
 US,AR,Silex,Silex,America/Chicago
 US,AR,Sills,Sills,America/Chicago
 US,AR,Silver,Silver,America/Chicago
 US,AR,Simmons,Simmons,America/Chicago
 US,AR,Simpson,Simpson,America/Chicago
 US,AR,Sims,Sims,America/Chicago
 US,AR,Simsboro,Simsboro,America/Chicago
 US,AR,Sisemore,Sisemore,America/Chicago
 US,AR,Sitka,Sitka,America/Chicago
 US,AR,Skaggs,Skaggs,America/Chicago
 US,AR,Sixteenth Section,Sixteenth Section,America/Chicago
 US,AR,Skylight,Skylight,America/Chicago
 US,AR,Slabtown,Slabtown,America/Chicago
 US,AR,Slaytonville,Slaytonville,America/Chicago
 US,AR,Sloan,Sloan,America/Chicago
 US,AR,Slovak,Slovak,America/Chicago
 US,AR,Smackover,Smackover,America/Chicago
 US,AR,Smale,Smale,America/Chicago
 US,AR,Smearny,Smearny,America/Chicago
 US,AR,Smeltzer,Smeltzer,America/Chicago
 US,AR,Smithdale,Smithdale,America/Chicago
 US,FL,Footman,Footman,America/New_York
 US,FL,Fordville,Fordville,America/New_York
 US,FL,Forest City,Forest City,America/New_York
 US,FL,Forest Highlands,Forest Highlands,America/Chicago
 US,FL,Fort Basinger,Fort Basinger,America/New_York
 US,FL,Fort Braden,Fort Braden,America/New_York
 US,FL,Fort Caroline,Fort Caroline,America/New_York
 US,FL,Fort De Soto,Fort De Soto,America/New_York
 US,FL,Fort Drane,Fort Drane,America/New_York
 US,FL,Fort Drum,Fort Drum,America/New_York
 US,FL,Fort Florida,Fort Florida,America/New_York
 US,FL,Fort Gadsden,Fort Gadsden,America/New_York
 US,FL,Fort Gates,Fort Gates,America/New_York
 US,FL,Fort Hamer,Fort Hamer,America/New_York
 US,FL,Fort Jefferson,Fort Jefferson,America/New_York
 US,FL,Fort Lauderdale,Fort Lauderdale,America/New_York
 US,FL,Fort Lonely,Fort Lonely,America/New_York
 US,FL,Fort Lonesome,Fort Lonesome,America/New_York
 US,FL,Fort Mason,Fort Mason,America/New_York
 US,FL,Fort Matanzas,Fort Matanzas,America/New_York
 US,FL,Fort Mccoy,Fort Mccoy,America/New_York
 US,FL,Fort Meade,Fort Meade,America/New_York
 US,FL,Fort Myers,Fort Myers,America/New_York
 US,FL,Fort Myers Shores,Fort Myers Shores,America/New_York
 US,FL,Fort Myers Villas,Fort Myers Villas,America/New_York
 US,FL,Fort Ogden,Fort Ogden,America/New_York
 US,FL,Fort Peyton,Fort Peyton,America/New_York
 US,FL,Fort Pickens,Fort Pickens,America/Chicago
 US,FL,Fort Pierce,Fort Pierce,America/New_York
 US,FL,Fort Pierce Shores,Fort Pierce Shores,America/New_York
 US,FL,Fort Kissimmee,Fort Kissimmee,America/New_York
 US,FL,Fort Union,Fort Union,America/New_York
 US,FL,Fort White,Fort White,America/New_York
 US,FL,Fountain,Fountain,America/Chicago
 US,FL,Fountainebleau,Fountainebleau,America/New_York
 US,FL,Four Mile Village,Four Mile Village,America/Chicago
 US,FL,Four Points,Four Points,America/New_York
 US,FL,Four Seasons,Four Seasons,America/New_York
 US,FL,Fox Town,Fox Town,America/New_York
 US,FL,Foxleigh,Foxleigh,America/New_York
 US,FL,Francis,Francis,America/New_York
 US,FL,Francis Bagley Grant,Francis Bagley Grant,America/New_York
 US,FL,Francis Barbee Grant,Francis Barbee Grant,America/New_York
 US,FL,Francis Goodwin Grant,Francis Goodwin Grant,America/New_York
 US,FL,Francis Marin Grant,Francis Marin Grant,America/New_York
 US,FL,Francis P Fatio Grant,Francis P Fatio Grant,America/New_York
 US,FL,Francis P Sanchez Grant,Francis P Sanchez Grant,America/New_York
 US,FL,Francis R Sanchez Grant,Francis R Sanchez Grant,America/New_York
 US,AR,Smithland,Smithland,America/Chicago
 US,AR,Smithton,Smithton,America/Chicago
 US,AR,Smyrna,Smyrna,America/Chicago
 US,AR,Snipe,Snipe,America/Chicago
 US,AR,Snell,Snell,America/Chicago
 US,AR,Snow,Snow,America/Chicago
 US,AR,Snowball,Snowball,America/Chicago
 US,AR,Snyder,Snyder,America/Chicago
 US,AR,Solgohachia,Solgohachia,America/Chicago
 US,AR,Solo,Solo,America/Chicago
 US,AR,Sonora,Sonora,America/Chicago
 US,AR,Sorrells,Sorrells,America/Chicago
 US,AR,Soudan,Soudan,America/Chicago
 US,AR,South Crossett,South Crossett,America/Chicago
 US,AR,South Fort Smith,South Fort Smith,America/Chicago
 US,AR,South Ozark,South Ozark,America/Chicago
 US,AR,South Stuttgart,South Stuttgart,America/Chicago
 US,AR,Southland,Southland,America/Chicago
 US,AR,Southside,Southside,America/Chicago
 US,AR,Southwood Addition,Southwood Addition,America/Chicago
 US,AR,Spadra,Spadra,America/Chicago
 US,AR,Sparkman,Sparkman,America/Chicago
 US,AR,Spence Jucntion,Spence Jucntion,America/Chicago
 US,AR,Spotville,Spotville,America/Chicago
 US,AR,Sprudel,Sprudel,America/Chicago
 US,AR,Stacy,Stacy,America/Chicago
 US,AR,Stafford,Stafford,America/Chicago
 US,AR,Stagecoach Addition,Stagecoach Addition,America/Chicago
 US,AR,Standard Umpstead,Standard Umpstead,America/Chicago
 US,AR,Stamps,Stamps,America/Chicago
 US,AR,Stanford,Stanford,America/Chicago
 US,AR,Star City,Star City,America/Chicago
 US,AR,Stark City,Stark City,America/Chicago
 US,AR,Starks,Starks,America/Chicago
 US,AR,State Line,State Line,America/Chicago
 US,AR,Staves,Staves,America/Chicago
 US,AR,Steele,Steele,America/Chicago
 US,AR,Stegall,Stegall,America/Chicago
 US,AR,Stella,Stella,America/Chicago
 US,AR,Stelltown,Stelltown,America/Chicago
 US,AR,Stephens,Stephens,America/Chicago
 US,AR,Steprock,Steprock,America/Chicago
 US,AR,Steve,Steve,America/Chicago
 US,AR,Stewart,Stewart,America/Chicago
 US,AR,Stier,Stier,America/Chicago
 US,AR,Stimson,Stimson,America/Chicago
 US,AR,Stillions,Stillions,America/Chicago
 US,AR,Stokes,Stokes,America/Chicago
 US,AR,Stockton,Stockton,America/Chicago
 US,AR,Stone County,Stone County,America/Chicago
 US,AR,Stonewall,Stonewall,America/Chicago
 US,AR,Story,Story,America/Chicago
 US,AR,Stoverville,Stoverville,America/Chicago
 US,AR,Strain,Strain,America/Chicago
 US,FL,Francis Richard Grant,Francis Richard Grant,America/New_York
 US,FL,Francisco Barrios Grant,Francisco Barrios Grant,America/Chicago
 US,FL,Francisco Collin Grant,Francisco Collin Grant,America/Chicago
 US,FL,Francisco Vidall Grant,Francisco Vidall Grant,America/Chicago
 US,FL,Franjo,Franjo,America/New_York
 US,FL,Franklin,Franklin,America/New_York
 US,FL,Franklin County,Franklin County,America/New_York
 US,FL,Franklintown,Franklintown,America/New_York
 US,FL,Franwood Pines,Franwood Pines,America/New_York
 US,FL,Fred Hartley Grant,Fred Hartley Grant,America/New_York
 US,FL,Frederick Hartley Grant,Frederick Hartley Grant,America/New_York
 US,FL,Freemont,Freemont,America/New_York
 US,FL,Freeport,Freeport,America/Chicago
 US,FL,Frink,Frink,America/Chicago
 US,FL,Frog City,Frog City,America/New_York
 US,FL,Frontenac,Frontenac,America/New_York
 US,FL,Frostproof,Frostproof,America/New_York
 US,FL,Fruita,Fruita,America/New_York
 US,FL,Fruitland,Fruitland,America/New_York
 US,FL,Fruitville,Fruitville,America/New_York
 US,FL,Fullers,Fullers,America/New_York
 US,FL,Fullers Earth,Fullers Earth,America/New_York
 US,FL,Fullerville,Fullerville,America/New_York
 US,FL,G W Perpall Grant,G W Perpall Grant,America/New_York
 US,FL,Gif Clarke Grant,Gif Clarke Grant,America/New_York
 US,FL,Gaberonne,Gaberonne,America/Chicago
 US,FL,Gabriella,Gabriella,America/New_York
 US,FL,Gadsden County,Gadsden County,America/New_York
 US,FL,Gainesville,Gainesville,America/New_York
 US,FL,Galliver,Galliver,America/Chicago
 US,FL,Galloway,Galloway,America/New_York
 US,FL,Galt City,Galt City,America/Chicago
 US,FL,Gandy,Gandy,America/New_York
 US,FL,Gandyville,Gandyville,America/Chicago
 US,FL,Garden Isles,Garden Isles,America/New_York
 US,FL,Gardenville,Gardenville,America/New_York
 US,FL,Gardner,Gardner,America/New_York
 US,FL,Garnier,Garnier,America/Chicago
 US,FL,Gary,Gary,America/New_York
 US,FL,Gaskin,Gaskin,America/Chicago
 US,FL,Gaskins,Gaskins,America/Chicago
 US,FL,Gaskins Still,Gaskins Still,America/Chicago
 US,FL,Gasparilla,Gasparilla,America/New_York
 US,FL,Gateway,Gateway,America/New_York
 US,FL,Geneva,Geneva,America/New_York
 US,FL,Genoa,Genoa,America/New_York
 US,FL,George Anderson Grant,George Anderson Grant,America/New_York
 US,FL,George Atkinson Grant,George Atkinson Grant,America/New_York
 US,FL,George F Clark Grant,George F Clark Grant,America/New_York
 US,FL,George Hartley Grant,George Hartley Grant,America/New_York
 US,AR,Strickler,Strickler,America/Chicago
 US,AR,Stringtown,Stringtown,America/Chicago
 US,AR,Strong,Strong,America/Chicago
 US,AR,Stumptoe,Stumptoe,America/Chicago
 US,AR,Sturkie,Sturkie,America/Chicago
 US,AR,Stuttgart,Stuttgart,America/Chicago
 US,AR,Stuart,Stuart,America/Chicago
 US,AR,Sulphur City,Sulphur City,America/Chicago
 US,AR,Summers,Summers,America/Chicago
 US,AR,Summerville,Summerville,America/Chicago
 US,AR,Summit,Summit,America/Chicago
 US,AR,Sumpter,Sumpter,America/Chicago
 US,AR,Sunny Slope,Sunny Slope,America/Chicago
 US,AR,Sunnydale,Sunnydale,America/Chicago
 US,AR,Sunnyside,Sunnyside,America/Chicago
 US,AR,Sunshine,Sunshine,America/Chicago
 US,AR,Supply,Supply,America/Chicago
 US,AR,Suttle,Suttle,America/Chicago
 US,AR,Sutton,Sutton,America/Chicago
 US,AR,Swain,Swain,America/Chicago
 US,AR,Sweden,Sweden,America/Chicago
 US,AR,Sweethome,Sweethome,America/Chicago
 US,AR,Swifton,Swifton,America/Chicago
 US,AR,Sycamore,Sycamore,America/Chicago
 US,AR,Sylamore,Sylamore,America/Chicago
 US,AR,Sylvania,Sylvania,America/Chicago
 US,AR,Sylverino,Sylverino,America/Chicago
 US,AR,Tko Subdivision,Tko Subdivision,America/Chicago
 US,AR,Tafton,Tafton,America/Chicago
 US,AR,Talbot Addition,Talbot Addition,America/Chicago
 US,AR,Talley,Talley,America/Chicago
 US,AR,Tamo,Tamo,America/Chicago
 US,AR,Tanglewood,Tanglewood,America/Chicago
 US,AR,Tannenbaum,Tannenbaum,America/Chicago
 US,AR,Taral,Taral,America/Chicago
 US,AR,Tarnceville,Tarnceville,America/Chicago
 US,AR,Tarsus,Tarsus,America/Chicago
 US,AR,Tate,Tate,America/Chicago
 US,AR,Tarry,Tarry,America/Chicago
 US,AR,Taylor,Taylor,America/Chicago
 US,AR,Temperanceville,Temperanceville,America/Chicago
 US,AR,Temple,Temple,America/Chicago
 US,AR,Tennessee,Tennessee,America/Chicago
 US,AR,Terry,Terry,America/Chicago
 US,AR,Terrytown,Terrytown,America/Chicago
 US,AR,Texarkana,Texarkana,America/Chicago
 US,AR,Thebes,Thebes,America/Chicago
 US,AR,Thida,Thida,America/Chicago
 US,AR,Thiel,Thiel,America/Chicago
 US,AR,Thola,Thola,America/Chicago
 US,AR,Thomasville,Thomasville,America/Chicago
 US,AR,Thompson,Thompson,America/Chicago
 US,AR,Thompson Subdivision,Thompson Subdivision,America/Chicago
 US,AR,Thornburg,Thornburg,America/Chicago
 US,AR,Thorney,Thorney,America/Chicago
 US,FL,Hilton,Hilton,America/New_York
 US,FL,Interbay,Interbay,America/New_York
 US,FL,Kilgore,Kilgore,America/New_York
 US,FL,La Petite,La Petite,America/New_York
 US,FL,La Viva,La Viva,America/New_York
 US,FL,Lamb,Lamb,America/New_York
 US,FL,Robles,Robles,America/New_York
 US,FL,North Village,North Village,America/New_York
 US,FL,West Pines,West Pines,America/New_York
 US,FL,Wiggins,Wiggins,America/New_York
 US,FL,Shoals,Shoals,America/New_York
 US,FL,Sundance,Sundance,America/New_York
 US,FL,Sunset,Sunset,America/New_York
 US,FL,Sweats,Sweats,America/New_York
 US,FL,Uceta,Uceta,America/New_York
 US,AR,Pelsor,Pelsor,America/Chicago
 US,AR,Lansdale,Lansdale,America/Chicago
 US,FL,Middy,Middy,America/New_York
 US,FL,Dog,Dog,America/New_York
 US,FL,Oceanside Village,Oceanside Village,America/Chicago
 US,FL,Raffield Platt,Raffield Platt,America/Chicago
 US,FL,Upper Captiva,Upper Captiva,America/New_York
 US,FL,George I F Clark Grant,George I F Clark Grant,America/New_York
 US,FL,George I F Clarke Grant,George I F Clarke Grant,America/New_York
 US,FL,Georgetown,Georgetown,America/New_York
 US,FL,Georgiana,Georgiana,America/New_York
 US,FL,Geronimo Alvarez Grant,Geronimo Alvarez Grant,America/New_York
 US,FL,Gibson,Gibson,America/New_York
 US,FL,Gibsonia,Gibsonia,America/New_York
 US,FL,Gibsonton,Gibsonton,America/New_York
 US,FL,Gifford,Gifford,America/New_York
 US,FL,Gilchrist County,Gilchrist County,America/New_York
 US,FL,Gillette,Gillette,America/New_York
 US,FL,Gilmore,Gilmore,America/New_York
 US,FL,Glades County,Glades County,America/New_York
 US,FL,Gladeview,Gladeview,America/New_York
 US,FL,Glass,Glass,America/Chicago
 US,FL,Glen Saint Mary,Glen Saint Mary,America/New_York
 US,FL,Glencoe,Glencoe,America/New_York
 US,FL,Glendale,Glendale,America/Chicago
 US,FL,Golden Gate,Golden Gate,America/New_York
 US,FL,Golden Glades,Golden Glades,America/New_York
 US,FL,Golden Isles,Golden Isles,America/New_York
 US,FL,Goldenrod,Goldenrod,America/New_York
 US,FL,Goldstein,Goldstein,America/New_York
 US,FL,Golf,Golf,America/New_York
 US,FL,Golfview,Golfview,America/New_York
 US,FL,Gomez,Gomez,America/New_York
 US,FL,Gomez Grant,Gomez Grant,America/New_York
 US,FL,Gonzalez,Gonzalez,America/Chicago
 US,FL,Goodbys,Goodbys,America/New_York
 US,FL,Goodland,Goodland,America/New_York
 US,FL,Goodno,Goodno,America/New_York
 US,FL,Gordonville,Gordonville,America/New_York
 US,FL,Gotha,Gotha,America/New_York
 US,FL,Goulding,Goulding,America/Chicago
 US,FL,Goulds,Goulds,America/New_York
 US,FL,Graceville,Graceville,America/Chicago
 US,FL,Grady,Grady,America/New_York
 US,FL,Graham,Graham,America/New_York
 US,FL,Grahamsville,Grahamsville,America/New_York
 US,FL,Grandin,Grandin,America/New_York
 US,FL,Grandview,Grandview,America/New_York
 US,FL,Grant,Grant,America/New_York
 US,FL,Grantham,Grantham,America/Chicago
 US,FL,Grayvik,Grayvik,America/New_York
 US,FL,Greenacres City,Greenacres City,America/New_York
 US,FL,Greenfield,Greenfield,America/New_York
 US,FL,Greenhead,Greenhead,America/Chicago
 US,FL,Greenland,Greenland,America/New_York
 US,FL,Greensboro,Greensboro,America/New_York
 US,FL,Greenville,Greenville,America/New_York
 US,FL,Greenwood,Greenwood,America/Chicago
 US,FL,Gretna,Gretna,America/New_York
 US,FL,Griffin,Griffin,America/New_York
 US,FL,Gritney,Gritney,America/Chicago
 US,FL,Grosh,Grosh,America/Chicago
 US,FL,Grove City,Grove City,America/New_York
 US,FL,Groveland,Groveland,America/New_York
 US,FL,Gross,Gross,America/New_York
 US,FL,Guilford,Guilford,America/New_York
 US,FL,Gulf Breeze,Gulf Breeze,America/Chicago
 US,FL,Gulf City,Gulf City,America/New_York
 US,FL,Gulf County,Gulf County,America/Chicago
 US,FL,Gulf Hammock,Gulf Hammock,America/New_York
 US,FL,Gulf Harbors,Gulf Harbors,America/New_York
 US,FL,Gulf Pine,Gulf Pine,America/New_York
 US,FL,Gulf Pines,Gulf Pines,America/Chicago
 US,FL,Gulfport,Gulfport,America/New_York
 US,FL,H M Gomez Grant,H M Gomez Grant,America/New_York
 US,FL,H S Dexter Grant,H S Dexter Grant,America/New_York
 US,FL,Habor Bluffs,Habor Bluffs,America/New_York
 US,FL,Hacienda Village,Hacienda Village,America/New_York
 US,FL,Hague,Hague,America/New_York
 US,FL,Haile,Haile,America/New_York
 US,FL,Haines City,Haines City,America/New_York
 US,FL,Hainesworth,Hainesworth,America/New_York
 US,FL,Half Moon,Half Moon,America/New_York
 US,FL,Hall City,Hall City,America/New_York
 US,FL,Halsema,Halsema,America/New_York
 US,FL,Hamburg,Hamburg,America/New_York
 US,FL,Hamilton County,Hamilton County,America/New_York
 US,FL,Hammocks,Hammocks,America/New_York
 US,FL,Hammond,Hammond,America/New_York
 US,FL,Hammondville,Hammondville,America/New_York
 US,FL,Hampton,Hampton,America/New_York
 US,FL,Hannah Nobles Grant,Hannah Nobles Grant,America/New_York
 US,FL,Hanson Grant,Hanson Grant,America/New_York
 US,FL,Hanson,Hanson,America/New_York
 US,FL,Harbor Bluffs,Harbor Bluffs,America/New_York
 US,FL,Harbor Palms,Harbor Palms,America/New_York
 US,FL,Harbor Village,Harbor Village,America/New_York
 US,FL,Hardaway,Hardaway,America/New_York
 US,FL,Hardee County,Hardee County,America/New_York
 US,FL,Harker,Harker,America/New_York
 US,FL,Harlem,Harlem,America/New_York
 US,FL,Harney,Harney,America/New_York
 US,FL,Harmony,Harmony,America/New_York
 US,FL,Harold,Harold,America/Chicago
 US,FL,Harp,Harp,America/Chicago
 US,FL,Harper,Harper,America/Chicago
 US,FL,Harris,Harris,America/Chicago
 US,FL,Harrisburg,Harrisburg,America/New_York
 US,FL,Harrison,Harrison,America/New_York
 US,FL,Hart Haven,Hart Haven,America/New_York
 US,FL,Harvard,Harvard,America/New_York
 US,FL,Hasan,Hasan,America/New_York
 US,FL,Hastings,Hastings,America/New_York
 US,AR,Three Brothers,Three Brothers,America/Chicago
 US,AR,Three Forks,Three Forks,America/Chicago
 US,AR,Thurman,Thurman,America/Chicago
 US,AR,Tichnor,Tichnor,America/Chicago
 US,AR,Tillar,Tillar,America/Chicago
 US,AR,Tilly,Tilly,America/Chicago
 US,AR,Tilton,Tilton,America/Chicago
 US,AR,Timber Lake Manor,Timber Lake Manor,America/Chicago
 US,AR,Timbo,Timbo,America/Chicago
 US,AR,Tintop,Tintop,America/Chicago
 US,AR,Tip,Tip,America/Chicago
 US,AR,Tipperary,Tipperary,America/Chicago
 US,AR,Tipton,Tipton,America/Chicago
 US,AR,Toad Suck,Toad Suck,America/Chicago
 US,AR,Togo,Togo,America/Chicago
 US,AR,Tokalon,Tokalon,America/Chicago
 US,AR,Tokio,Tokio,America/Chicago
 US,AR,Toledo,Toledo,America/Chicago
 US,AR,Toltec,Toltec,America/Chicago
 US,AR,Tolu,Tolu,America/Chicago
 US,AR,Toluca,Toluca,America/Chicago
 US,AR,Tollville,Tollville,America/Chicago
 US,AR,Tomahawk,Tomahawk,America/Chicago
 US,AR,Tomberlin,Tomberlin,America/Chicago
 US,AR,Tomato,Tomato,America/Chicago
 US,AR,Toneyville,Toneyville,America/Chicago
 US,AR,Tongin,Tongin,America/Chicago
 US,AR,Tontitown,Tontitown,America/Chicago
 US,AR,Topaz,Topaz,America/Chicago
 US,AR,Toney,Toney,America/Chicago
 US,AR,Trace,Trace,America/Chicago
 US,AR,Trafalgar,Trafalgar,America/Chicago
 US,AR,Trailwood Addition,Trailwood Addition,America/Chicago
 US,AR,Traskwood,Traskwood,America/Chicago
 US,AR,Treat,Treat,America/Chicago
 US,AR,Trenton,Trenton,America/Chicago
 US,AR,Trident,Trident,America/Chicago
 US,AR,Trinnon,Trinnon,America/Chicago
 US,AR,Troy,Troy,America/Chicago
 US,AR,Trull,Trull,America/Chicago
 US,AR,Tubal,Tubal,America/Chicago
 US,AR,Tucker,Tucker,America/Chicago
 US,AR,Tuckerman,Tuckerman,America/Chicago
 US,AR,Tuckertown,Tuckertown,America/Chicago
 US,AR,Tulip,Tulip,America/Chicago
 US,AR,Tulot,Tulot,America/Chicago
 US,AR,Tuni,Tuni,America/Chicago
 US,AR,Tunis,Tunis,America/Chicago
 US,AR,Turkey,Turkey,America/Chicago
 US,AR,Turkey Scratch,Turkey Scratch,America/Chicago
 US,AR,Turner,Turner,America/Chicago
 US,AR,Turrell,Turrell,America/Chicago
 US,AR,Tuttle,Tuttle,America/Chicago
 US,AR,Tuttleton,Tuttleton,America/Chicago
 US,AR,Twin Bridges,Twin Bridges,America/Chicago
 US,AR,Twentythree,Twentythree,America/Chicago
 US,FL,Hatchbend,Hatchbend,America/New_York
 US,FL,Havana,Havana,America/New_York
 US,FL,Haynes,Haynes,America/Chicago
 US,FL,Heathrow,Heathrow,America/New_York
 US,FL,Heilbronn,Heilbronn,America/New_York
 US,FL,Heirs Of A E Ferguson Grant,Heirs Of A E Ferguson Grant,America/New_York
 US,FL,Heirs Of Ambrose Hull Grant,Heirs Of Ambrose Hull Grant,America/New_York
 US,FL,Heirs Of F P Fatio Grant,Heirs Of F P Fatio Grant,America/Kentucky/Monticello
 US,FL,Heirs Of Hudnall Grant,Heirs Of Hudnall Grant,America/Kentucky/Monticello
 US,FL,Heirs Of John H Mcintosh Grant,Heirs Of John H Mcintosh Grant,America/New_York
 US,FL,Heirs Of Joseph Hogans Grant,Heirs Of Joseph Hogans Grant,America/Kentucky/Monticello
 US,FL,Heirs Of Juan Garcia,Heirs Of Juan Garcia,America/New_York
 US,FL,Heirs Of Paul Dupont Grant,Heirs Of Paul Dupont Grant,America/New_York
 US,FL,Heirs Of Peter Bagley Grant,Heirs Of Peter Bagley Grant,America/New_York
 US,FL,Heirs Of Wiggins Grant,Heirs Of Wiggins Grant,America/New_York
 US,FL,Heirs Of Williams Grant,Heirs Of Williams Grant,America/New_York
 US,FL,Helen,Helen,America/New_York
 US,FL,Hell Gate,Hell Gate,America/New_York
 US,FL,Hen Scratch,Hen Scratch,America/New_York
 US,FL,Hendry County,Hendry County,America/New_York
 US,FL,Henrietta,Henrietta,America/New_York
 US,FL,Henry Hartley Grant,Henry Hartley Grant,America/New_York
 US,FL,Henry Michalet Grant,Henry Michalet Grant,America/Chicago
 US,FL,Henry O'Neal Grant,Henry O'Neal Grant,America/Chicago
 US,FL,Hernando,Hernando,America/New_York
 US,FL,Hernando County,Hernando County,America/New_York
 US,FL,Hero,Hero,America/New_York
 US,FL,Hesperides,Hesperides,America/New_York
 US,FL,Hialeah,Hialeah,America/New_York
 US,FL,Hibernia,Hibernia,America/New_York
 US,FL,Hicoria,Hicoria,America/New_York
 US,FL,Highland,Highland,America/New_York
 US,FL,Highland City,Highland City,America/New_York
 US,FL,Highlands,Highlands,America/New_York
 US,FL,Highlands County,Highlands County,America/New_York
 US,FL,Hilden,Hilden,America/New_York
 US,FL,Hildreth,Hildreth,America/New_York
 US,FL,Hill 'N Dale,Hill 'N Dale,America/New_York
 US,FL,Hillcoat,Hillcoat,America/New_York
 US,FL,Hilliard,Hilliard,America/New_York
 US,FL,Hilliardville,Hilliardville,America/New_York
 US,FL,Hillsborough County,Hillsborough County,America/New_York
 US,FL,Hilolo,Hilolo,America/New_York
 US,FL,Hines,Hines,America/New_York
 US,FL,Hinson,Hinson,America/New_York
 US,FL,Hodgson,Hodgson,America/New_York
 US,FL,Hogan,Hogan,America/New_York
 US,FL,Holder,Holder,America/New_York
 US,FL,Holiday,Holiday,America/New_York
 US,FL,Holiday Manor,Holiday Manor,America/New_York
 US,FL,Holland,Holland,America/New_York
 US,FL,Holley,Holley,America/Chicago
 US,FL,Hollister,Hollister,America/New_York
 US,FL,Hollywood,Hollywood,America/New_York
 US,FL,Hollywood Ridge Farms,Hollywood Ridge Farms,America/New_York
 US,FL,Holmes County,Holmes County,America/Chicago
 US,FL,Holopaw,Holopaw,America/New_York
 US,FL,Holt,Holt,America/Chicago
 US,FL,Homeland,Homeland,America/New_York
 US,FL,Homosassa,Homosassa,America/New_York
 US,FL,Honeyville,Honeyville,America/Chicago
 US,FL,Honore,Honore,America/New_York
 US,FL,Hooper,Hooper,America/New_York
 US,FL,Hopewell,Hopewell,America/New_York
 US,FL,Hornsville,Hornsville,America/Chicago
 US,FL,Horseshoe,Horseshoe,America/New_York
 US,FL,Hosford,Hosford,America/New_York
 US,FL,Houston,Houston,America/New_York
 US,FL,Howard,Howard,America/New_York
 US,FL,Howey Height,Howey Height,America/New_York
 US,FL,Hoyt,Hoyt,America/New_York
 US,FL,Hucomer,Hucomer,America/New_York
 US,FL,Hudson,Hudson,America/Chicago
 US,FL,Hugh,Hugh,America/New_York
 US,FL,Hulaw,Hulaw,America/Chicago
 US,FL,Hull,Hull,America/New_York
 US,FL,Hunter,Hunter,America/New_York
 US,FL,Huntington,Huntington,America/New_York
 US,FL,Hypoluxo Village,Hypoluxo Village,America/New_York
 US,FL,Iamonia,Iamonia,America/New_York
 US,FL,Hypoluxo,Hypoluxo,America/New_York
 US,FL,Iddo,Iddo,America/New_York
 US,FL,Idylwild,Idylwild,America/New_York
 US,FL,Ilexhurst,Ilexhurst,America/New_York
 US,FL,Immokalee,Immokalee,America/New_York
 US,FL,Indialantic,Indialantic,America/New_York
 US,FL,Indian Creek Village,Indian Creek Village,America/New_York
 US,FL,Indian Mound Village,Indian Mound Village,America/New_York
 US,FL,Indian Shores,Indian Shores,America/New_York
 US,FL,Indianola,Indianola,America/New_York
 US,FL,Indiantown,Indiantown,America/New_York
 US,FL,Indrio,Indrio,America/New_York
 US,FL,Ingle,Ingle,America/New_York
 US,FL,Inlikita,Inlikita,America/New_York
 US,FL,Innisbrook,Innisbrook,America/New_York
 US,FL,Interama,Interama,America/New_York
 US,FL,Intercession City,Intercession City,America/New_York
 US,FL,Interlachen,Interlachen,America/New_York
 US,FL,Inverness,Inverness,America/New_York
 US,FL,Inwood,Inwood,America/Chicago
 US,FL,Iola,Iola,America/Chicago
 US,FL,Iona,Iona,America/New_York
 US,FL,Iowa City,Iowa City,America/New_York
 US,FL,Irvine,Irvine,America/New_York
 US,FL,Isaac Carter Grant,Isaac Carter Grant,America/New_York
 US,FL,Islamorada,Islamorada,America/New_York
 US,FL,Isle Of Normandy,Isle Of Normandy,America/New_York
 US,FL,Isle Of Palms,Isle Of Palms,America/New_York
 US,FL,Isleboro,Isleboro,America/New_York
 US,FL,Isles Of Capri,Isles Of Capri,America/New_York
 US,FL,Issac Hendricks Grant,Issac Hendricks Grant,America/New_York
 US,FL,Istachatta,Istachatta,America/New_York
 US,FL,Istokpoga,Istokpoga,America/New_York
 US,FL,Italia,Italia,America/New_York
 US,FL,Ivan,Ivan,America/New_York
 US,FL,Izagora,Izagora,America/Chicago
 US,FL,J B Entralgo Grant,J B Entralgo Grant,America/New_York
 US,FL,J B Gaudry Grant,J B Gaudry Grant,America/New_York
 US,FL,J Bachlott Grant,J Bachlott Grant,America/New_York
 US,FL,J Jones Grant,J Jones Grant,America/New_York
 US,FL,J L Sanchez And Others Grant,J L Sanchez And Others Grant,America/New_York
 US,FL,J M Hanson Grant,J M Hanson Grant,America/New_York
 US,FL,J M Sanchez Grant,J M Sanchez Grant,America/New_York
 US,FL,J Peavett Grant,J Peavett Grant,America/New_York
 US,FL,J S Sanchez And Others Grant,J S Sanchez And Others Grant,America/New_York
 US,FL,J Summeral Grant,J Summeral Grant,America/New_York
 US,FL,J And E Ormond Grant,J And E Ormond Grant,America/New_York
 US,FL,Jackson County,Jackson County,America/Chicago
 US,FL,Jacksonville,Jacksonville,America/New_York
 US,FL,Jacobs,Jacobs,America/Chicago
 US,FL,James Bradley Grant,James Bradley Grant,America/New_York
 US,FL,James Clarke Grant,James Clarke Grant,America/New_York
 US,FL,James Hall Grant,James Hall Grant,America/New_York
 US,FL,James Plummer Grant,James Plummer Grant,America/New_York
 US,FL,James Wilkins Grant,James Wilkins Grant,America/Chicago
 US,FL,Jamestown,Jamestown,America/New_York
 US,FL,Jamieson,Jamieson,America/New_York
 US,FL,Jan-Phyl Village,Jan-Phyl Village,America/New_York
 US,FL,Jane Murray Grant,Jane Murray Grant,America/New_York
 US,FL,Jarrett,Jarrett,America/New_York
 US,FL,Jasper,Jasper,America/New_York
 US,FL,Jay,Jay,America/Chicago
 US,FL,Jay Jay,Jay Jay,America/New_York
 US,FL,Jayme Fontanels Grant,Jayme Fontanels Grant,America/Chicago
 US,FL,Jefferson County,Jefferson County,America/New_York
 US,FL,Jena,Jena,America/New_York
 US,FL,Jenada Isles,Jenada Isles,America/New_York
 US,FL,Jennings,Jennings,America/New_York
 US,FL,Jerome,Jerome,America/New_York
 US,AR,Twist,Twist,America/Chicago
 US,AR,Tyro,Tyro,America/Chicago
 US,AR,Tyronza,Tyronza,America/Chicago
 US,AR,Umpire,Umpire,America/Chicago
 US,AR,Unco,Unco,America/Chicago
 US,AR,Union,Union,America/Chicago
 US,AR,Union City,Union City,America/Chicago
 US,AR,Union County,Union County,America/Chicago
 US,AR,Uniontown,Uniontown,America/Chicago
 US,AR,Unity,Unity,America/Chicago
 US,AR,Uno,Uno,America/Chicago
 US,AR,Urbana,Urbana,America/Chicago
 US,AR,Urbanette,Urbanette,America/Chicago
 US,AR,Ursula,Ursula,America/Chicago
 US,AR,Vaby,Vaby,America/Chicago
 US,AR,Vaden,Vaden,America/Chicago
 US,AR,Vail,Vail,America/Chicago
 US,AR,Valentine,Valentine,America/Chicago
 US,AR,Vallier,Vallier,America/Chicago
 US,AR,Van,Van,America/Chicago
 US,AR,Van Buren County,Van Buren County,America/Chicago
 US,AR,Van Buren,Van Buren,America/Chicago
 US,AR,Vance,Vance,America/Chicago
 US,AR,Vanduzer,Vanduzer,America/Chicago
 US,AR,Vanndale,Vanndale,America/Chicago
 US,AR,Vaucluse,Vaucluse,America/Chicago
 US,AR,Vaughn,Vaughn,America/Chicago
 US,AR,Varner,Varner,America/Chicago
 US,AR,Velie,Velie,America/Chicago
 US,AR,Vendor,Vendor,America/Chicago
 US,AR,Venice,Venice,America/Chicago
 US,AR,Verona,Verona,America/Chicago
 US,AR,Venus,Venus,America/Chicago
 US,AR,Vesta,Vesta,America/Chicago
 US,AR,Vick,Vick,America/Chicago
 US,AR,Victor,Victor,America/Chicago
 US,AR,Vidette,Vidette,America/Chicago
 US,AR,Village,Village,America/Chicago
 US,AR,Vincent,Vincent,America/Chicago
 US,AR,Vilonia,Vilonia,America/Chicago
 US,AR,Vineyard,Vineyard,America/Chicago
 US,AR,Vise Addition,Vise Addition,America/Chicago
 US,AR,Vista Shores,Vista Shores,America/Chicago
 US,AR,Wabash,Wabash,America/Chicago
 US,AR,Wabbel,Wabbel,America/Chicago
 US,AR,Wade,Wade,America/Chicago
 US,AR,Wagnon,Wagnon,America/Chicago
 US,AR,Wakefield Village,Wakefield Village,America/Chicago
 US,AR,Waldo,Waldo,America/Chicago
 US,AR,Walker,Walker,America/Chicago
 US,AR,Walkerville,Walkerville,America/Chicago
 US,AR,Wallace,Wallace,America/Chicago
 US,AR,Wallaceburg,Wallaceburg,America/Chicago
 US,AR,Walnut,Walnut,America/Chicago
 US,AR,Walters,Walters,America/Chicago
 US,AR,Waltreak,Waltreak,America/Chicago
 US,AR,Wampoo,Wampoo,America/Chicago
 US,FL,Jessamine,Jessamine,America/New_York
 US,FL,Jessie Willies,Jessie Willies,America/New_York
 US,FL,Jewfish,Jewfish,America/New_York
 US,FL,Joaquin Barella Grant,Joaquin Barella Grant,America/Chicago
 US,FL,Job Wiggins Grant,Job Wiggins Grant,America/New_York
 US,FL,John Addison Grant,John Addison Grant,America/New_York
 US,FL,John B Cazenave Grant,John B Cazenave Grant,America/Chicago
 US,FL,John Bolton Grant,John Bolton Grant,America/New_York
 US,FL,John Broward Grant,John Broward Grant,America/New_York
 US,FL,John Carter Grant,John Carter Grant,America/New_York
 US,FL,John Christopher Grant,John Christopher Grant,America/New_York
 US,FL,John De La Rua Grant,John De La Rua Grant,America/Chicago
 US,FL,John F Brown Grant,John F Brown Grant,America/New_York
 US,FL,John Faulk Grant,John Faulk Grant,America/New_York
 US,FL,John G Rushing Grant,John G Rushing Grant,America/New_York
 US,FL,John Gayler Grant,John Gayler Grant,America/Chicago
 US,FL,John H Mcintosh Grant,John H Mcintosh Grant,America/New_York
 US,FL,John Houston Grant,John Houston Grant,America/New_York
 US,FL,John Low Grant,John Low Grant,America/New_York
 US,FL,John Mcqueen Grant,John Mcqueen Grant,America/New_York
 US,FL,John Mestre Grant,John Mestre Grant,America/New_York
 US,FL,John Middleton Grant,John Middleton Grant,America/New_York
 US,FL,John Ruiz Grant,John Ruiz Grant,America/Chicago
 US,FL,John Sanchez Grant,John Sanchez Grant,America/New_York
 US,FL,John Heurtas Grant,John Heurtas Grant,America/New_York
 US,FL,Johnson,Johnson,America/New_York
 US,FL,Johnson Crossroad,Johnson Crossroad,America/Chicago
 US,FL,Johnstown,Johnstown,America/New_York
 US,FL,Jonathan Watson Grant,Jonathan Watson Grant,America/New_York
 US,FL,Jon B Richard Grant,Jon B Richard Grant,America/New_York
 US,FL,Jonesboro,Jonesboro,America/New_York
 US,FL,Jonesville,Jonesville,America/New_York
 US,FL,Jose Sanchez Grant,Jose Sanchez Grant,America/New_York
 US,FL,Jose De La Maza Arrendondo Grant,Jose De La Maza Arrendondo Grant,America/New_York
 US,FL,Joseph Bonelly Grant,Joseph Bonelly Grant,America/New_York
 US,FL,Joseph Cruzat Grant,Joseph Cruzat Grant,America/Chicago
 US,FL,Joseph Cruzat And Francisco De Viller Grant,Joseph Cruzat And Francisco De Viller Grant,America/Chicago
 US,FL,Joseph Delespine Grant,Joseph Delespine Grant,America/New_York
 US,FL,Joseph Fenwick Grant,Joseph Fenwick Grant,America/New_York
 US,FL,Joseph Gaunt Grant,Joseph Gaunt Grant,America/New_York
 US,FL,Joseph Lowrey Grant,Joseph Lowrey Grant,America/New_York
 US,FL,Joseph M Hernandez Grant,Joseph M Hernandez Grant,America/New_York
 US,FL,Joseph Peavett Grant,Joseph Peavett Grant,America/New_York
 US,FL,Joseph Rain And William Bailey Grant,Joseph Rain And William Bailey Grant,America/New_York
 US,FL,Joseph Summeral Grant,Joseph Summeral Grant,America/New_York
 US,FL,Joseph Summerland Grant,Joseph Summerland Grant,America/New_York
 US,FL,Joseph Wales Grant,Joseph Wales Grant,America/New_York
 US,FL,Josepha Pol Grant,Josepha Pol Grant,America/Chicago
 US,FL,Joshua,Joshua,America/New_York
 US,FL,Juan Dominquez Grant,Juan Dominquez Grant,America/Chicago
 US,FL,Juan Donelson Grant,Juan Donelson Grant,America/Chicago
 US,FL,Juan Inerarity Grant,Juan Inerarity Grant,America/Chicago
 US,FL,Juan Perchman Grant,Juan Perchman Grant,America/New_York
 US,FL,Jumeau,Jumeau,America/New_York
 US,FL,Juniper,Juniper,America/New_York
 US,FL,Juno Isles,Juno Isles,America/New_York
 US,FL,Jupiter,Jupiter,America/New_York
 US,FL,Jupiter Inlet Beach Colony,Jupiter Inlet Beach Colony,America/New_York
 US,FL,Kalamazoo,Kalamazoo,America/New_York
 US,FL,Kalon,Kalon,America/New_York
 US,FL,Kanapaha,Kanapaha,America/New_York
 US,FL,Kathleen,Kathleen,America/New_York
 US,FL,Keela,Keela,America/New_York
 US,FL,Keentown,Keentown,America/New_York
 US,FL,Kenansville,Kenansville,America/New_York
 US,FL,Kendall,Kendall,America/New_York
 US,FL,Kenneth City,Kenneth City,America/New_York
 US,FL,Kent,Kent,America/New_York
 US,FL,Kennedy Still,Kennedy Still,America/New_York
 US,FL,Keri,Keri,America/New_York
 US,FL,Kern,Kern,America/New_York
 US,FL,Kerr City,Kerr City,America/New_York
 US,FL,Keuka,Keuka,America/New_York
 US,FL,Key Biscayne,Key Biscayne,America/New_York
 US,FL,Key Largo,Key Largo,America/New_York
 US,FL,Keystone,Keystone,America/New_York
 US,FL,Keysville,Keysville,America/New_York
 US,FL,Killarney,Killarney,America/New_York
 US,FL,Killarney Shores,Killarney Shores,America/New_York
 US,FL,Kinard,Kinard,America/Chicago
 US,FL,Kingsford,Kingsford,America/New_York
 US,FL,Kingsland,Kingsland,America/New_York
 US,FL,Kingsley,Kingsley,America/New_York
 US,FL,Kingsley Village,Kingsley Village,America/New_York
 US,FL,Kinsey,Kinsey,America/New_York
 US,FL,Kirkwood,Kirkwood,America/New_York
 US,FL,Kissimmee,Kissimmee,America/New_York
 US,FL,Knights,Knights,America/New_York
 US,FL,Koerber,Koerber,America/Chicago
 US,FL,Kolokee,Kolokee,America/New_York
 US,FL,Korona,Korona,America/New_York
 US,FL,Kossuthville,Kossuthville,America/New_York
 US,FL,Kuhlman,Kuhlman,America/New_York
 US,FL,Kynesville,Kynesville,America/Chicago
 US,FL,Labelle,Labelle,America/New_York
 US,FL,La Crosse,La Crosse,America/New_York
 US,FL,La Grange,La Grange,America/New_York
 US,FL,Labuena,Labuena,America/New_York
 US,FL,Lackawanna,Lackawanna,America/New_York
 US,FL,Lacoochee,Lacoochee,America/New_York
 US,FL,Lacota,Lacota,America/New_York
 US,FL,Lacymark,Lacymark,America/New_York
 US,FL,Lafayette,Lafayette,America/New_York
 US,FL,Lafayette County,Lafayette County,America/New_York
 US,FL,Laird,Laird,America/Chicago
 US,FL,Lakeland,Lakeland,America/New_York
 US,FL,Lakeland Highlands,Lakeland Highlands,America/New_York
 US,FL,Lakeport,Lakeport,America/New_York
 US,FL,Lakeside,Lakeside,America/New_York
 US,FL,Lakeview,Lakeview,America/New_York
 US,FL,Lakeville,Lakeville,America/New_York
 US,FL,Lakewood,Lakewood,America/New_York
 US,FL,Lanark Village,Lanark Village,America/New_York
 US,FL,Lancaster,Lancaster,America/New_York
 US,FL,Landrum,Landrum,America/New_York
 US,FL,Langmar,Langmar,America/New_York
 US,FL,Lansing,Lansing,America/New_York
 US,FL,Lantana,Lantana,America/New_York
 US,FL,Largo,Largo,America/New_York
 US,FL,Larsen,Larsen,America/New_York
 US,FL,Lauderdale Harbors,Lauderdale Harbors,America/New_York
 US,FL,Lauderdale-By-The-Sea,Lauderdale-By-The-Sea,America/New_York
 US,FL,Laurel,Laurel,America/New_York
 US,FL,Laurel Villa,Laurel Villa,America/New_York
 US,FL,Lawtey,Lawtey,America/New_York
 US,FL,Layton,Layton,America/New_York
 US,FL,Lealman,Lealman,America/New_York
 US,FL,Lecanto,Lecanto,America/New_York
 US,FL,Lee,Lee,America/New_York
 US,FL,Lee County,Lee County,America/New_York
 US,FL,Lee Cypress,Lee Cypress,America/New_York
 US,FL,Leisure City,Leisure City,America/New_York
 US,FL,Lely,Lely,America/New_York
 US,FL,Leland,Leland,America/New_York
 US,FL,Lemon City,Lemon City,America/New_York
 US,FL,Leno,Leno,America/New_York
 US,FL,Leon County,Leon County,America/New_York
 US,FL,Leonia,Leonia,America/Chicago
 US,FL,Lessie,Lessie,America/New_York
 US,FL,Levi Sparkman Grant,Levi Sparkman Grant,America/New_York
 US,FL,Levy County,Levy County,America/New_York
 US,FL,Lewis,Lewis,America/New_York
 US,FL,Lewis Mattair Grant,Lewis Mattair Grant,America/New_York
 US,FL,Liberty,Liberty,America/New_York
 US,FL,Liberty County,Liberty County,America/New_York
 US,AR,War Eagle,War Eagle,America/Chicago
 US,AR,Warbritton,Warbritton,America/Chicago
 US,AR,Ward,Ward,America/Chicago
 US,AR,Wardell,Wardell,America/Chicago
 US,AR,Ware,Ware,America/Chicago
 US,AR,Warner,Warner,America/Chicago
 US,AR,Warren,Warren,America/Chicago
 US,AR,Warrenton,Warrenton,America/Chicago
 US,AR,Warsaw,Warsaw,America/Chicago
 US,AR,Washburn,Washburn,America/Chicago
 US,AR,Washington,Washington,America/Chicago
 US,AR,Washington County,Washington County,America/Chicago
 US,AR,Washita,Washita,America/Chicago
 US,AR,Waterloo,Waterloo,America/Chicago
 US,AR,Waterproof,Waterproof,America/Chicago
 US,AR,Watson,Watson,America/Chicago
 US,AR,Wattensaw,Wattensaw,America/Chicago
 US,AR,Watts,Watts,America/Chicago
 US,AR,Wave,Wave,America/Chicago
 US,AR,Waveland,Waveland,America/Chicago
 US,AR,Waverly,Waverly,America/Chicago
 US,AR,Waymack Addition,Waymack Addition,America/Chicago
 US,AR,Wayton,Wayton,America/Chicago
 US,AR,Weathers,Weathers,America/Chicago
 US,AR,Webb City,Webb City,America/Chicago
 US,AR,Weber,Weber,America/Chicago
 US,AR,Weddington,Weddington,America/Chicago
 US,AR,Weed,Weed,America/Chicago
 US,AR,Weeks,Weeks,America/Chicago
 US,AR,Welcome,Welcome,America/Chicago
 US,AR,Weiner,Weiner,America/Chicago
 US,AR,Wellford,Wellford,America/Chicago
 US,AR,Welsh,Welsh,America/Chicago
 US,AR,Weona,Weona,America/Chicago
 US,AR,Wesley,Wesley,America/Chicago
 US,AR,Wesson,Wesson,America/Chicago
 US,AR,West Aplin,West Aplin,America/Chicago
 US,AR,West Cobb,West Cobb,America/Chicago
 US,AR,West Crossett,West Crossett,America/Chicago
 US,AR,West Helena,West Helena,America/Chicago
 US,AR,West Hartford,West Hartford,America/Chicago
 US,AR,West Kennett,West Kennett,America/Chicago
 US,AR,West Liberty,West Liberty,America/Chicago
 US,AR,West Marche,West Marche,America/Chicago
 US,AR,West Otis,West Otis,America/Chicago
 US,AR,West Pangburn,West Pangburn,America/Chicago
 US,AR,West Richwoods,West Richwoods,America/Chicago
 US,AR,Westbrook Addition,Westbrook Addition,America/Chicago
 US,AR,Western,Western,America/Chicago
 US,AR,Westor,Westor,America/Chicago
 US,AR,Westover,Westover,America/Chicago
 US,AR,Westville,Westville,America/Chicago
 US,AR,Westwood,Westwood,America/Chicago
 US,AR,Wharton,Wharton,America/Chicago
 US,FL,Lillibridge,Lillibridge,America/New_York
 US,FL,Lily,Lily,America/New_York
 US,FL,Limestone,Limestone,America/New_York
 US,FL,Linadale,Linadale,America/New_York
 US,FL,Linden,Linden,America/New_York
 US,FL,Lindgren,Lindgren,America/New_York
 US,FL,Lindsay Todd Grant,Lindsay Todd Grant,America/New_York
 US,FL,Limona,Limona,America/New_York
 US,FL,Lisbon,Lisbon,America/New_York
 US,FL,Lithia,Lithia,America/New_York
 US,FL,Little Lake City,Little Lake City,America/New_York
 US,FL,Littleburg Mason Grant,Littleburg Mason Grant,America/Chicago
 US,FL,Littman,Littman,America/New_York
 US,FL,Lloyd,Lloyd,America/New_York
 US,FL,Loch Lommond,Loch Lommond,America/New_York
 US,FL,Lochloosa,Lochloosa,America/New_York
 US,FL,Lock Arbor,Lock Arbor,America/New_York
 US,FL,Lockhart,Lockhart,America/New_York
 US,FL,Lockharts Subdivision,Lockharts Subdivision,America/New_York
 US,FL,Lockwood,Lockwood,America/New_York
 US,FL,Lois,Lois,America/New_York
 US,FL,Lokosee,Lokosee,America/New_York
 US,FL,Long Hammock,Long Hammock,America/New_York
 US,FL,Longdale,Longdale,America/New_York
 US,FL,Longwood,Longwood,America/Chicago
 US,FL,Lordland,Lordland,America/New_York
 US,FL,Loretto,Loretto,America/New_York
 US,FL,Lorida,Lorida,America/New_York
 US,FL,Lorraine,Lorraine,America/New_York
 US,FL,Lottieville,Lottieville,America/New_York
 US,FL,Lotus,Lotus,America/New_York
 US,FL,Loughman,Loughman,America/New_York
 US,FL,Louise,Louise,America/New_York
 US,FL,Lovedale,Lovedale,America/Chicago
 US,FL,Lovett,Lovett,America/New_York
 US,FL,Lowell,Lowell,America/New_York
 US,FL,Lowry,Lowry,America/New_York
 US,FL,Loxahatchee Groves,Loxahatchee Groves,America/New_York
 US,FL,Loyce,Loyce,America/New_York
 US,FL,Lucas Crayon Grant,Lucas Crayon Grant,America/New_York
 US,FL,Luddersville,Luddersville,America/New_York
 US,FL,Ludlam,Ludlam,America/New_York
 US,FL,Lukens,Lukens,America/New_York
 US,FL,Lulu,Lulu,America/New_York
 US,FL,Lumberton,Lumberton,America/New_York
 US,FL,Lundy,Lundy,America/New_York
 US,FL,Luraville,Luraville,America/New_York
 US,FL,Lutterloh,Lutterloh,America/New_York
 US,FL,Lutz,Lutz,America/New_York
 US,FL,Lynchburg,Lynchburg,America/New_York
 US,FL,Lynn,Lynn,America/New_York
 US,FL,Lynn Haven,Lynn Haven,America/Chicago
 US,FL,Lynne,Lynne,America/New_York
 US,FL,M E Levy Grant,M E Levy Grant,America/New_York
 US,AR,Wheatley,Wheatley,America/Chicago
 US,AR,Wheeler,Wheeler,America/Chicago
 US,AR,Wheeling,Wheeling,America/Chicago
 US,AR,Whipple,Whipple,America/Chicago
 US,AR,Whiskerville,Whiskerville,America/Chicago
 US,AR,Whisp,Whisp,America/Chicago
 US,AR,Whispering Pines Addition,Whispering Pines Addition,America/Chicago
 US,AR,Whisperwood,Whisperwood,America/Chicago
 US,AR,Whistleville,Whistleville,America/Chicago
 US,AR,Whitaker,Whitaker,America/Chicago
 US,AR,White,White,America/Chicago
 US,AR,White Cliffs,White Cliffs,America/Chicago
 US,AR,White County,White County,America/Chicago
 US,AR,Whitefield,Whitefield,America/Chicago
 US,AR,Whitehall,Whitehall,America/Chicago
 US,AR,Whitener,Whitener,America/Chicago
 US,AR,Whitetown,Whitetown,America/Chicago
 US,AR,Whiteville,Whiteville,America/Chicago
 US,AR,Whitlow,Whitlow,America/Chicago
 US,AR,Whitmore,Whitmore,America/Chicago
 US,AR,Whittington,Whittington,America/Chicago
 US,AR,Whitton,Whitton,America/Chicago
 US,AR,Wideman,Wideman,America/Chicago
 US,AR,Wiederkehr Village,Wiederkehr Village,America/Chicago
 US,AR,Wilbeth,Wilbeth,America/Chicago
 US,AR,Wilburn,Wilburn,America/Chicago
 US,AR,Wild Cherry,Wild Cherry,America/Chicago
 US,AR,Wildwood,Wildwood,America/Chicago
 US,AR,Wilkins,Wilkins,America/Chicago
 US,AR,Williamson,Williamson,America/Chicago
 US,AR,Willis,Willis,America/Chicago
 US,AR,Willow,Willow,America/Chicago
 US,AR,Willow Belle,Willow Belle,America/Chicago
 US,AR,Willow Lake Subdivision,Willow Lake Subdivision,America/Chicago
 US,AR,Wilmar,Wilmar,America/Chicago
 US,AR,Wilmot,Wilmot,America/Chicago
 US,AR,Wilson,Wilson,America/Chicago
 US,AR,Wilton,Wilton,America/Chicago
 US,AR,Windwood Circle,Windwood Circle,America/Chicago
 US,AR,Winesburg,Winesburg,America/Chicago
 US,AR,Winfield,Winfield,America/Chicago
 US,AR,Winfrey,Winfrey,America/Chicago
 US,AR,Wing,Wing,America/Chicago
 US,AR,Winington,Winington,America/Chicago
 US,AR,Winona,Winona,America/Chicago
 US,AR,Winrock,Winrock,America/Chicago
 US,AR,Winslow,Winslow,America/Chicago
 US,AR,Wirth,Wirth,America/Chicago
 US,AR,Wiseman,Wiseman,America/Chicago
 US,AR,Winthrop,Winthrop,America/Chicago
 US,AR,Witherspoon,Witherspoon,America/Chicago
 US,AR,Witter,Witter,America/Chicago
 US,AR,Wittsburg,Wittsburg,America/Chicago
 US,AR,Wiville,Wiville,America/Chicago
 US,FL,M Kunner Grant,M Kunner Grant,America/New_York
 US,FL,Mabel,Mabel,America/New_York
 US,FL,Macclenny,Macclenny,America/New_York
 US,FL,Macom,Macom,America/Chicago
 US,FL,Macon,Macon,America/New_York
 US,FL,Madison,Madison,America/New_York
 US,FL,Madison County,Madison County,America/New_York
 US,FL,Magnolia Bluffs,Magnolia Bluffs,America/New_York
 US,FL,Maitland,Maitland,America/New_York
 US,FL,Malabar,Malabar,America/New_York
 US,FL,Malone,Malone,America/Chicago
 US,FL,Manalapan,Manalapan,America/New_York
 US,FL,Manasota,Manasota,America/New_York
 US,FL,Manatee,Manatee,America/New_York
 US,FL,Manatee County,Manatee County,America/New_York
 US,FL,Manavista,Manavista,America/New_York
 US,FL,Mandalay,Mandalay,America/New_York
 US,FL,Mandarin,Mandarin,America/New_York
 US,FL,Mandeville,Mandeville,America/New_York
 US,FL,Mango,Mango,America/New_York
 US,FL,Manhatten,Manhatten,America/New_York
 US,FL,Manning,Manning,America/New_York
 US,FL,Mannville,Mannville,America/New_York
 US,FL,Manuel Bonafay Grant,Manuel Bonafay Grant,America/Chicago
 US,FL,Manuel Gonzales Grant,Manuel Gonzales Grant,America/Chicago
 US,FL,Marathon,Marathon,America/New_York
 US,FL,Marathon Shores,Marathon Shores,America/New_York
 US,FL,Marcy,Marcy,America/New_York
 US,FL,Margaretta,Margaretta,America/New_York
 US,FL,Margate,Margate,America/New_York
 US,FL,Maria De Molaree Grant,Maria De Molaree Grant,America/Chicago
 US,FL,Marianna,Marianna,America/Chicago
 US,FL,Maricamp,Maricamp,America/New_York
 US,FL,Marietta,Marietta,America/New_York
 US,FL,Marineland,Marineland,America/New_York
 US,FL,Marion,Marion,America/New_York
 US,FL,Marion County,Marion County,America/New_York
 US,FL,Markham,Markham,America/New_York
 US,FL,Marland,Marland,America/New_York
 US,FL,Mart Law Seminole Village,Mart Law Seminole Village,America/New_York
 US,FL,Martel,Martel,America/New_York
 US,FL,Martin,Martin,America/New_York
 US,FL,Martin County,Martin County,America/New_York
 US,FL,Marvina,Marvina,America/New_York
 US,FL,Mary Ann Davis Grant,Mary Ann Davis Grant,America/New_York
 US,FL,Mary Esther,Mary Esther,America/Chicago
 US,FL,Mary Smith Grant,Mary Smith Grant,America/New_York
 US,FL,Marysville,Marysville,America/Chicago
 US,FL,Masaryktown,Masaryktown,America/New_York
 US,FL,Mason,Mason,America/New_York
 US,FL,Matecumbe,Matecumbe,America/New_York
 US,FL,Matoaka,Matoaka,America/New_York
 US,FL,Mattox,Mattox,America/New_York
 US,FL,Maxcy Quarters,Maxcy Quarters,America/New_York
 US,FL,Maxville,Maxville,America/New_York
 US,FL,Mayo,Mayo,America/New_York
 US,FL,Mayport,Mayport,America/New_York
 US,FL,Maysland,Maysland,America/New_York
 US,FL,Maytown,Maytown,America/New_York
 US,FL,Mcalpin,Mcalpin,America/New_York
 US,FL,Mccaln,Mccaln,America/New_York
 US,FL,Mccolsky,Mccolsky,America/New_York
 US,FL,Mccolskey,Mccolskey,America/New_York
 US,FL,Mcdavid,Mcdavid,America/Chicago
 US,FL,Mcdonald,Mcdonald,America/New_York
 US,FL,Mcdowell And Black Grant,Mcdowell And Black Grant,America/New_York
 US,FL,Mcgregor,Mcgregor,America/New_York
 US,FL,Mcintosh,Mcintosh,America/New_York
 US,FL,Mcintyre,Mcintyre,America/New_York
 US,FL,Mckinnon,Mckinnon,America/Chicago
 US,FL,Mclellan,Mclellan,America/Chicago
 US,FL,Mcmeekin,Mcmeekin,America/New_York
 US,FL,Mcpherson,Mcpherson,America/New_York
 US,FL,Mecca,Mecca,America/New_York
 US,FL,Medart,Medart,America/New_York
 US,FL,Medley,Medley,America/New_York
 US,FL,Medulla,Medulla,America/New_York
 US,FL,Melalevca Isles,Melalevca Isles,America/New_York
 US,FL,Melbourne,Melbourne,America/New_York
 US,FL,Melbourne Shores,Melbourne Shores,America/New_York
 US,FL,Melbourne Village,Melbourne Village,America/New_York
 US,FL,Melrose,Melrose,America/New_York
 US,FL,Melton Manor,Melton Manor,America/New_York
 US,FL,Memphis,Memphis,America/New_York
 US,FL,Mercer,Mercer,America/New_York
 US,FL,Merediths,Merediths,America/New_York
 US,FL,Meridian,Meridian,America/New_York
 US,FL,Merrimac,Merrimac,America/New_York
 US,FL,Miakka,Miakka,America/New_York
 US,FL,Miami,Miami,America/New_York
 US,FL,Miami Shores,Miami Shores,America/New_York
 US,FL,Miami-Dade County,Miami-Dade County,America/New_York
 US,FL,Micco,Micco,America/New_York
 US,FL,Miccosukee,Miccosukee,America/New_York
 US,FL,Midway,Midway,America/New_York
 US,FL,Miguel Crosby Grant,Miguel Crosby Grant,America/New_York
 US,FL,Miguel Hernandez Grant,Miguel Hernandez Grant,America/Chicago
 US,FL,Mikesville,Mikesville,America/New_York
 US,FL,Milan De La Carrera Grant,Milan De La Carrera Grant,America/Chicago
 US,FL,Mildred,Mildred,America/New_York
 US,FL,Middleburg,Middleburg,America/New_York
 US,FL,Miles City,Miles City,America/New_York
 US,FL,Miller,Miller,America/New_York
 US,FL,Milligan,Milligan,America/Chicago
 US,FL,Milltown,Milltown,America/New_York
 US,FL,Millview,Millview,America/Chicago
 US,FL,Millville,Millville,America/Chicago
 US,FL,Millwood,Millwood,America/New_York
 US,FL,Milton,Milton,America/Chicago
 US,FL,Mims,Mims,America/New_York
 US,FL,Miramar,Miramar,America/New_York
 US,FL,Mission City,Mission City,America/New_York
 US,FL,Modello,Modello,America/New_York
 US,FL,Moffitt,Moffitt,America/New_York
 US,FL,Mohawk,Mohawk,America/New_York
 US,FL,Molino,Molino,America/Chicago
 US,FL,Monarch,Monarch,America/New_York
 US,FL,Monet,Monet,America/New_York
 US,FL,Monkey Box,Monkey Box,America/New_York
 US,FL,Monroe County,Monroe County,America/New_York
 US,FL,Montague,Montague,America/New_York
 US,FL,Montbrook,Montbrook,America/New_York
 US,FL,Montclair,Montclair,America/New_York
 US,FL,Monteocha,Monteocha,America/New_York
 US,FL,Monticello,Monticello,America/New_York
 US,FL,Montverde,Montverde,America/New_York
 US,FL,Montivilla,Montivilla,America/New_York
 US,FL,Moore Haven,Moore Haven,America/New_York
 US,FL,Morgantown,Morgantown,America/New_York
 US,FL,Moriczville,Moriczville,America/New_York
 US,FL,Morse Shores,Morse Shores,America/New_York
 US,FL,Moses Bowden Grant,Moses Bowden Grant,America/Kentucky/Monticello
 US,FL,Morriston,Morriston,America/New_York
 US,FL,Moses E Levy Grant,Moses E Levy Grant,America/New_York
 US,FL,Moses Harrold Grant,Moses Harrold Grant,America/New_York
 US,FL,Moss Town,Moss Town,America/New_York
 US,FL,Mott,Mott,America/New_York
 US,FL,Moultrie,Moultrie,America/New_York
 US,FL,Muce,Muce,America/New_York
 US,FL,Mulat,Mulat,America/Chicago
 US,FL,Mulberry,Mulberry,America/New_York
 US,FL,Mullis City,Mullis City,America/New_York
 US,FL,Munson,Munson,America/Chicago
 US,FL,Murdock,Murdock,America/New_York
 US,FL,Muscogee,Muscogee,America/Chicago
 US,FL,Mutual,Mutual,America/New_York
 US,FL,Myakka City,Myakka City,America/New_York
 US,FL,Myrtis,Myrtis,America/New_York
 US,FL,N Gee Grant,N Gee Grant,America/New_York
 US,FL,Nalcrest,Nalcrest,America/New_York
 US,FL,Naples,Naples,America/New_York
 US,FL,Naples Manor,Naples Manor,America/New_York
 US,FL,Naranja,Naranja,America/New_York
 US,FL,Narcoossee,Narcoossee,America/New_York
 US,FL,Nash,Nash,America/New_York
 US,FL,Nashua,Nashua,America/New_York
 US,FL,Nassau County,Nassau County,America/New_York
 US,FL,Nassauville,Nassauville,America/New_York
 US,FL,Nathan Shackleford Grant,Nathan Shackleford Grant,America/Chicago
 US,AR,Witcherville,Witcherville,America/Chicago
 US,AR,Wolquarry,Wolquarry,America/Chicago
 US,AR,Wonderview,Wonderview,America/Chicago
 US,AR,Woodberry,Woodberry,America/Chicago
 US,AR,Woodland,Woodland,America/Chicago
 US,AR,Woodlawn Addition,Woodlawn Addition,America/Chicago
 US,AR,Woodrow,Woodrow,America/Chicago
 US,AR,Woodruff County,Woodruff County,America/Chicago
 US,AR,Woodlawn,Woodlawn,America/Chicago
 US,AR,Woodson,Woodson,America/Chicago
 US,AR,Woodville,Woodville,America/Chicago
 US,AR,Woodyardville,Woodyardville,America/Chicago
 US,AR,Woolsey,Woolsey,America/Chicago
 US,AR,Woolum,Woolum,America/Chicago
 US,AR,Worden,Worden,America/Chicago
 US,AR,Worthen,Worthen,America/Chicago
 US,AR,Wrenton,Wrenton,America/Chicago
 US,AR,Wright,Wright,America/Chicago
 US,AR,Wright Town,Wright Town,America/Chicago
 US,AR,Wrightland,Wrightland,America/Chicago
 US,AR,Wrightsville,Wrightsville,America/Chicago
 US,AR,Wyanoke,Wyanoke,America/Chicago
 US,AR,Wycamp,Wycamp,America/Chicago
 US,AR,Wye,Wye,America/Chicago
 US,AR,Wyman,Wyman,America/Chicago
 US,AR,Wyola,Wyola,America/Chicago
 US,AR,Y City,Y City,America/Chicago
 US,AR,Yale,Yale,America/Chicago
 US,AR,Yancy,Yancy,America/Chicago
 US,AR,Yarbro,Yarbro,America/Chicago
 US,AR,Yardelle,Yardelle,America/Chicago
 US,AR,Yancopin,Yancopin,America/Chicago
 US,AR,Yell County,Yell County,America/Chicago
 US,AR,Yellow Banks,Yellow Banks,America/Chicago
 US,AR,Yellville,Yellville,America/Chicago
 US,AR,Yocana,Yocana,America/Chicago
 US,AR,Yocum,Yocum,America/Chicago
 US,AR,Yoestown,Yoestown,America/Chicago
 US,AR,Yorktown,Yorktown,America/Chicago
 US,AR,Young,Young,America/Chicago
 US,AR,Yoder,Yoder,America/Chicago
 US,AR,Young Gravelly,Young Gravelly,America/Chicago
 US,AR,Young Subdivision,Young Subdivision,America/Chicago
 US,AR,Youngstown,Youngstown,America/Chicago
 US,AR,Zack,Zack,America/Chicago
 US,AR,Yukon,Yukon,America/Chicago
 US,AR,Zent,Zent,America/Chicago
 US,AR,Zion,Zion,America/Chicago
 US,DE,Adamsville,Adamsville,America/New_York
 US,DE,Afton,Afton,America/New_York
 US,DE,Alapocas,Alapocas,America/New_York
 US,DE,Albertson,Albertson,America/New_York
 US,DE,Albion,Albion,America/New_York
 US,DE,Amaranth,Amaranth,America/New_York
 US,DE,Andrewsville,Andrewsville,America/New_York
 US,FL,Navair,Navair,America/New_York
 US,FL,Navarre,Navarre,America/Chicago
 US,FL,Neals,Neals,America/New_York
 US,FL,Needmore,Needmore,America/New_York
 US,FL,Negrotown Knoll,Negrotown Knoll,America/New_York
 US,FL,Neheb,Neheb,America/New_York
 US,FL,Neilhurst,Neilhurst,America/New_York
 US,FL,Neilson,Neilson,America/New_York
 US,FL,Neoga,Neoga,America/New_York
 US,FL,Nevins,Nevins,America/New_York
 US,FL,New Berlin,New Berlin,America/New_York
 US,FL,New Eden,New Eden,America/New_York
 US,FL,New Harmony,New Harmony,America/Chicago
 US,FL,New Point Comfort,New Point Comfort,America/New_York
 US,FL,New Upsala,New Upsala,America/New_York
 US,FL,New York,New York,America/Chicago
 US,FL,Newburn,Newburn,America/New_York
 US,FL,Newcastle,Newcastle,America/New_York
 US,FL,Newnans Lake Homesites,Newnans Lake Homesites,America/New_York
 US,FL,Newnansville,Newnansville,America/New_York
 US,FL,Newport,Newport,America/New_York
 US,FL,Niceville,Niceville,America/Chicago
 US,FL,Nichols,Nichols,America/New_York
 US,FL,Newco,Newco,America/New_York
 US,FL,Niles,Niles,America/New_York
 US,FL,Nine Mile,Nine Mile,America/New_York
 US,FL,Nixon,Nixon,America/Chicago
 US,FL,Nobleton,Nobleton,America/New_York
 US,FL,Nocatee,Nocatee,America/New_York
 US,FL,Nokomis,Nokomis,America/New_York
 US,FL,Noma,Noma,America/Chicago
 US,FL,Norfleet,Norfleet,America/New_York
 US,FL,Norland,Norland,America/New_York
 US,FL,Norman,Norman,America/New_York
 US,FL,Normandy,Normandy,America/New_York
 US,FL,Normandy Shores,Normandy Shores,America/New_York
 US,FL,Normandy Village,Normandy Village,America/New_York
 US,FL,North Brooksville,North Brooksville,America/New_York
 US,FL,North Deland,North Deland,America/New_York
 US,FL,North Fort Myers,North Fort Myers,America/New_York
 US,FL,North Key Largo,North Key Largo,America/New_York
 US,FL,North Miami,North Miami,America/New_York
 US,FL,North Port,North Port,America/New_York
 US,FL,North Naples,North Naples,America/New_York
 US,FL,North Ruskin,North Ruskin,America/New_York
 US,FL,North Sarasota,North Sarasota,America/New_York
 US,FL,Northwood,Northwood,America/New_York
 US,FL,Norum,Norum,America/Chicago
 US,FL,Norwalk,Norwalk,America/New_York
 US,FL,Norwood,Norwood,America/New_York
 US,FL,Nowatney,Nowatney,America/New_York
 US,FL,Nurmi Isles,Nurmi Isles,America/New_York
 US,FL,Nutall Rise,Nutall Rise,America/New_York
 US,DE,Aniline Village,Aniline Village,America/New_York
 US,DE,Anneville,Anneville,America/New_York
 US,DE,Appoquinimink Hundred,Appoquinimink Hundred,America/New_York
 US,DE,Anglesey,Anglesey,America/New_York
 US,DE,Arden,Arden,America/New_York
 US,DE,Ardencroft,Ardencroft,America/New_York
 US,DE,Ardentown,Ardentown,America/New_York
 US,DE,Argos Choice,Argos Choice,America/New_York
 US,DE,Armstrong,Armstrong,America/New_York
 US,DE,Arundel,Arundel,America/New_York
 US,DE,Ashland,Ashland,America/New_York
 US,DE,Ashley,Ashley,America/New_York
 US,DE,Atlanta,Atlanta,America/New_York
 US,DE,Auburn,Auburn,America/New_York
 US,DE,Augustine,Augustine,America/New_York
 US,DE,Avalon,Avalon,America/New_York
 US,DE,Bacons,Bacons,America/New_York
 US,DE,Bald Eagle Village,Bald Eagle Village,America/New_York
 US,DE,Baltimore Hundred,Baltimore Hundred,America/New_York
 US,DE,Bank Harbor Retreat,Bank Harbor Retreat,America/New_York
 US,DE,Banks Development,Banks Development,America/New_York
 US,DE,Barkley,Barkley,America/New_York
 US,DE,Bay Colony,Bay Colony,America/New_York
 US,DE,Bay Vista,Bay Vista,America/New_York
 US,DE,Bayberry Dunes,Bayberry Dunes,America/New_York
 US,DE,Bayside Hamlet,Bayside Hamlet,America/New_York
 US,DE,Bayview Manor,Bayview Manor,America/New_York
 US,DE,Bayville,Bayville,America/New_York
 US,DE,Beachfield,Beachfield,America/New_York
 US,DE,Beachwood,Beachwood,America/New_York
 US,DE,Bear,Bear,America/New_York
 US,DE,Beech Haven,Beech Haven,America/New_York
 US,DE,Beechers Lot,Beechers Lot,America/New_York
 US,DE,Beechwold,Beechwold,America/New_York
 US,DE,Belford Manor,Belford Manor,America/New_York
 US,DE,Bella Vista,Bella Vista,America/New_York
 US,DE,Bellevue,Bellevue,America/New_York
 US,DE,Bellewood,Bellewood,America/New_York
 US,DE,Belltown,Belltown,America/New_York
 US,DE,Belmoor,Belmoor,America/New_York
 US,DE,Belvidere,Belvidere,America/New_York
 US,DE,Bennum,Bennum,America/New_York
 US,DE,Benton,Benton,America/New_York
 US,DE,Berkeley Farms,Berkeley Farms,America/New_York
 US,DE,Berrytown,Berrytown,America/New_York
 US,DE,Bestfield,Bestfield,America/New_York
 US,DE,Bethany Dunes,Bethany Dunes,America/New_York
 US,DE,Bethany Village,Bethany Village,America/New_York
 US,DE,Bethesda,Bethesda,America/New_York
 US,DE,Bicentennial Village,Bicentennial Village,America/New_York
 US,DE,Big Pine,Big Pine,America/New_York
 US,FL,O And F Palmas Grant,O And F Palmas Grant,America/New_York
 US,FL,O'Brien,O'Brien,America/New_York
 US,FL,O'Neil,O'Neil,America/New_York
 US,FL,Oak,Oak,America/New_York
 US,FL,Oakdale,Oakdale,America/Chicago
 US,FL,Oakhurst Shores,Oakhurst Shores,America/New_York
 US,FL,Oakland,Oakland,America/New_York
 US,FL,Ocala,Ocala,America/New_York
 US,FL,Ocala Waterway,Ocala Waterway,America/New_York
 US,FL,Ocean City,Ocean City,America/Chicago
 US,FL,Ocean Vue,Ocean Vue,America/New_York
 US,FL,Oceanway,Oceanway,America/New_York
 US,FL,Ocheesee,Ocheesee,America/Chicago
 US,FL,Ochlockonee,Ochlockonee,America/New_York
 US,FL,Ochopee,Ochopee,America/New_York
 US,FL,Ocklawaha,Ocklawaha,America/New_York
 US,FL,Ocoee,Ocoee,America/New_York
 US,FL,Octahatchee,Octahatchee,America/New_York
 US,FL,Odena,Odena,America/New_York
 US,FL,Odessa,Odessa,America/New_York
 US,FL,Ojus,Ojus,America/New_York
 US,FL,Okahumpka,Okahumpka,America/New_York
 US,FL,Okaloo,Okaloo,America/Chicago
 US,FL,Okaloosa County,Okaloosa County,America/Chicago
 US,FL,Okeechobee,Okeechobee,America/New_York
 US,FL,Okeechobee County,Okeechobee County,America/New_York
 US,FL,Okeelanta,Okeelanta,America/New_York
 US,FL,Old Callaway,Old Callaway,America/Chicago
 US,FL,Old Duette,Old Duette,America/New_York
 US,FL,Old Fernandina,Old Fernandina,America/New_York
 US,FL,Old Myakka,Old Myakka,America/New_York
 US,FL,Old Town,Old Town,America/New_York
 US,FL,Oldsmar,Oldsmar,America/New_York
 US,FL,Olga,Olga,America/New_York
 US,FL,Olive,Olive,America/Chicago
 US,FL,Olustee,Olustee,America/New_York
 US,FL,Ona,Ona,America/New_York
 US,FL,Oneco,Oneco,America/New_York
 US,FL,Orange,Orange,America/New_York
 US,FL,Orange Blossom,Orange Blossom,America/New_York
 US,FL,Orange City,Orange City,America/New_York
 US,FL,Orange County,Orange County,America/New_York
 US,FL,Orange Grove Villas,Orange Grove Villas,America/New_York
 US,FL,Orangedale,Orangedale,America/New_York
 US,FL,Orangetree,Orangetree,America/New_York
 US,FL,Orchid,Orchid,America/New_York
 US,FL,Orlando,Orlando,America/New_York
 US,FL,Orlovista,Orlovista,America/New_York
 US,FL,Ormond-By-The-Sea,Ormond-By-The-Sea,America/New_York
 US,FL,Orsino,Orsino,America/New_York
 US,FL,Ortega,Ortega,America/New_York
 US,FL,Ortega Farms,Ortega Farms,America/New_York
 US,FL,Ortona,Ortona,America/New_York
 US,FL,Osceola,Osceola,America/New_York
 US,FL,Osceola County,Osceola County,America/New_York
 US,FL,Oslo,Oslo,America/New_York
 US,FL,Osprey,Osprey,America/New_York
 US,FL,Osteen,Osteen,America/New_York
 US,FL,Overstreet,Overstreet,America/Chicago
 US,FL,Oxford,Oxford,America/New_York
 US,FL,Ozello,Ozello,America/New_York
 US,FL,Ozona,Ozona,America/New_York
 US,FL,P Plummers Grant,P Plummers Grant,America/Kentucky/Monticello
 US,FL,Pablo Rosette Grant,Pablo Rosette Grant,America/New_York
 US,FL,Pace,Pace,America/Chicago
 US,FL,Pablo Granpera Grant,Pablo Granpera Grant,America/Chicago
 US,FL,Padlock,Padlock,America/New_York
 US,FL,Pahokee,Pahokee,America/New_York
 US,FL,Paisley,Paisley,America/New_York
 US,FL,Palatka,Palatka,America/New_York
 US,FL,Palm,Palm,America/New_York
 US,FL,Palm Aire,Palm Aire,America/New_York
 US,FL,Palm Beach County,Palm Beach County,America/New_York
 US,FL,Palm Beach Isles,Palm Beach Isles,America/New_York
 US,FL,Palm Beach Shores,Palm Beach Shores,America/New_York
 US,FL,Palm City,Palm City,America/New_York
 US,FL,Palm Coast,Palm Coast,America/New_York
 US,FL,Palm Grove Colony,Palm Grove Colony,America/New_York
 US,FL,Palm Beach Farms,Palm Beach Farms,America/New_York
 US,FL,Palm Shadows,Palm Shadows,America/New_York
 US,FL,Palm Shores,Palm Shores,America/New_York
 US,FL,Palma Ceia,Palma Ceia,America/New_York
 US,FL,Palma Sola,Palma Sola,America/New_York
 US,FL,Palmdale,Palmdale,America/New_York
 US,FL,Palmetto,Palmetto,America/New_York
 US,FL,Palmo,Palmo,America/New_York
 US,FL,Panacoochee Retreats,Panacoochee Retreats,America/New_York
 US,FL,Panama City,Panama City,America/Chicago
 US,FL,Paola,Paola,America/New_York
 US,FL,Paradise Palms,Paradise Palms,America/New_York
 US,FL,Paradise Port,Paradise Port,America/New_York
 US,FL,Parker,Parker,America/Chicago
 US,FL,Parkerville,Parkerville,America/Chicago
 US,FL,Parmalee,Parmalee,America/New_York
 US,FL,Parramore,Parramore,America/Chicago
 US,FL,Pasadena,Pasadena,America/New_York
 US,FL,Pasadena Shores,Pasadena Shores,America/New_York
 US,FL,Pasco,Pasco,America/New_York
 US,FL,Pasco County,Pasco County,America/New_York
 US,FL,Patersonville,Patersonville,America/New_York
 US,FL,Patrick Dean Grant,Patrick Dean Grant,America/New_York
 US,FL,Paxton,Paxton,America/Chicago
 US,FL,Peach Orchard,Peach Orchard,America/New_York
 US,FL,Peaden,Peaden,America/Chicago
 US,FL,Pebbledale,Pebbledale,America/New_York
 US,FL,Pecan,Pecan,America/New_York
 US,FL,Peck,Peck,America/New_York
 US,FL,Pedro,Pedro,America/New_York
 US,FL,Pedro Cocifacio Grant,Pedro Cocifacio Grant,America/New_York
 US,FL,Pedro Palao Grant,Pedro Palao Grant,America/Chicago
 US,FL,Pedro Trope Grant,Pedro Trope Grant,America/New_York
 US,FL,Pembroke,Pembroke,America/New_York
 US,FL,Peniel,Peniel,America/New_York
 US,FL,Penney Farms,Penney Farms,America/New_York
 US,FL,Pennichaw,Pennichaw,America/New_York
 US,FL,Pennsuco,Pennsuco,America/New_York
 US,FL,Pensacola,Pensacola,America/Chicago
 US,FL,Perkins,Perkins,America/New_York
 US,FL,Perky,Perky,America/New_York
 US,FL,Perrine,Perrine,America/New_York
 US,FL,Perry,Perry,America/New_York
 US,FL,Peter Fouchard Grant,Peter Fouchard Grant,America/New_York
 US,FL,Peter Miranda Grant,Peter Miranda Grant,America/New_York
 US,FL,Peters,Peters,America/New_York
 US,FL,Peterson,Peterson,America/New_York
 US,FL,Phifer,Phifer,America/New_York
 US,FL,Philips,Philips,America/New_York
 US,FL,Phillip R Yonge Grant,Phillip R Yonge Grant,America/New_York
 US,FL,Pickettville,Pickettville,America/New_York
 US,FL,Picolata,Picolata,America/New_York
 US,FL,Piedmont,Piedmont,America/New_York
 US,FL,Pierson,Pierson,America/New_York
 US,FL,Pine Barren,Pine Barren,America/Chicago
 US,FL,Pine Dale,Pine Dale,America/New_York
 US,FL,Pine Level,Pine Level,America/New_York
 US,FL,Pine Log,Pine Log,America/Chicago
 US,FL,Pine Manor,Pine Manor,America/New_York
 US,FL,Pine Mount,Pine Mount,America/New_York
 US,FL,Pinecraft,Pinecraft,America/New_York
 US,FL,Pinecrest,Pinecrest,America/New_York
 US,FL,Pineda,Pineda,America/New_York
 US,FL,Pinehurst Village,Pinehurst Village,America/New_York
 US,FL,Pineland,Pineland,America/New_York
 US,FL,Pinellas County,Pinellas County,America/New_York
 US,FL,Pineola,Pineola,America/New_York
 US,FL,Pinesville,Pinesville,America/New_York
 US,FL,Pinetta,Pinetta,America/New_York
 US,FL,Pineville,Pineville,America/Chicago
 US,FL,Pinland,Pinland,America/New_York
 US,FL,Pittman,Pittman,America/Chicago
 US,FL,Placida,Placida,America/New_York
 US,FL,Plains,Plains,America/New_York
 US,FL,Plant City,Plant City,America/New_York
 US,FL,Plantation,Plantation,America/New_York
 US,FL,Plantation Isles,Plantation Isles,America/New_York
 US,FL,Plantation Key Colony,Plantation Key Colony,America/New_York
 US,FL,Platt,Platt,America/New_York
 US,FL,Pittsburg,Pittsburg,America/New_York
 US,FL,Playland Isles,Playland Isles,America/New_York
 US,FL,Playland Village,Playland Village,America/New_York
 US,FL,Plum Orchard,Plum Orchard,America/New_York
 US,FL,Plummer,Plummer,America/New_York
 US,FL,Plummers,Plummers,America/New_York
 US,FL,Plymouth,Plymouth,America/New_York
 US,FL,Poinciana,Poinciana,America/New_York
 US,FL,Point Baker,Point Baker,America/Chicago
 US,FL,Point Brittany,Point Brittany,America/New_York
 US,FL,Point Pleasant,Point Pleasant,America/New_York
 US,FL,Point Washington,Point Washington,America/Chicago
 US,FL,Point O'Rocks,Point O'Rocks,America/New_York
 US,FL,Polk City,Polk City,America/New_York
 US,FL,Polk County,Polk County,America/New_York
 US,FL,Polly Town,Polly Town,America/New_York
 US,FL,Pompano Beach Highlands,Pompano Beach Highlands,America/New_York
 US,FL,Pompano Isles,Pompano Isles,America/New_York
 US,FL,Ponce De Leon,Ponce De Leon,America/Chicago
 US,FL,Ponte Vedra,Ponte Vedra,America/New_York
 US,FL,Pops Hammock Seminole Village,Pops Hammock Seminole Village,America/New_York
 US,FL,Port Boca Grande,Port Boca Grande,America/New_York
 US,FL,Port Charlotte,Port Charlotte,America/New_York
 US,FL,Port Everglades,Port Everglades,America/New_York
 US,FL,Port Inglis,Port Inglis,America/New_York
 US,FL,Port Labelle,Port Labelle,America/New_York
 US,FL,Port Laudania,Port Laudania,America/New_York
 US,FL,Port Lonesome,Port Lonesome,America/New_York
 US,FL,Port Mayaca,Port Mayaca,America/New_York
 US,FL,Port Orange,Port Orange,America/New_York
 US,FL,Port Royal,Port Royal,America/New_York
 US,FL,Port Saint Joe,Port Saint Joe,America/New_York
 US,FL,Port Saint John,Port Saint John,America/New_York
 US,FL,Port Saint Lucie,Port Saint Lucie,America/New_York
 US,FL,Port Salerno,Port Salerno,America/New_York
 US,FL,Port Sewall,Port Sewall,America/New_York
 US,FL,Port Sutton,Port Sutton,America/New_York
 US,FL,Port Tampa,Port Tampa,America/New_York
 US,FL,Port Of Miami,Port Of Miami,America/New_York
 US,FL,Portland,Portland,America/Chicago
 US,FL,Powell,Powell,America/New_York
 US,FL,Poyner,Poyner,America/New_York
 US,FL,Princeton,Princeton,America/New_York
 US,FL,Progress Village,Progress Village,America/New_York
 US,FL,Prosperity,Prosperity,America/Chicago
 US,FL,Providence,Providence,America/New_York
 US,FL,Punta Gorda,Punta Gorda,America/New_York
 US,FL,Punta Gorda Isles,Punta Gorda Isles,America/New_York
 US,FL,Punta Rassa,Punta Rassa,America/New_York
 US,FL,Purvis Still,Purvis Still,America/New_York
 US,FL,Putnam County,Putnam County,America/New_York
 US,FL,Quinavista,Quinavista,America/Chicago
 US,FL,Quincy,Quincy,America/New_York
 US,FL,Quinlan,Quinlan,America/New_York
 US,FL,R Hogans Grant,R Hogans Grant,America/New_York
 US,FL,R Pritchards Heirs Grant,R Pritchards Heirs Grant,America/Kentucky/Monticello
 US,FL,R Sanchez Grant,R Sanchez Grant,America/New_York
 US,FL,R Wightman Grant,R Wightman Grant,America/New_York
 US,FL,Raiford,Raiford,America/New_York
 US,FL,Quintette,Quintette,America/Chicago
 US,FL,Rainbow Homes,Rainbow Homes,America/New_York
 US,FL,Raleigh,Raleigh,America/New_York
 US,FL,Rambo,Rambo,America/Chicago
 US,FL,Ratliff,Ratliff,America/New_York
 US,FL,Rattlesnake,Rattlesnake,America/New_York
 US,FL,Rawls,Rawls,America/New_York
 US,FL,Reams,Reams,America/New_York
 US,FL,Red Level,Red Level,America/New_York
 US,FL,Redbay,Redbay,America/Chicago
 US,FL,Reddick,Reddick,America/New_York
 US,FL,Redington Shores,Redington Shores,America/New_York
 US,FL,Redland,Redland,America/New_York
 US,FL,Relay,Relay,America/New_York
 US,FL,Remlap,Remlap,America/New_York
 US,FL,Rerdell,Rerdell,America/New_York
 US,FL,Reunion,Reunion,America/New_York
 US,FL,Rex,Rex,America/New_York
 US,FL,Ribault Manor,Ribault Manor,America/New_York
 US,FL,Riceland,Riceland,America/New_York
 US,FL,Richland,Richland,America/New_York
 US,FL,Rideout,Rideout,America/New_York
 US,FL,Ridge Manor,Ridge Manor,America/New_York
 US,FL,Ridgecrest,Ridgecrest,America/New_York
 US,FL,Richloam,Richloam,America/New_York
 US,FL,Ridgewood,Ridgewood,America/New_York
 US,FL,Rio,Rio,America/New_York
 US,FL,Rio Vista,Rio Vista,America/New_York
 US,FL,Rio Vista Isles,Rio Vista Isles,America/New_York
 US,FL,Riomar,Riomar,America/New_York
 US,FL,Rital,Rital,America/New_York
 US,FL,Riverdale,Riverdale,America/New_York
 US,FL,Riverland,Riverland,America/New_York
 US,FL,Riverside,Riverside,America/New_York
 US,FL,Riverview,Riverview,America/New_York
 US,FL,Riviera Lagoons,Riviera Lagoons,America/New_York
 US,FL,Rixford,Rixford,America/New_York
 US,FL,Roan,Roan,America/New_York
 US,FL,Robert Mchardy Grant,Robert Mchardy Grant,America/New_York
 US,FL,Robert Whitmore Grant,Robert Whitmore Grant,America/New_York
 US,DE,Birch Knoll,Birch Knoll,America/New_York
 US,DE,Birch Pointe,Birch Pointe,America/New_York
 US,DE,Blackbird,Blackbird,America/New_York
 US,DE,Blackiston,Blackiston,America/New_York
 US,DE,Blackwater,Blackwater,America/New_York
 US,DE,Blackbird Hundred,Blackbird Hundred,America/New_York
 US,DE,Blanchard,Blanchard,America/New_York
 US,DE,Blackwater Village,Blackwater Village,America/New_York
 US,DE,Blue Ball,Blue Ball,America/New_York
 US,DE,Blue Rock Manor,Blue Rock Manor,America/New_York
 US,DE,Bon Ayre,Bon Ayre,America/New_York
 US,DE,Bossard Property,Bossard Property,America/New_York
 US,DE,Boyers Village,Boyers Village,America/New_York
 US,DE,Brackenville,Brackenville,America/New_York
 US,DE,Branchview,Branchview,America/New_York
 US,DE,Brandon,Brandon,America/New_York
 US,DE,Brandywine,Brandywine,America/New_York
 US,DE,Boxwood,Boxwood,America/New_York
 US,DE,Brandywine Forge,Brandywine Forge,America/New_York
 US,DE,Brandywine Hundred,Brandywine Hundred,America/New_York
 US,DE,Brandywood,Brandywood,America/New_York
 US,DE,Breezewood,Breezewood,America/New_York
 US,DE,Breezewood Ii,Breezewood Ii,America/New_York
 US,DE,Briar Hook,Briar Hook,America/New_York
 US,DE,Briarwood Manor,Briarwood Manor,America/New_York
 US,DE,Bridgeville Manor,Bridgeville Manor,America/New_York
 US,DE,Bridleshire Farms,Bridleshire Farms,America/New_York
 US,DE,Bristle Knoll,Bristle Knoll,America/New_York
 US,DE,Broad Creek Hundred,Broad Creek Hundred,America/New_York
 US,DE,Broadkill Hundred,Broadkill Hundred,America/New_York
 US,DE,Brookfield,Brookfield,America/New_York
 US,DE,Brookhaven,Brookhaven,America/New_York
 US,DE,Brookhill Farms,Brookhill Farms,America/New_York
 US,DE,Brookmeade,Brookmeade,America/New_York
 US,DE,Brookmont Farms,Brookmont Farms,America/New_York
 US,DE,Brookside,Brookside,America/New_York
 US,DE,Brownsville,Brownsville,America/New_York
 US,DE,Bullseye,Bullseye,America/New_York
 US,DE,Bunting,Bunting,America/New_York
 US,DE,Burwood,Burwood,America/New_York
 US,DE,Burwood Farms,Burwood Farms,America/New_York
 US,DE,Bush Manor,Bush Manor,America/New_York
 US,DE,Byewood Manor,Byewood Manor,America/New_York
 US,DE,Buttonwood,Buttonwood,America/New_York
 US,DE,Cannon,Cannon,America/New_York
 US,DE,Cantebury,Cantebury,America/New_York
 US,DE,Canterbury,Canterbury,America/New_York
 US,DE,Capital Trail Farms,Capital Trail Farms,America/New_York
 US,DE,Caravel Farms,Caravel Farms,America/New_York
 US,FL,Robinswood,Robinswood,America/New_York
 US,FL,Rochelle,Rochelle,America/New_York
 US,FL,Rockdale,Rockdale,America/New_York
 US,FL,Rockledge,Rockledge,America/New_York
 US,FL,Rocksprings,Rocksprings,America/New_York
 US,FL,Rockwell,Rockwell,America/New_York
 US,FL,Rodman,Rodman,America/New_York
 US,FL,Roeville,Roeville,America/Chicago
 US,FL,Rolling Ranches,Rolling Ranches,America/New_York
 US,FL,Romeo,Romeo,America/New_York
 US,FL,Rood,Rood,America/New_York
 US,FL,Rose,Rose,America/New_York
 US,FL,Rosedale,Rosedale,America/New_York
 US,FL,Roseland,Roseland,America/New_York
 US,FL,Rosewood,Rosewood,America/New_York
 US,FL,Ross Prairie,Ross Prairie,America/New_York
 US,FL,Rotonda,Rotonda,America/New_York
 US,FL,Rotunda,Rotunda,America/New_York
 US,FL,Roux Quarters,Roux Quarters,America/New_York
 US,FL,Roy,Roy,America/New_York
 US,FL,Royal,Royal,America/New_York
 US,FL,Royal Palm Hammock,Royal Palm Hammock,America/New_York
 US,FL,Royal Palm Isles,Royal Palm Isles,America/New_York
 US,FL,Royster,Royster,America/New_York
 US,FL,Rubonia,Rubonia,America/New_York
 US,FL,Runnymede,Runnymede,America/New_York
 US,FL,Runyon,Runyon,America/New_York
 US,FL,Ruskin,Ruskin,America/New_York
 US,FL,Russell,Russell,America/New_York
 US,FL,Ruthland,Ruthland,America/New_York
 US,FL,Rutland,Rutland,America/New_York
 US,FL,Rutledge,Rutledge,America/New_York
 US,FL,Rye,Rye,America/New_York
 US,FL,S N Smith Grant,S N Smith Grant,America/Chicago
 US,FL,S Petty Grant,S Petty Grant,America/Kentucky/Monticello
 US,FL,Saint Andrew,Saint Andrew,America/Chicago
 US,FL,Saint Augustine,Saint Augustine,America/New_York
 US,FL,Saint Augustine Shores,Saint Augustine Shores,America/New_York
 US,FL,Saint Catherine,Saint Catherine,America/New_York
 US,FL,Saint Cloud,Saint Cloud,America/New_York
 US,FL,Saint Francis,Saint Francis,America/New_York
 US,FL,Saint George,Saint George,America/New_York
 US,FL,Saint James City,Saint James City,America/New_York
 US,FL,Saint Johns County,Saint Johns County,America/New_York
 US,FL,Saint Joseph,Saint Joseph,America/New_York
 US,FL,Saint Josephs,Saint Josephs,America/New_York
 US,FL,Saint Leo,Saint Leo,America/New_York
 US,FL,Saint Lucie,Saint Lucie,America/New_York
 US,FL,Saint Lucie County,Saint Lucie County,America/New_York
 US,FL,Saint Lucie Village,Saint Lucie Village,America/New_York
 US,FL,Saint Marks,Saint Marks,America/New_York
 US,FL,Saint Marks Precinct,Saint Marks Precinct,America/New_York
 US,FL,Saint Nicholas,Saint Nicholas,America/New_York
 US,FL,Saint Peter,Saint Peter,America/New_York
 US,FL,Saint Teresa,Saint Teresa,America/New_York
 US,FL,Salem,Salem,America/New_York
 US,FL,Salvador Ramiez Grant,Salvador Ramiez Grant,America/Chicago
 US,FL,Salvista,Salvista,America/New_York
 US,FL,Samoset,Samoset,America/New_York
 US,FL,Sampson,Sampson,America/New_York
 US,FL,Sam Williams Grant,Sam Williams Grant,America/New_York
 US,FL,Samsula,Samsula,America/New_York
 US,FL,Samuel Betts Grant,Samuel Betts Grant,America/New_York
 US,FL,Samuel Fairbanks Grant,Samuel Fairbanks Grant,America/New_York
 US,FL,Samuel Wilson Grant,Samuel Wilson Grant,America/New_York
 US,FL,San Antonio,San Antonio,America/New_York
 US,FL,San Blas,San Blas,America/Chicago
 US,FL,San Jose,San Jose,America/New_York
 US,FL,San Marco,San Marco,America/New_York
 US,FL,San Mateo,San Mateo,America/New_York
 US,FL,San Pablo,San Pablo,America/New_York
 US,FL,Sanborn,Sanborn,America/New_York
 US,FL,Sancassa,Sancassa,America/New_York
 US,FL,Sanderson,Sanderson,America/New_York
 US,FL,Sandestin,Sandestin,America/Chicago
 US,FL,Sandy,Sandy,America/New_York
 US,FL,Sanford,Sanford,America/New_York
 US,FL,Sanford Farms,Sanford Farms,America/New_York
 US,FL,Sanibel,Sanibel,America/New_York
 US,FL,Sanlanta,Sanlanta,America/New_York
 US,FL,Sans Pareil,Sans Pareil,America/New_York
 US,FL,Sans Souci,Sans Souci,America/New_York
 US,FL,Santa Barbara Shores,Santa Barbara Shores,America/New_York
 US,FL,Santa Clara,Santa Clara,America/New_York
 US,FL,Santa Fe,Santa Fe,America/New_York
 US,FL,Santa Maria,Santa Maria,America/Chicago
 US,FL,Sarah Broward Grant,Sarah Broward Grant,America/New_York
 US,FL,Sarah Faulk Grant,Sarah Faulk Grant,America/Kentucky/Monticello
 US,FL,Sarah Petty Grant,Sarah Petty Grant,America/New_York
 US,FL,Santa Rosa County,Santa Rosa County,America/Chicago
 US,FL,Santiego Coleman Grant,Santiego Coleman Grant,America/Chicago
 US,FL,Santos,Santos,America/New_York
 US,FL,Sapp,Sapp,America/New_York
 US,FL,Sarasota Colony,Sarasota Colony,America/New_York
 US,FL,Sarasota County,Sarasota County,America/New_York
 US,FL,Sarah Bowden Grant,Sarah Bowden Grant,America/New_York
 US,FL,Saratoga,Saratoga,America/New_York
 US,FL,Sargent,Sargent,America/New_York
 US,FL,Satsuma,Satsuma,America/New_York
 US,FL,Saunders,Saunders,America/Chicago
 US,FL,Sawdust,Sawdust,America/New_York
 US,FL,Sawgrass,Sawgrass,America/New_York
 US,FL,Saxton,Saxton,America/New_York
 US,FL,Saybrook,Saybrook,America/New_York
 US,FL,Scanlon,Scanlon,America/New_York
 US,FL,Schall Circle,Schall Circle,America/New_York
 US,FL,Scotland,Scotland,America/New_York
 US,FL,Scottsmoor,Scottsmoor,America/New_York
 US,FL,Seabreeze,Seabreeze,America/New_York
 US,FL,Seacoll,Seacoll,America/New_York
 US,FL,Seacrest,Seacrest,America/Chicago
 US,FL,Seaglades,Seaglades,America/Chicago
 US,FL,Sears,Sears,America/New_York
 US,FL,Seascape,Seascape,America/Chicago
 US,FL,Seaside,Seaside,America/Chicago
 US,FL,Sebastian,Sebastian,America/New_York
 US,FL,Sebring,Sebring,America/New_York
 US,FL,Sebring Shores,Sebring Shores,America/New_York
 US,FL,Seffner,Seffner,America/New_York
 US,FL,Selhaven,Selhaven,America/New_York
 US,FL,Sellersville,Sellersville,America/Chicago
 US,FL,Selman,Selman,America/Chicago
 US,FL,Seminole,Seminole,America/New_York
 US,FL,Seminole County,Seminole County,America/New_York
 US,FL,Secotan,Secotan,America/New_York
 US,FL,Seminole Manor,Seminole Manor,America/New_York
 US,FL,Seminole Shores,Seminole Shores,America/New_York
 US,FL,Senyah,Senyah,America/New_York
 US,FL,Seville,Seville,America/New_York
 US,FL,Seymour Pickett Grant,Seymour Pickett Grant,America/New_York
 US,FL,Shadeville,Shadeville,America/New_York
 US,FL,Shady,Shady,America/New_York
 US,FL,Shady Rest,Shady Rest,America/New_York
 US,FL,Shaefer,Shaefer,America/New_York
 US,FL,Shalimar,Shalimar,America/Chicago
 US,FL,Shamrock,Shamrock,America/New_York
 US,FL,Sharpes,Sharpes,America/New_York
 US,FL,Sharpstown,Sharpstown,America/Chicago
 US,FL,Shawnee,Shawnee,America/New_York
 US,FL,Shawano,Shawano,America/New_York
 US,FL,Shell Point Village,Shell Point Village,America/New_York
 US,FL,Shenandoah,Shenandoah,America/New_York
 US,FL,Shenks,Shenks,America/New_York
 US,FL,Sherman,Sherman,America/New_York
 US,FL,Shiloh,Shiloh,America/New_York
 US,FL,Shilow,Shilow,America/New_York
 US,FL,Shiney Town,Shiney Town,America/New_York
 US,FL,Shorewood,Shorewood,America/New_York
 US,FL,Sidell,Sidell,America/New_York
 US,FL,Sills,Sills,America/Chicago
 US,FL,Silver Palm,Silver Palm,America/New_York
 US,FL,Silver Shores,Silver Shores,America/New_York
 US,FL,Simsville,Simsville,America/Chicago
 US,FL,Sinai,Sinai,America/Chicago
 US,FL,Sirmans,Sirmans,America/New_York
 US,FL,Sisco,Sisco,America/New_York
 US,FL,Skipper,Skipper,America/New_York
 US,FL,Skytop,Skytop,America/New_York
 US,FL,Slade,Slade,America/New_York
 US,FL,Slater,Slater,America/New_York
 US,FL,Slavia,Slavia,America/New_York
 US,FL,Smiths Subdivision,Smiths Subdivision,America/New_York
 US,FL,Smyrna,Smyrna,America/Chicago
 US,FL,Sneads,Sneads,America/Chicago
 US,FL,Socrum,Socrum,America/New_York
 US,FL,Solana,Solana,America/New_York
 US,FL,Sopchoppy,Sopchoppy,America/New_York
 US,FL,Soroka Shores,Soroka Shores,America/New_York
 US,FL,Sorrento,Sorrento,America/New_York
 US,FL,South Allapattah,South Allapattah,America/New_York
 US,FL,South Bradenton,South Bradenton,America/New_York
 US,FL,South Apopka,South Apopka,America/New_York
 US,FL,South Brooksville,South Brooksville,America/New_York
 US,FL,South Clermont,South Clermont,America/New_York
 US,FL,South Clewiston,South Clewiston,America/New_York
 US,FL,South Flomaton,South Flomaton,America/Chicago
 US,FL,South Idylwild,South Idylwild,America/New_York
 US,FL,South Jacksonville,South Jacksonville,America/New_York
 US,FL,South Metro,South Metro,America/New_York
 US,FL,South Miami,South Miami,America/New_York
 US,FL,South Masaryktown,South Masaryktown,America/New_York
 US,FL,South Mulberry,South Mulberry,America/New_York
 US,FL,South Pasadena,South Pasadena,America/New_York
 US,FL,South Patrick,South Patrick,America/New_York
 US,FL,South Patrick Shores,South Patrick Shores,America/New_York
 US,FL,South Port,South Port,America/New_York
 US,FL,South Sarasota,South Sarasota,America/New_York
 US,FL,South Side,South Side,America/New_York
 US,FL,South Tampa,South Tampa,America/New_York
 US,FL,South Titusville,South Titusville,America/New_York
 US,FL,South Venice,South Venice,America/New_York
 US,FL,Southchase,Southchase,America/New_York
 US,FL,Southfort,Southfort,America/New_York
 US,FL,Southgate,Southgate,America/New_York
 US,FL,Southmere,Southmere,America/New_York
 US,FL,Southport,Southport,America/Chicago
 US,FL,Southridge,Southridge,America/New_York
 US,FL,Southwest Ranches,Southwest Ranches,America/New_York
 US,FL,Southwest Venice,Southwest Venice,America/New_York
 US,FL,Sparkman,Sparkman,America/New_York
 US,FL,Sparr,Sparr,America/New_York
 US,FL,Spaulding,Spaulding,America/New_York
 US,FL,Spivey,Spivey,America/New_York
 US,FL,Spray,Spray,America/New_York
 US,FL,Spring Glen,Spring Glen,America/New_York
 US,DE,Cardiff,Cardiff,America/New_York
 US,DE,Carlisle Village,Carlisle Village,America/New_York
 US,DE,Carousel Knoll,Carousel Knoll,America/New_York
 US,DE,Carpenter,Carpenter,America/New_York
 US,DE,Carrcroft,Carrcroft,America/New_York
 US,DE,Carter Development,Carter Development,America/New_York
 US,DE,Cave Colony,Cave Colony,America/New_York
 US,DE,Cedar Creek Hundred,Cedar Creek Hundred,America/New_York
 US,DE,Cedar Farms,Cedar Farms,America/New_York
 US,DE,Cedar Shores,Cedar Shores,America/New_York
 US,DE,Cedars,Cedars,America/New_York
 US,DE,Cedars Knoll,Cedars Knoll,America/New_York
 US,DE,Centennial Village,Centennial Village,America/New_York
 US,DE,Centerville,Centerville,America/New_York
 US,DE,Chalfonte,Chalfonte,America/New_York
 US,DE,Chambersville,Chambersville,America/New_York
 US,DE,Champlin Village,Champlin Village,America/New_York
 US,DE,Channin,Channin,America/New_York
 US,FL,Springfield,Springfield,America/Chicago
 US,FL,Springside,Springside,America/New_York
 US,FL,Springville,Springville,America/New_York
 US,FL,Spuds,Spuds,America/New_York
 US,FL,Stanton,Stanton,America/New_York
 US,FL,Starke,Starke,America/New_York
 US,FL,Starr,Starr,America/New_York
 US,FL,Star,Star,America/Chicago
 US,FL,Steckert,Steckert,America/New_York
 US,FL,Steele City,Steele City,America/Chicago
 US,FL,Steinhatchee,Steinhatchee,America/New_York
 US,FL,Stephen Eubanks Grant,Stephen Eubanks Grant,America/New_York
 US,FL,Stephen Fernandez Grant,Stephen Fernandez Grant,America/New_York
 US,FL,Stephen Fernandez And Other Heirs Of D Fernandez Grant,Stephen Fernandez And Other Heirs Of D Fernandez Grant,America/New_York
 US,FL,Stern,Stern,America/New_York
 US,FL,Stewart City,Stewart City,America/New_York
 US,FL,Stockade,Stockade,America/New_York
 US,FL,Stuart,Stuart,America/New_York
 US,FL,Sturkey,Sturkey,America/New_York
 US,FL,Sugarloaf Shores,Sugarloaf Shores,America/New_York
 US,FL,Sugarton,Sugarton,America/New_York
 US,FL,Sumatra,Sumatra,America/New_York
 US,FL,Summer Haven,Summer Haven,America/New_York
 US,FL,Summerfield,Summerfield,America/New_York
 US,FL,Sumner,Sumner,America/New_York
 US,FL,Sumter County,Sumter County,America/New_York
 US,FL,Sumterville,Sumterville,America/New_York
 US,FL,Sun City,Sun City,America/New_York
 US,FL,Sun N Sand Beaches,Sun N Sand Beaches,America/New_York
 US,FL,Sun Swept Isles,Sun Swept Isles,America/New_York
 US,FL,Sun-Tan Village,Sun-Tan Village,America/New_York
 US,FL,Sunbeam,Sunbeam,America/New_York
 US,FL,Suniland,Suniland,America/New_York
 US,FL,Sunnyland,Sunnyland,America/New_York
 US,FL,Sunnyside,Sunnyside,America/Chicago
 US,FL,Sunshine Ranches,Sunshine Ranches,America/New_York
 US,FL,Sunvale,Sunvale,America/New_York
 US,FL,Surf,Surf,America/New_York
 US,FL,Surfside,Surfside,America/New_York
 US,FL,Sutherlands Still,Sutherlands Still,America/New_York
 US,FL,Suwannee,Suwannee,America/New_York
 US,FL,Suwannee County,Suwannee County,America/New_York
 US,FL,Svea,Svea,America/Chicago
 US,FL,Switzerland,Switzerland,America/New_York
 US,FL,Sydney,Sydney,America/New_York
 US,FL,Sylvania,Sylvania,America/Chicago
 US,FL,Tacoma,Tacoma,America/New_York
 US,FL,Talisman,Talisman,America/New_York
 US,FL,Tallahassee,Tallahassee,America/New_York
 US,FL,Talleyrand,Talleyrand,America/New_York
 US,FL,Tamiami,Tamiami,America/New_York
 US,FL,Tancrede,Tancrede,America/New_York
 US,FL,Tangerine,Tangerine,America/New_York
 US,FL,Tarpon,Tarpon,America/New_York
 US,FL,Tarrytown,Tarrytown,America/New_York
 US,FL,Tatum,Tatum,America/New_York
 US,FL,Tavernier,Tavernier,America/New_York
 US,FL,Taylor,Taylor,America/New_York
 US,FL,Taylor County,Taylor County,America/New_York
 US,FL,Teasdale,Teasdale,America/New_York
 US,FL,Tedder,Tedder,America/New_York
 US,FL,Telogia,Telogia,America/New_York
 US,FL,Tenile,Tenile,America/Chicago
 US,FL,Tennille,Tennille,America/New_York
 US,FL,Tequesta,Tequesta,America/New_York
 US,FL,Terra Ceia,Terra Ceia,America/New_York
 US,FL,Terra Mana,Terra Mana,America/New_York
 US,FL,Terra Mar,Terra Mar,America/New_York
 US,FL,Terrell,Terrell,America/New_York
 US,FL,Terrytown,Terrytown,America/New_York
 US,FL,Thames,Thames,America/New_York
 US,FL,Theresa Rodriquez Grant,Theresa Rodriquez Grant,America/New_York
 US,FL,Theressa,Theressa,America/New_York
 US,FL,Thomas Clark Grant,Thomas Clark Grant,America/New_York
 US,FL,Thomas City,Thomas City,America/New_York
 US,FL,Thomas English Grant,Thomas English Grant,America/Chicago
 US,FL,Thomas Forbes Grant,Thomas Forbes Grant,America/New_York
 US,FL,Thomas H Dummett Grant,Thomas H Dummett Grant,America/New_York
 US,FL,Thomas Napier Grant,Thomas Napier Grant,America/New_York
 US,FL,Thomas Thrifts Grant,Thomas Thrifts Grant,America/Chicago
 US,FL,Thompson,Thompson,America/New_York
 US,FL,Thonotosassa,Thonotosassa,America/New_York
 US,FL,Tice,Tice,America/New_York
 US,FL,Tidewater,Tidewater,America/New_York
 US,FL,Tierra Verde,Tierra Verde,America/New_York
 US,FL,Tildenville,Tildenville,America/New_York
 US,FL,Tilton,Tilton,America/New_York
 US,FL,Timber Pines,Timber Pines,America/New_York
 US,FL,Tisonia,Tisonia,America/New_York
 US,FL,Tocoi,Tocoi,America/New_York
 US,FL,Titusville,Titusville,America/New_York
 US,FL,Tommytown,Tommytown,America/New_York
 US,FL,Torrey,Torrey,America/New_York
 US,FL,Town 'N' Country,Town 'N' Country,America/New_York
 US,FL,Townsend,Townsend,America/New_York
 US,FL,Trail City,Trail City,America/New_York
 US,FL,Trailtown,Trailtown,America/New_York
 US,FL,Trapnell,Trapnell,America/New_York
 US,FL,Trenton,Trenton,America/New_York
 US,FL,Trilby,Trilby,America/New_York
 US,FL,Trilcoochee,Trilcoochee,America/New_York
 US,FL,Traxler,Traxler,America/New_York
 US,FL,Tristan Village,Tristan Village,America/Chicago
 US,FL,Tropic,Tropic,America/New_York
 US,FL,Tropic Isle,Tropic Isle,America/New_York
 US,FL,Truckland,Truckland,America/New_York
 US,FL,Tryon,Tryon,America/New_York
 US,FL,Tulane,Tulane,America/New_York
 US,FL,Tully,Tully,America/New_York
 US,FL,Turkey Foot,Turkey Foot,America/New_York
 US,FL,Turnbull,Turnbull,America/New_York
 US,FL,Turner Stark Grant,Turner Stark Grant,America/Chicago
 US,FL,Tuscannoga,Tuscannoga,America/New_York
 US,FL,Twentymile,Twentymile,America/New_York
 US,FL,Twin Pole,Twin Pole,America/New_York
 US,FL,Two Egg,Two Egg,America/Chicago
 US,FL,Two Mile,Two Mile,America/New_York
 US,FL,Tyler,Tyler,America/New_York
 US,FL,Ulmerton,Ulmerton,America/New_York
 US,FL,Union,Union,America/Chicago
 US,FL,Union County,Union County,America/New_York
 US,FL,Usher,Usher,America/New_York
 US,FL,V Ordosgoity Grant,V Ordosgoity Grant,America/Chicago
 US,FL,V S Pintado Grant,V S Pintado Grant,America/Chicago
 US,FL,Valdez,Valdez,America/New_York
 US,FL,Valhalla,Valhalla,America/New_York
 US,FL,Valkaria,Valkaria,America/New_York
 US,FL,Valparaiso,Valparaiso,America/Chicago
 US,FL,Valrico,Valrico,America/New_York
 US,FL,Valroy,Valroy,America/New_York
 US,FL,Vamo,Vamo,America/New_York
 US,FL,Vandolah,Vandolah,America/New_York
 US,FL,Vaughn,Vaughn,America/New_York
 US,FL,Vehlin,Vehlin,America/New_York
 US,FL,Venetia,Venetia,America/New_York
 US,FL,Venice,Venice,America/New_York
 US,FL,Venice Groves,Venice Groves,America/New_York
 US,FL,Venus,Venus,America/New_York
 US,FL,Verdie,Verdie,America/New_York
 US,FL,Vereen,Vereen,America/New_York
 US,FL,Verna,Verna,America/New_York
 US,FL,Vernon,Vernon,America/Chicago
 US,FL,Vicksburg,Vicksburg,America/Chicago
 US,FL,Victor,Victor,America/New_York
 US,FL,Viera,Viera,America/New_York
 US,FL,Viking,Viking,America/New_York
 US,FL,Vilas,Vilas,America/New_York
 US,FL,Villa Sabine,Villa Sabine,America/Chicago
 US,FL,Villa Tasso,Villa Tasso,America/Chicago
 US,FL,Villages Of Oriole,Villages Of Oriole,America/New_York
 US,FL,Vineland,Vineland,America/New_York
 US,FL,Vineyards,Vineyards,America/New_York
 US,FL,Vista,Vista,America/New_York
 US,FL,Vitis,Vitis,America/New_York
 US,FL,Volusia,Volusia,America/New_York
 US,FL,Volusia County,Volusia County,America/New_York
 US,FL,Wabasso,Wabasso,America/New_York
 US,FL,Wacahoota,Wacahoota,America/New_York
 US,FL,Wacissa,Wacissa,America/New_York
 US,FL,Wade,Wade,America/New_York
 US,FL,Wagner,Wagner,America/New_York
 US,FL,Wadesboro,Wadesboro,America/New_York
 US,FL,Wahneta,Wahneta,America/New_York
 US,FL,Wahoo,Wahoo,America/New_York
 US,FL,Wakulla,Wakulla,America/New_York
 US,FL,Wakulla County,Wakulla County,America/New_York
 US,FL,Wagon Wheel,Wagon Wheel,America/New_York
 US,FL,Walcan,Walcan,America/Chicago
 US,FL,Waldo,Waldo,America/New_York
 US,FL,Walkill,Walkill,America/New_York
 US,FL,Walsingham,Walsingham,America/New_York
 US,FL,Walton,Walton,America/New_York
 US,FL,Walton County,Walton County,America/Chicago
 US,FL,Wanamake,Wanamake,America/New_York
 US,FL,Wannee,Wannee,America/New_York
 US,FL,Ward,Ward,America/New_York
 US,FL,Warrington,Warrington,America/Chicago
 US,FL,Washington County,Washington County,America/Chicago
 US,FL,Waterbury,Waterbury,America/New_York
 US,FL,Watercolor,Watercolor,America/Chicago
 US,FL,Watertown,Watertown,America/New_York
 US,FL,Watson,Watson,America/New_York
 US,FL,Wauchula,Wauchula,America/New_York
 US,FL,Waukeenah,Waukeenah,America/New_York
 US,FL,Wausau,Wausau,America/Chicago
 US,FL,Waveland,Waveland,America/New_York
 US,FL,Waylonzo,Waylonzo,America/New_York
 US,FL,Weathersfield,Weathersfield,America/New_York
 US,FL,Webster,Webster,America/New_York
 US,FL,Wedgefield,Wedgefield,America/New_York
 US,FL,Weeki Wachee,Weeki Wachee,America/New_York
 US,FL,Weekiwachee Woodlands,Weekiwachee Woodlands,America/New_York
 US,FL,Weirsdale,Weirsdale,America/New_York
 US,FL,Wekiva,Wekiva,America/New_York
 US,FL,Welaka,Welaka,America/New_York
 US,FL,Welcome,Welcome,America/New_York
 US,FL,Wellborn,Wellborn,America/New_York
 US,FL,Wesconnett,Wesconnett,America/New_York
 US,FL,Wesley Manor Retirement Village,Wesley Manor Retirement Village,America/New_York
 US,FL,West Bradenton,West Bradenton,America/New_York
 US,FL,Westchase,Westchase,America/New_York
 US,FL,West Deland,West Deland,America/New_York
 US,FL,West Eau Gallie,West Eau Gallie,America/New_York
 US,FL,West Frostproof,West Frostproof,America/New_York
 US,FL,West Gate,West Gate,America/New_York
 US,FL,West Jacksonville,West Jacksonville,America/New_York
 US,FL,West Jupiter,West Jupiter,America/New_York
 US,FL,West Lake Wales,West Lake Wales,America/New_York
 US,FL,West Melbourne,West Melbourne,America/New_York
 US,FL,West Miami,West Miami,America/New_York
 US,FL,West Palm Beach Farms,West Palm Beach Farms,America/New_York
 US,FL,West Pensacola,West Pensacola,America/Chicago
 US,FL,West Perrine,West Perrine,America/New_York
 US,FL,West Samoset,West Samoset,America/New_York
 US,FL,West Tampa,West Tampa,America/New_York
 US,FL,West Tocoi,West Tocoi,America/New_York
 US,FL,West Vero Corridor,West Vero Corridor,America/New_York
 US,FL,West And East Lealman,West And East Lealman,America/New_York
 US,FL,Westchester,Westchester,America/New_York
 US,FL,Westgate,Westgate,America/New_York
 US,FL,Westgate Lake Manor,Westgate Lake Manor,America/New_York
 US,FL,Westview,Westview,America/New_York
 US,FL,Westville,Westville,America/Chicago
 US,FL,Wetappo,Wetappo,America/Chicago
 US,FL,Wetumpka,Wetumpka,America/New_York
 US,FL,Wewahitchka,Wewahitchka,America/Chicago
 US,FL,Wewahotee,Wewahotee,America/New_York
 US,FL,Whispering Pines,Whispering Pines,America/New_York
 US,FL,White City,White City,America/Chicago
 US,FL,Whitehouse,Whitehouse,America/New_York
 US,FL,Whiteville,Whiteville,America/New_York
 US,FL,Whitfield,Whitfield,America/New_York
 US,FL,Whitney,Whitney,America/New_York
 US,FL,Whittier,Whittier,America/New_York
 US,FL,Wilbur-By-The-Sea,Wilbur-By-The-Sea,America/New_York
 US,FL,Wilburn,Wilburn,America/New_York
 US,FL,Wilcox,Wilcox,America/New_York
 US,FL,Wiley,Wiley,America/New_York
 US,FL,William Berrie Grant,William Berrie Grant,America/New_York
 US,FL,William Drummond Grant,William Drummond Grant,America/New_York
 US,FL,William Eubanks Grant,William Eubanks Grant,America/New_York
 US,FL,William Fitzpatrick Grant,William Fitzpatrick Grant,America/New_York
 US,FL,William Gardner Grant,William Gardner Grant,America/Kentucky/Monticello
 US,FL,William Garvin Grant,William Garvin Grant,America/New_York
 US,FL,William Gibson And Others Grant,William Gibson And Others Grant,America/New_York
 US,FL,William Hambley Grant,William Hambley Grant,America/New_York
 US,FL,William Hartley Grant,William Hartley Grant,America/New_York
 US,FL,William Hendricks Grant,William Hendricks Grant,America/New_York
 US,FL,William Hollingsworth Grant,William Hollingsworth Grant,America/Kentucky/Monticello
 US,FL,William Lane Grant,William Lane Grant,America/New_York
 US,FL,William Panton Grant,William Panton Grant,America/New_York
 US,FL,William Silcox Grant,William Silcox Grant,America/New_York
 US,FL,William Traverse Grant,William Traverse Grant,America/New_York
 US,FL,Williamsburg,Williamsburg,America/New_York
 US,FL,Williford,Williford,America/New_York
 US,FL,Anadell,Anadell,America/New_York
 US,FL,Andalucia,Andalucia,America/New_York
 US,FL,Andover,Andover,America/New_York
 US,FL,Andover Village,Andover Village,America/New_York
 US,FL,Andrea,Andrea,America/New_York
 US,FL,Angelina Pines,Angelina Pines,America/New_York
 US,FL,Anita,Anita,America/New_York
 US,FL,Apache Trace,Apache Trace,America/New_York
 US,FL,Apollo Key Village,Apollo Key Village,America/New_York
 US,FL,Arbor Greene,Arbor Greene,America/New_York
 US,FL,Archer,Archer,America/New_York
 US,FL,Arista,Arista,America/New_York
 US,FL,Arlene Manor,Arlene Manor,America/New_York
 US,FL,Arlington,Arlington,America/New_York
 US,FL,Culver,Culver,America/New_York
 US,FL,Cumberland Manors,Cumberland Manors,America/New_York
 US,FL,Cunningham,Cunningham,America/New_York
 US,FL,Cushing,Cushing,America/New_York
 US,FL,Cypress Creek Village,Cypress Creek Village,America/New_York
 US,FL,Cypress Glen,Cypress Glen,America/New_York
 US,FL,Cypress Trace,Cypress Trace,America/New_York
 US,FL,Cypress Willows,Cypress Willows,America/New_York
 US,FL,Cypressview,Cypressview,America/New_York
 US,FL,Daily,Daily,America/New_York
 US,FL,Daly,Daly,America/New_York
 US,FL,Dana Shores,Dana Shores,America/New_York
 US,FL,Daneli,Daneli,America/New_York
 US,FL,Darcy,Darcy,America/New_York
 US,FL,Davis,Davis,America/New_York
 US,FL,Deep Roots Farms,Deep Roots Farms,America/New_York
 US,FL,Del Prado,Del Prado,America/New_York
 US,FL,Delarua,Delarua,America/New_York
 US,FL,Delgado,Delgado,America/New_York
 US,FL,Dell Vista,Dell Vista,America/New_York
 US,FL,Demorest,Demorest,America/New_York
 US,FL,Dessadaria,Dessadaria,America/New_York
 US,FL,Deutsch Amerikanischer,Deutsch Amerikanischer,America/New_York
 US,FL,Dickey,Dickey,America/New_York
 US,FL,Dill,Dill,America/New_York
 US,FL,Dilports,Dilports,America/New_York
 US,FL,Dixie,Dixie,America/New_York
 US,FL,Dixie Farms,Dixie Farms,America/New_York
 US,FL,Dixons,Dixons,America/New_York
 US,FL,Doerr,Doerr,America/New_York
 US,FL,Dolce Vita,Dolce Vita,America/New_York
 US,FL,Dorchester,Dorchester,America/New_York
 US,FL,Dover Groves,Dover Groves,America/New_York
 US,FL,Dovercrest,Dovercrest,America/New_York
 US,FL,Downing,Downing,America/New_York
 US,FL,Drew,Drew,America/New_York
 US,FL,Dumont,Dumont,America/New_York
 US,FL,Duncan Groves,Duncan Groves,America/New_York
 US,FL,Dunn,Dunn,America/New_York
 US,FL,Willis,Willis,America/Chicago
 US,FL,Williston Highlands,Williston Highlands,America/New_York
 US,FL,Willow,Willow,America/New_York
 US,FL,Willow Sink,Willow Sink,America/New_York
 US,FL,Wilson,Wilson,America/New_York
 US,FL,Wilton Manors,Wilton Manors,America/New_York
 US,FL,Wimauma,Wimauma,America/New_York
 US,FL,Windermere,Windermere,America/New_York
 US,FL,Windsor,Windsor,America/New_York
 US,FL,Winfield,Winfield,America/New_York
 US,FL,Winston,Winston,America/New_York
 US,FL,Winter Garden,Winter Garden,America/New_York
 US,FL,Winter Haven,Winter Haven,America/New_York
 US,FL,Wiscon,Wiscon,America/New_York
 US,FL,Withla,Withla,America/New_York
 US,FL,Wolfolk,Wolfolk,America/New_York
 US,FL,Wonderwood,Wonderwood,America/New_York
 US,FL,Woodlawn,Woodlawn,America/New_York
 US,FL,Woodmere,Woodmere,America/New_York
 US,FL,Woodruffs Subdivision,Woodruffs Subdivision,America/New_York
 US,FL,Woods,Woods,America/New_York
 US,FL,Woodville,Woodville,America/New_York
 US,FL,Wright,Wright,America/Chicago
 US,FL,Wynnlum,Wynnlum,America/Chicago
 US,FL,Wynwood,Wynwood,America/New_York
 US,FL,Yamato,Yamato,America/New_York
 US,FL,Yankeetown,Yankeetown,America/New_York
 US,FL,Ybel,Ybel,America/New_York
 US,FL,Ybor City,Ybor City,America/New_York
 US,FL,Yeehaw,Yeehaw,America/New_York
 US,FL,Yellow Bluff Fort,Yellow Bluff Fort,America/New_York
 US,FL,Yellow Jacket,Yellow Jacket,America/New_York
 US,FL,Yniestra,Yniestra,America/Chicago
 US,FL,Yelvington,Yelvington,America/New_York
 US,FL,York,York,America/New_York
 US,FL,Youmans,Youmans,America/New_York
 US,FL,Youngstown,Youngstown,America/Chicago
 US,FL,Yulee,Yulee,America/New_York
 US,FL,Z Kingsley Grant,Z Kingsley Grant,America/New_York
 US,FL,Zana,Zana,America/New_York
 US,FL,Yukon,Yukon,America/New_York
 US,FL,Zellwood,Zellwood,America/New_York
 US,FL,Zephaniah Kingsley Grant,Zephaniah Kingsley Grant,America/New_York
 US,FL,Zephyrhills,Zephyrhills,America/New_York
 US,FL,Zuber,Zuber,America/New_York
 US,FL,Durango,Durango,America/New_York
 US,FL,Durant Trails,Durant Trails,America/New_York
 US,FL,Durolife Homes,Durolife Homes,America/New_York
 US,FL,Dyal,Dyal,America/New_York
 US,FL,Eagle Watch,Eagle Watch,America/New_York
 US,FL,Eaglebrook,Eaglebrook,America/New_York
 US,FL,East Bay Farms,East Bay Farms,America/New_York
 US,FL,East North Tampa,East North Tampa,America/New_York
 US,FL,East Village,East Village,America/New_York
 US,FL,Eastbrook,Eastbrook,America/New_York
 US,FL,Eastgate Extension,Eastgate Extension,America/New_York
 US,FL,Eastlyn,Eastlyn,America/New_York
 US,FL,Eastmonte,Eastmonte,America/New_York
 US,FL,Eastshore Palms,Eastshore Palms,America/New_York
 US,FL,Eastside Mobile Villa,Eastside Mobile Villa,America/New_York
 US,FL,Eastwood Glenn,Eastwood Glenn,America/New_York
 US,FL,Eckerds,Eckerds,America/New_York
 US,FL,Eckland,Eckland,America/New_York
 US,FL,Edge,Edge,America/New_York
 US,FL,Edgewater Village,Edgewater Village,America/New_York
 US,FL,Edinborough,Edinborough,America/New_York
 US,FL,Edwards,Edwards,America/New_York
 US,FL,Efird Farms,Efird Farms,America/New_York
 US,FL,Ehrlich Gardenlands,Ehrlich Gardenlands,America/New_York
 US,FL,Eilers,Eilers,America/New_York
 US,FL,El Cerro,El Cerro,America/New_York
 US,FL,El Pavo Vista,El Pavo Vista,America/New_York
 US,FL,El Pinar,El Pinar,America/New_York
 US,FL,El Portal,El Portal,America/New_York
 US,FL,El Rancho Petite,El Rancho Petite,America/New_York
 US,FL,El Valle De Tampa,El Valle De Tampa,America/New_York
 US,FL,Eldra,Eldra,America/New_York
 US,FL,Eleanor Villas,Eleanor Villas,America/New_York
 US,FL,Elizabeth,Elizabeth,America/New_York
 US,FL,Elkton,Elkton,America/New_York
 US,FL,Ellsworth,Ellsworth,America/New_York
 US,FL,Elysian Fields,Elysian Fields,America/New_York
 US,FL,Emerson,Emerson,America/New_York
 US,FL,Empire,Empire,America/New_York
 US,FL,Enclave Of Carrollwood,Enclave Of Carrollwood,America/New_York
 US,FL,Endres,Endres,America/New_York
 US,FL,Englewood,Englewood,America/New_York
 US,FL,Enterprise,Enterprise,America/New_York
 US,FL,Entrada,Entrada,America/New_York
 US,FL,Erma,Erma,America/New_York
 US,FL,Estates At Parsons Pointe,Estates At Parsons Pointe,America/New_York
 US,FL,Estates Del Sol,Estates Del Sol,America/New_York
 US,FL,Estates Of Lake Alice,Estates Of Lake Alice,America/New_York
 US,FL,Estuary,Estuary,America/New_York
 US,FL,Etheridge,Etheridge,America/New_York
 US,FL,Eurcelles,Eurcelles,America/New_York
 US,FL,Eureka,Eureka,America/New_York
 US,FL,Eureka Homes,Eureka Homes,America/New_York
 US,FL,Evelyn City,Evelyn City,America/New_York
 US,FL,Everett,Everett,America/New_York
 US,FL,Everina Homes,Everina Homes,America/New_York
 US,FL,Everwood,Everwood,America/New_York
 US,FL,Excelda,Excelda,America/New_York
 US,FL,Excelsior,Excelsior,America/New_York
 US,FL,Fair Ground Farms,Fair Ground Farms,America/New_York
 US,FL,Fair Oaks Manor,Fair Oaks Manor,America/New_York
 US,FL,Fairburn,Fairburn,America/New_York
 US,FL,Fairfield Village,Fairfield Village,America/New_York
 US,FL,Fairholme,Fairholme,America/New_York
 US,FL,Fairway Estates At Summerfield,Fairway Estates At Summerfield,America/New_York
 US,FL,Fairway Village,Fairway Village,America/New_York
 US,FL,Fannypryde,Fannypryde,America/New_York
 US,FL,Farmington,Farmington,America/New_York
 US,FL,Fasson,Fasson,America/New_York
 US,FL,Fawn Ridge Village,Fawn Ridge Village,America/New_York
 US,FL,Fendigs,Fendigs,America/New_York
 US,FL,Fengos,Fengos,America/New_York
 US,FL,Fern Glen,Fern Glen,America/New_York
 US,FL,Fernwood,Fernwood,America/New_York
 US,FL,Fiorito,Fiorito,America/New_York
 US,FL,Fish Hawk Farms,Fish Hawk Farms,America/New_York
 US,FL,Fish Hawk Trails,Fish Hawk Trails,America/New_York
 US,FL,Fishers,Fishers,America/New_York
 US,FL,Fishers Farms,Fishers Farms,America/New_York
 US,FL,Fivacres,Fivacres,America/New_York
 US,FL,Flehartys,Flehartys,America/New_York
 US,FL,Floravilla,Floravilla,America/New_York
 US,FL,Flores,Flores,America/New_York
 US,FL,Florida Townsend Colony,Florida Townsend Colony,America/New_York
 US,FL,Flournoy,Flournoy,America/New_York
 US,FL,Flowers,Flowers,America/New_York
 US,FL,Forest Manor,Forest Manor,America/New_York
 US,FL,Fort King,Fort King,America/New_York
 US,FL,Fortuna,Fortuna,America/New_York
 US,FL,Fosterville,Fosterville,America/New_York
 US,FL,Four Score Manor,Four Score Manor,America/New_York
 US,FL,Fox Chase,Fox Chase,America/New_York
 US,FL,Brandon Groves,Brandon Groves,America/New_York
 US,FL,Brandon Mobile Villa,Brandon Mobile Villa,America/New_York
 US,FL,Brandon Ridgeland,Brandon Ridgeland,America/New_York
 US,FL,Brandon Traces,Brandon Traces,America/New_York
 US,FL,Brandon Tradewinds,Brandon Tradewinds,America/New_York
 US,FL,Brandon Village,Brandon Village,America/New_York
 US,FL,Brandon Woodlands,Brandon Woodlands,America/New_York
 US,FL,Brandontree,Brandontree,America/New_York
 US,FL,Brandwood,Brandwood,America/New_York
 US,FL,Brant Lake Village,Brant Lake Village,America/New_York
 US,FL,Brant Shores,Brant Shores,America/New_York
 US,FL,Brentwood,Brentwood,America/New_York
 US,FL,Briarwood,Briarwood,America/New_York
 US,FL,Brigadoon On Lake Heather,Brigadoon On Lake Heather,America/New_York
 US,FL,Brightside Village,Brightside Village,America/New_York
 US,FL,Brightwater,Brightwater,America/New_York
 US,FL,Bringers Saffold Ranchettes,Bringers Saffold Ranchettes,America/New_York
 US,FL,Broadway,Broadway,America/New_York
 US,FL,Brookdale Farms,Brookdale Farms,America/New_York
 US,FL,Brooker Trace,Brooker Trace,America/New_York
 US,FL,Brookgreen Village,Brookgreen Village,America/New_York
 US,FL,Brookshire,Brookshire,America/New_York
 US,FL,Brower,Brower,America/New_York
 US,FL,Bryan Manor,Bryan Manor,America/New_York
 US,FL,Bryans,Bryans,America/New_York
 US,FL,Buckhorn,Buckhorn,America/New_York
 US,FL,Buckhorn Groves,Buckhorn Groves,America/New_York
 US,FL,Buckhorn Trace,Buckhorn Trace,America/New_York
 US,FL,Buckingham,Buckingham,America/New_York
 US,FL,Buckingham At Tampa Palms,Buckingham At Tampa Palms,America/New_York
 US,FL,Budd Farms,Budd Farms,America/New_York
 US,FL,Buffalo,Buffalo,America/New_York
 US,FL,Buffalo Avenue Farms,Buffalo Avenue Farms,America/New_York
 US,FL,Bunchville,Bunchville,America/New_York
 US,FL,Bungalow City,Bungalow City,America/New_York
 US,FL,Burnbrook,Burnbrook,America/New_York
 US,FL,California Heights Addition,California Heights Addition,America/New_York
 US,FL,Calusa Trace,Calusa Trace,America/New_York
 US,FL,Calvinos Liberty,Calvinos Liberty,America/New_York
 US,FL,Camacho,Camacho,America/New_York
 US,FL,Cambridge Villas,Cambridge Villas,America/New_York
 US,FL,Camelot,Camelot,America/New_York
 US,FL,Cameo Villas,Cameo Villas,America/New_York
 US,FL,Camp T F Addition,Camp T F Addition,America/New_York
 US,FL,Campbells,Campbells,America/New_York
 US,FL,Campos Valrico,Campos Valrico,America/New_York
 US,FL,Campus Shores,Campus Shores,America/New_York
 US,FL,Canal Shores,Canal Shores,America/New_York
 US,FL,Candlelight,Candlelight,America/New_York
 US,FL,Candlewood,Candlewood,America/New_York
 US,FL,Cannes Village,Cannes Village,America/New_York
 US,FL,Canning,Canning,America/New_York
 US,FL,Canter,Canter,America/New_York
 US,FL,Canterbury,Canterbury,America/New_York
 US,FL,Canterbury Village,Canterbury Village,America/New_York
 US,FL,Capital Tampa,Capital Tampa,America/New_York
 US,FL,Capitano,Capitano,America/New_York
 US,FL,Capri Manor,Capri Manor,America/New_York
 US,FL,Carmans Casa Del Rio,Carmans Casa Del Rio,America/New_York
 US,FL,Carmuchas,Carmuchas,America/New_York
 US,FL,Carol Shores,Carol Shores,America/New_York
 US,FL,Carr Drive,Carr Drive,America/New_York
 US,FL,Carriage Pointe,Carriage Pointe,America/New_York
 US,FL,Carroll City,Carroll City,America/New_York
 US,FL,Carrollton,Carrollton,America/New_York
 US,FL,Carrollwood Pines,Carrollwood Pines,America/New_York
 US,FL,Cartagena,Cartagena,America/New_York
 US,FL,Carter Country,Carter Country,America/New_York
 US,FL,Cartertown,Cartertown,America/New_York
 US,FL,Caruthers,Caruthers,America/New_York
 US,FL,Carverwoods,Carverwoods,America/New_York
 US,FL,Carylwood,Carylwood,America/New_York
 US,FL,Casa Blanca,Casa Blanca,America/New_York
 US,FL,Casa De Sol,Casa De Sol,America/New_York
 US,FL,Casa Del Lago,Casa Del Lago,America/New_York
 US,FL,Casa Loma,Casa Loma,America/New_York
 US,FL,Casey,Casey,America/New_York
 US,FL,Casey Lake Manors,Casey Lake Manors,America/New_York
 US,FL,Cashwell,Cashwell,America/New_York
 US,FL,Castillo,Castillo,America/New_York
 US,FL,Castillo Villa,Castillo Villa,America/New_York
 US,FL,Castle Homes,Castle Homes,America/New_York
 US,FL,Catherine City,Catherine City,America/New_York
 US,FL,Cato,Cato,America/New_York
 US,FL,Causeway Boulevard,Causeway Boulevard,America/New_York
 US,FL,Causeway Manor,Causeway Manor,America/New_York
 US,FL,Cedarwood,Cedarwood,America/New_York
 US,FL,Cedarwood Village,Cedarwood Village,America/New_York
 US,FL,Central Village,Central Village,America/New_York
 US,FL,Centralia,Centralia,America/New_York
 US,FL,Chadam,Chadam,America/New_York
 US,FL,Chadbourne Village,Chadbourne Village,America/New_York
 US,FL,Chamberlins,Chamberlins,America/New_York
 US,FL,Chancey Farms,Chancey Farms,America/New_York
 US,FL,Chandler,Chandler,America/New_York
 US,FL,Chapman Manors,Chapman Manors,America/New_York
 US,FL,Chateau Villa,Chateau Villa,America/New_York
 US,FL,Chateaux Loire,Chateaux Loire,America/New_York
 US,FL,Chelsea,Chelsea,America/New_York
 US,FL,Chelsea Manor,Chelsea Manor,America/New_York
 US,FL,Cheval East Bordeaux,Cheval East Bordeaux,America/New_York
 US,FL,Cheval Lake Club Villas,Cheval Lake Club Villas,America/New_York
 US,FL,Cheval Wimbledon Village,Cheval Wimbledon Village,America/New_York
 US,FL,Childers,Childers,America/New_York
 US,FL,Chrysopsis Floridana,Chrysopsis Floridana,America/New_York
 US,FL,Cien Fuegos,Cien Fuegos,America/New_York
 US,FL,Cimmaron,Cimmaron,America/New_York
 US,FL,Cinnamon Trace,Cinnamon Trace,America/New_York
 US,FL,Citrus Pointe,Citrus Pointe,America/New_York
 US,FL,Claonia Highlands,Claonia Highlands,America/New_York
 US,FL,Clark,Clark,America/New_York
 US,FL,Clark Farms,Clark Farms,America/New_York
 US,FL,Clarkes,Clarkes,America/New_York
 US,FL,Clarkmere,Clarkmere,America/New_York
 US,FL,Clearview,Clearview,America/New_York
 US,FL,Clewis Garden,Clewis Garden,America/New_York
 US,FL,Clewis Muck Farms,Clewis Muck Farms,America/New_York
 US,FL,Clifford Ham,Clifford Ham,America/New_York
 US,FL,Clo Mar Homes,Clo Mar Homes,America/New_York
 US,FL,Cloverdale,Cloverdale,America/New_York
 US,FL,Club Manor,Club Manor,America/New_York
 US,FL,Club Manor East Of Grand Hampton,Club Manor East Of Grand Hampton,America/New_York
 US,FL,Clubhouse Estates At Summerfield,Clubhouse Estates At Summerfield,America/New_York
 US,FL,Clubview,Clubview,America/New_York
 US,FL,Cobia Cay,Cobia Cay,America/New_York
 US,FL,Cole,Cole,America/New_York
 US,FL,Collins,Collins,America/New_York
 US,FL,Collura,Collura,America/New_York
 US,FL,Colonial Village,Colonial Village,America/New_York
 US,FL,Cones,Cones,America/New_York
 US,FL,Connell Groves,Connell Groves,America/New_York
 US,FL,Copperfield,Copperfield,America/New_York
 US,FL,Corletts,Corletts,America/New_York
 US,FL,Corona,Corona,America/New_York
 US,FL,Corronella,Corronella,America/New_York
 US,FL,Cortinos,Cortinos,America/New_York
 US,FL,Cory Lake Isles,Cory Lake Isles,America/New_York
 US,FL,Country Aire,Country Aire,America/New_York
 US,FL,Country Chase,Country Chase,America/New_York
 US,FL,Country Club Village At Carrollwood,Country Club Village At Carrollwood,America/New_York
 US,FL,Country Gate,Country Gate,America/New_York
 US,FL,Country Trails,Country Trails,America/New_York
 US,FL,Country Village,Country Village,America/New_York
 US,FL,Countryside Manor,Countryside Manor,America/New_York
 US,FL,Countryside Village,Countryside Village,America/New_York
 US,FL,Courier City,Courier City,America/New_York
 US,FL,Courtland,Courtland,America/New_York
 US,FL,Coventry,Coventry,America/New_York
 US,FL,Covewood,Covewood,America/New_York
 US,FL,Crabcake,Crabcake,America/New_York
 US,FL,Creekside,Creekside,America/New_York
 US,FL,Crestmont,Crestmont,America/New_York
 US,FL,Crestridge,Crestridge,America/New_York
 US,FL,Crilly,Crilly,America/New_York
 US,FL,Crippenwood,Crippenwood,America/New_York
 US,FL,Cristina,Cristina,America/New_York
 US,FL,Cross Creek Substation,Cross Creek Substation,America/New_York
 US,FL,Croteau,Croteau,America/New_York
 US,FL,Crowder,Crowder,America/New_York
 US,FL,Crumley,Crumley,America/New_York
 US,FL,Culbreath Isles,Culbreath Isles,America/New_York
 US,FL,Cullaro,Cullaro,America/New_York
 US,FL,Langshire Village,Langshire Village,America/New_York
 US,FL,Lanrite,Lanrite,America/New_York
 US,FL,Larchmont,Larchmont,America/New_York
 US,FL,Las Brisas,Las Brisas,America/New_York
 US,FL,Lavity,Lavity,America/New_York
 US,FL,Lawndale,Lawndale,America/New_York
 US,FL,Lawrence,Lawrence,America/New_York
 US,FL,Le Clare Shores,Le Clare Shores,America/New_York
 US,FL,Leaning Pine,Leaning Pine,America/New_York
 US,FL,Leen,Leen,America/New_York
 US,FL,Leila Avenue Villas,Leila Avenue Villas,America/New_York
 US,FL,Leitners,Leitners,America/New_York
 US,FL,Leon,Leon,America/New_York
 US,FL,Leonard,Leonard,America/New_York
 US,FL,Les Jardins De Floride,Les Jardins De Floride,America/New_York
 US,FL,Levinson,Levinson,America/New_York
 US,FL,Lincoln,Lincoln,America/New_York
 US,FL,Linda Diane,Linda Diane,America/New_York
 US,FL,Lindawoods,Lindawoods,America/New_York
 US,FL,Lindelaan,Lindelaan,America/New_York
 US,FL,Lindsey,Lindsey,America/New_York
 US,FL,Lingerlong,Lingerlong,America/New_York
 US,FL,Lipscomb Villa,Lipscomb Villa,America/New_York
 US,FL,Lithia Pines,Lithia Pines,America/New_York
 US,FL,Little Bit Manor,Little Bit Manor,America/New_York
 US,FL,Little Cuba,Little Cuba,America/New_York
 US,FL,Little Eleven,Little Eleven,America/New_York
 US,FL,Little Henry,Little Henry,America/New_York
 US,FL,Logan Gate Village,Logan Gate Village,America/New_York
 US,FL,Lone Oak Haven,Lone Oak Haven,America/New_York
 US,FL,Lone Pine,Lone Pine,America/New_York
 US,FL,Long Fritzke,Long Fritzke,America/New_York
 US,FL,Loral,Loral,America/New_York
 US,FL,Los Cien,Los Cien,America/New_York
 US,FL,Lougamel,Lougamel,America/New_York
 US,FL,Louisa,Louisa,America/New_York
 US,FL,Loveras,Loveras,America/New_York
 US,FL,Lowell Village,Lowell Village,America/New_York
 US,FL,Lucas Manor,Lucas Manor,America/New_York
 US,FL,Lucky Strike,Lucky Strike,America/New_York
 US,FL,Lucy Dell,Lucy Dell,America/New_York
 US,FL,Lukes,Lukes,America/New_York
 US,FL,Lullaby Pines,Lullaby Pines,America/New_York
 US,FL,Lumsden Pointe,Lumsden Pointe,America/New_York
 US,FL,Lumsden Trace,Lumsden Trace,America/New_York
 US,FL,Lykes,Lykes,America/New_York
 US,FL,Lynnhaven,Lynnhaven,America/New_York
 US,FL,Lynwood,Lynwood,America/New_York
 US,FL,Lyons,Lyons,America/New_York
 US,FL,Maag,Maag,America/New_York
 US,FL,Mackenzie,Mackenzie,America/New_York
 US,FL,Mackmay,Mackmay,America/New_York
 US,FL,Madison-Cole,Madison-Cole,America/New_York
 US,FL,Madrid,Madrid,America/New_York
 US,FL,Maffett,Maffett,America/New_York
 US,FL,Magnolia Chase,Magnolia Chase,America/New_York
 US,FL,Magnolia Manors,Magnolia Manors,America/New_York
 US,FL,Magnolia Mobile Manor,Magnolia Mobile Manor,America/New_York
 US,FL,Magnolia Trails,Magnolia Trails,America/New_York
 US,FL,Magnolias At Dawn,Magnolias At Dawn,America/New_York
 US,FL,Mandolin,Mandolin,America/New_York
 US,FL,Manee,Manee,America/New_York
 US,FL,Mango Groves,Mango Groves,America/New_York
 US,FL,Manhattan,Manhattan,America/New_York
 US,FL,Manhattan Manor,Manhattan Manor,America/New_York
 US,FL,Mannhurst Oak Manors,Mannhurst Oak Manors,America/New_York
 US,FL,Manors At Manhattan,Manors At Manhattan,America/New_York
 US,FL,Maplewood,Maplewood,America/New_York
 US,FL,Mar Cha Long,Mar Cha Long,America/New_York
 US,FL,Marc I,Marc I,America/New_York
 US,FL,Marco,Marco,America/New_York
 US,FL,Marian,Marian,America/New_York
 US,FL,Marie,Marie,America/New_York
 US,FL,Marilyn Shores,Marilyn Shores,America/New_York
 US,FL,Marina Village,Marina Village,America/New_York
 US,FL,Marine Manor,Marine Manor,America/New_York
 US,FL,Marita,Marita,America/New_York
 US,FL,Marlyn Manor,Marlyn Manor,America/New_York
 US,FL,Marphil Manor,Marphil Manor,America/New_York
 US,FL,Marquard Manor,Marquard Manor,America/New_York
 US,FL,Marquette,Marquette,America/New_York
 US,FL,Marriott,Marriott,America/New_York
 US,FL,Martha Ann Trailer Village,Martha Ann Trailer Village,America/New_York
 US,FL,Martin Luther King Village,Martin Luther King Village,America/New_York
 US,FL,Frances Arbor Villas,Frances Arbor Villas,America/New_York
 US,FL,Franklin Woodlands,Franklin Woodlands,America/New_York
 US,FL,Franquiz,Franquiz,America/New_York
 US,FL,Frazier,Frazier,America/New_York
 US,FL,Freedom Village,Freedom Village,America/New_York
 US,FL,Frenchs,Frenchs,America/New_York
 US,FL,Friendship,Friendship,America/New_York
 US,FL,Frye,Frye,America/New_York
 US,FL,Fulton,Fulton,America/New_York
 US,FL,Futchs,Futchs,America/New_York
 US,FL,Galleria,Galleria,America/New_York
 US,FL,Gandy Manor,Gandy Manor,America/New_York
 US,FL,Gantree,Gantree,America/New_York
 US,FL,Garden City,Garden City,America/New_York
 US,FL,Gardenia,Gardenia,America/New_York
 US,FL,Garytown,Garytown,America/New_York
 US,FL,Gaudys Paradise,Gaudys Paradise,America/New_York
 US,FL,Gay Villa Farms,Gay Villa Farms,America/New_York
 US,FL,Giddens,Giddens,America/New_York
 US,FL,Gilberts,Gilberts,America/New_York
 US,FL,Gilchrist,Gilchrist,America/New_York
 US,FL,Gilfort,Gilfort,America/New_York
 US,FL,Gillespies Glen,Gillespies Glen,America/New_York
 US,FL,Gilmore Manor,Gilmore Manor,America/New_York
 US,FL,Glen Ellen Village,Glen Ellen Village,America/New_York
 US,FL,Glennoaks,Glennoaks,America/New_York
 US,FL,Glenwood,Glenwood,America/New_York
 US,FL,Glovers,Glovers,America/New_York
 US,FL,Gold Coast,Gold Coast,America/New_York
 US,FL,Gold Rush,Gold Rush,America/New_York
 US,FL,Golden,Golden,America/New_York
 US,FL,Golden Ring Groves,Golden Ring Groves,America/New_York
 US,FL,Goldmine,Goldmine,America/New_York
 US,FL,Golds,Golds,America/New_York
 US,FL,Golf And Sea Village,Golf And Sea Village,America/New_York
 US,FL,Golf Manor,Golf Manor,America/New_York
 US,FL,Gonzales,Gonzales,America/New_York
 US,FL,Goodwater,Goodwater,America/New_York
 US,FL,Goolsby Pointe,Goolsby Pointe,America/New_York
 US,FL,Gordon,Gordon,America/New_York
 US,FL,Grand Hampton,Grand Hampton,America/New_York
 US,FL,Granville Manor,Granville Manor,America/New_York
 US,FL,Graves Orchard,Graves Orchard,America/New_York
 US,FL,Gray Gables,Gray Gables,America/New_York
 US,FL,Graystone,Graystone,America/New_York
 US,FL,Green Pastures,Green Pastures,America/New_York
 US,FL,Greenbriar,Greenbriar,America/New_York
 US,FL,Greenbrook Village,Greenbrook Village,America/New_York
 US,FL,Greenewood,Greenewood,America/New_York
 US,FL,Greenhills,Greenhills,America/New_York
 US,FL,Greenleaf,Greenleaf,America/New_York
 US,FL,Greenmoor,Greenmoor,America/New_York
 US,FL,Greentree,Greentree,America/New_York
 US,FL,Grimwold,Grimwold,America/New_York
 US,FL,Grove Manor,Grove Manor,America/New_York
 US,FL,Grove Point Village,Grove Point Village,America/New_York
 US,FL,Gulf Sierra Farms,Gulf Sierra Farms,America/New_York
 US,FL,Gull Haven,Gull Haven,America/New_York
 US,FL,Guterman,Guterman,America/New_York
 US,FL,Haggard,Haggard,America/New_York
 US,FL,Hagle,Hagle,America/New_York
 US,FL,Half Moon Tracts,Half Moon Tracts,America/New_York
 US,FL,Hamilton Heath,Hamilton Heath,America/New_York
 US,FL,Hampton Village,Hampton Village,America/New_York
 US,FL,Hamton,Hamton,America/New_York
 US,FL,Hancock,Hancock,America/New_York
 US,FL,Happy Homes,Happy Homes,America/New_York
 US,FL,Harbor Homes,Harbor Homes,America/New_York
 US,FL,Harbor Shores,Harbor Shores,America/New_York
 US,FL,Harbor View Palms,Harbor View Palms,America/New_York
 US,FL,Harbour Isles,Harbour Isles,America/New_York
 US,FL,Harding,Harding,America/New_York
 US,FL,Harris Landings,Harris Landings,America/New_York
 US,FL,Hartline,Hartline,America/New_York
 US,FL,Hawks,Hawks,America/New_York
 US,FL,Hazard,Hazard,America/New_York
 US,FL,Headford,Headford,America/New_York
 US,FL,Heather Manor,Heather Manor,America/New_York
 US,FL,Heatherwood Village,Heatherwood Village,America/New_York
 US,FL,Hellekes,Hellekes,America/New_York
 US,FL,Henderson,Henderson,America/New_York
 US,FL,Hendry Manor,Hendry Manor,America/New_York
 US,FL,Heritage Harbor Village,Heritage Harbor Village,America/New_York
 US,FL,Heritage Isles,Heritage Isles,America/New_York
 US,FL,Herrera,Herrera,America/New_York
 US,FL,Hesperides Manor,Hesperides Manor,America/New_York
 US,FL,Hiawatha Highlands,Hiawatha Highlands,America/New_York
 US,FL,Hick,Hick,America/New_York
 US,FL,Hickory Highlands,Hickory Highlands,America/New_York
 US,FL,Hickory Lakes Manor,Hickory Lakes Manor,America/New_York
 US,FL,Hidden Haven,Hidden Haven,America/New_York
 US,FL,High Oaks Manor,High Oaks Manor,America/New_York
 US,FL,High Pines,High Pines,America/New_York
 US,FL,Highburg,Highburg,America/New_York
 US,FL,Highland Manor,Highland Manor,America/New_York
 US,FL,Highland Pines,Highland Pines,America/New_York
 US,FL,Hillcrest,Hillcrest,America/New_York
 US,FL,Hilldale Heights Of Brandon,Hilldale Heights Of Brandon,America/New_York
 US,FL,Hillsboro Highlands,Hillsboro Highlands,America/New_York
 US,FL,Hillsborough Avenue Farms,Hillsborough Avenue Farms,America/New_York
 US,FL,Hillside,Hillside,America/New_York
 US,FL,Hillside Manor,Hillside Manor,America/New_York
 US,FL,Hobby,Hobby,America/New_York
 US,FL,Holden,Holden,America/New_York
 US,FL,Holiday Village,Holiday Village,America/New_York
 US,FL,Hollowtree,Hollowtree,America/New_York
 US,FL,Hollyglen Village,Hollyglen Village,America/New_York
 US,FL,Homelands,Homelands,America/New_York
 US,FL,Hudsons Haven,Hudsons Haven,America/New_York
 US,FL,Hunters Glen,Hunters Glen,America/New_York
 US,FL,Huntington Of Carrollwood,Huntington Of Carrollwood,America/New_York
 US,FL,Hurley Manor,Hurley Manor,America/New_York
 US,FL,Ida,Ida,America/New_York
 US,FL,Indian Trails,Indian Trails,America/New_York
 US,FL,Indian Village,Indian Village,America/New_York
 US,FL,Innfields,Innfields,America/New_York
 US,FL,Irma,Irma,America/New_York
 US,FL,Ivinell,Ivinell,America/New_York
 US,FL,Jackson Block,Jackson Block,America/New_York
 US,FL,Jameson Farms,Jameson Farms,America/New_York
 US,FL,Jenkins,Jenkins,America/New_York
 US,FL,Jerrys,Jerrys,America/New_York
 US,FL,Jochumsen,Jochumsen,America/New_York
 US,FL,John Knox Village,John Knox Village,America/New_York
 US,FL,Jojo,Jojo,America/New_York
 US,FL,Jones,Jones,America/New_York
 US,FL,J-R Manor,J-R Manor,America/New_York
 US,FL,June Bloom,June Bloom,America/New_York
 US,FL,Kambridge,Kambridge,America/New_York
 US,FL,Keats,Keats,America/New_York
 US,FL,Keebler,Keebler,America/New_York
 US,FL,Keene,Keene,America/New_York
 US,FL,Keene Lake Manors,Keene Lake Manors,America/New_York
 US,FL,Keeters,Keeters,America/New_York
 US,FL,Kellers,Kellers,America/New_York
 US,FL,Kelloggs,Kelloggs,America/New_York
 US,FL,Kenlake,Kenlake,America/New_York
 US,FL,Kenny,Kenny,America/New_York
 US,FL,Kevan,Kevan,America/New_York
 US,FL,Key West Landings,Key West Landings,America/New_York
 US,FL,Keys,Keys,America/New_York
 US,FL,Keystone Crossings,Keystone Crossings,America/New_York
 US,FL,Keystone Farms,Keystone Farms,America/New_York
 US,FL,Keystone Groves,Keystone Groves,America/New_York
 US,FL,Keystone Homes,Keystone Homes,America/New_York
 US,FL,Keystone Manor,Keystone Manor,America/New_York
 US,FL,Keystone Meadow I,Keystone Meadow I,America/New_York
 US,FL,Keystone Shores,Keystone Shores,America/New_York
 US,FL,Kies,Kies,America/New_York
 US,FL,Killebrew,Killebrew,America/New_York
 US,FL,Kings,Kings,America/New_York
 US,FL,Kings Row,Kings Row,America/New_York
 US,FL,Kings Village,Kings Village,America/New_York
 US,FL,Kingston City,Kingston City,America/New_York
 US,FL,Kingston Court Villas,Kingston Court Villas,America/New_York
 US,FL,Kingsway,Kingsway,America/New_York
 US,FL,Knowles,Knowles,America/New_York
 US,FL,Koostra,Koostra,America/New_York
 US,FL,Krause Farms,Krause Farms,America/New_York
 US,FL,Krebs,Krebs,America/New_York
 US,FL,La Belle,La Belle,America/New_York
 US,FL,La Carbayera,La Carbayera,America/New_York
 US,FL,La Casa,La Casa,America/New_York
 US,FL,La Covadonga,La Covadonga,America/New_York
 US,FL,La Paloma,La Paloma,America/New_York
 US,FL,La Rue Grande,La Rue Grande,America/New_York
 US,FL,La Vergne,La Vergne,America/New_York
 US,FL,Lago Vista,Lago Vista,America/New_York
 US,FL,Lago Whispers,Lago Whispers,America/New_York
 US,FL,Lagomar,Lagomar,America/New_York
 US,FL,Lakemont,Lakemont,America/New_York
 US,FL,Lakes Of Keystone,Lakes Of Keystone,America/New_York
 US,FL,Lakes Of Wellington,Lakes Of Wellington,America/New_York
 US,FL,Lakeshore,Lakeshore,America/New_York
 US,FL,Lakeview At Calusa Trace,Lakeview At Calusa Trace,America/New_York
 US,FL,Lakeview Village,Lakeview Village,America/New_York
 US,FL,Lakeview Villas At Pebble Creek Village,Lakeview Villas At Pebble Creek Village,America/New_York
 US,FL,Lakewood Manor,Lakewood Manor,America/New_York
 US,FL,Lambert,Lambert,America/New_York
 US,FL,Lamont,Lamont,America/New_York
 US,FL,Lane Farms,Lane Farms,America/New_York
 US,FL,Pierce,Pierce,America/New_York
 US,FL,Piergallini,Piergallini,America/New_York
 US,FL,Pimm,Pimm,America/New_York
 US,FL,Pine Crest Manor,Pine Crest Manor,America/New_York
 US,FL,Pine Landing Villas,Pine Landing Villas,America/New_York
 US,FL,Pine Trace,Pine Trace,America/New_York
 US,FL,Pinecrest Villa,Pinecrest Villa,America/New_York
 US,FL,Pinehurst,Pinehurst,America/New_York
 US,FL,Pinehurst Villas,Pinehurst Villas,America/New_York
 US,FL,Pinewood,Pinewood,America/New_York
 US,FL,Pinker,Pinker,America/New_York
 US,FL,Pippin Farms,Pippin Farms,America/New_York
 US,FL,Pippins,Pippins,America/New_York
 US,FL,Plainfield,Plainfield,America/New_York
 US,FL,Pleasant Dale,Pleasant Dale,America/New_York
 US,FL,Plouff,Plouff,America/New_York
 US,FL,Plumnelly,Plumnelly,America/New_York
 US,FL,Poinsettia Village,Poinsettia Village,America/New_York
 US,FL,Point Heron,Point Heron,America/New_York
 US,FL,Pointe At Tampa Palms,Pointe At Tampa Palms,America/New_York
 US,FL,Pond Eddy,Pond Eddy,America/New_York
 US,FL,Ponderosa,Ponderosa,America/New_York
 US,FL,Pons,Pons,America/New_York
 US,FL,Pooran,Pooran,America/New_York
 US,FL,Popes,Popes,America/New_York
 US,FL,Port Tampa Communities,Port Tampa Communities,America/New_York
 US,FL,Post Shores,Post Shores,America/New_York
 US,FL,Presidential Manor,Presidential Manor,America/New_York
 US,FL,Prince,Prince,America/New_York
 US,FL,Pritcher Manor,Pritcher Manor,America/New_York
 US,FL,Pritcher Pines,Pritcher Pines,America/New_York
 US,FL,Progreso,Progreso,America/New_York
 US,FL,Puentes,Puentes,America/New_York
 US,FL,Quintessa,Quintessa,America/New_York
 US,FL,Raines,Raines,America/New_York
 US,FL,Ralston Beach Manor,Ralston Beach Manor,America/New_York
 US,FL,Ranch Lands,Ranch Lands,America/New_York
 US,FL,Ranch Road Groves,Ranch Road Groves,America/New_York
 US,FL,Ranchester,Ranchester,America/New_York
 US,FL,Randolph Arbor,Randolph Arbor,America/New_York
 US,FL,Ravenwood,Ravenwood,America/New_York
 US,FL,Ray,Ray,America/New_York
 US,FL,Raye Ann,Raye Ann,America/New_York
 US,FL,Redd,Redd,America/New_York
 US,FL,Reese,Reese,America/New_York
 US,FL,Reflections,Reflections,America/New_York
 US,FL,Regalwoods,Regalwoods,America/New_York
 US,FL,Reina Victoria,Reina Victoria,America/New_York
 US,FL,Reolds Acre,Reolds Acre,America/New_York
 US,FL,Reparto Pravia,Reparto Pravia,America/New_York
 US,FL,Reynoldswood,Reynoldswood,America/New_York
 US,FL,Reynoso,Reynoso,America/New_York
 US,FL,Rhoda Lee,Rhoda Lee,America/New_York
 US,FL,Rhodes,Rhodes,America/New_York
 US,FL,Richardsons Village,Richardsons Village,America/New_York
 US,FL,Rico Diaz,Rico Diaz,America/New_York
 US,FL,Ridge Dale,Ridge Dale,America/New_York
 US,FL,Ridgelake,Ridgelake,America/New_York
 US,FL,Ridgeland,Ridgeland,America/New_York
 US,FL,Ridgway,Ridgway,America/New_York
 US,FL,Rio Altos,Rio Altos,America/New_York
 US,FL,Rio Hermoso,Rio Hermoso,America/New_York
 US,FL,Riverbend,Riverbend,America/New_York
 US,FL,Riverbend Manor,Riverbend Manor,America/New_York
 US,FL,Rivercrest,Rivercrest,America/New_York
 US,FL,Rivere,Rivere,America/New_York
 US,FL,Riveredge,Riveredge,America/New_York
 US,FL,Rivergate,Rivergate,America/New_York
 US,FL,Riverglen,Riverglen,America/New_York
 US,FL,Riverlachen,Riverlachen,America/New_York
 US,FL,Riverleaf,Riverleaf,America/New_York
 US,FL,Rivershores,Rivershores,America/New_York
 US,FL,Riverwoods,Riverwoods,America/New_York
 US,FL,Riverwoods Hammock,Riverwoods Hammock,America/New_York
 US,FL,Riviera,Riviera,America/New_York
 US,FL,Roach,Roach,America/New_York
 US,FL,Roanoke,Roanoke,America/New_York
 US,FL,Roberts,Roberts,America/New_York
 US,FL,Robichaud,Robichaud,America/New_York
 US,FL,Robinson Farms,Robinson Farms,America/New_York
 US,FL,Rock,Rock,America/New_York
 US,FL,Rocky Point Village,Rocky Point Village,America/New_York
 US,FL,Rocky Shore,Rocky Shore,America/New_York
 US,FL,Rolison,Rolison,America/New_York
 US,FL,Rolling Green Village,Rolling Green Village,America/New_York
 US,FL,Romany Tan,Romany Tan,America/New_York
 
 
 */
