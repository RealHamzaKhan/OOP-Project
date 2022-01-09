#include <iostream>
#include<string>

#include<string.h>
using namespace std;
class stardetection
{
public:
    int date;
    int month;
    int year;
    int pdate;
    int pmonth;
    int pyear;
    string pstar;
    string star;



    void getyourdata()
    {
        cout<<"Enter your date of birth : ";
        cin>>date>>month>>year;

    }
    void getpartnerdata()
    {
        cout<<"Enter your partner date of birth : ";
        cin>>pdate>>pmonth>>pyear;
    }
    void detectyourstar()
    {
        if(date<=31 && month<=12)
        {
            if((month==12) || (month==1))
    {
        if(date>=23 && date<=31)
        {
        star = "Capricon";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=19)
        {
        star = "Capricon";
        cout<<"Your star is : "<<star;

        }
    }
            else if(month==1)
    {
        if(date>=20 && date<=31)
        {
        star = "Aquarius";
        cout<<"Your star is : "<<star;

        }


    }
    else if(month==2)
    {

       if (date>=1 && date<=18)
        {
        star = "Aquarius";
        cout<<"Your star is : "<<star;

        }
    }
            else if(month==2)
    {
        if(date>=19 && date<=29)
        {
        star = "Pisces";
        cout<<"Your star is : "<<star;

        }
        else if(date>29)
        {
            cout<<"Febraury has maximun 29 days kindly enter appropriate DOB"<<endl;
        }


    }

            else if((month==3) || (month==4))
    {
        if(date>=21 && date<=31)
        {
        star = "Aries";
        cout<<"Your star is : "<<star;
        }

        else if (date>=1 && date<=19)
        {
        star = "Aries";
        cout<<"Your star is : "<<star;
        }
    }
            else if((month==4) || (month==5))
    {
         if(date>=20&& date<=30)
        {
        star = "Tauras";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=20)
        {
        star = "Taurus";
        cout<<"Your star is : "<<star;

        }
    }
           else if((month==5) || (month==6))
    {
        if(date>=21 && date<=31)
        {
        star = "Gemini";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=21)
        {
        star = "Gemini";
        cout<<"Your star is : "<<star;
        }
    }
            else if((month==6) || (month==7))
    {
        if(date>=22 && date<=30)
        {
        star = "Cancer";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=22)
        {
        star = "Cancer";
        cout<<"Your star is : "<<star;

        }
    }
            else if((month==7) || (month==8))
    {
       if(date>=23 && date<=31)
        {
        star = "Leo";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=22)
        {
        star = "Leo";
        cout<<"Your star is : "<<star;

        }
    }
           else if((month==8) || (month==9))
    {
        if(date>=23 && date<=31)
        {
        star = "Virgo";
        cout<<"Your star is : "<<star;
        }

        else if (date>=1 && date<=22)
        {
        star = "Virgo";
        cout<<"Your star is : "<<star;
        }
    }
            else if((month==9) || (month==10))
    {
         if(date>=23 && date<=30)
        {
        star = "Libra";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=22)
        {
        star = "Libra";
        cout<<"Your star is : "<<star;

        }
    }
            else if((month==10) || (month==11))
    {
        if(date>=23 && date<=31)
        {
        star = "Scorpio";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=21)
        {
        star = "Scorpio";
        cout<<"Your star is : "<<star;

        }
    }
            else if((month==11) || (month==12))
    {
        if(date>=22 && date<=30)
        {
        star = "Sagittarius";
        cout<<"Your star is : "<<star;

        }

        else if (date>=1 && date<=22)
        {
        star = "Sagittarius";
        cout<<"Your star is : "<<star;

        }
    }
    cout<<endl;
        }
        else
        {
            cout<<"kindly enter appropriate date of birth "<<endl;
        }
    }
        void detectpartnerstar()

