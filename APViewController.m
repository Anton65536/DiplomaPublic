//
//  APViewController.m
//  Diploma
//
//  Created by Антон Пераш on 8/16/19.
//  Copyright © 2019 Антон Пераш. All rights reserved.
//

#import "APViewController.h"



@interface APViewController () <UITextFieldDelegate>

@end

@implementation APViewController


-(void)loadView{
    [super loadView];
    
    
    
    

}

- (void)viewDidLoad {
    [super viewDidLoad];
  
    NSArray *array = [NSArray arrayWithObjects:@"Batu Pahat",@"George Town",@"Penang",@"Ipoh",@"Johor",@"Bahru",@"Kajang",@"Klang",@"Kluang",@"Kota Bharu",@"Kota Kinabalu",@"Kuala Lumpur",@"Terengganu",@"Kuantan",@"Kuching",@"Kulai",@"Malacca city",@"Petaling Jaya",@"Alorp",@"Hope",@"Chatham",@"Chapeltown",@"Choate",@"Lakeway",@"Nebraska",@"Murray",@"Mullins",@"Morningside",@"Morgan",@"Fairlee",@"Moran",@"Mora",@"Mooreland",@"Moorland",@"Montreux",@"Montgomery",@"Monteros",@"Bozeman",@"Belgrade",@"Montana",@"Monroe",@"Monette",@"Moneta",@"Mohr",@"Riviera",@"Surabaya",@"Jakarta",@"Makassar",@"Medan",@"Miranda",@"Merta",@"Miramar",@"Minor Hill",@"Minneola",@"Mill City",@"Milliken",@"Midwest",@"Salmon",@"Rowell",@"Rosemont",@"Rosalie",@"Poughkeepsie",@"Panacea"/*,@"Sandakan",@"Selayang",@"Baru",@"Seremban",@"Shah",@"Alam",@"Sibu",@"Sungai",@"Petani",@"Taiping",@"Maldives",@"Setar",@"Male",@"Mali",@"Bamako",@"Sikasso",@"Malta",@"Valletta",@"Mauritania",@"Nouakchott",@"Nouadhibou",@"Beau",@"Bassin-Rose",@"Hill",@"Port",@"Louis",@"Mexico",@"Acapulco",@"Aguascalientes",@"Apodaca",@"Buenavista",@"Campeche",@"Cancún",@"Celaya",@"Chalco",@"Diaz",@"Covarrubias",@"Chetumal",@"Chicoloapan",@"de Juarez",@"Chihuahua",@"Chilpancingo",@"Chimalhuacan",@"Ciudad",@" Acuna",@"Cuauhtemoc",@"Carmen",@"Juarez",@"Mateos",@"Madero",@"Nezahualcoyotl",@"Nicolas",@"Romero",@"Obregon",@"Valles",@"Victoria",@"Berriozabal",@"Coacalco",@"Coatzacoalcos",@"Colima",@"Cordoba",@"Cuautitlan",@"Izcalli",@"Zapopan",@"Zamora",@"Villahermosa",@"Naucalpan",@"Hidalgo",@"Monclova",@"Mochis",@"Manzanillo",@"Ixtapaluca",@"Ensenada",@"Delicias",@"Guadalupe",@"Hermosillo",@"Orizaba",@"Iguala",@"Fresnillo",@"Navojoa",@"Lopez",@"Durango",@"General",@"Escobedo",@"Ecatepec",@"Guadalajara",@"Guaymas",@"Irapuato",@"Guadalupe",@"Gomez",@"Jiutepec",@"Benito",@"La Paz",@"Palacio",@"Leon",@"Morelia",@"Miramar",@"Minatitlan",@"Monterrey",@"Nogales",@"Nuevo",@"Laredo",@"Oaxaca",@"Ojo",@"Agua",@"Mexicali",@"Pachuca",@"Salamanca",@"Tuxtepec",@"Reynosa",@"Queretaro",@"Vallarta",@"Puerto",@"Puerto Rico",@"Puebla",@"Poza Rica",@"Rica",@"Poza",@"Playa",@"Carmen",@"Puebla",@"Mazatlan",@"Culiacan",@"Matamoros",@"Merida",@"Cuernavaca",@"Cuautla",@"Cuautitlan",@"Piedras Negras",@"Piedras",@"Negras",@"Saltillo",@"Cristobal",@"San de las Casas",@"San Juan Bautista",@"San Juan del Rio",@"del Parral",@"Potosi",@"San Luis Potosi",@"San Luis",@" San Luis Rio Colorado",@"San Nicolas",@"San Nicolas de los Garza",@"de los Garza",@"San Pablo",@"San Pablo de las Salinas",@"de las Salinas",@"San Pedro",@"San Pedro Garza Garcia",@"Garza Garcia",@"Garza",@" Garcia",@"Santa Catarina",@"Catarina",@"Santa",@"Soledad de Graciano Sanchez",@"Soledad de Graciano",@"Graciano Sanchez",@"Tampico",@"Tapachula",@"Tehuacan",@"Tepexpan",@"Tepic",@"Texcoco",@"Texcoco Tijuana",@"Tijuana",@"Tlalnepantla",@"Tlaquepaque",@"Toluca",@"Tonala",@"Torreon",@"Tulancingo",@"Tuxtla",@"Tuxtla Gutierrez",@"Gutierrez",@"Uruapan",@"Veracruz",@"Ciudad de Villa de Alvarez",@"Ciudad de Villa",@"Xalapa",@"Xico",@"PXicox",@"Zacatecas"*/,nil];
    
    NSArray *valuesDescriptionForCity = [NSArray arrayWithObjects:@"Batu Pahat, port, Peninsular (West) Malaysia (Malaya), on the Strait of Malacca at the mouth of the Batu Pahat River. It is a fishing town and a distribution centre", @"George Town is a city situated on Grand Cayman island of the Cayman Islands. It serves as the capital of the Cayman Islands, in the British West Indies", @"Penang – a world renowned exotic holiday destination – was known, once upon a time, as Pulau Pinang or the 'Isle of the Betel Nut'",
        @"Ipoh is the capital city of the Malaysian state of Perak. Located by the Kinta River, it is nearly 180 km (110 mi) north of Kuala Lumpur and 123 km",@"Johor formerly known as Johore, is a state of Malaysia in the south of the Malay Peninsula. Johor has land borders with the Malaysian states of Pahang",@"The name  Bahru actually means 'new' in Malay ", @"Kajang  is a town in southeastern Selangor, Malaysia. It is located 20 km southeast of downtown Kuala Lumpur. State‎: ‎Selangor    Granted municipal status‎: ‎1 January 1997                Country‎: ‎Malaysia. Establishment‎: ‎1807", @"Klang or Kelang, officially Royal Town of Klang (Malay: Bandar Diraja Klang), is a royal town and former capital of the state of Selangor, Malaysia. It is located. Population (2010)‎: ‎240,016    Country‎: ‎Malaysia                                      State‎: ‎Selangor    Granted Municipal Status‎: ‎1 January 1977", @"The Kluang formerly Keluang, is a town in Kluang District, Johor, Malaysia. Kluang was founded in 1915 as the administrative capital of central Johor State‎: ‎Johor    Country‎: ‎Malaysia. Calling code‎: ‎+6-07    Establishment‎: ‎1915",@"Kota Bharu, formerly Kota Baharu, city, northern Peninsular (West) Malaysia, lying on the east levee of the Kelantan River, near the border with Thailand and 8 miles (13 km) inland from the South China Sea. Located in a fertile agricultural area, Kota Bharu (“New Fort” or “New City”) is an industrial nucleus.",@"Kota Kinabalu formerly known as Jesselton, is the state capital of Sabah, Malaysia and the capital of the Kota Kinabalu District.                                       Granted city status‎: ‎2 February 2000    Area code(s)‎: ‎088, 087                                         Declared capital of North Borneo‎: ‎1946    Country‎: ‎Malaysia",@"Kuala Lumpur is the capital city of Malaysia, boasting gleaming skyscrapers, colonial architecture, charming locals, and a myriad of natural attractions. Divided into numerous districts, its main hub is called the Golden Triangle which comprises Bukit Bintang, KLCC and Chinatown",@"Terengganu formerly spelled Trengganu or Tringganu, is a sultanate and constitutive state of federal Malaysia. The state is also known by its Arabic honorific, Dāru l-Īmān ('Abode of Faith'). The coastal city of Kuala Terengganu which stands at the mouth of the broad Terengganu River is both the state and royal capital as well as the largest city in Terengganu. There are many islands located close to the coast of Terengganu state, such as Redang Island",@"Kuantan is the state capital of Pahang, Malaysia. It is located near the mouth of the Kuantan River and faces the South China Sea. Kuantan is the 18th largest city in Malaysia based on 2010 population, and the largest city in the East Coast of Peninsular Malaysia. It has been expected that Kuantan will be officially declared as a city in 2019.The administrative centre of the state of Pahang was officially relocated to Kuantan on 27 August 1955 from Kuala Lipis and was officiated by HRH Sultan Abu Bakar Ri'ayatuddin Al Muadzam Shah,[1] the Sultan of Pahang.",@"The city is defined within the borders of what is the Kuching District, formerly the Municipality of Kuching. With an area of 1,868.83 square kilometres, it is the most populous district in Sarawak.",@"Kulai is a town and the capital of Kulai District, Johor, Malaysia. It is administered by the Kulai Municipal Council (MPKu), which was earlier known as the Kulai District Council",@"Malacca City (Malay: Bandaraya Melaka or Kota Melaka), is the capital city of the Malaysian state of Malacca. As of 2010 it has a population of 484,885. It is the oldest Malaysian city on the Straits of Malacca, having become a successful entrepôt in the era of the Malacca Sultanate.",@"Petaling Jaya (commonly called 'PJ' by locals) is a major Malaysian city originally developed as a satellite township for Kuala Lumpur. It is located in the Petaling District of Selangor with an area of approximately 97.2 square kilometres (37.5 sq mi). Petaling Jaya was granted city status on 20 June 2006.Petaling Jaya is surrounded by the Malaysian capital, Kuala Lumpur to the east, Sungai Buloh to the north, Shah Alam , the capital of Selangor and Subang Jaya to the west and Bandar Kinrara to the south.",@"Alor (Indonesian: Pulau Alor) is the largest island in the Alor Archipelago and is one of the 92 officially listed outlying islands of Indonesia. It is located at the eastern Lesser Sunda Islands that runs through southeastern Indonesia, which from the west include such islands as Bali, Lombok, Sumbawa, Komodo, and Flores.",@"hug me",@"The former city of Chatham began as a naval dockyard in the 1790s, as it straddles the Thames River. The town was named after the Earl of Chatham, William Pitt (the Elder). It was built as a naval dockyard, a characteristic shared by Chatham, Kent, England",@"Chapeltown is a suburb of north-east Leeds, in West Yorkshire, England.It is part of the Leeds City Council Ward of Chapel Allerton. It is approximately one mile north of Leeds city centre. Chapeltown has been the scene of rioting, with disturbances in 1975, 1981 and 1987",@"Choate  is a locality in the lower Fraser Canyon of British Columbia, Canada, approximately midway between the unincorporated town of Yale (N) and the district municipality of Hope.[2] A post office operated at Choate from 1923 to 1939. The designation of 'flagstop' was changed to 'locality' in 1984",@"Lakeway is a city in Travis County, Texas, United States. The population was 11,391 at the 2010 census; up from 8,002 in 2000. The city is located next to Lake Travis. It is an exurb in Greater Austin",@"Nebraska City is a city in, and the county seat of, Otoe County, Nebraska, United States.[5] As of the 2010 census, the city population was 7,289.The Nebraska State Legislature has credited Nebraska City as being the oldest incorporated city in the state, as it was the first approved by a special act of the Nebraska Territorial Legislature in 1855.",@"Murray is a city situated on the Wasatch Front in the core of Salt Lake Valley in the U.S. state of Utah. Named for territorial governor Eli Murray, it is the state's fourteenth largest city. According to the 2010 census, Murray has approximately 46,746 residents.",@"Mullins is a city in Marion County, South Carolina, United States. As of the 2010 census, the city population was 4,663.Incorporated on March 4, 1872, Mullins was named after Col. William S. Mullins, who served as a representative for Marion County in the South Carolina State Legislature from 1852 to 1866",@"Morningside is an incorporated town in Prince George's County, Maryland, United States.[5] The population was 2,015 at the 2010 census.[6] The town developed with the establishment of nearby Andrews Air Force Base and the federal Census Bureau. The government of the town is led by a mayor and town council. ",@"Morgan City is a city in St. Mary Parish in the U.S. State of Louisiana. The population was 12,404 at the 2010 census. Morgan City sits on the banks of the Atchafalaya River. The town was originally named 'Tiger Island' by surveyors appointed by U.S. Secretary of War John Calhoun, because of a particular type of wild cat seen in the area. It was later changed for a time to 'Brashear City' named after Walter Brashear, a prominent Kentucky physician who had purchased large tracts of land and acquired numerous sugar mills in the area.[4] It was incorporated in 1860.",@"Fairlee is a town in Orange County, Vermont, United States. The population was 977 at the 2010 census. It includes the village of Ely. Fairlee is home to Lake Morey, which claims to have the longest ice skating trail in the United States.",@"Moran is a city in Allen County, Kansas, United States. As of the 2010 census, the city population was 558.Moran had its start in the year 1881 by the building of the Missouri Pacific Railroad through that territory.[7][8] The Kansas City Pacific (later known as the Kansas City subdivision of the Missouri-Kansas-Texas Railroad built through the town",@"Mora is a city in and the county seat of Kanabec County in Minnesota.[6] It is located at the junction of Minnesota State Highways 23 and 65. The population was 3,571 at the 2010 census.Mora was platted in 1882. The city was named after Mora, Sweden. A post office has been in operation at Mora since 1883",@"Mooreland is a town in Woodward County, Oklahoma, United States, 10 miles (16 km) east of the city of Woodward, Oklahoma, the county seat. The population was 1,190 at the 2010 census. Mooreland lies in a valley about 5 miles (8.0 km) north of the North Canadian River. This area of shallow-water land lies at an altitude of 1,900 feet (580 m)",@"Moorland is a small town in Webster County, Iowa, United States. The population was 169 at the 2010 census",@"Montreux  is a municipality and a Swiss town on the shoreline of Lake Geneva at the foot of the Alps. It belongs to the district of Riviera-Pays-d'Enhaut in the canton of Vaud in Switzerland and has a population of about 25,000, and about 85,000 in the agglomeration Vevey-Montreux",@"Montgomery is the capital city of the U.S. state of Alabama and the county seat of Montgomery County.Named for Richard Montgomery, it stands beside the Alabama River, on the coastal Plain of the Gulf of Mexico. In the 2010 Census, Montgomery's population was 205,764. It is the second most populous city in Alabama",@"Monteros is a town in Tucuman Province, Argentina, located 58 km (36 mi) south-west of the provincial capital San Miguel de Tucumán, and which lies at an altitude of 532 m (1,745 ft). It has 23,771 inhabitants according to the 2001 census, and is the head town of the Monteros Department. Surrounded by four rivers, the average temperature is 35 °C (95 °F) in summer and 10 °C (50 °F) in winter with highs and lows of 45 °C (113 °F) and −3 °C (27 °F).",@"Bozeman is a city in and the seat of Gallatin County, Montana, United States.[5] Located in southwest Montana, the 2010 census put Bozeman's population at 37,280 and by 2016 the population rose to 45,250, making it the fourth largest city in Montana",@"Belgrade is a town in Gallatin County, Montana, United States. The population was 7,389 at the 2010 census. It is the largest city in Montana that is not a county seat.",@"Montana City is an unincorporated community and census-designated place (CDP) in Jefferson County, Montana, United States. The population was 2715 at the 2010 census, up from 2,094 at the 2000 census. It is part of the Helena Micropolitan Statistical Area",@"Monroe is a city in Marion, Monroe, and Ralls counties in the U.S. state of Missouri. The population was 2,531 at the 2010 census.The Marion and Ralls County portions of Monroe City are part of the Hannibal Micropolitan Statistical Area.",@"Monette is a city in Craighead County, Arkansas, United States. The population was 1,501 at the 2010 census. It is included in the Jonesboro, Arkansas Metropolitan Statistical Area",@"Moneta is an unincorporated community in Bedford and Franklin counties, Virginia, United States, along Route 122 between Bedford and Rocky Mount; Route 122 follows a bypass around the community. Moneta was popularized as the filming location for scenes in the 1991 movie What About Bob?. In the movie, Bob arrived by bus with his goldfish and went into a local general store, which still stands but is no longer open.",@"Mohr is a city and capital of Mohr County, in Fars Province, Iran. At the 2006 census, its population was 6,188, in 1,316 families.[3] Its main industries are based on its rich gas sources. Tabnak, Homa, Shanol, Varavi are important Gas Zones in this region. It has a dry hot climate.",@"Riviera is a census-designated place and unincorporated community in Kleberg County, Texas, United States. As of the 2010 census it had a population of 689.[1] It is located 15 miles (24 km) south of Kingsville on U.S. Route 77 (Future Interstate 69E) and 22 miles (35 km) northeast of Falfurrias on Texas State Highway 285",@"Surabaya is the capital of the Indonesian province of East Java and the second-largest city in the country, after Jakarta. The city has a population of over 3 million within its city limits and over 10 million in the Greater Surabaya metropolitan area, known as Gerbangkertosusila, making it the second-largest metropolitan area in Indonesia.[2] Located on northeastern Java on the Madura Strait, it is one of the earliest port cities in Southeast Asia. According to the National Development Planning Agency, Surabaya is one of the four main central cities of Indonesia",@"Jakarta officially the Special Capital Region of Jakarta is the capital and largest city of Indonesia. Located on the northwest coast of the world's most populous island of Java, it is the centre of economy, culture and politics of Indonesia with a population of more than ten million as of 2014. The Jakarta metropolitan area has an area of 6,392 square kilometres, and is the world's second most populous urban area.",@"Makassar is the capital of the Indonesian province of South Sulawesi. It is the largest city in the region of Eastern Indonesia and the country's fifth largest urban centre. From 1971 to 1999, the city was named after one of its subdistricts, Ujung Pandang. The city is located on the southwest coast of the island of Sulawesi, facing the Makassar Strait.",@"Medan is the capital city of the Indonesian province of North Sumatra. It is the largest city in Sumatra and the fifth-most populous city proper in Indonesia with a 2016 estimated population at 2,229,408 within its city limits. The Medan metropolitan area is home to 4.6 million people, making it the fifth most populous metropolitan area in the country and the largest outside of Java.",@"Miranda (formerly, Jacobsen's) is a census-designated place in Humboldt County, California. It is located 2.5 miles (4 km) northwest of Phillipsville,[3] in the heart of redwood country, at an elevation of 351 feet (107 m). The ZIP Code is 95553.The population was 520 at the 2010 census.The name Miranda, was originally applied to the areas post office on August 26,1905.",@"Merta City is a city and a municipality located in Nagaur district in the Indian state of Rajasthan. Pin code of Merta is 341510. Famous personalities of Merta city are Congress Minister Vijay Kalantri, famous Bollywood producer and director K. C. Bokadia, and the leading CFO B. R. Jaju",@"Miramar is a city in Broward County, Florida, United States. As of the 2010 census, the population was 122,041. It is a principal city of the Miami metropolitan area, which is home to over 6 million people.",@"Minor Hill is a city in Giles County, Tennessee, United States. The population was 537 at the 2010 census",@"Minneola is a city in Lake County, Florida, United States. The population was 9,403 at the 2010 census. As of 2018, the population recorded by the U.S. Census Bureau is 12,124.It is part of the Orlando–Kissimmee–Sanford Metropolitan Statistical Area. The Minneola tangelo is named after the city",@"Mill City is a city in Linn and Marion counties in the U.S. state of Oregon. The population was 1,855 at the 2010 census. It is on the North Santiam River, downstream from Detroit Lake.The Linn County portion of Mill City is part of the Albany–Lebanon Micropolitan Statistical Area, while the Marion County portion is part of the Salem Metropolitan Statistical Area",@"Milliken are neighbourhood in the cities of Toronto and Markham, comprising Milliken in the city of Toronto and Milliken Mills East and Milliken Mills West in the city of Markham.Located in the north west section of Scarborough and south east Unionville, the neighbourhoods are centered on Old Kennedy Road ",@"Midwest City is a city in Oklahoma County, Oklahoma, United States, and a part of the Oklahoma City metropolitan area. As of the 2010 census, the population was 54,371, making it the eighth largest city in the state.The city was developed in response to talk of an air field being located nearby and named for the Tinker Air Force Base's original designation as the Midwest Air Depot.[6] The city suffered damage during two tornadoes, the first in May 1999 and the second on May 8, 2003",@"Salmon is a city in Lemhi County, Idaho, United States. The population was 3,112 at the 2010 census. The city is the county seat of Lemhi County.Located in the Lemhi River valley, Salmon is home to the Sacajawea Interpretive Culture and Education Center, which focuses on Lemhi Shoshone culture, as well as the interaction between Sacagawea and other Shoshone and Lewis and Clark.",@"Rowell is an unincorporated community in DeWitt County, Illinois, United States. Rowell is 3.5 miles (5.6 km) southeast of Kenney.",@"Rosemont is a city in Cook County, Illinois, United States. Located immediately northwest of Chicago, as of the 2010 census it had a population of 4,202. The city was incorporated in 1956, though it had been settled long before that. While Rosemont's land area and population are relatively small among municipalities in the Chicago Metropolitan Area, the village is a major center for commercial activity in the region and is a key component of the Golden Corridor.",@"Rosalie is a city in Dominica. It is located in Saint David Parish at the northern end of Rosalie Bay, on the central east coast of the island, close to the mouth of the Rosalie River.",@"Poughkeepsie, officially the City of Poughkeepsie, separate from the Town of Poughkeepsie, is a city in the state of New York, United States, which is the county seat of Dutchess County. As of the 2010 census it had a population of 32,736",@"Panacea is an unincorporated community in Wakulla County, Florida, United States. The community was known as Smith Springs until 1893 when some Bostonians purchased the land about the five springs here and renamed the town Panacea, after the goddess of universal remedy, because of the curative properties of the waters.Most of the development in the area was destroyed by a hurricane in 1928.During the Civil War a large plant here supplied salt for much of western Florida.",nil];
    
    UIBarButtonItem *addCityFromRequest = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(addCityViaRequest:)];
    NSMutableSet *citiesSet = [[NSMutableSet alloc] initWithArray:array];
    
    self.citiesSet = citiesSet;
    //NSLog(@"citiesSet : %@, sitiesSet capacity: %lu", _citiesSet.description, (unsigned long)[citiesSet count]);
    NSMutableSet *usedCitiesSet = [NSMutableSet setWithCapacity:[ citiesSet count]];
    self.usedCitiesSet = usedCitiesSet;
    
    NSDictionary *citiesAndDescription = [[NSDictionary alloc] initWithObjects:valuesDescriptionForCity forKeys:array];
    self.citiesAndDescription = citiesAndDescription;
    
    CGRect textFieldSize = CGRectMake(150, 400, 130, 45);
    UITextField *cityName = [[UITextField alloc] initWithFrame:textFieldSize];
    cityName.backgroundColor = [UIColor blueColor];
    cityName.placeholder = @"Hello!";
    cityName.textColor = [UIColor blackColor];
    cityName.minimumFontSize = 15;
    [self.view addSubview:cityName];
    cityName.delegate = self;
    self.cityNameProperty = cityName;
    [cityName setKeyboardType:UIKeyboardTypeASCIICapable];
    NSLog(@"LANGUAGE : %@", [[NSBundle mainBundle] preferredLocalizations] );
    [cityName addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    cityName.translatesAutoresizingMaskIntoConstraints = NO;
    
    UILabel *previousCity = [[UILabel alloc]initWithFrame:CGRectMake(100, 100, 80, 45)];
    [self.view addSubview:previousCity];
    previousCity.backgroundColor = [UIColor greenColor];
    previousCity.textColor = [UIColor orangeColor];
    self.previousCityProperty = previousCity;
    previousCity.text = @" Previous city name";
    previousCity.textAlignment = NSTextAlignmentCenter;
    [previousCity sizeToFit ];
    previousCity.translatesAutoresizingMaskIntoConstraints = NO;
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
    button.frame = CGRectMake(290, 400, 75, 45);
    [button setTitle:@"OK" forState:UIControlStateNormal];
    [button setTintColor:[UIColor blackColor]];
    [button setTitleColor:[UIColor orangeColor] forState:UIControlStateNormal];
    button.backgroundColor = [UIColor whiteColor];
    button.layer.borderColor = [UIColor greenColor].CGColor;
    button.layer.borderWidth = 2.0;
    button.layer.cornerRadius = 10.0;
    self.buttonProperty = button;
    [self.view addSubview:button];
    [button addTarget:self action:@selector(onButton:) forControlEvents:UIControlEventTouchUpInside];
    button.translatesAutoresizingMaskIntoConstraints = NO;
    
    UIButton *buttonHelpWithCity = [UIButton buttonWithType:UIButtonTypeSystem];
    buttonHelpWithCity.frame = CGRectMake(165, 450, 105, 45);
    [buttonHelpWithCity setTitle:@"Find new city" forState:UIControlStateNormal];
    NSString *titleForPressedHelpButton = [NSString stringWithFormat:@"%lu attempts remain", (unsigned long)_countdownForHelpAttempts ];
    [buttonHelpWithCity setTitle:titleForPressedHelpButton forState:UIControlStateHighlighted];
    [buttonHelpWithCity setTintColor:[UIColor blackColor]];
    [buttonHelpWithCity setTitleColor:[UIColor orangeColor] forState:UIControlStateNormal];
    buttonHelpWithCity.backgroundColor = [UIColor whiteColor];
    buttonHelpWithCity.layer.borderColor = [UIColor grayColor].CGColor;
    buttonHelpWithCity.layer.borderWidth = 2.0;
    buttonHelpWithCity.layer.cornerRadius = 10.0;
    self.buttonHelpWithCityProperty = buttonHelpWithCity;
    [self.view addSubview:buttonHelpWithCity];
    [buttonHelpWithCity addTarget:self action:@selector(onButtonHelpWithCity:) forControlEvents:UIControlEventTouchUpInside];
    self.countdownForHelpAttempts = _countdownForHelpAttempts;
    _countdownForHelpAttempts = 3;
    [buttonHelpWithCity sizeToFit];
    buttonHelpWithCity.translatesAutoresizingMaskIntoConstraints = NO;

    
    UILabel *letterLabel = [[UILabel alloc] initWithFrame:CGRectMake(110, 400, 35, 45)];
    letterLabel.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:letterLabel];
    self.letterLabelProperty = letterLabel;
    letterLabel.layer.borderColor = [UIColor greenColor].CGColor;
    letterLabel.layer.borderWidth = 2.0;
    letterLabel.layer.cornerRadius = 10.0;
    letterLabel.textAlignment = NSTextAlignmentCenter;
    letterLabel.translatesAutoresizingMaskIntoConstraints = NO;
    
    
    UILabel *cityInfo = [[UILabel alloc] initWithFrame:CGRectMake(5, 500, 365, 210)];
    [self.view addSubview: cityInfo];
    cityInfo.backgroundColor = [UIColor whiteColor];
    cityInfo.textColor = [UIColor redColor];
    cityInfo.hidden = NO;
    cityInfo.numberOfLines = 0;
    cityInfo.lineBreakMode = NSLineBreakByWordWrapping;
    cityInfo.layer.borderWidth = 2.0;
    cityInfo.layer.borderColor = [UIColor darkGrayColor].CGColor;
    cityInfo.translatesAutoresizingMaskIntoConstraints = NO;

    self.cityInfo = cityInfo;

    NSLog(@"dictionary %@", [citiesAndDescription description]);
