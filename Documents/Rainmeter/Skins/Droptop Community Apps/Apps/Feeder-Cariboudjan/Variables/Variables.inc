[Variables]

CommunityAppRunOnce=1

; ----- Add/Modify your variables below: ----------------

FeederRSSNum=6

;--------------------------

FeederVersionNum=1.0

;--------------------------

FeederBoxHeight1=(125*#DroptopSize#)
FeederBoxHeight2=(125*#DroptopSize#)
FeederBoxHeight3=(125*#DroptopSize#)
FeederBoxHeight4=(125*#DroptopSize#)
FeederBoxHeight5=(125*#DroptopSize#)
FeederBoxHeight6=(125*#DroptopSize#)
FeederBoxHeight7=(125*#DroptopSize#)

;--------------------------

FeederXOffset=(400*#DroptopSize#)

;--------------------------

FeederID1=Lifehacker
FeederSource1=Lifehacker
FeederURL1=https://lifehacker.com/rss
FeederSubstitute1="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","<br>":"","":"No data","<em>":"","</em>":"","<strong>":""
FeederRegExp1=(?siU)</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.1=0,0,0
DropdownFontColor2.1=255,255,255
DropdownBGColor1.1=255,255,255
DropdownItemHL.1=148,179,48

;--------------------------

FeederID2=Yahoo
FeederSource2=Yahoo! News
FeederURL2=https://www.yahoo.com/news/rss
FeederSubstitute2="T..:.*":"","#CRLF#":"","":"No data"
FeederRegExp2=(?siU)<title>.*<title>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>

DropdownFontColor1.2=0,0,0
DropdownFontColor2.2=255,255,255
DropdownBGColor1.2=255,255,255
DropdownItemHL.2=96,1,210

;--------------------------

FeederID3=WSJ
FeederSource3=Wall Street Journal
FeederURL3=https://feeds.a.dj.com/rss/RSSOpinion.xml
FeederSubstitute3="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","":"No data"
FeederRegExp3=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.3=0,0,0
DropdownFontColor2.3=255,255,255
DropdownBGColor1.3=255,255,255
DropdownItemHL.3=18,18,18

;--------------------------

FeederID4=CBC
FeederSource4=CBC News
FeederURL4=https://www.cbc.ca/cmlink/rss-canada
FeederSubstitute4="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","<img src.*title='":"","' height.*":"","&#39;":"'","":"No data"
FeederRegExp4=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.4=0,0,0
DropdownFontColor2.4=255,255,255
DropdownBGColor1.4=255,255,255
DropdownItemHL.4=230,10,10

;--------------------------

FeederID5=NewYorker
FeederSource5=The New Yorker
FeederURL5=https://www.newyorker.com/feed/everything
FeederSubstitute5="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","":"No data"
FeederRegExp5=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.5=0,0,0
DropdownFontColor2.5=255,255,255
DropdownBGColor1.5=255,255,255
DropdownItemHL.5=8,8,8

;--------------------------

FeederID6=NYT
FeederSource6=New York Times
FeederURL6=https://rss.nytimes.com/services/xml/rss/nyt/HomePage.xml
FeederSubstitute6="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","&gt;":">","":"No data"
FeederRegExp6=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.6=0,0,0
DropdownFontColor2.6=255,255,255
DropdownBGColor1.6=255,255,255
DropdownItemHL.6=0,0,0

;--------------------------

FeederID7=Lincoln
FeederSource7=Lincoln Project
FeederURL7=https://lincolnproject.libsyn.com/rss
FeederSubstitute7="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","<p>.*400":"","</span></p>":"",";.*>":"","^\. ":"","":"No data","<p>":""
FeederRegExp7=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.7=0,0,0
DropdownFontColor2.7=255,255,255
DropdownBGColor1.7=255,255,255
DropdownItemHL.7=66,78,96

;-------------------------------

FeederTitle1=Walensky, Citing Botched Pandemic Response, Calls for C.D.C. Reorganization                                                            
FeederLink1=https://www.nytimes.com/2022/08/17/us/politics/cdc-rochelle-walensky-covid.html
FeederDec1=Among other flaws, the public guidance during the coronavirus pandemic was “confusing and overwhelming,” the agency said.              
Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                          









































                               
FeederDate1=Wed, 17 Aug 2022

FeederTitle2=Pence Calls on Republicans to Stop Assailing the F.B.I. After Trump Search
FeederLink2=https://www.nytimes.com/2022/08/17/us/politics/pence-fbi-jan-6.html
FeederDec2=Former Vice President Mike Pence also said he would consider talking to the Jan. 6 committee if he were “summoned to testify.”                                                                  










Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.










                                                                                                                                                                                       
FeederDate2=Wed, 17 Aug 2022

FeederTitle3=Rudy Giuliani to Face Atlanta Grand Jury Investigating Trump Today
FeederLink3=https://www.nytimes.com/2022/08/17/us/giuliani-trump-atlanta-ga.html
FeederDec3=The former New York mayor has been told that he is a target in the investigation concerning whether Donald J. Trump and his associates tried to illegally influence the 2020 presidential election results in Georgia.                    






























































Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                                                                                 
FeederDate3=Wed, 17 Aug 2022

FeederTitle4=A Watermark, and ‘Spidey Sense,’ Unmask a Forged Galileo Treasure  
FeederLink4=https://www.nytimes.com/2022/08/17/arts/galileo-forgery-university-of-michigan.html
FeederDec4=One of the University of Michigan Library’s most prized possessions, which appeared to be a Galileo manuscript, is now thought to be the work of a 20th-century forger.


Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                    







  





















        



                                                                                                                                                                                        
FeederDate4=Wed, 17 Aug 2022

FeederTitle5=What Liz Cheney’s Lopsided Loss Says About the State of the G.O.P.     
FeederLink5=https://www.nytimes.com/2022/08/17/us/politics/liz-cheney-republicans.html
FeederDec5=She hoped Jan. 6 would be a turning point for Republicans. And while it did prove to be a dividing line, it was those who crossed Donald J. Trump who have faced electoral consequences.                                               









                                                                    



                                                 
FeederDate5=Wed, 17 Aug 2022

FeederTitle6=Behind Enemy Lines, Ukrainians Tell Russians ‘You Are Never Safe’
FeederLink6=https://www.nytimes.com/2022/08/17/world/europe/ukraine-partisans-insurgency-russia.html
FeederDec6=Clandestine resistance cells are spotting targets, sabotaging rail lines and killing those deemed collaborators as they seek to unnerve Russian forces.                                                                                                                     
FeederDate6=Wed, 17 Aug 2022

FeederTitle7=Suspect in Rushdie Attack Loses His Mother’s Support
FeederLink7=https://www.nytimes.com/2022/08/17/nyregion/salman-rushdie-stabbing-suspect.html
FeederDec7=Hadi Matar, 24, kept to himself and was changed by a 2018 trip to the Middle East.                                                                                    



















                                                                                                                                                
FeederDate7=Wed, 17 Aug 2022

FeederTitle8=Willie Nelson’s Long Encore

FeederLink8=https://www.nytimes.com/2022/08/17/magazine/willie-nelson.html
FeederDec8=As he approaches 90, even brushes with death can’t keep him off the road — or dim a late-life creative burst.                                                                              



                                                                                                              

























                          
FeederDate8=Wed, 17 Aug 2022

FeederTitle9=Tech Hacks to Make Traveling Right Now Less of a Headache
FeederLink9=https://www.nytimes.com/2022/08/17/technology/personaltech/tech-travel.html
FeederDec9=The travel industry is recovering from the pandemic, but messily. These apps and tips can help us navigate the chaos and maximize our comfort.



                                



                     
FeederDate9=Wed, 17 Aug 2022

FeederTitle10=From Harry Styles to BTS, Pop’s Biggest Stars Are Looking to Residencies
FeederLink10=https://www.nytimes.com/2022/08/17/arts/music/harry-styles-pop-residencies.html
FeederDec10=Extended runs in one venue, once associated with legacy acts, have become popular with stars including Harry Styles and BTS, lowering bills and building hype as touring costs rise.        







    





  













                                                                                                            









































                
FeederDate10=Wed, 17 Aug 2022
