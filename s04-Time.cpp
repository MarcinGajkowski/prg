#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#define fill std::setw(2) << std::setfill('0') <<

struct Time
{
    int sec{};
    int min{};
    int hoe{};

    Time(int a, int b, int c) { hoe = a; min = b; sec = c; }

    void next_second() 
    {
        sec++;
        fix_time();
    }
    
    void next_minute() 
    {
        min++;
        fix_time();
    }
    
    void next_hour() 
    {
        hoe++;
        fix_time();
    }

    Time Add(const Time& other) const
    {
        return Time(hoe + other.hoe, min + other.min, sec + other.sec);
    }

    Time operator+ (const Time& other) const
    {
        return Add(other);
    }

    Time Subtract(const Time& other) const
    {
        return Time(hoe - other.hoe, min - other.min, sec - other.sec);
    }

    Time operator- (const Time& other) const
    {
        return Subtract(other);
    }

    bool Smaller_than(const Time& other) const
    {
        if (hoe < other.hoe)
            return true;
        if (hoe > other.hoe)
            return false;
        if (min < other.min)
            return true;
        if (min > other.min)
            return false;
        if (sec < other.sec)
            return true;
        if (sec > other.sec)
            return false;
        else
            return false;
    }

    bool operator< (const Time& other) const
    {
        return Smaller_than(other);
    }

    bool Bigger_than(const Time& other) const
    {
        if (hoe < other.hoe)
            return false;
        if (hoe > other.hoe)
            return true;
        if (min < other.min)
            return false;
        if (min > other.min)
            return true;
        if (sec < other.sec)
            return false;
        if (sec > other.sec)
            return true;
        else
            return false;
    }

    bool operator> (const Time& other) const
    {
        return Bigger_than(other);
    }

    bool Equal(const Time& other) const
    {
        if (hoe == other.hoe)
        {
            if (min == other.min)
            {
                if (sec == other.sec)
                    return true;
            }
        }
        return false;
    }

    bool operator== (const Time& other) const
    {
        return Equal(other);
    }

    void time_of_day()
    {
        if (hoe >= 0 && hoe < 6)
            std::cout << "night" << '\n';
        else if (hoe >= 6 && hoe < 12)
            std::cout << "morning" << '\n';
        else if (hoe >= 12 && hoe < 18)
            std::cout << "afternoon" << '\n';
        else if (hoe >= 18 && hoe < 24)
            std::cout << "evening" << '\n';
    }

    int count_seconds()
    {
        int toetal = 3600 * hoe + 60 * min + sec;
        return(toetal);
    }

    int count_minutes()
    {
        int moetal = 60 * hoe + min;
        return(moetal);
    }

    Time time_to_midnight()
    {
        sec = 60 - sec;
        min = 59 - min;
        hoe = 23 - hoe;
        return(Time(hoe, min, sec));
    }

    void fix_time()
    {
        while (sec >= 60)
        {
            sec -= 60;
            min++;
        }
        while (sec < 0)
        {
            sec += 60;
            min--;
        }
        while (min >= 60)
        {
            min -= 60;
            hoe++;
        }
        while (min < 0)
        {
            min += 60;
            hoe--;
        }
        while (hoe >= 24)
            hoe -= 24;
        while (hoe < 0)
            hoe += 24;
    }

    std::string to_string()
    {
        fix_time();
        std::stringstream string;
        string << fill hoe << ':' << fill min << ':' << fill sec;
        return(string.str());
    }
};

int main()
{
    Time time = Time{ 23, 59, 59 };
    std::cout << time.to_string() << '\n';

    Time time1 = Time{ 23, 59, 59 };
    time1.next_hour();
    std::cout << time1.to_string() << '\n';

    Time time2 = Time{ 23, 59, 59 };
    time2.next_minute();
    std::cout << time2.to_string() << '\n';

    Time time3 = Time{ 23, 59, 59 };
    time3.next_second();
    std::cout << time3.to_string() << '\n';

    Time time4 = Time{ 23, 59, 59 };
    time4.time_of_day();

    Time a = Time{ 23, 59, 59 };
    Time b = Time{ 0,  0,  1 };
    Time after = a + b;
    std::cout << after.to_string() << '\n';

    Time a1 = Time{ 3, 59, 59 };
    Time b1 = Time{ 4,  0,  0 };
    Time after1 = a1 - b1;
    std::cout << after1.to_string() << '\n';

    Time a2 = Time{ 23, 59, 59 };
    Time b2 = Time{ 0,  0,  1 };
    if (a2 > b2) {
        std::cout << a2.to_string() << " > " << b2.to_string() << "\n";
    }
    else {
        std::cout << a2.to_string() << " ? " << b2.to_string() << "\n";;
    }

    Time a3 = Time{ 23, 59, 59 };
    Time b3 = Time{ 0,  0,  1 };
    if (a3 == b3) {
        std::cout << a3.to_string() << " == " << b3.to_string() << "\n";;
    }
    else {
        std::cout << a3.to_string() << " != " << b3.to_string() << "\n";
    }

    Time time5 = Time{ 23, 59, 59 };
    time5.count_seconds();

    Time time6 = Time{ 23, 59, 59 };
    time6.count_minutes();

    Time time7 = Time{ 23, 59, 59 };
    time7.time_to_midnight();
    std::cout << time7.to_string() << '\n';
    
    return 0;
}