#pragma mark - UIStackView
    //horizontal additional
    [letterLabel.heightAnchor constraintEqualToConstant:50].active = YES;
    [letterLabel.widthAnchor constraintEqualToConstant:50].active = YES;
    
    [button.heightAnchor constraintEqualToConstant:50].active = YES;
    [button.widthAnchor constraintEqualToConstant:50].active = YES;
    
    [cityName.heightAnchor constraintEqualToConstant:50].active = YES;
    [cityName.widthAnchor constraintEqualToConstant:200].active = YES;
    
    UIStackView *horizontalStackView = [[UIStackView alloc]init];
    
    horizontalStackView.axis = UILayoutConstraintAxisHorizontal;
    horizontalStackView.distribution = UIStackViewDistributionEqualSpacing;
    horizontalStackView.alignment = UIStackViewAlignmentCenter;
    horizontalStackView.spacing = 5;
    
    [horizontalStackView addArrangedSubview:letterLabel];
    [horizontalStackView addArrangedSubview:cityName];
    [horizontalStackView addArrangedSubview:button];
    
    horizontalStackView.translatesAutoresizingMaskIntoConstraints = NO;

    //vertical main
    
    [previousCity.heightAnchor constraintEqualToConstant:50].active = YES;
    [previousCity.widthAnchor constraintEqualToConstant:180].active = YES;
    
    [buttonHelpWithCity.heightAnchor constraintEqualToConstant:50].active = YES;
    [buttonHelpWithCity.widthAnchor constraintEqualToConstant:100].active = YES;
    
    [cityInfo.heightAnchor constraintEqualToConstant:200].active = YES;
    [cityInfo.widthAnchor constraintEqualToConstant:310].active = YES;
     
     //Stack View
     UIStackView *verticalStackView = [[UIStackView alloc] init];
     
     verticalStackView.axis = UILayoutConstraintAxisVertical;
     verticalStackView.distribution = UIStackViewDistributionFillEqually;
     verticalStackView.alignment = UIStackViewAlignmentCenter;
     verticalStackView.spacing = 30;
     
     
     [verticalStackView addArrangedSubview:previousCity];
     [verticalStackView addArrangedSubview:horizontalStackView];
     [verticalStackView addArrangedSubview:buttonHelpWithCity];
     [verticalStackView addArrangedSubview:cityInfo];
     
     verticalStackView.translatesAutoresizingMaskIntoConstraints = NO;
     [self.view addSubview:verticalStackView];
     
     
     //Layout for Stack View
     [verticalStackView.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor].active = YES;
     [verticalStackView.centerYAnchor constraintEqualToAnchor:self.view.centerYAnchor].active = YES;
    
    
    
    