        {
            if(pdate<=31 && month<=12)
            {


            if(pdate<=31 && pmonth<=12)
        {
            if((pmonth==12) || (pmonth==1))
    {
        if(pdate>=23 && pdate<=31)
        {
        pstar = "Capricon";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=19)
        {
        pstar = "Capricon";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
           else if(pmonth==1)
    {
        if(pdate>=20 && pdate<=31)
        {
        pstar = "Aquarius";
        cout<<"Your Partner star is : "<<pstar;

        }


    }
    else if(pmonth==2)
    {

       if (pdate>=1 && pdate<=18)
        {
        pstar = "Aquarius";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
           else if(pmonth==2)
    {
        if(pdate>=19 && pdate<=29)
        {
        pstar = "Pisces";
        cout<<"Your Partner star is : "<<pstar;

        }
        else if(pdate>29)
        {
            cout<<"Febraury has maximun 29 days kindly enter appropriate DOB"<<endl;
        }


    }

           else if((pmonth==3) || (pmonth==4))
    {
        if(pdate>=21 && pdate<=31)
        {
        pstar = "Aries";
        cout<<"Your Partner star is : "<<pstar;
        }

        else if (pdate>=1 && pdate<=19)
        {
        pstar = "Aries";
        cout<<"Your Partner star is : "<<pstar;
        }
    }
            else if((pmonth==4) || (pmonth==5))
    {
        if(pdate>=20&& pdate<=30)
        {
        pstar = "Tauras";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=20)
        {
        pstar = "Taurus";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
          else if((pmonth==5) || (pmonth==6))
    {
        if(pdate>=21 && pdate<=31)
        {
        pstar = "Gemini";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=21)
        {
        pstar = "Gemini";
        cout<<"Your Partner star is : "<<pstar;
        }
    }
            else if((pmonth==6) || (pmonth==7))
    {
        if(pdate>=22 && pdate<=30)
        {
        pstar = "Cancer";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=22)
        {
        pstar = "Cancer";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
            else if((pmonth==7) || (pmonth==8))
    {
        if(pdate>=23 && pdate<=31)
        {
        pstar = "Leo";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=22)
        {
        pstar = "Leo";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
           else if((pmonth==8) || (pmonth==9))
    {
        if(pdate>=23 && pdate<=31)
        {
        pstar = "Virgo";
        cout<<"Your Partner star is : "<<pstar;
        }

        else if (pdate>=1 && pdate<=22)
        {
        pstar = "Virgo";
        cout<<"Your Partner star is : "<<pstar;
        }
    }
           else if((pmonth==9) || (pmonth==10))
    {
        if(pdate>=23 && pdate<=30)
        {
        pstar = "Libra";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=22)
        {
        pstar = "Libra";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
           else if((pmonth==10) || (pmonth==11))
    {
        if(pdate>=23 && pdate<=31)
        {
        pstar = "Scorpio";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=21)
        {
        pstar = "Scorpio";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
           else if((pmonth==11) || (pmonth==12))
    {
        if(pdate>=22 && pdate<=30)
        {
        pstar = "Sagittarius";
        cout<<"Your Partner star is : "<<pstar;

        }

        else if (pdate>=1 && pdate<=22)
        {
        pstar = "Sagittarius";
        cout<<"Your Partner star is : "<<pstar;

        }
    }
        }
        cout<<endl;}
        else
        {
            cout<<"kindly enter appropriate date of birth "<<endl;

        }
        }







};

class friendship:public stardetection
{
public:
    void friendmatch()
    {
        cout<<"********************************************Friendship status*****************************************************"<<endl;
        if(star=="Capricon" && pstar=="Capricon")
        {
            cout<<"A friendship between two Capricorn is marked by control, coordination, and efficiency. ... Capricorn tend to have little fun in their lives, but maintain comfortable and successful lives. The friends are loyal to"<<
             "each other, and neither friend would try to dominate the other. The ruling planet of Capricorn is Saturn";
        }
    if(star=="Capricon" && pstar=="Pisces")
        {
            cout<<"Capricorn admire Pisces' varying and considerate nature, and Pisces admire Capricorn's practicality and resolve. The friendship between Capricorn and Pisces gets stronger over time. Capricorn and Pisces form a great team, and complement each other very well. ... Capricorn is an earth sign, and Pisces is a water sign";
        }
	if(star=="Capricon" && pstar=="Taurus")
        {
            cout<<"Both star signs are practical minded, realistic, and well disciplined. Taurus admire Capricorn's perseverance, and Capricorn admire Taurus' stability. They could form a strong, solid friendship based on security of possessions and a logical view of things in general";
        }
        if(star=="Capricon" && pstar=="Cancer")
        {
            cout<<"A companionship between a Cancer and a Capricorn features strong determination and force of character. ... Cancer admire Capricorn's devotion, and Capricorn admire Cancer's persistence. They generally have a deep, fruitful relationship.";
        }

        if(star=="Capricon" && pstar=="Virgo")
        {
            cout<<"A friendship between a Virgo and a Capricorn is a practical and sagacious combination of two people with similar character. Virgo and Capricorn are both logical and intelligent, and both want a lot from life. Virgo admire Capricorn's devotion and perseverance, and Capricorn admire Virgo's logical and selective nature.";
        }
        if(star=="Capricon" && pstar=="Scorpio")
        {
            cout<<"When these two signs form a friendship, it may be turbulent at first, due to their stubborn personalities. Once they learn to respect each other, however, it is the kind of friendship that will result in a powerful and long lasting connection";
        }
        if(star=="Capricon" && pstar=="Aquarius")
        {
            cout<<"Capricorn and Aquarius are highly compatible as friends. They are both the type of people that are very picky when it comes to choosing their close friends, and really invest in one another. ... But, at the same time, Capricorn and Aquarius are different enough that they spark off one another, so they never get bored";
        }
        if(star=="Capricon" && pstar=="Aries")
        {
            cout<<"Aries and Capricorn are two inextricably linked signs of the Zodiac, but they don't realise it due to the difference in their characters. ... Aries prefer the easier, quicker, riskier approach to getting things done, while Capricorn take the harder, slower, safer approach.";
        }
        if(star=="Capricon" && pstar=="Gemini")
        {
            cout<<"Aries and Capricorn are two inextricably linked signs of the Zodiac, but they don't realise it due to the difference in their characters. ... Aries prefer the easier, quicker, riskier approach to getting things done, while Capricorn take the harder, slower, safer approach.";
        }
        if(star=="Capricon" && pstar=="Leo")
        {
            cout<<" A partnership between a Leo and a Capricorn is based on solid support between the friends. ... Leo and Capricorn love luxuries and pleasures in life, and like to work hard to earn these rewards. Both star signs adore wealthy possessions and social status.";
        }
        if(star=="Capricon" && pstar=="Libra")
        {
            cout<<"A friendship between a Libra and a Capricorn is a relationship between two people who don't have too much in common. The more they concur with each other, the stronger their relationship becomes. ... Capricorn are more sagacious, and work constantly towards their goals without giving much attention to other things.";
        }

        if(star=="Capricon" && pstar=="Sagittarius")
        {
            cout<<"The friendship could be advantageous to Sagittarius and Capricorn. Both partners must be willing to understand and admire the value of each other's attitude. ... The most remarkable aspect of a relationship between a Sagittarius and a Capricorn is their complementary character, and their capacity to learn from each other.";
        }




        //COMPARISION OF PISCES WITH ALL OTHER.


        if(star=="Pisces" && pstar=="Capricon")

        if(star=="Pisces" && pstar=="Pisces")
        {
            cout<<"A relationship between two Pisces is the combination of two people with strong emotions and sensitivity. Pisces communicate with and understand each other wonderfully. They relish in their friendship, and are perfectly satisfied with each other. ... The gentle and mild character of Pisces makes them ideal for each other";
        }
        if(star=="Pisces" && pstar=="Taurus")
        {
            cout<<"Pisces loves Taurus' down-to-earth energy and humor and Taurus loves Pisces' compassionate and creative personality. They are very understanding of each other and their weaknesses. This is a harmonious friendship based on mutual interests and respect.";
        }
        if(star=="Pisces" && pstar=="Cancer")
        {
            cout<<"Cancer and Pisces are very compatible in nature. Pisces have an affinity to all mankind, and Cancer's intuition and care result in a very strong bond between the two signs. ... Cancer always seek for stability, but could cope with the inconsistent nature of Pisces";
        }
        if(star=="Pisces" && pstar=="Virgo")
        {
            cout<<"A friendship between a Virgo and a Pisces is a very compatible relationship. Virgo and Pisces lie opposite to each other in the Zodiac. Thus the partners balance each other wonderfully, and provide for each other's deficiencies. ... Both signs bring out the good qualities in each other, and form a lasting friendship";
        }
        if(star=="Pisces" && pstar=="Scorpio")
        {
            cout<<"Scorpio and Pisces are both water signs. ... The star signs are compatible with each other. The best aspect of a relationship between Scorpio and Pisces is the similarity in their disposition, and their emotional nature. They complement each other very well, and form a deep, solid relationship.";
        }
        if(star=="Pisces" && pstar=="Aquarius")
        {
            cout<<"A relationship between an Aquarius and a Pisces represents a combination of inventiveness and kindness. Both star signs are idealistic in nature. ... Aquarius easily give up on people who don't share their visions, but Pisces are more understanding and sympathetic to everyone. Aquarius and Pisces make very good friends.";
        }
        if(star=="Pisces" && pstar=="Aries")
        {
            cout<<"Aries and Pisces have a lot in common. Both signs are creative, pleasure seeking, and generous. This means that an Aries and Pisces pairing can be a lot of fun. ... Additionally, Aries are more of a born leader, while Pisces are so focused on making others happy that they can often be pushed around by more assertive signs";
        }
        if(star=="Pisces" && pstar=="Gemini")
        {
            cout<<"Gemini and Pisces understand each other well, and form a strong friendship. Pisces are imaginative and sensitive, and Gemini must be careful not to hurt their feelings. ... Gemini could come up with new plans often, and Pisces could always support them. Gemini is an air sign, and Pisces is a water sign";
        }
        if(star=="Pisces" && pstar=="Leo")
        {
            cout<<"Leo and Pisces like each other, and take care to satisfy each other's wants and desires. Together, they could have a really productive partnership. Leo lead the friendship, and often take it on themselves to safeguard Pisces. ... Leo is ruled by the Sun, and Pisces is ruled by Jupiter and Neptune";
        }
     	if(star=="Pisces" && pstar=="Libra")
        {
            cout<<"Friendship Compatibility For pisces And libra. A relationship between a Libra and a Pisces is a harmonious and well matched combination. ... Both friends are open and honest with each other, and strive for peace and concord. Libra and Pisces comprehend each other well, and form a good friendship.";
        }
        if(star=="Pisces" && pstar=="Sagittarius")
        {
            cout<<"A friendship between a Sagittarius and a Pisces represents an ideal combination. Sagittarius have an intelligent and philosophical mind, moving from one plan to another. Pisces are calmer and quieter, and love to indulge in their own fantasies. The star signs are very different from each other.";
        }




        //COMPARISION OF TAURUS WITH ALL OTHER.



        if(star=="Taurus" && pstar=="Capricon")
        {
            cout<<"Both star signs are practical minded, realistic, and well disciplined. Taurus admire Capricorn's perseverance, and Capricorn admire Taurus' stability. They could form a strong, solid friendship based on security of possessions and a logical view of things in general.";
        }
        if(star=="Taurus" && pstar=="Pisces")
        {
            cout<<"Pisces loves Taurus' down-to-earth energy and humor and Taurus loves Pisces' compassionate and creative personality. They are very understanding of each other and their weaknesses. This is a harmonious friendship based on mutual interests and respect.";
        }
        if(star=="Taurus" && pstar=="Taurus")
        {
            cout<<"Friendship Compatibility For taurus And taurus. A friendship between two Taurus is a very steady relationship. They could both feel safe and relaxed, and both love to gratify each other's desires and caprices. ... On occasions, however, they could be obstinate, feeling they are always right.";
        }
        if(star=="Taurus" && pstar=="Cancer")
        {
            cout<<"A friendship between a Taurus and a Cancer represents a good relationship, in general. Taurus and Cancer are two signs apart in the Zodiac, which means that the partners communicate well with each other. ... Taurus and Cancer have a pleasant, joyful relationship because they need similar things";
        }
        if(star=="Taurus" && pstar=="Virgo")
        {
            cout<<"A friendship between a Taurus and a Virgo is a friendship of realism. Both signs are rational, practical, well disciplined, and have high standards. Taurus and Virgo are earnest and amiable to each other. ... A Taurus-Virgo relationship gets better and better over time";
        }
        if(star=="Taurus" && pstar=="Scorpio")
        {
            cout<<" A friendship between a Taurus and a Scorpio involves a relationship between two signs that lie opposite each other in the Zodiac. ... Taurus and Scorpio love to collaborate with each other to make their mark in life; Taurus always after wealth, and Scorpio always after power";
        }
        if(star=="Taurus" && pstar=="Aquarius")
        {
            cout<<"A relationship between a Taurus and an Aquarius is one of great potential. Taurus have a logical, realistic view of the world, while Aquarius have a revolutionary view of everything. On the surface, they might not have too many interests in common, but they both have a powerful urge to succeed in their endeavours";
        }
        if(star=="Taurus" && pstar=="Aries")
        {
            cout<<"Aries represents energy and ambition, while Taurus represents calmness and amicability. ... It is these traits, that are so different from their own, that attract Aries to Taurus. In addition, Aries also receive stability and loyalty in friendship from Taurus.";
        }
        if(star=="Taurus" && pstar=="Gemini")
        {
            cout<<" A relationship between a Taurus and a Gemini is one that needs time for development. The twins could often want entirely different things at the same time. ... Taurus are calmer and more practical minded, while Gemini are more academic and more intellectual.";
        }
        if(star=="Taurus" && pstar=="Leo")
        {
            cout<<"A friendship between a Taurus and a Leo is one of mutual respect and a mutual liking of each other's company. They recognize each other's wants and desires very well. ... Taurus and Leo love lavishness and comfort, often on an extravagant measure. They both enjoy wealth and social status.";
        }
        if(star=="Taurus" && pstar=="Libra")
        {
            cout<<"A friendship between a Taurus and a Leo is one of mutual respect and a mutual liking of each other's company. They recognize each other's wants and desires very well. ... Taurus and Leo love lavishness and comfort, often on an extravagant measure. They both enjoy wealth and social status.";
        }
        if(star=="Taurus" && pstar=="Sagittarius")
        {
            cout<<"A friendship between a Taurus and a Sagittarius is one where both friends need to take time to know the other intimately. Both friends could learn so much from the other. ... Taurus are calmer and more logical, while Sagittarius are more energetic and more enthusiastic.";
        }



        //COMPARISION OF CANCER WITH ALL OTHER.




        if(star=="Cancer" && pstar=="Capricon")
        {
            cout<<" Capricorn are rational, plain, and simple, and Cancer add feelings and sentiments to the friendship. Both partners expect a lot from each other, and appreciate each other as well. Cancer admire Capricorn's devotion, and Capricorn admire Cancer's persistence.";
        }
        if(star=="Cancer" && pstar=="Pisces")
        {
            cout<<"Cancer and Pisces are both water signs. Thus Cancer and Pisces are very compatible in nature. Pisces have an affinity to all mankind, and Cancer's intuition and care result in a very strong bond between the two signs. ... Cancer always seek for stability, but could cope with the inconsistent nature of Pisces.";
        }
        if(star=="Cancer" && pstar=="Taurus")
        {
            cout<<"A friendship between a Taurus and a Cancer represents a good relationship, in general. Taurus and Cancer are two signs apart in the Zodiac, which means that the partners communicate well with each other. ... Taurus and Cancer have a pleasant, joyful relationship because they need similar things.";
        }
        if(star=="Cancer" && pstar=="Cancer")
        {
            cout<<"A relationship between two Cancer is a fostering relationship where emotions are of prime importance. Cancer form a deep, dedicated friendship, remaining faithful to each other all the time. Both friends endeavour to accomplish their aims, while taking care of each other, and tending and comforting each other’s passions. Cancer are, in general, kind, compassionate, and sympathetic; but at times they could be moody, sentimental, and fret themselves in self pity. They need to control their sentiments and feelings to have a strong, lasting friendship.";
        }
        if(star=="Cancer" && pstar=="Virgo")
        {
            cout<<"A friendship between a Cancer and a Virgo is a plain and simple, yet powerful, relationship that gets better and better over time. ... They are earnest and dedicated to their friendship, and appreciate each other a lot. Virgo admire Cancer's quiet yet immense strength, and Cancer admire Virgo's flexibility.";
        }
        if(star=="Cancer" && pstar=="Scorpio")
        {
            cout<<"The star signs could share an intense, solid platonic friendship. Scorpio are intense in nature, and Cancer adore this character of Scorpio. Cancer and Scorpio are both water signs. ... Cancer enjoy the possessive nature of Scorpio; it makes them feel that their friendship is much wanted and highly priced.";
        }
        if(star=="Cancer" && pstar=="Aquarius")
        {
            cout<<"In a friendship between a Cancer and an Aquarius, two star signs from the opposite ends of the Zodiac are drawn together. Aquarius have a modern, flashy outlook of life, and Cancer are sensitive and emotional in nature. Aquarius are energetic and friendly, and work well when dealing with people.";
        }
        if(star=="Cancer" && pstar=="Aries")
        {
            cout<<"The friendship between an Aries and a Cancer can be considered as a union of opposites: the Aries being wild and impulsive, the Cancer being tranquil and sensitive. Aries might overwhelm Cancer with their abundant positive energy. ... Aries are usually very protective of Cancer and take care of them.";
        }
        if(star=="Cancer" && pstar=="Gemini")
        {
            cout<<"The best aspect of a friendship between a Gemini and a Cancer is that, when they understand and accept each other, they could go to great lengths. With Gemini always moving forward, and Cancer always providing good assistance and solid support, they could have a rewarding partnership.";
        }
        if(star=="Cancer" && pstar=="Leo")
        {
            cout<<" Leo love to be respected and admired, and Cancer look for steadiness and emotional happiness. Both signs require dedication and support, and present them to each other. They are both faithful to each other, often possessive of each other, especially among other friends.";
        }
        if(star=="Cancer" && pstar=="Libra")
        {
            cout<<"Because of their commitment to long-lasting relationships, Cancers and Libras have high compatibility in terms of trust. Although they go about it in different ways, both signs are deep-thinkers and value making their partners happy, which gives them an average level of compatibility for intellect and romance";
        }
        if(star=="Cancer" && pstar=="Sagittarius")
        {
            cout<<"A friendship between a Cancer and a Sagittarius is one that requires time to overcome their initial difficulties. Cancer and Sagittarius need to allow each other time and space to comprehend and appreciate each other. ... Cancer are conservative and emotional, while Sagittarius are active and zealous.";
        }




        //COMPARISION OF VIRGO WITH ALL OTHER.



        if(star=="Virgo" && pstar=="Capricon")
        {
            cout<<"A friendship between a Virgo and a Capricorn is a practical and sagacious combination of two people with similar character. Virgo and Capricorn are both logical and intelligent, and both want a lot from life. ... Both signs are generally happy with their friendship.";
        }
        if(star=="Virgo" && pstar=="Pisces")
        {
            cout<<"A friendship between a Virgo and a Pisces is a very compatible relationship. Virgo and Pisces lie opposite to each other in the Zodiac. Thus the partners balance each other wonderfully, and provide for each other's deficiencies. ... Both signs bring out the good qualities in each other, and form a lasting friendship.";
        }
        if(star=="Virgo" && pstar=="Taurus")
        {
            cout<<"A friendship between a Taurus and a Virgo is a friendship of realism. Both signs are rational, practical, well disciplined, and have high standards. Taurus and Virgo are earnest and amiable to each other. ... A Taurus-Virgo relationship gets better and better over time";
        }
        if(star=="Virgo" && pstar=="Cancer")
        {
            cout<<"A friendship between a Cancer and a Virgo is a plain and simple, yet powerful, relationship that gets better and better over time. ... They are earnest and dedicated to their friendship, and appreciate each other a lot. Virgo admire Cancer's quiet yet immense strength, and Cancer admire Virgo's flexibility.";
        }
        if(star=="Virgo" && pstar=="Virgo")
        {
            cout<<"A friendship between two Virgo works smoothly, and the more they spend time with each other, the stronger their bond gets. Both partners know their role in the relationship, and are happy to stick to that. They keep things organised and under control.";
        }
        if(star=="Virgo" && pstar=="Scorpio")
        {
            cout<<"Virgo and Scorpio understand each other well, and converse well with each other. They share a strong, faithful bond with each other. The two signs prefer to spend time with each other, rather than with a lot of friends. ... Scorpio are deep and passionate, and Virgo like this passion.";
        }
        if(star=="Virgo" && pstar=="Aquarius")
        {
            cout<<"Friendship Compatibility For aquarius And virgo. ... Virgo have a rational and ordinary approach to life. Aquarius go for fantastic and excessive things in life. Their differences help the partners to balance each other, and a mutual understanding results in a deep friendship between them.";
        }
        if(star=="Virgo" && pstar=="Aries")
        {
            cout<<" A very strong friendship could be formed in time, and even more so if they understand and accept the disparities in their nature. Early on, Aries and Virgo might see only faults in each other. To Virgo, Aries might appear too impulsive and impatient.";
        }
        if(star=="Virgo" && pstar=="Gemini")
        {
            cout<<"A relationship between a Gemini and a Virgo is one that evolves over time. Both friends need to take an effort to understand and appreciate each other. ... If they could understand each other well, Gemini and Virgo could have a long lasting friendship. Initially Gemini might find Virgo too serious and fussy.";
        }
        if(star=="Virgo" && pstar=="Leo")
        {
            cout<<"A friendship between a Leo and a Virgo involves a friendship between two people who have little in common. ... Leo are vibrant, sociable, and assertive, and have a fiery temper. Virgo are more intellectual, more silent, and more flexible. Once both partners are comfortable with each other, they make a fantastic team.";
        }
        if(star=="Virgo" && pstar=="Libra")
        {
            cout<<"A relationship between a Virgo and a Libra is filled with surprise and mystery. ... But as they comprehend and appreciate each other, a close friendship forms between them. Virgo and Libra love opulence and pleasure, and often collect works of art and showy things.";
        }
        if(star=="Virgo" && pstar=="Sagittarius")
        {
            cout<<"Alone, these may be somewhat extreme tendencies, but a friendship between these two signs can help balance each other out. Virgo can help Sagittarius to settle down and find a job that is realistic, and Sagittarius can help Virgo find a job where they feel happy. These two signs also make an excellent creative team.";
        }



        //COMPARISION OF SCORPIO WITH ALL OTHER.





        if(star=="Scorpio" && pstar=="Capricon")
        {
            cout<<"Capricorn and Scorpio are two signs that both need their space. The friendship between these two is based on a deep intellectual and emotional bond, rather than constantly spending time together. When these signs do hang out, it will certainly result in hours engrossed in deep conversation.";
        }
        if(star=="Scorpio" && pstar=="Pisces")
        {
            cout<<"Scorpio and Pisces are both water signs. ... The star signs are compatible with each other. The best aspect of a relationship between Scorpio and Pisces is the similarity in their disposition, and their emotional nature. They complement each other very well, and form a deep, solid relationship.";
        }
        if(star=="Scorpio" && pstar=="Taurus")
        {
            cout<<" A friendship between a Taurus and a Scorpio involves a relationship between two signs that lie opposite each other in the Zodiac. ... Taurus and Scorpio love to collaborate with each other to make their mark in life; Taurus always after wealth, and Scorpio always after power";
        }
        if(star=="Scorpio" && pstar=="Cancer")
        {
            cout<<"The star signs could share an intense, solid platonic friendship. Scorpio are intense in nature, and Cancer adore this character of Scorpio. Cancer and Scorpio are both water signs. ... Cancer enjoy the possessive nature of Scorpio; it makes them feel that their friendship is much wanted and highly priced.";
        }
        if(star=="Scorpio" && pstar=="Virgo")
        {
            cout<<"Virgo and Scorpio understand each other well, and converse well with each other. They share a strong, faithful bond with each other. The two signs prefer to spend time with each other, rather than with a lot of friends. ... Scorpio are deep and passionate, and Virgo like this passion.";
        }
        if(star=="Scorpio" && pstar=="Scorpio")
        {
            cout<<"A friendship between two Scorpio is a combination of two zealous and emotional people. Both partners are loyal to each other, and the friendship progresses rapidly. ... Scorpio form a very passionate friendship. They would defend each other at all costs against outside enemies.";
        }
        if(star=="Scorpio" && pstar=="Aquarius")
        {
            cout<<"Scorpio and Aquarius are both fixed signs. Both partners are stubborn and unrelenting. Scorpio and Aquarius are both determined and set on their goals. ... The most remarkable aspect of a friendship between a Scorpio and an Aquarius is their capacity for tremendous achievement and success.";
        }
        if(star=="Scorpio" && pstar=="Aries")
        {
            cout<<"A friendship between an Aries and a Scorpio is like a friendship between two very similar people. ... Scorpio is more tolerant but also more possessive than Aries. Despite their differences, they both love taking risks and chances, and working towards a common goal.";
        }
        if(star=="Scorpio" && pstar=="Gemini")
        {
            cout<<"A relationship between a Gemini and a Scorpio is a combination of opposites. ... Gemini are more flexible and more sociable, while Scorpio are more focused and more resolute. Gemini are light hearted towards things, while Scorpio have a strong fidelity to their friends.";
        }
        if(star=="Scorpio" && pstar=="Leo")
        {
            cout<<"A relationship between a Leo and a Scorpio is an active and powerful combination between two people who comprehend each other very well. ... Leo and Scorpio are both resolute in character. Both signs must try to comprehend each other, and work for a strong friendship between them.";
        }
        if(star=="Scorpio" && pstar=="Libra")
        {
            cout<<"A relationship between a Libra and a Scorpio is an enthusiastic and rewarding partnership. ... Libra could set things in motion in their partnership, but Scorpio are more determined and focused than Libra. The partners form a virtually unbreakable bond between themselves";
        }
        if(star=="Scorpio" && pstar=="Sagittarius")
        {
            cout<<"Scorpio value their emotions, while Sagittarius look for adventure and novelty. ... However, as time passes by, the star signs would form a very solid and exciting friendship between them. Both Scorpio and Sagittarius want to explore and experience things in life.";
        }





        //COMPARISION OF AQUARIUS WITH ALL OTHER.



        if(star=="Aquarius" && pstar=="Capricon")
        {
            cout<<"Capricorn and Aquarius are highly compatible as friends. They are both the type of people that are very picky when it comes to choosing their close friends, and really invest in one another. ... But, at the same time, Capricorn and Aquarius are different enough that they spark off one another, so they never get bored";
        }
        if(star=="Aquarius" && pstar=="Pisces")
        {
            cout<<" relationship between an Aquarius and a Pisces represents a combination of inventiveness and kindness. Both star signs are idealistic in nature. ... Aquarius easily give up on people who don't share their visions, but Pisces are more understanding and sympathetic to everyone. Aquarius and Pisces make very good friends";
        }
        if(star=="Aquarius" && pstar=="Taurus")
        {
            cout<<"A relationship between a Taurus and an Aquarius is one of great potential. Taurus have a logical, realistic view of the world, while Aquarius have a revolutionary view of everything. On the surface, they might not have too many interests in common, but they both have a powerful urge to succeed in their endeavours.";
        }
        if(star=="Aquarius" && pstar=="Cancer")
        {
            cout<<"In a friendship between a Cancer and an Aquarius, two star signs from the opposite ends of the Zodiac are drawn together. Aquarius have a modern, flashy outlook of life, and Cancer are sensitive and emotional in nature. Aquarius are energetic and friendly, and work well when dealing with people.";
        }
        if(star=="Aquarius" && pstar=="Virgo")
        {
            cout<<"Virgo have a rational and ordinary approach to life. Aquarius go for fantastic and excessive things in life. Their differences help the partners to balance each other, and a mutual understanding results in a deep friendship between them.";
        }
        if(star=="Aquarius" && pstar=="Scorpio")
        {
            cout<<"Scorpio and Aquarius are both fixed signs. Both partners are stubborn and unrelenting. Scorpio and Aquarius are both determined and set on their goals. ... The most remarkable aspect of a friendship between a Scorpio and an Aquarius is their capacity for tremendous achievement and success.";
        }
        if(star=="Aquarius" && pstar=="Aquarius")
        {
            cout<<"A friendship between is two Aquarius is a constructive relationship, with the friends focusing on the well being not just of each other, but of the people around them as well. ... The friends usually have a great time with each other, as well as other people.";
        }
        if(star=="Aquarius" && pstar=="Aries")
        {
            cout<<"An Aries-Aquarius friendship creates a highly dynamic and creative pair, as a result of the vivacity of the Aries and the vision of the Aquarius. Their friendship could be competitive, but always exciting. Since these signs are two apart in the Zodiac, they communicate well with each other.";
        }
        if(star=="Aquarius" && pstar=="Gemini")
        {
            cout<<"A relationship between a Gemini and an Aquarius features a strong bond between two people who share a good psychological association with each other. Gemini love innovative ideas and are attracted to Aquarius' vision. Both partners relish their freedom. ... Gemini and Aquarius both possess abundance of energy.";
        }
        if(star=="Aquarius" && pstar=="Leo")
        {
            cout<<"Even though both signs have different interests, they are a very compatible pair. Leo and Aquarius are both fixed signs. Leo give Aquarius the impetus and encouragement to put their ideas into practice, rather than keep them in their mind. ... Leo and Aquarius remain loyal to each other, and work well as a team.";
        }
        if(star=="Aquarius" && pstar=="Libra")
        {
            cout<<"Libra and Aquarius are both intelligent and emotional. ... The most striking thing about a friendship between Libra and Aquarius is the intensity of their teamwork. Both signs could learn many things from each other. Their intelligent and harmonious nature creates a strong, sincere relationship between them.";
        }
        if(star=="Aquarius" && pstar=="Sagittarius")
        {
            cout<<"Sagittarius and Aquarius are two apart in the Zodiac. Thus they communicate well with each other. Both signs are active and zealous, and love a free flowing life. ... At times, Sagittarius might consider Aquarius too unconventional, and Aquarius might consider Sagittarius too overbearing.";
        }





        //COMPARISION OF ARIES  WITH ALL OTHER.



        if(star=="Aries" && pstar=="Capricon")
        {
            cout<<"Aries are boisterous and flaunting, while Capricorn are quiet and unassuming. And both of them are obstinate not to give up their individual identities. Their philosophies are also completely opposite to each other.";
        }
        if(star=="Aries" && pstar=="Pisces")
        {
            cout<<"Overall Compatibility. Aries and Pisces have a lot in common. Both signs are creative, pleasure seeking, and generous. ... Pisces are much more emotional than fiery Aries, and conflicts between these two can often devolve into one side (Pisces) crying while the other side (Aries) shouts.";
        }
        if(star=="Aries" && pstar=="Taurus")
        {
            cout<<"A friendship between an Aries and a Taurus is a friendship of two people of widely different personalities. ... Taurus are, by nature, calm and patient. It is these traits, that are so different from their own, that attract Aries to Taurus. In addition, Aries also receive stability and loyalty in friendship from Taurus.";
        }
        if(star=="Aries" && pstar=="Cancer")
        {
            cout<<"The friendship between an Aries and a Cancer can be considered as a union of opposites: the Aries being wild and impulsive, the Cancer being tranquil and sensitive. Aries might overwhelm Cancer with their abundant positive energy. ... Aries are usually very protective of Cancer and take care of them.";
        }
        if(star=="Aries" && pstar=="Virgo")
        {
            cout<<"A very strong friendship could be formed in time, and even more so if they understand and accept the disparities in their nature. Early on, Aries and Virgo might see only faults in each other. To Virgo, Aries might appear too impulsive and impatient.";
        }
        if(star=="Aries" && pstar=="Scorpio")
        {
            cout<<"A friendship between an Aries and a Scorpio is like a friendship between two very similar people. ... Both Aries and Scorpio have tendencies of jealousy, and because of this, they have an ardent and tempestuous relationship. Scorpio is more tolerant but also more possessive than Aries.";
        }
        if(star=="Aries" && pstar=="Aquarius")
        {
            cout<<"Their friendship could be competitive, but always exciting. Since these signs are two apart in the Zodiac, they communicate well with each other. Aries and Aquarius are enthusiastic about life and enjoy novelty and fantastic experiences.";
        }
        if(star=="Aries" && pstar=="Aries")
        {
            cout<<" A friendship between two Aries leads to a very dynamic relationship. The inherent competitive nature of Aries makes the relationship spontaneous and challenging. ... Aries are gifted with a profusion of positive energy and an enthusiasm for pretty much everything.";
        }
        if(star=="Aries" && pstar=="Gemini")
        {
            cout<<" A relationship between an Aries and a Gemini is a partnership of physical energy and intellectual strength. Zodiac signs that are two apart, like Aries and Gemini, communicate well with each other. ... Despite the differences, the two signs are well matched for each other.";
        }
        if(star=="Aries" && pstar=="Leo")
        {
            cout<<"A relationship between an Aries and a Leo is filled with passion and energy. Both signs are dynamic and adventurous, and there is always a healthy competitive spirit between them. ... Both signs want to be the one to lead, and their strong egos could give rise to tense moments.";
        }
        if(star=="Aries" && pstar=="Libra")
        {
            cout<<"A friendship between an Aries and a Libra brings in the inherent polarity of the Zodiac itself. ... Aries are impulsive, excitable, and willing to jump into things immediately. Libra are indecisive, peace loving, and prefer a calm, quiet view of everything.";
        }
        if(star=="Aries" && pstar=="Sagittarius")
        {
            cout<<"They are both enthusiastic and optimistic, and comprehend each other well. ... Therefore, Aries often come up with new plans and Sagittarius eagerly support them. Both Aries and Sagittarius are fire signs.";
        }



        //COMPARISION OF GEMINI WITH ALL OTHER.



        if(star=="Gemini" && pstar=="Capricon")
        {
            cout<<"The reality is that the Gemini and Capricorn friendship is possible, as they can complement each other very well and forge a very positive bond for both. Astrology can help two people to get along, even if they are very different, because in diversity there can be a mutual learning that will make them evolve as people";
        }
        if(star=="Gemini" && pstar=="Pisces")
        {
            cout<<" A relationship between a Gemini and a Pisces is based on understanding and sympathy. ... Gemini and Pisces understand each other well, and form a strong friendship. Pisces are imaginative and sensitive, and Gemini must be careful not to hurt their feelings.";
        }
        if(star=="Gemini" && pstar=="Taurus")
        {
            cout<<" A relationship between a Taurus and a Gemini is one that needs time for development. The twins could often want entirely different things at the same time. ... Taurus are calmer and more practical minded, while Gemini are more academic and more intellectual.";
        }
        if(star=="Gemini" && pstar=="Cancer")
        {
            cout<<"The best aspect of a friendship between a Gemini and a Cancer is that, when they understand and accept each other, they could go to great lengths. With Gemini always moving forward, and Cancer always providing good assistance and solid support, they could have a rewarding partnership.";
        }
        if(star=="Gemini" && pstar=="Virgo")
        {
            cout<<"A relationship between a Gemini and a Virgo is one that evolves over time. Both friends need to take an effort to understand and appreciate each other. ... If they could understand each other well, Gemini and Virgo could have a long lasting friendship. Initially Gemini might find Virgo too serious and fussy.";
        }
        if(star=="Gemini" && pstar=="Scorpio")
        {
            cout<<"A relationship between a Gemini and a Scorpio is a combination of opposites. ... Gemini are more flexible and more sociable, while Scorpio are more focused and more resolute. Gemini are light hearted towards things, while Scorpio have a strong fidelity to their friends.";
        }
        if(star=="Gemini" && pstar=="Aquarius")
        {
            cout<<"A relationship between a Gemini and an Aquarius features a strong bond between two people who share a good psychological association with each other. Gemini love innovative ideas and are attracted to Aquarius' vision. Both partners relish their freedom. ... Gemini and Aquarius both possess abundance of energy.";
        }
        if(star=="Gemini" && pstar=="Aries")
        {
            cout<<" A relationship between an Aries and a Gemini is a partnership of physical energy and intellectual strength. Zodiac signs that are two apart, like Aries and Gemini, communicate well with each other. ... Despite the differences, the two signs are well matched for each other.";
        }
        if(star=="Gemini" && pstar=="Gemini")
        {
            cout<<"A friendship between two Gemini is more like a friendship between four people than two people. ... Gemini possess great communication skills and enjoy the art of discussion. Their intelligence and sense of humour make them an exciting pair, amusing each other as well as everyone else they converse with.";
        }
        if(star=="Gemini" && pstar=="Leo")
        {
            cout<<"A friendship between a Gemini and a Leo is filled with energy and amusement. The relationship is characterized by action and positive thinking. Gemini are attracted to Leo's active and inventive nature, as Gemini always seek things to spark their intellect. ... Gemini and Leo are both industrious and resourceful.";
        }
        if(star=="Gemini" && pstar=="Libra")
        {
            cout<<"Gemini and Libra are both air signs. The duality in nature of both signs creates a strong empathy between them. Gemini love Libra's energy and desire for peace. They could keep up with Libra's propensity to initiate a number of things simultaneously, and have the same mental prowess as Libra to keep up with them.";
        }
        if(star=="Gemini" && pstar=="Sagittarius")
        {
            cout<<"Gemini and Sagittarius could form a really amazing relationship. They are highly compatible with each other and work together very well. ... Gemini are flexible and indecisive, and Sagittarius understand all facets of a situation except the most obvious one. Gemini and Sagittarius form a strong, deep friendship.:";
        }



        //COMPARISION OF LEO WITH ALL OTHER.




        if(star=="Leo" && pstar=="Capricon")
        {
            cout<<"Leo are energetic and vivacious, and Capricorn are traditional and persistent in their efforts. Leo realise the importance of perseverance, but love to do things in their active, zealous manner. Both partners are loyal to each other.";
        }
        if(star=="Leo" && pstar=="Pisces")
        {
            cout<<"A relationship between a Leo and a Pisces is a friendship between two people who are entirely different in character. ... Leo are powerful and gregarious, taking charge of situations, and doing things the way they want. Pisces are calm, quiet, and contemplative in nature. But they both love to dream things.";
        }
        if(star=="Leo" && pstar=="Taurus")
        {
            cout<<"A friendship between a Taurus and a Leo is one of mutual respect and a mutual liking of each other's company. They recognize each other's wants and desires very well. ... Taurus and Leo love lavishness and comfort, often on an extravagant measure. They both enjoy wealth and social status.";
        }
        if(star=="Leo" && pstar=="Cancer")
        {
            cout<<"Leo love to be respected and admired, and Cancer look for steadiness and emotional happiness. Both signs require dedication and support, and present them to each other. They are both faithful to each other, often possessive of each other, especially among other friends.:";
        }
        if(star=="Leo" && pstar=="Virgo")
        {
            cout<<"A friendship between a Leo and a Virgo involves a friendship between two people who have little in common. ... Leo are vibrant, sociable, and assertive, and have a fiery temper. Virgo are more intellectual, more silent, and more flexible. Once both partners are comfortable with each other, they make a fantastic team.";
        }
        if(star=="Leo" && pstar=="Scorpio")
        {
            cout<<"A relationship between a Leo and a Scorpio is an active and powerful combination between two people who comprehend each other very well. ... Leo and Scorpio are both resolute in character. Both signs must try to comprehend each other, and work for a strong friendship between them.";
        }
        if(star=="Leo" && pstar=="Aquarius")
        {
            cout<<"Even though both signs have different interests, they are a very compatible pair. Leo and Aquarius are both fixed signs. Leo give Aquarius the impetus and encouragement to put their ideas into practice, rather than keep them in their mind. ... Leo and Aquarius remain loyal to each other, and work well as a team";
        }
        if(star=="Leo" && pstar=="Aries")
        {
            cout<<"A relationship between an Aries and a Leo is filled with passion and energy. Both signs are dynamic and adventurous, and there is always a healthy competitive spirit between them. ... Both signs want to be the one to lead, and their strong egos could give rise to tense moments";
        }
        if(star=="Leo" && pstar=="Gemini")
        {
            cout<<"The friendship between Gemini and Leo will be fun, energetic, and quite positive. There will be a mutual appreciation for each other. As an intellectual sign, Gemini is attracted to Leo's desire to be active and inventive.";
        }
        if(star=="Leo" && pstar=="Leo")
        {
            cout<<"A friendship between two Leo is a combination of two very powerful, energetic, and vivacious spirits. ... A partnership between two Leo is filled with tremendous energy and restlessness. But as both signs crave to lead, and resent giving in to anyone, even each other, their relationship would be well and truly tested.";
        }
        if(star=="Leo" && pstar=="Libra")
        {
            cout<<"Leo are dynamic and flaunting, and Libra are sophisticated and diplomatic. Both signs could admire each other's qualities, and profit from each other; and they maintain a harmonious relationship. Libra could calm Leo's energetic nature and soften their extravagant enthusiasm.";
        }
        if(star=="Leo" && pstar=="Sagittarius")
        {
            cout<<"A friendship between a Leo and a Sagittarius could lead to a stunning, fiery, dynamic relationship. Both star signs enjoy life to the fullest, and persuade the other to do the same. The friends would have lively, thrilling times together. ... Both signs are gregarious, but Leo want to take charge of the conversation.";
        }




        //COMPARISION OF LIBRA WITH ALL OTHER.



        if(star=="Libra" && pstar=="Capricon")
        {
            cout<<" A friendship between a Libra and a Capricorn is a relationship between two people who don't have too much in common. ... Libra are analytical and intellectual. Capricorn don't mind perseverance and toil, as long as they would help them achieve their ambitions.";
        }
        if(star=="Libra" && pstar=="Pisces")
        {
            cout<<"A relationship between a Libra and a Pisces is a harmonious and well matched combination. Both star signs are well suited for each other. Libra love to indulge themselves in wonderful reality, and Pisces love to live in a world of imagination. ... Libra and Pisces comprehend each other well, and form a good friendship";
        }
        if(star=="Libra" && pstar=="Taurus")
        {
            cout<<"Taurus is a fixed sign, and Libra is a cardinal sign. ... The best aspect of a friendship between a Taurus and a Libra is their common love for art, beauty, literature, and culture. Both partners adore aesthetic pursuits and love the finer things in life. Their common interests result in a strong relationship between them.";
        }
        if(star=="Libra" && pstar=="Cancer")
        {
            cout<<"Taurus is a fixed sign, and Libra is a cardinal sign. ... The best aspect of a friendship between a Taurus and a Libra is their common love for art, beauty, literature, and culture. Both partners adore aesthetic pursuits and love the finer things in life. Their common interests result in a strong relationship between them.";
        }
        if(star=="Libra" && pstar=="Virgo")
        {
            cout<<"A relationship between a Virgo and a Libra is filled with surprise and mystery. However, Virgo and Libra complement each other well, and are comfortable with each other. ... Libra's could help Virgo in their efforts, especially when things don't go well for them.";
        }
        if(star=="Libra" && pstar=="Scorpio")
        {
            cout<<"A relationship between a Libra and a Scorpio is an enthusiastic and rewarding partnership. ... The friendship between Libra and Scorpio are usually focused on their combined ambitions. The partners form an intellectual and sentimental bond between themselves. Scorpio are more tolerant and more dominant than Libra.";
        }
        if(star=="Libra" && pstar=="Aquarius")
        {
            cout<<"Libra and Aquarius are both intelligent and emotional. ... The most striking thing about a friendship between Libra and Aquarius is the intensity of their teamwork. Both signs could learn many things from each other. Their intelligent and harmonious nature creates a strong, sincere relationship between them.";
        }
        if(star=="Libra" && pstar=="Aries")
        {
            cout<<"A friendship between an Aries and a Libra brings in the inherent polarity of the Zodiac itself. ... Aries are impulsive, excitable, and willing to jump into things immediately. Libra are indecisive, peace loving, and prefer a calm, quiet view of everything.";
        }
        if(star=="Libra" && pstar=="Gemini")
        {
            cout<<"Gemini and Libra are both air signs. The duality in nature of both signs creates a strong empathy between them. Gemini love Libra's energy and desire for peace. They could keep up with Libra's propensity to initiate a number of things simultaneously, and have the same mental prowess as Libra to keep up with them.";
        }
        if(star=="Libra" && pstar=="Leo")
        {
            cout<<"A friendship between a Leo and a Libra is one of mutual assistance and collaboration. Leo and Libra are two signs apart in the Zodiac. ... Libra could calm Leo's energetic nature and soften their extravagant enthusiasm. The two signs are ideal for each other.";
        }
        if(star=="Libra" && pstar=="Libra")
        {
            cout<<"A friendship between two Libra is characterised by amiability, equilibrium, and harmony. Libra love peace and concord, and this is reflected in their friendship as well as other aspects of their lives. ... Libra form an ideal friendship, admiring and being admired by each other.";
        }
        if(star=="Libra" && pstar=="Sagittarius")
        {
            cout<<"A friendship between a Libra and a Sagittarius is a perfect blend of two people who have so much to share with each other. ... Libra and Sagittarius are ideally suited for each other. Both signs are energetic and enthusiastic, and comprehend each other well. Arguments arise very scarcely in their relationship.";
        }



        //COMPARISION OF SAGITTARIUS WITH ALL OTHER.



        if(star=="Sagittarius" && pstar=="Capricon")
        {
            cout<<"The friendship could be advantageous to Sagittarius and Capricorn. Both partners must be willing to understand and admire the value of each other's attitude. ... The most remarkable aspect of a relationship between a Sagittarius and a Capricorn is their complementary character, and their capacity to learn from each other.";
		}
		if(star=="Sagittarius" && pstar=="Pisces")
        {
            cout<<"A friendship between a Sagittarius and a Pisces represents an ideal combination. Sagittarius have an intelligent and philosophical mind, moving from one plan to another. Pisces are calmer and quieter, and love to indulge in their own fantasies. The star signs are very different from each other.";
		}
		if(star=="Sagittarius" && pstar=="Taurus")
        {
            cout<<"A friendship between a Taurus and a Sagittarius is one where both friends need to take time to know the other intimately. Both friends could learn so much from the other. ... Taurus are calmer and more logical, while Sagittarius are more energetic and more enthusiastic.";
		}
		if(star=="Sagittarius" && pstar=="Cancer")
        {
            cout<<"Cancer and Sagittarius need to allow each other time and space to comprehend and appreciate each other. Sagittarius love action and adventure, and don't mind taking chances to enjoy new things in life. Cancer hold stability and security at a very high value.";
		}
		if(star=="Sagittarius" && pstar=="Virgo")
        {
            cout<<"Virgo and Sagittarius assist and support each other well, and work well together. The best aspect of a friendship between a Virgo and a Sagittarius is the stability and security they could provide for each other, once they have accepted their differences.";
		}
		if(star=="Sagittarius" && pstar=="Scorpio")
        {
            cout<<"Scorpio value their emotions, while Sagittarius look for adventure and novelty. ... However, as time passes by, the star signs would form a very solid and exciting friendship between them. Both Scorpio and Sagittarius want to explore and experience things in life";
		}
		if(star=="Sagittarius" && pstar=="Aquarius")
        {
            cout<<"Sagittarius and Aquarius are highly compatible as friends, but they tend to enjoy a loose friendship. They tend to have different interests and very separate lives, but they think in similar ways, so they enjoy sharing their challenges with one another, and often develop a deep bond";
		}
		if(star=="Sagittarius" && pstar=="Aries")
        {
            cout<<"Aries and Sagittarius make very good friends. They are both enthusiastic and optimistic, and comprehend each other well. ... Therefore, Aries often come up with new plans and Sagittarius eagerly support them. Both Aries and Sagittarius are fire signs";
		}
		if(star=="Sagittarius" && pstar=="Gemini")
        {
            cout<<"Gemini and Sagittarius could form a really amazing relationship. They are highly compatible with each other and work together very well. ... Gemini are flexible and indecisive, and Sagittarius understand all facets of a situation except the most obvious one. Gemini and Sagittarius form a strong, deep friendship";
		}
		if(star=="Sagittarius" && pstar=="Leo")
        {
            cout<<"A friendship between a Leo and a Sagittarius could lead to a stunning, fiery, dynamic relationship. Both star signs enjoy life to the fullest, and persuade the other to do the same. The friends would have lively, thrilling times together. ... Both signs are gregarious, but Leo want to take charge of the conversation.";
		}
		if(star=="Sagittarius" && pstar=="Libra")
        {
            cout<<"A friendship between a Libra and a Sagittarius is a perfect blend of two people who have so much to share with each other. ... Libra and Sagittarius are ideally suited for each other. Both signs are energetic and enthusiastic, and comprehend each other well. Arguments arise very scarcely in their relationship.";
		}
		if(star=="Sagittarius" && pstar=="Sagittarius")
        {
            cout<<"Sagittarius form a balanced and compatible relationship with each other. They work together on their combined schemes, just as easily as they work on their independent ventures. Sagittarius are devoted to their friendship, and care about each other. They are adaptable and rational, but could easily lose their patience.";
		}

    }
};

class futureprediction:public stardetection
{
    public:

    void future()
    {
        cout<<"********************************************FUTURE PREDICTION******************************************************"<<endl;
       if(star=="Capricon")
       {
           cout<<"A Capricorn person has to be very confident about the decisions he/she takes at work. This is important for two reasons  - the person would be able to value his own choices and secondly people at his place of work will take him/ her more seriously."

<<"People from this star sign should appear to be interested in the work that they do. It has been observed that people from this star sign are always in a hurry to leave office once their work is over, even when their colleagues hang around. They should change this and hang around themselves so that people notice them."

 <<"Capricorns should stop following ordinary things in life. If everyone turns left because they are comfortable with that way, a Capricorn should travel that path only if it suits them. Sometimes treading on a different path can lead one to more success than anticipated."

 <<"Capricorns should never work in the same place as their spouse because it would mean bringing the house problems to work. It would be ideal for a couple in the same profession to work for different organisations once their relationship is solemnised. It would ensure that both the people give in their best and are not influenced by each other.";
       }
       else if(star=="Pisces")
       {
           cout<<"Pisces people, you will start the year off with a bang. You will have various different desires in February and November, including wanting to change jobs, but you might not necessarily go through with them all. You will have many prosperous months at work; April, May, August, September and December. "
           <<"During the other months you will have to combat adversity. There will also be a few financial opportunities made available to you, so make the most of them. As for your private life, there is a lot to look forward to: love at first sight, passion and even marriage are on the cards.";
       }
       else if(star=="Cancer")
       {
           cout<<"Cancerians are known to be very good at identifying the right person for different feats in their company. When you have an eye for detail, the people, you take on board, outperform those who have been callously inducted. So Cancerians never compromise on the type of people they recruit as a result of which they reap maximum benefits in performance.";
       }
       else if(star=="Aquarius")
       {
           cout<<"An Aquarius sees success as happiness, self-fulfilment, and a positive answer to the question, “did I make the world a better place?” and also cares about work-life balance. They may take a lower-paying job if it means more time and flexibility to spend with the family or spend on hobbies or passion";
       }
       else if(star=="Aries")
       {
           cout<<"when the Sun moved into optimistic Sagittarius on November 22? You’ll continue to be empowered by the Sun in your expansive and knowledge-seeking ninth house until December 21—highlighted by a rare Sagittarius total solar (new moon) eclipse on December 14. Keep an open mind, because this eclipse could present an exciting opportunity out of the blue to take a major leap forward.";
       }
       else if(star=="Taurus")
       {
           cout<<"With the Sun in extravagant Sagittarius and your eighth house of shared resources and investments until December 21, it’s a smart time to check on long-term financial goals. Can you make your money work harder for you? Should you team up with someone for mutual gain? Assess your inner circle and reach out to the power players. The Sagittarius total solar eclipse on December 14 could present an unexpected opportunity to bring in a larger lump sum, pay down debt, or take a plunge into a surprising joint venture. Eclipses can present an entirely new path or plot twist, so keep an open mind.";
       }
       else if(star=="Gemini")
       {
           cout<<" Use Your Intelligence: Geminis are often blessed with an above average IQ. Being an air sign, you are quick thinkers and value thinking and learning. It gives you an obvious advantage when strategizing and planning your future or dealing with the bumps life gives us all."

 <<"Embrace Your Outgoing Nature: The Gemini personality is multifaceted, outgoing, and friendly. You are easy to talk to, charming, and inviting. Your ease of communication and extroverted nature allows you to open up and connect with people that can help you make friends and move forward in your career."

<<"Share Your Optimism: Geminis tend to have a positive outlook, you don’t typically let stuff get you down. Positivity is especially helpful when you encounter a hiccup in your life plans. The Gemini simply finds the silver lining in every rain cloud."

 <<"Be Resilient and Adaptable: Being a mutable sign, Gemini’s are fluid and adapt easily to change. This means you are quick to assimilate in most situations. Being flexible gives you an advantage, as you can deal with obstacles, you are more willing to try new things, and meet new people."

<< "Be Spontaneous and Exciting: Geminis have big personalities that people tend to gravitate towards. You are spontaneous and curious, always looking for the next adventure. Your courage when it comes to trying new and exciting things will propel you far.";
       }
       else if(star=="Leo")
       {
           cout<<"If you picked up fresh skills in 2020 (or over the last three years—Saturn has been in Capricorn since late 2017), get ready to put them to work supporting the dynamic duos and supportive partners you deserve!";
       }
       else if(star=="Virgo")
        {
        cout<<"An intense money period is coming to a close after this month, too. Stressful Mars will end an extended trip through your eighth house of long-term finance on Monday, January 6. The past six months may have brought on burdensome expenses that left you stretched or scrambling. Relief is in sight—along with some new outside-the-box opportunities when Mars blazes into Taurus and your expansive, lucky ninth house right after the New Year. Be savvy now and you could have a little something left to invest in your dreams this coming January.";
        }
       else if(star=="Libra")
       {
           cout<<"Libra people, the secret to a great year is staying focused on your goals. When it comes to your professional life, don't be afraid to speak up and show off your talents. Plenty of success and opportunities will flood your way. It will feel as if every task is so much simpler and more straightforward, and as a result, everything will fall into place";
       }
       else if(star=="Scorpio")
       {
           cout<<"Scorpios are good at carefully sifting through data and have the stamina to see tasks that others may find dull through to completion. Scorpios are adept at performing calculations and enjoy working with numbers. They are good with technical detail but also remember to look at the bigger picture.";
       }
       else if(star=="Sagittarius")
       {
           cout<<"you will be more concerned about your image and ambitions. You’ll want to gain respect in order to be entrusted with greater responsibilities.You will be happy in other people’s company and will expand your social life. At work, you will be attracted by risky business ventures and will be tempted by change.";
       }

    }

};
class love : public stardetection
{
    public:
    void lovefind()
    {
        cout<<"**********************************************LOVE STATUS***************************************************"<<endl;
    //COMPARISION OF CAPRICON WITH ALL OTHER.


	if(star=="Capricon" && pstar=="Capricon")
        {
            cout<<"Capricorn and Capricorn can be a pairing of deep understanding or a constant locking of horns. Looking in the Cappy mirror, they avoid the courtship games of other signs. Capricorn is ruled by Saturn and has a traditional bent. They're thinking long-term.";
        }
    if(star=="Capricon" && pstar=="Pisces")
        {
            cout<<"Capricorn and Pisces is a great match, with an harmonious (particularly important to both of you) match of Capricorn's practical approach to life and Pisces imagination and romantic nature";
        }
	if(star=="Capricon" && pstar=="Taurus")
        {
            cout<<"The Earth signs are well fitted to each other and they also admire the other half. Ambitions as well as goals for relationship are shared mutually between the pair. The love compatibility hits a high for the Taurus-Capricorn match when it comes to rating the couple in terms of durability";
        }
        if(star=="Capricon" && pstar=="Cancer")
        {
            cout<<"Cancer is impressed by the ambitious plans of Capricorn, whose focus on career appeals to the Crab's need for stability. Reserved Capricorn warms up in Cancer's homey feel, and nurturing ways. Both are considered traditional and looking for enduring love, which may mean an extended courtship.";
        }

        if(star=="Capricon" && pstar=="Virgo")
        {
            cout<<"Virgo and Capricorn are a sweetly matched pair that can become wholly devoted to one another. Neither wants a fly-by-night affair and will instantly pick up on the earthy depth as promising for a long-term relationship. Both need the reassurance of respect. Both find loyalty and enduring love a big draw.";
        }
        if(star=="Capricon" && pstar=="Scorpio")
        {
            cout<<"Capricorn and Scorpio are highly compatible and an interesting mix. Trusting others is an issue they share, which means both are cautious about getting involved in any sort of relationship, So, while a friendship or love affair may take months to develop the relationships are often lifelong.";
        }
        if(star=="Capricon" && pstar=="Aquarius")
        {
            cout<<"Aquarius and Capricorn are both very ambitious, but about different things. Aquarius' mission in life is to share their ideas. ... Capricorn and Aquarius tend to work best when they're teammates. Capricorn can ground Aquarius' visions in the present and make sure they aren't getting ahead of themselves";
        }
        if(star=="Capricon" && pstar=="Aries")
        {
            cout<<"Aries is a starter and Capricorn a never starts a project they don't finish, making them complimentary. They may always be a bit unsettled by each other, but that can become a tension that provokes growth. ... This brings together Cardinal Fire (Aries) and Cardinal Earth (Capricorn";
        }
        if(star=="Capricon" && pstar=="Gemini")
        {
            cout<<"Capricorn and Gemini make a strong relationship in that they both are apt to doing what makes them happy in their own corners of the world. Both can come together as long as with some compromise they keep their own worlds separate so that on a rare occasion they can do their own thing.";
        }
        if(star=="Capricon" && pstar=="Leo")
        {
            cout<<"Leo and Capricorn are a bit of an odd couple. However, both are alphas who share a quest for power, achievement, and status. There's some mutual admiration when they behold one another. ... Capricorns in love are particular, demanding, and often mindful of social rank.";
        }
        if(star=="Capricon" && pstar=="Libra")
        {
            cout<<"Both are marriage-minded, and although a pairing has built-in frictions, these two can find a harmonious balance. Capricorn tends to the structure of the relationship, while Libra adds the flourishes. ... Libras tend to be more prone to losing their heads in love, while Capricorns remain ever the pragmatist.";
        }

        if(star=="Capricon" && pstar=="Sagittarius")
        {
            cout<<"First dates with the Archer are likely to set a friendly, flirty tone, with Sagittarius wisecracking and Capricorn just being wise, an old soul, perhaps a bit serious at first. ... Capricorn in love is sincere, sensual, sometimes status-oriented. Sagittarius in love is experimental and freedom-loving";
        }




        //COMPARISION OF PISCES WITH ALL OTHER.



		if(star=="Pisces" && pstar=="Capricon")
        {
            cout<<"Capricorn and Pisces is a great match, with an harmonious (particularly important to both of you) match of Capricorn's practical approach to life and Pisces imagination and romantic nature";
        }
        if(star=="Pisces" && pstar=="Pisces")
        {
            cout<<"Pisces and Pisces are two universal beings, spiraling together. ... Two Pisces are compatible as creative collaborators, friends or lovers. The unique Pisces imagination gives them plenty of interior spaces to explore. They'll enjoy sharing impressions, and are patient enough to listen to the whole story!";
        }
        if(star=="Pisces" && pstar=="Taurus")
        {
            cout<<"Taurus is ruled by the lover Venus, and Pisces' ruler is Neptune, often called the higher octave of Venus. ... Pisces in love is intoxicating, dreamy and sometimes, an escapist. Taurus in love is stubborn, sensual and often uninhibited with nudity. Taurus and Pisces both thrive in mellow, aesthetically pleasing places";
        }
        if(star=="Pisces" && pstar=="Cancer")
        {
            cout<<"Pisces and Cancer Compatibility. This is a very intuitive, caring and affectionate match. You're both deeply romantic and sentimental, and intuitively understand each other, providing the sensitivity, tenderness, compassion and stability you both need.";
        }
        if(star=="Pisces" && pstar=="Virgo")
        {
            cout<<"he connection is strong between a Virgo and Pisces.You will share a strong and emotional connection. Virgo will tend to let go and let Pisces in. Virgo tends to keep their guard up but with Pisces, they are more willing to let Pisces in because they know Pisces will not judge them";
        }
        if(star=="Pisces" && pstar=="Scorpio")
        {
            cout<<"Scorpio and Pisces are two signs that are highly compatible. First, they connect in powerful ways on the physical intimacy front. Second, they match strongly emotionally. ... Moreover, Pisces Scorpio parents provide a wonderful family unit that offers stability and compassion.";
        }
        if(star=="Pisces" && pstar=="Aquarius")
        {
            cout<<"Pisces Aquarius is sometimes a bad match. ... As with all low scoring matches, it can certainly work well if you're both prepared to compromise in key areas, in this instance however you're far more likely to be okay with that than your Aquarius is, so things are largely out of your control.";
        }
        if(star=="Pisces" && pstar=="Aries")
        {
            cout<<"Overall Compatibility. Aries and Pisces have a lot in common. Both signs are creative, pleasure seeking, and generous. ... Pisces are much more emotional than fiery Aries, and conflicts between these two can often devolve into one side (Pisces) crying while the other side (Aries) shouts.";
        }
        if(star=="Pisces" && pstar=="Gemini")
        {
            cout<<"Gemini and Pisces, both value love, but their perspectives on it are different from each other. Gemini is more realistic and wants more real and meaningful love. ... They are highly romantic, but their perspective on love quite resembles that of a fairy tale. So, they both need some balance to keep love alive in them";
        }
        if(star=="Pisces" && pstar=="Leo")
        {
            cout<<"Pisces and Leo relationships tend to be long term. If they can make it past the first year of the relationship, the duo will usually be together for many years. Leo and Pisces also make for wonderful parents, offering a nurturing and caring environment for children to grow and prosper.";
        }
     	if(star=="Pisces" && pstar=="Libra")
        {
            cout<<"Pisces and Libra are so astrologically compatible. Both signs are known for their generous, loving, and loyal ways, and as a result, a Libra-Pisces pairing tends to be a match made in astrological heaven.";
        }
        if(star=="Pisces" && pstar=="Sagittarius")
        {
            cout<<"Both Sagittarius and Pisces are idealists, and they will find mutual harmony in sharing their ideas and notions. The most reliable quality that bonds these two together is their outlook in life, and how mutually open-minded and idealistic they are. Sagittarius is known to be a truth seeker of the zodiac.";
        }




        //COMPARISION OF TAURUS WITH ALL OTHER.



		if(star=="Taurus" && pstar=="Capricon")
        {
            cout<<"Taurus and Capricorn is a very harmonious match, with similar views on life, finances and many other key areas. This one has soulmate potential, and is one of your most compatible matches!";
        }
        if(star=="Taurus" && pstar=="Pisces")
        {
            cout<<"Pisces Taurus is a good match as long as you can appreciate each others strengths and not try to change each other. ... This is a strong willed and authoritative partner, which many Pisces appreciate - when they decide they want something it can be very hard to dissuade them!";
        }

        if(star=="Taurus" && pstar=="Taurus")
        {
            cout<<"Taurus and Taurus are lovers in the Garden of Eden—and the garden of eating! When two Bulls mate, you've got a pair that both crave comfort and security. ... Taurus in love is sensual, and two can get lost when it's time to relax and surrender to pleasure";
        }
        if(star=="Taurus" && pstar=="Cancer")
        {
            cout<<"Taurus & Cancer Zodiac Signs: A Highly Compatible Match. Despite the challenges, these two are a highly compatible zodiac match. They're both commitment-oriented signs who value home, family, and security. They're loyal, nurturing by nature, and complement each other really well";
        }
        if(star=="Taurus" && pstar=="Virgo")
        {
            cout<<"Virgo and Taurus Compatibility. This is a reliable partner, honest, straightforward and often with a great sense of purpose. You'll find them both inspiring and comforting. You share many values and goals, and will understand each other intuitively, while sharing the same respect for responsibility and productivity.";
        }
        if(star=="Taurus" && pstar=="Scorpio")
        {
            cout<<"Taurus in love is tactile, loyal and looking for a sure thing. Scorpio in love is enveloping, jealous and fiercely protective. They telepath a mutual understanding of what that reserve and seriousness are about. Through sensual pleasure and relaxed, but intense times, they gain entrance into the others private world.";
        }
        if(star=="Taurus" && pstar=="Aquarius")
        {
            cout<<"The Taurus-Aquarius compatibility can be made easier or better when they two halves of the couple realize that their live story might not be as funky or easy going as others. The Taurean tends to insist on high levels of trust but then he/she barely gets the same from the Aquarius.";
        }
        if(star=="Taurus" && pstar=="Aries")
        {
            cout<<"A Aries and Taurus are quite compatible. To sum it up, Taurus stabilizes the impulsive Aries energies, for enduring love. And the Aries spark assures that love will never stagnate and get too fixed in routine. When there's chemistry, this is an enduring match!";
        }
        if(star=="Taurus" && pstar=="Gemini")
        {
            cout<<"Taurus lightens up with Gemini, and both are samplers of the buffet of life. Gemini in love is flirty, restless and fun to be with. Taurus in love is a comfort-lover, sensual and a stabilizer. With this combo, opposites attract sometimes, since each offers what the other lacks";
        }
        if(star=="Taurus" && pstar=="Leo")
        {
            cout<<"Taurus and Leo, communication is key. ... Though Taurus and Leo are both extremely passionate, and things between them can sometimes get out of control, they know how to apologize and make up.";
        }
        if(star=="Taurus" && pstar=="Libra")
        {
            cout<<"Taurus and Libra are signs that love to be in love. Libra is a breezy dream to Taurus, who appreciates this air sign's social grace and elegant style in dress and conversation. Libra is intrigued by the settled aura of the Bull, bringing up visions of a happy domestic life";
        }
        if(star=="Taurus" && pstar=="Sagittarius")
        {
            cout<<"The Taurus and Sagittarius pairing have a reputation for hot sexual chemistry. ... Taurus is slow earth and likes to stay put, while Sagittarius is fast fire -- the two elements are at odds. However, look for other love compatibility factors in the birth chart, especially the Moon and Venus signs";
        }



        //COMPARISION OF CANCER WITH ALL OTHER.




		if(star=="Cancer" && pstar=="Capricon")
        {
            cout<<"Capricorn has a stable and solid demeanor that can provide the flowy nature of their Cancer the stability they need. It makes them one of the most dependable Cancer compatible signs";
        }
        if(star=="Cancer" && pstar=="Pisces")
        {
            cout<<"Pisces and Cancer Compatibility. This is a very intuitive, caring and affectionate match. You're both deeply romantic and sentimental, and intuitively understand each other, providing the sensitivity, tenderness, compassion and stability you both need.";
        }
        if(star=="Cancer" && pstar=="Taurus")
        {
            cout<<"Taurus & Cancer Zodiac Signs: A Highly Compatible Match.Despite the challenges, these two are a highly compatible zodiac match. They're both commitment-oriented signs who value home, family, and security. They're loyal, nurturing by nature, and complement each other really well";
        }
		if(star=="Cancer" && pstar=="Cancer")
        {
            cout<<"Cancer and Cancer. When two Cancers are together, things generally go pretty well. They get along particularly well in relationships and as close friends because of their mutual empathetic and generous characteristics. Communication can be difficult at times though as Cancers can be moody and easily hurt.";
        }
        if(star=="Cancer" && pstar=="Virgo")
        {
            cout<<"In relationships, the Cancer-Virgo match can be loving, sensual, and devoted. Cancer values the loyalty that Virgo offers, and tries hard to show it through day-to-day nurturing. ... Intimacy can be yet another chance to please each other, with Virgo's masterful attention to detail and Cancer's languid sensuality.";
        }
        if(star=="Cancer" && pstar=="Scorpio")
        {
            cout<<"Love Between Cancer and Scorpio.Cancer is one of the most loving signs in astrology. ... When it comes to love, Cancer and Scorpio match in two ways: 1) emotionally and 2) intuitively. There also exists a deep spiritual connection. Because they are water signs, both are able to “dive deep” into one another's hearts";
        }
        if(star=="Cancer" && pstar=="Aquarius")
        {
            cout<<"The great thing about this match is the support they can find in each other. Cancer is incredibly kind, forgiving, and gracious—they will be there for their partner and do all they can for them. ... Cancer can help Aquarius by showering them with love—but remember, Aquarius takes a while to reciprocate in the same way.";
        }
        if(star=="Cancer" && pstar=="Aries")
        {
            cout<<"Cancer needs a high amount of romance, dedication, loyalty, and pride. Aries and Cancer may connect well by arguing, which gets them heated and passionate. Aries needs to remember Cancer is sensitive—super sensitive and moody.";
        }
        if(star=="Cancer" && pstar=="Gemini")
        {
            cout<<"Gemini and Cancer are a highly incompatible zodiac match. Finding a middle ground will be challenging for both partners, as they have very different needs in a relationship and one or both partners will end up feeling unfulfilled in some way.";
        }
        if(star=="Cancer" && pstar=="Leo")
        {
            cout<<"Cancer and Leo both have a playful attitude and a desire for an epic, enduring romance. These two are neighbors on the zodiac wheel, and depending on the degree of their sun, they share many of the same cosmic energies. ... Leo likes romantic gestures, and Cancer knows how and when to show sincere affection.";
        }
        if(star=="Cancer" && pstar=="Libra")
        {
            cout<<"Cancers and Libras have high compatibility in terms of trust. Although they go about it in different ways, both signs are deep-thinkers and value making their partners happy, which gives them an average level of compatibility for intellect and romance.";
        }
        if(star=="Cancer" && pstar=="Sagittarius")
        {
            cout<<"Cancer and Sagittarius compatibility is volatile because the two personalities have remarkable differences. Sometimes this couple shares enough attributes, so it strengthens the relationship's longevity. When emotions, intellect, and values align, Cancer and Sagittarius can make a go of love.";
        }




        //COMPARISION OF VIRGO WITH ALL OTHER.





		if(star=="Virgo" && pstar=="Capricon")
        {
            cout<<"Virgo and Capricorn are a sweetly matched pair that can become wholly devoted to one another. Neither wants a fly-by-night affair and will instantly pick up on the earthy depth as promising for a long-term relationship. Both need the reassurance of respect. Both find loyalty and enduring love a big draw.";
        }
        if(star=="Virgo" && pstar=="Pisces")
        {
            cout<<"The connection is strong between a Virgo and Pisces.You will share a strong and emotional connection. Virgo will tend to let go and let Pisces in. Virgo tends to keep their guard up but with Pisces, they are more willing to let Pisces in because they know Pisces will not judge them.";
        }
        if(star=="Virgo" && pstar=="Taurus")
        {
            cout<<"Virgo and Taurus Compatibility. This is a reliable partner, honest, straightforward and often with a great sense of purpose. You'll find them both inspiring and comforting. You share many values and goals, and will understand each other intuitively, while sharing the same respect for responsibility and productivity.";
        }
        if(star=="Virgo" && pstar=="Cancer")
        {
            cout<<"In relationships, the Cancer-Virgo match can be loving, sensual, and devoted. Cancer values the loyalty that Virgo offers, and tries hard to show it through day-to-day nurturing. ... Intimacy can be yet another chance to please each other, with Virgo's masterful attention to detail and Cancer's languid sensuality.";
        }
        if(star=="Virgo" && pstar=="Virgo")
        {
            cout<<"Two Virgo partners will almost immediately intuitively get one another. ... As strong nurturers, Virgo partners offer each other a level of patience and understanding. The couple will explore new forms of communication together, and before you know it, both have gained a lover and a friend.";
        }
        if(star=="Virgo" && pstar=="Scorpio")
        {
            cout<<"verall Scorpio and Virgo are an excellent match. Though they run into problems when it comes to money and career, both the sex and the communication is too great to pass up";
        }
        if(star=="Virgo" && pstar=="Aquarius")
        {
            cout<<"Virgo and Aquarius is that it's unlike other combinations, in the sense that the energy is extremely fragile. This combo has the ability to work REALLY well, or REALLY bad. These signs are prone to disconnect, making it very easy to end the connection altogether.";
        }
        if(star=="Virgo" && pstar=="Aries")
        {
            cout<<"Virgo and Aries will blend together and have an ambitious and practical life together that will have a gratifying standard for achievements. ... They take charge of the relationship as they enjoy the soothing qualities of their Virgo partner, who doesn't mind the assertiveness as long as their partner doesn't demean them.";
        }
        if(star=="Virgo" && pstar=="Gemini")
        {
            cout<<"Gemini and Virgo: Friendship Compatibility.As mutable signs, Virgo and Gemini are both very adaptable and they both enjoy learning new things. Both signs are ruled by Mercury, the planet of communication and wisdom, which means they both enjoy talking, listening, observing, learning.";
        }
        if(star=="Virgo" && pstar=="Leo")
        {
            cout<<"Virgo and Leo together can make every day magical but also productive. Both signs love to be effective and to see tangible rewards from their hard work. Leo's humor takes the edge off Virgo's serious nature, while Virgo shows the Lion the value of patience in getting what he or she wants.";
        }
        if(star=="Virgo" && pstar=="Libra")
        {
            cout<<"Virgo admires Libra's clear mind and drive for balance in all things. ... Many of the insights of Libra are brilliant, but Virgo could lose trust, wondering when it's their turn to be lampooned. Dates are a chance to talk, which they both love to do, to the point of talking over each other.";
        }
        if(star=="Virgo" && pstar=="Sagittarius")
        {
            cout<<" Virgo and a Sagittarius actually make it work–and since they're super flexible people who are willing to adapt to another's lifestyle–it's a strong pair. It's an odd pair, too";
        }



        //COMPARISION OF SCORPIO WITH ALL OTHER.


		if(star=="Scorpio" && pstar=="Capricon")
        {
            cout<<"Capricorn and Scorpio are a couple that finds worldly power sexy and they thrive when they support the other's steps to mastery. But in the relationship, the model of shared power works best, and when that delicate balance is in place, this is an enduring match.";
        }
        if(star=="Scorpio" && pstar=="Pisces")
        {
            cout<<"A love match between Scorpio and Pisces can quickly go pear-shaped if one of the following is true: The Pisces is floundering with low self-esteem and is susceptible to control.";
        }
        if(star=="Scorpio" && pstar=="Taurus")
        {
            cout<<"Taurus in love is tactile, loyal and looking for a sure thing. Scorpio in love is enveloping, jealous and fiercely protective. They telepath a mutual understanding of what that reserve and seriousness are about. Through sensual pleasure and relaxed, but intense times, they gain entrance into the others private world";
        }
        if(star=="Scorpio" && pstar=="Cancer")
        {
            cout<<"Scorpio and Cancer are highly compatible. They connect emotionally, physically and intellectually. Once a bond has been established, the relationship tends to be long term.";
        }
        if(star=="Scorpio" && pstar=="Virgo")
        {
            cout<<"Overall Scorpio and Virgo are an excellent match. Though they run into problems when it comes to money and career, both the sex and the communication is too great to pass up.";
        }
        if(star=="Scorpio" && pstar=="Scorpio")
        {
            cout<<"Scorpio and Scorpio are two peas in an intensely charged pod. A Scorpio desires—and at times fears—the whole spectrum of love. From love's terrors to its ecstatic heights, two Scorpios together experience it all. Two psychic Scorpios tuned in to each other can be a cathartic, healing affair or a disaster in the making.";
        }
        if(star=="Scorpio" && pstar=="Aquarius")
        {
            cout<<"Aquarius and Scorpio do not make a good match. In terms of astrology, water and air are not compatible because they are just too different. ... Sex is very important to a Scorpio, it's one of the ways they express their love and devotion to their partner.";
        }
        if(star=="Scorpio" && pstar=="Aries")
        {
            cout<<"Aries-Scorpio Love Compatibility. The Aries-Scorpio love match could go either ways. Since Mars is also representative of passion, the Aries-Scorpio love match will be exciting. ... This is not to mean that the two cannot bond well with each other but signifies a lot of passion between the two.";
        }
        if(star=="Scorpio" && pstar=="Gemini")
        {
            cout<<"Gemini and Scorpio bring together the changeable nature of the Twins with the still waters run deep type with the Scorpion. They are incompatible elements (air and water), and this can affect their emotional make-up. And take note -- these signs are quincunx to each other (150 degrees). It's tough to relate";
        }
        if(star=="Scorpio" && pstar=="Leo")
        {
            cout<<"Leo and Scorpio are legendary lovers, where passion meets fierce loyalty and spikes in fiery conflict. Leo in love is proud, generous and demanding. Scorpio in love is power-wise and enveloping. ... In this love match, trust to make it through the raw moments is everything.";
        }
        if(star=="Scorpio" && pstar=="Libra")
        {
            cout<<"Libra and Scorpio have been called the relationship signs for their coupling capacity. Libra loves to be swept up in a breathless affair, and Scorpio has the urge to merge. ... Libra in love is into togetherness and understands give and take. Scorpio in love is jealous, dramatic, and secretive.";
        }
        if(star=="Scorpio" && pstar=="Sagittarius")
        {
            cout<<"Scorpio and Sagittarius can have love compatibility. Like any match, there is potential and there are pitfalls. If the couple accepts their differences and don't try to change the other, they can build trust. Scorpio and Sagittarius are both very physical in their love adventures.";
        }





        //COMPARISION OF AQUARIUS WITH ALL OTHER.



		if(star=="Aquarius" && pstar=="Capricon")
        {
            cout<<"Aquarius and Capricorn are both very ambitious, but about different things. Aquarius' mission in life is to share their ideas. ... Capricorn and Aquarius tend to work best when they're teammates. Capricorn can ground Aquarius' visions in the present and make sure they aren't getting ahead of themselves.";
        }
        if(star=="Aquarius" && pstar=="Pisces")
        {
            cout<<"A relationship between a Pisces and an Aquarius is a love match that brings so much satisfaction. Both are idealistic, compassionate, and dream believers. Aquarius is full of innovative ideas, where as Pisces can be their ever-loyal and supportive partner who would stand by them all throughout the way.";
        }
        if(star=="Aquarius" && pstar=="Taurus")
        {
            cout<<"The Taurus-Aquarius compatibility can be made easier or better when they two halves of the couple realize that their live story might not be as funky or easy going as others. The Taurean tends to insist on high levels of trust but then he/she barely gets the same from the Aquarius.";
        }
        if(star=="Aquarius" && pstar=="Cancer")
        {
            cout<<"Cancer and Aquarius can be a challenging relationship to make work. The low scores represent the initial compatibility of this match. ... If you can both adapt to the others style this is a relationship which will improve steadily over time, and eventually rival any other match.";
        }
        if(star=="Aquarius" && pstar=="Virgo")
        {
            cout<<"A significant shared interest between the Virgo and Aquarius is their love for ideas and concepts. They both have very sharp minds that can really think out of the box, and they are both very open-minded. They both have above-average intelligence and can be quite smart.";
        }
        if(star=="Aquarius" && pstar=="Scorpio")
        {
            cout<<"Generally speaking, Aquarius and Scorpio do not make a good match. ... The intense attraction that is felt between Scorpio and Aquarius usually leads to a great sex life which is one of the reasons your relationship can be successful. The Scorpio is famous for its insatiable sex drive so you had better put out or get out.";
        }
        if(star=="Aquarius" && pstar=="Aquarius")
        {
            cout<<"Two Aquarius together is just double fun and double excitement. They may have different styles but initially they share common interests and similar ideology. They both are always first a friend to each other and then they look at the inner side of their relationship.";
        }
        if(star=="Aquarius" && pstar=="Aries")
        {
            cout<<"There is a lot of possibility vested in the Aries-Aquarius love match! Much more tact and vital understanding will be needed to be point into the match for the same to be fruitful. Since the two signs are suitable in temperamental terms, this will not exactly be very tough to do.";
        }
        if(star=="Aquarius" && pstar=="Gemini")
        {
            cout<<"Gemini and Aquarius are both free thinkers that need a lot of leeway in love. ... When they come together, it's a meeting of two bright minds, and that's where the seeds of love begin to grow. Nothing is too taboo for Aquarius, and Gemini is flexible enough to try anything once.";
        }
        if(star=="Aquarius" && pstar=="Leo")
        {
            cout<<"Aquarius and Leo are both daring, passionate, and courageous, and this is what will cause an attraction between them. Leo will be incredibly attracted to the depth of the Aquarian's mind, and the Aquarius will be attracted to Leo's ability to take charge and lead the masses.";
        }
        if(star=="Aquarius" && pstar=="Libra")
        {
            cout<<"Aquarius and Libra will have a harmonious friendship. With Libra's need for balance and their people-pleasing attitude, and Aquarius' free spirit but adaptive nature, these two zodiac signs share a love for life, freedom, and intellect. An Aquarian will want to be spontaneous, explore, and meet new people.";
        }
        if(star=="Aquarius" && pstar=="Sagittarius")
        {
            cout<<"Sagittarius and Aquarius is a great match! The Sagittarius inquisitiveness and enthusiasm works perfectly with Aquarius's vision and forward thinking, while overall you have a very similar approach to life";
        }





        //COMPARISION OF ARIES  WITH ALL OTHER.





        if(star=="Aries" && pstar=="Capricon")
        {
            cout<<"Aries and Capricorn bring full engagement to love but have very different natures. There could be immediate tension since astrologically the Ram and Goat are at odds (square each other). They lock horns!";
        }
        if(star=="Aries" && pstar=="Pisces")
        {
            cout<<"Aries and Pisces have a lot in common. Both signs are creative, pleasure seeking, and generous. ... Pisces are much more emotional than fiery Aries, and conflicts between these two can often devolve into one side (Pisces) crying while the other side (Aries) shouts.";
        }
        if(star=="Aries" && pstar=="Taurus")
        {
            cout<<"A late Aries and early Taurus are quite compatible. To sum it up, Taurus stabilizes the impulsive Aries energies, for enduring love. And the Aries spark assures that love will never stagnate and get too fixed in routine. When there's chemistry, this is an enduring match!";
        }
        if(star=="Aries" && pstar=="Cancer")
        {
            cout<<"A Cancer and Aries relationship will cover a lot of ground. Both signs are early in the zodiac, but Aries is fire and Cancer is water. ... This relationship is a square relationship, which can make for a lot of compatibility or tension.";
        }
        if(star=="Aries" && pstar=="Virgo")
        {
            cout<<"Aries can be very straightforward and honorable that can make them Virgo best love match, as they also enjoy a faithful and trustworthy partner. Virgo and Aries partners can have a strong companionship with each other by offering honesty and getting honesty in return";
        }
        if(star=="Aries" && pstar=="Scorpio")
        {
            cout<<"Aries-Scorpio Love Compatibility. The Aries-Scorpio love match could go either ways. Since Mars is also representative of passion, the Aries-Scorpio love match will be exciting. ... This is not to mean that the two cannot bond well with each other but signifies a lot of passion between the two.";
        }
        if(star=="Aries" && pstar=="Aquarius")
        {
            cout<<"The Aries and Aquarius can be a somewhat complicated pair but they tend be highly compatible as friends. They really know how to let their hair down and make the most of life, ensuring that there will rarely be a dull moment when they're in each others company.";
        }
        if(star=="Aries" && pstar=="Aries")
        {
            cout<<"Two Aries are physically powerful in the bedroom, and at times can be aggressive. ... Aries forgives easily and doesn't hold onto anger, but here you've got two alphas in one pack. There may always be a combative feeling to the relationship. And when things get complicated, one or both may bail too easily.";
        }
        if(star=="Aries" && pstar=="Gemini")
        {
            cout<<"The zodiac signs of Aries and Gemini are well-suited to each other given that there a very many traits common between the two. ... The compatibility between Aries and Gemini is huge and in terms of communication and bonding, the two seem to hit it on a high note every time.";
        }
        if(star=="Aries" && pstar=="Leo")
        {
            cout<<"Aries and Leo is a great match, you have much in common and enough subtle differences and competiveness to keep a continuous flame burning.";
        }
        if(star=="Aries" && pstar=="Libra")
        {
            cout<<"On the Zodiac, Aries and Libra are polar opposites. ... It's also a steamy match, since Libra traditionally has a way of drawing out a lover, and Aries moves in quickly. There is an allure here, with signs on opposite ends of the Zodiac. It's a lover and a fighter, in one pairing.";
        }
        if(star=="Aries" && pstar=="Sagittarius")
        {
            cout<<"Aries and Sagittarius is a great match, and you have much in common. You're both highly adventurous and curious, active, spontaneous, outgoing and fun loving. Not many other signs can keep up with either of you, but in each other you've not only found someone who can, but who will enjoy the challenge of doing so.";
        }



        //COMPARISION OF GEMINI WITH ALL OTHER.


		if(star=="Gemini" && pstar=="Capricon")
        {
            cout<<"Capricorn and Gemini make a strong relationship in that they both are apt to doing what makes them happy in their own corners of the world. Both can come together as long as with some compromise they keep their own worlds separate so that on a rare occasion they can do their own thing.";
        }
        if(star=="Gemini" && pstar=="Pisces")
        {
            cout<<"Gemini and Pisces, both value love, but their perspectives on it are different from each other. Gemini is more realistic and wants more real and meaningful love. But on the contrary, Pisceans are very imaginative. They are highly romantic, but their perspective on love quite resembles that of a fairy tale";
        }
        if(star=="Gemini" && pstar=="Taurus")
        {
            cout<<"Gemini puts Taurus at ease when they demonstrate they're at least a little bit consistent. Like showing up on time, as Taurus values punctuality, and resents time-wasters. Taurus seeks stability and rootedness, and Gemini has itchy feet and thrives on change. It's a dynamic match when other planets help tip the scales.";
        }
        if(star=="Gemini" && pstar=="Cancer")
        {
            cout<<"Gemini and Cancer are a highly incompatible zodiac match. Finding a middle ground will be challenging for both partners, as they have very different needs in a relationship and one or both partners will end up feeling unfulfilled in some way.";
        }
        if(star=="Gemini" && pstar=="Virgo")
        {
            cout<<"Virgo and Gemini are bound to have trust issues. These signs won't feel entirely comfortable together because they want different things. Geminis love adventure and spontaneity. But Virgos love consistency and honesty.";
        }
        if(star=="Gemini" && pstar=="Scorpio")
        {
            cout<<"Gemini and Scorpio bring together the changeable nature of the Twins with the still waters run deep type with the Scorpion. They are incompatible elements (air and water), and this can affect their emotional make-up. And take note -- these signs are quincunx to each other (150 degrees).";
        }
        if(star=="Gemini" && pstar=="Aquarius")
        {
            cout<<"Gemini and Aquarius compatibility is extremely high. These air signs make a great match because they share the same interests. They will never run out of fun ways to spend a day together. Their dates will be exciting, even once they've been together for a while.";
        }
        if(star=="Gemini" && pstar=="Aries")
        {
            cout<<"Aries and Gemini are well-suited to each other given that there a very many traits common between the two. ... The compatibility between Aries and Gemini is huge and in terms of communication and bonding, the two seem to hit it on a high note every time.";
        }
        if(star=="Gemini" && pstar=="Gemini")
        {
            cout<<"With a smidge of maturity, two Geminis keep each other entertained, always looking for new things to do, see, and learn about together. They'll create either a whirlwind affair that burns out quickly or a dynamic duo that surprises even themselves—and everyone in their vast circle—by creating something real.";
        }
        if(star=="Gemini" && pstar=="Leo")
        {
            cout<<"Gemini and Leo compatibility is naturally strong. These two signs have multiple similarities, such as their passion and love of being social. Their differences also complement each other well. Confident Leos help indecisive Geminis, and intelligent Geminis can steady naive Leos";
        }
        if(star=="Gemini" && pstar=="Libra")
        {
            cout<<"Gemini and Libra have an easy rapport since they're genuinely curious about other people. Both have a light approach, which makes the relationship feel fresh. ... Gemini in Love wants to make you laugh, or see the world in a new way. Libra in Love has high standards and is ultra sensitive to the reflection of the lover.";
        }
        if(star=="Gemini" && pstar=="Sagittarius")
        {
            cout<<"The Gemini-Sagittarius couple are friends first, which can help them through the rough, non-romantic times. The relationship has the potential to be a compatible, enduring match, with new fascinations around every corner. This match brings together mutable air (Gemini) and mutable fire (Sagittarius).";
        }



        //COMPARISION OF LEO WITH ALL OTHER.



		if(star=="Leo" && pstar=="Capricon")
        {
            cout<<"Leo and Capricorn are a bit of an odd couple. However, both are alphas who share a quest for power, achievement, and status. There's some mutual admiration when they behold one another. ... Capricorns in love are particular, demanding, and often mindful of social rank.";
        }
        if(star=="Leo" && pstar=="Pisces")
        {
            cout<<"Pisces and Leo relationships tend to be long term. If they can make it past the first year of the relationship, the duo will usually be together for many years. Leo and Pisces also make for wonderful parents, offering a nurturing and caring environment for children to grow and prosper";
        }
        if(star=="Leo" && pstar=="Taurus")
        {
            cout<<"They thrive together when their shared intensity is used to manifest their dreams. With Taurus and Leo, communication is key. ... Though Taurus and Leo are both extremely passionate, and things between them can sometimes get out of control, they know how to apologize and make up.";
        }
        if(star=="Leo" && pstar=="Cancer")
        {
            cout<<"Cancer and Leo both have a playful attitude and a desire for an epic, enduring romance. These two are neighbors on the zodiac wheel, and depending on the degree of their sun, they share many of the same cosmic energies. They are fun-loving and creative.";
        }
        if(star=="Leo" && pstar=="Virgo")
        {
            cout<<"Virgo and Leo together can make every day magical but also productive. Both signs love to be effective and to see tangible rewards from their hard work. Leo's humor takes the edge off Virgo's serious nature, while Virgo shows the Lion the value of patience in getting what he or she wants";
        }
        if(star=="Leo" && pstar=="Scorpio")
        {
            cout<<"Leo and Scorpio are legendary lovers, where passion meets fierce loyalty and spikes in fiery conflict. Leo in love is proud, generous and demanding. Scorpio in love is power-wise and enveloping. ... In this love match, trust to make it through the raw moments is everything";
        }
        if(star=="Leo" && pstar=="Aquarius")
        {
            cout<<"Aquarius and Leo the Perfect Match? ... Aquarius and Leo may seem like opposites, but the two have more in common than you might think. When they come together, expect a dynamic burst of creativity and stubbornness. Both signs feel misunderstood, have a major stubborn streak, and are natural-born leaders";
        }
        if(star=="Leo" && pstar=="Aries")
        {
            cout<<"Aries and Leo is a great match, you have much in common and enough subtle differences and competiveness to keep a continuous flame burning.";
        }
        if(star=="Leo" && pstar=="Gemini")
        {
            cout<<"Gemini and Leo compatibility is naturally strong. These two signs have multiple similarities, such as their passion and love of being social. Their differences also complement each other well. Confident Leos help indecisive Geminis, and intelligent Geminis can steady naive Leos.";
        }
        if(star=="Leo" && pstar=="Leo")
        {
            cout<<"Gemini and Leo compatibility is naturally strong. These two signs have multiple similarities, such as their passion and love of being social. Their differences also complement each other well. Confident Leos help indecisive Geminis, and intelligent Geminis can steady naive Leos.";
        }
        else if(star=="Leo" && pstar=="Libra")
        {
            cout<<"Gemini and Libra have an easy rapport since they're genuinely curious about other people. Both have a light approach, which makes the relationship feel fresh. ... Gemini in Love wants to make you laugh, or see the world in a new way. Libra in Love has high standards and is ultra sensitive to the reflection of the lover.";
        }
        else if(star=="Leo" && pstar=="Sagittarius")
        {
            cout<<"The Gemini-Sagittarius couple are friends first, which can help them through the rough, non-romantic times. The relationship has the potential to be a compatible, enduring match, with new fascinations around every corner. This match brings together mutable air (Gemini) and mutable fire (Sagittarius).";
        }




        //COMPARISION OF LIBRA WITH ALL OTHER.


		if(star=="Libra" && pstar=="Capricon")
        {
            cout<<"Capricorn tends to the structure of the relationship, while Libra adds the flourishes. ... Libras tend to be more prone to losing their heads in love, while Capricorns remain ever the pragmatist.";
        }
        if(star=="Libra" && pstar=="Pisces")
        {
            cout<<"If there is anyone who can balance out a Libra's restless energy, it's the fish of the zodiac, which is why Pisces and Libra are so astrologically compatible. Both signs are known for their generous, loving, and loyal ways, and as a result, a Libra-Pisces pairing tends to be a match made in astrological heaven.";
        }
        if(star=="Libra" && pstar=="Taurus")
        {
            cout<<"Taurus and Libra are signs that love to be in love. Libra is a breezy dream to Taurus, who appreciates this air sign's social grace and elegant style in dress and conversation. Libra is intrigued by the settled aura of the Bull, bringing up visions of a happy domestic life.";
        }
        if(star=="Libra" && pstar=="Cancer")
        {
            cout<<"Libra Cancer compatibility is often highest in romantic relationships. Both Libras and Cancers love being in love and desire a close, dedicated relationship. ... Libras often appreciate letting calm, confident Cancers take the lead, while Cancers love the sense of fun and excitement Libras can bring to relationships";
        }
        if(star=="Libra" && pstar=="Virgo")
        {
            cout<<"Virgo admires Libra's clear mind and drive for balance in all things. ... Many of the insights of Libra are brilliant, but Virgo could lose trust, wondering when it's their turn to be lampooned. Dates are a chance to talk, which they both love to do, to the point of talking over each other.";
        }
        if(star=="Libra" && pstar=="Scorpio")
        {
            cout<<"Libra and Scorpio have been called the relationship signs for their coupling capacity. Libra loves to be swept up in a breathless affair, and Scorpio has the urge to merge. ... Libra in love is into togetherness and understands give and take. Scorpio in love is jealous, dramatic, and secretive.";
        }
        if(star=="Libra" && pstar=="Aquarius")
        {
            cout<<"Aquarius and Libra will have a harmonious friendship. With Libra's need for balance and their people-pleasing attitude, and Aquarius' free spirit but adaptive nature, these two zodiac signs share a love for life, freedom, and intellect. An Aquarian will want to be spontaneous, explore, and meet new people.";
        }
        if(star=="Libra" && pstar=="Aries")
        {
            cout<<"Libra loves being in love, and Aries is a passionate pursuer. ... It's also a steamy match, since Libra traditionally has a way of drawing out a lover, and Aries moves in quickly. There is an allure here, with signs on opposite ends of the Zodiac. It's a lover and a fighter, in one pairing.";
        }
        if(star=="Libra" && pstar=="Gemini")
        {
            cout<<" Gemini and Libra make a compatible zodiac match. They have similar outlooks and approaches to life, they communicate well, and they'll have a lot of fun together.";
        }
        if(star=="Libra" && pstar=="Leo")
        {
            cout<<"Leo is a bold fire sign and Libra is a sophisticated air sign—distinct yet totally compatible elements. Leo and Libra make a sextile aspect, which means they are 60º apart on the zodiac wheel: a harmonious blend! Fire signs and air signs are both bright, action-oriented and enjoy making a splash.";
        }
        if(star=="Libra" && pstar=="Libra")
        {
            cout<<"Gemini and Libra have an easy rapport since they're genuinely curious about other people. Both have a light approach, which makes the relationship feel fresh. ... Gemini in Love wants to make you laugh, or see the world in a new way. Libra in Love has high standards and is ultra sensitive to the reflection of the lover.";
        }
        if(star=="Libra" && pstar=="Sagittarius")
        {
            cout<<"The Gemini-Sagittarius couple are friends first, which can help them through the rough, non-romantic times. The relationship has the potential to be a compatible, enduring match, with new fascinations around every corner. This match brings together mutable air (Gemini) and mutable fire (Sagittarius)";
        }



        //COMPARISION OF SAGITTARIUS WITH ALL OTHER.


		if(star=="Sagittarius" && pstar=="Capricon")
        {
            cout<<"Sagittarius and Capricorn meet in a clash of attitudes. Yet the differences give the relationship the makings of something profound, as much about supporting each other in worldly ambitions as in the next great adventure. ... Capricorn in love is sincere, sensual, sometimes status-oriented.";
		}
		if(star=="Sagittarius" && pstar=="Pisces")
        {
            cout<<"Like all couples, if Pisces and Sagittarius compromise, they can make it work. The key lies in their expansive, altruistic, and exuberant nature. ... Sagittarius and Pisces do best together if they are working towards some common goal, preferably one that helps many people.";
		}
		if(star=="Sagittarius" && pstar=="Taurus")
        {
            cout<<"It's a passionate love match! But a few red flags are hoisted when it comes to long-term romance. Unless other energies bring balance, Taurus and Sagittarius find themselves a temperamental odd couple. ... Taurus is slow earth and likes to stay put, while Sagittarius is fast fire -- the two elements are at odds";
		}
		if(star=="Sagittarius" && pstar=="Cancer")
        {
            cout<<"Cancer and Sagittarius can be a challenging relationship to make work. The low scores represent the initial compatibility of this match. ... If you can both adapt to the others style this is a relationship which will improve steadily over time, and eventually rival any other match.";
		}
		if(star=="Sagittarius" && pstar=="Virgo")
        {
            cout<<"What Makes the Relationship work? The good news is that Virgo and Sagittarius are mutable signs and this makes them both flexible and adaptable people who are not afraid to change their minds. When in love these two will be willing to adapt, when necessary, to the other's style";
		}
		if(star=="Sagittarius" && pstar=="Scorpio")
        {
            cout<<"Scorpio and Sagittarius can have love compatibility. Like any match, there is potential and there are pitfalls. If the couple accepts their differences and don't try to change the other, they can build trust. Scorpio and Sagittarius are both very physical in their love adventures.";
		}
		if(star=="Sagittarius" && pstar=="Aquarius")
        {
            cout<<"Sagittarius and Aquarius is a great match! The Sagittarius inquisitiveness and enthusiasm works perfectly with Aquarius's vision and forward thinking, while overall you have a very similar approach to life.";
		}
		if(star=="Sagittarius" && pstar=="Aries")
        {
            cout<<"The fact that both these zodiac signs comes with common traits and similar inclinations, makes it easy for the two to stay together. The most common traits between the two of these signs are spontaneity, activity, curiosity and a love for fun. ... However, the Aries-Sagittarius love match is a hit from the very start.";
		}
		if(star=="Sagittarius" && pstar=="Gemini")
        {
            cout<<"Both Gemini and Sagittarius are very independent and are always on the move, so they can easily keep up with each other and give the other space if needed. They know how to have fun together — their sense of humor matches up, and there's never a dull moment between the two.";
		}
		if(star=="Sagittarius" && pstar=="Leo")
        {
            cout<<"Leo and Sagittarius are hugely animated and charismatic signs. ... They are high vitality signs, though Leo has outbursts, and Sagittarius has rare endurance. Sagittarius draws Leo outdoors and soon both are glowing with fresh fire in the cheeks. Falling in love makes them feel even more alive.";
		}
		if(star=="Sagittarius" && pstar=="Libra")
        {
            cout<<"The Gemini-Sagittarius couple are friends first, which can help them through the rough, non-romantic times. The relationship has the potential to be a compatible, enduring match, with new fascinations around every corner. This match brings together mutable air (Gemini) and mutable fire (Sagittarius)";
		}
		if(star=="Sagittarius" && pstar=="Sagittarius")
        {
            cout<<"Sagittarius and Sagittarius. Sagittarians can form quick bonds together based on their mutual independence, desire to explore, and spunkiness. They respect each other's need for autonomy and experience a thrilling connection that runs on both partners' never ending thirst for new knowledge and ideas.";
		}
    }
};

int main()
{
    friendship f1;
    love l1;
    futureprediction p1;
    int a;
    char b;
    do
    {
        cout<<"**************************************WHAT YOU WANT TO KNOW?****************************************************"<<endl;
    cout<<" 1.KNOW YOUR STAR "<<endl<<" 2.KNOW SOMEONE ELSE STAR "<<endl<<" 3.FRIENDSHIP BETWEEN YOU AND YOUR FRIEND "<<endl;
    cout<<" 4.LOVE BETWEEN YOU AND YOUR PARTNER "<<endl<<" 5.FUTURE PREDICTION"<<endl<<" 6.exit "<<endl;
    cout<<"****************************************************************************************************************"<<endl;
    cout<<"Enter option : ";cin>>a;


        if(a==1)
        {

             f1.getyourdata();
             cout<<"***********************************************RESULT***************************************************************"<<endl;
            f1.detectyourstar();
        }
        else if(a==2)
        {

            f1.getpartnerdata();
            cout<<"***********************************************RESULT***************************************************************"<<endl;
            f1.detectpartnerstar();
        }
        else if(a==3)
        {

            f1.getyourdata();
                f1.getpartnerdata();
                cout<<"***********************************************RESULT***************************************************************"<<endl;
                f1.detectyourstar();
                f1.detectpartnerstar();
                f1.friendmatch();
        }
        else if(a==4)
        {

                l1.getyourdata();
                l1.getpartnerdata();
                cout<<"***********************************************RESULT***************************************************************"<<endl;
                l1.detectyourstar();
                l1.detectpartnerstar();
                l1.lovefind();
        }
        else if(a==5)
        {

                p1.getyourdata();
                cout<<"***********************************************RESULT***************************************************************"<<endl;
                p1.detectyourstar();
                p1.future();
        }
        cout<<endl;
        cout<<"***************************************************************************************************************"<<endl;
        cout<<endl<<"Do you want to try again ? y/n : ";cin>>b;
    }
    while(a!=6 && b=='y' || b=='Y');



    return 0;

}