#pragma mark - LAyout
   // [previousCity.heightAnchor constraintEqualToConstant:600].active = YES;

//      [NSLayoutConstraint activateConstraints:@[
//      [self.previousCityProperty.leadingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.leadingAnchor constant:(self.view.bounds.size.width - previousCity.bounds.size.width) / 2],
//      [self.previousCityProperty.trailingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.trailingAnchor constant:(self.view.bounds.size.width - previousCity.bounds.size.width) / 2],
//      [self.previousCityProperty.topAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.topAnchor constant:25],
//      [self.previousCityProperty.bottomAnchor constraintEqualToAnchor:self.cityNameProperty.topAnchor constant:50]
//      ]];
    
//    [NSLayoutConstraint activateConstraints:@[
//    [self.cityNameProperty.leadingAnchor constraintEqualToAnchor:self.letterLabelProperty.trailingAnchor constant:5],
//    [self.cityNameProperty.trailingAnchor constraintEqualToAnchor:self.buttonProperty.leadingAnchor constant:5],
//    [self.cityNameProperty.topAnchor constraintEqualToAnchor:self.buttonProperty.topAnchor ],
//    [self.cityNameProperty.bottomAnchor constraintEqualToAnchor:self.buttonProperty.bottomAnchor]
//    ]];
//
//    [NSLayoutConstraint activateConstraints:@[
//        [self.letterLabelProperty.leadingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.leadingAnchor constant:100],
//    [self.letterLabelProperty.trailingAnchor constraintEqualToAnchor:self.cityNameProperty.leadingAnchor constant:5],
//    [self.letterLabelProperty.topAnchor constraintEqualToAnchor:self.previousCityProperty.bottomAnchor],
//    [self.letterLabelProperty.bottomAnchor constraintEqualToAnchor:self.buttonHelpWithCityProperty.topAnchor constant:10]
//    ]];
//
//    [NSLayoutConstraint activateConstraints:@[
//    [self.buttonProperty.leadingAnchor constraintEqualToAnchor:self.cityNameProperty.trailingAnchor constant:5],
//        [self.buttonProperty.trailingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.trailingAnchor constant: 10],
//    [self.buttonProperty.topAnchor constraintEqualToAnchor:self.cityNameProperty.topAnchor],
//    [self.buttonProperty.bottomAnchor constraintEqualToAnchor:self.cityNameProperty.bottomAnchor]
//    ]];
//
//    [NSLayoutConstraint activateConstraints:@[
//    [self.buttonHelpWithCityProperty.leadingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.leadingAnchor],
//    [self.buttonHelpWithCityProperty.trailingAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.trailingAnchor],
//    [self.buttonHelpWithCityProperty.topAnchor constraintEqualToAnchor:self.cityNameProperty.bottomAnchor constant:25],
//    [self.buttonHelpWithCityProperty.bottomAnchor constraintEqualToAnchor:self.cityInfo.topAnchor constant:25]
//    ]];
}
#pragma mark - adding cities from web

-(void) addCityViaRequest:(id) sender{
    
    //adding city from wiki html
}
#pragma mark  - Button

-(void) onButton:(id) sender{
    
    // if city is already used
    if([_usedCitiesSet containsObject:_cityNameProperty.text] && ![_citiesSet containsObject:_cityNameProperty.text]){
        
        UIAlertController* alertForUsedCity = [UIAlertController alertControllerWithTitle:@"City already used!"
                                                                                  message:@"Enter another city name."
                                                                           preferredStyle:UIAlertControllerStyleAlert];
        
        UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                              handler:^(UIAlertAction * action) {self->_cityNameProperty.text = @"";}];
        
        [alertForUsedCity addAction:defaultAction];
        [self presentViewController:alertForUsedCity animated:YES completion:nil];
    }
    
    if([_citiesSet containsObject:_cityNameProperty.text]){
        _previousCityProperty.text = _cityNameProperty.text;
        [_citiesSet removeObject:_cityNameProperty.text];
        [_usedCitiesSet addObject:_previousCityProperty.text];
        _cityNameProperty.text = @"";
        _letterLabelProperty.text = [_previousCityProperty.text substringFromIndex: MAX([_previousCityProperty.text length] - 1, 0)];
        NSString *descriptionCity =  [_citiesAndDescription objectForKey:_previousCityProperty.text];
        NSLog(@"here is the dscriptiojn of da city %@", descriptionCity);
        NSLog(@"cityInfo works just great %@", _cityInfo);

        _cityInfo.text  =  descriptionCity;
        NSLog(@"cityInfo works just great lol %@", _cityInfo);
        
    }else {
        UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"City not found!"
                                                                       message:@"Enter correct city name."
                                                                preferredStyle:UIAlertControllerStyleAlert];
        
        UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                              handler:^(UIAlertAction * action) {self->_cityNameProperty.text = @"";}];
        
        [alert addAction:defaultAction];
        [self presentViewController:alert animated:YES completion:nil];
    }
   
}

-(void)onButtonHelpWithCity:(id)sender{
    
    
    if(_letterLabelProperty.text){
    
    
    
    NSPredicate *myPredicate = [NSPredicate predicateWithFormat:@"SELF BEGINSWITH[cd] %@", _letterLabelProperty.text];
    
    
    NSObject *myChosenObject = [_citiesSet filteredSetUsingPredicate:myPredicate].anyObject;
    NSLog(@"myChosenObject %@",myChosenObject);
    _cityNameProperty.text = (NSString*)myChosenObject;
        if(myChosenObject){
            _countdownForHelpAttempts -=1;
        }else {
            UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"Cannot help anymore Buddy!"
                                                                           message:@"There is no available city names left."
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"Cool😅" style:UIAlertActionStyleDefault
                                                                  handler:^(UIAlertAction * action) {}];
            
            [alert addAction:defaultAction];
            [self presentViewController:alert animated:YES completion:nil];
            _buttonHelpWithCityProperty.hidden = YES;
        }
    if( _countdownForHelpAttempts == 0){
        _buttonHelpWithCityProperty.hidden = YES;
    }
    }else {
        UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"Need to enter first city!"
                                                                       message:@"Enter city name."
                                                                preferredStyle:UIAlertControllerStyleAlert];
        
        UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"Gotcha!" style:UIAlertActionStyleDefault
                                                              handler:^(UIAlertAction * action) {}];
        
        [alert addAction:defaultAction];
        [self presentViewController:alert animated:YES completion:nil];
    }
    NSLog(@"countdown %lu", _countdownForHelpAttempts);

}

#pragma mark - TextField Delegate
-(BOOL)textFieldShouldReturn:(UITextField *)textField{
    NSLog(@"textFieldShouldReturn");
    return NO;
}

-(void)textFieldDidChange :(UITextField *) textField{
    //if next city name not beginning with previous city last letter
    if(_letterLabelProperty.text){
        if([[_cityNameProperty.text substringToIndex:1] compare: _letterLabelProperty.text options:NSCaseInsensitiveSearch]){
            
            NSString *alertTitle = [[NSString alloc]initWithFormat:@"City should begin with letter %@",_letterLabelProperty.text];
            UIAlertController* alertForFirstLetter = [UIAlertController alertControllerWithTitle:alertTitle
                                                                                         message:@"Enter another city name."
                                                                                  preferredStyle:UIAlertControllerStyleAlert];
            
            UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                                  handler:^(UIAlertAction * action) {self->_cityNameProperty.text = @"";
}];
            
            [alertForFirstLetter addAction:defaultAction];
            [self presentViewController:alertForFirstLetter animated:YES completion:nil];
            
        }
    }
}




@end



































