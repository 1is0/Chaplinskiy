using System;

namespace _7lab
{
    public class RationalNumber : IComparable
    {
        public int Integer { get; set; }
        public int Natural { get; set; }

        double number;
        public RationalNumber() 
        {
            Integer = 1;
            Natural = 1;
            number = 1;
        }
        public RationalNumber(int i, int n)
        {
            Integer = i;
            Natural = n;
            number = (double)i / n;
        }
        public RationalNumber(double num)
        {
            int pow_10 = -1;
            number = num;
            if (num % 10 != 0)
            {
                while (num % 10 != 0 || Math.Abs(num) < 1)
                {
                    num *= 10;
                    pow_10++;
                }
                num /= 10;
                Integer = (int)num;
                Natural = (int)Math.Pow(10, pow_10);
            }
            else
            {
                Integer = (int)num;
                Natural = 1;

            }
        }


        public static RationalNumber operator +(RationalNumber x, RationalNumber y)
        {
            RationalNumber answer = new RationalNumber();
            answer.Integer = x.Integer * y.Natural + y.Integer * x.Natural;
            answer.Natural = x.Natural * y.Natural;
            answer.number = x.number + y.number;

            return answer;
        }

        public static RationalNumber operator -(RationalNumber x, RationalNumber y)
        {
            RationalNumber answer = new RationalNumber();
            answer.Integer = x.Integer * y.Natural - y.Integer * x.Natural;
            answer.Natural = x.Natural * y.Natural;
            answer.number = x.number - y.number;

            return answer;
        }

        public static RationalNumber operator *(RationalNumber x, RationalNumber y)
        {
            RationalNumber answer = new RationalNumber();
            answer.Integer = x.Integer * y.Integer;
            answer.Natural = x.Natural * y.Natural;
            answer.number = x.number * y.number;

            return answer;
        }

        public static RationalNumber operator /(RationalNumber x, RationalNumber y)
        {
            RationalNumber answer = new RationalNumber();
            answer.Integer = x.Integer * y.Natural;
            answer.Natural = y.Integer * x.Natural;
            answer.number = x.number / y.number;

            return answer;
        }

        public static bool operator >(RationalNumber ob1, RationalNumber ob2)
        {
            return ((double)ob1.Integer / ob2.Natural) > ((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator <(RationalNumber ob1, RationalNumber ob2)
        {
            return ((double)ob1.Integer / ob2.Natural) < ((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator >=(RationalNumber ob1, RationalNumber ob2)
        {
            return ((double)ob1.Integer / ob2.Natural) >= ((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator <=(RationalNumber ob1, RationalNumber ob2)
        {
            return ((double)ob1.Integer / ob2.Natural) <= ((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator ==(RationalNumber ob1, RationalNumber ob2)
        {
            return ((double)ob1.Integer / ob1.Natural).Equals((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator !=(RationalNumber ob1, RationalNumber ob2)
        {
            return !((double)ob1.Integer / ob1.Natural).Equals((double)ob2.Integer / ob2.Natural);
        }
        public static bool operator !=(RationalNumber ob1, int ob2)
        {
            return !((double)ob1.Integer / ob1.Natural).Equals(ob2);
        }
        public static bool operator ==(RationalNumber ob1, int ob2)
        {
            return ((double)ob1.Integer / ob1.Natural).Equals(ob2);
        }

        public string Number() => $"{number}";
        public string Fraction() => $"{Integer}/{Natural}";
        public override string ToString()
        {
            return $"Rational Number:  " + Number() + "   Rational number as fraction:" + Fraction();
        }

        public override bool Equals(object obj)
        {
            return (double)((RationalNumber)obj).Integer / ((RationalNumber)obj).Natural == (double)this.Integer / this.Natural;
        }
        public override int GetHashCode()
        {
            return this.GetHashCode();
        }
        public string RNumStr()
        {
            return $"{(double)Integer / Natural}";
        }
        public string FractionStr()
        {
            return $"{Integer}/{Natural}";
        }
        public string ShowFull()
        {
            return "Number: " + RNumStr() + "\nFraction: " + FractionStr() + "\n";
        }
        int IComparable.CompareTo(object obj)
        {
            if (this.number > ((RationalNumber)obj).number) return 1;
            else if (this.number < ((RationalNumber)obj).number) return -1;
            else return 0;
        }

        public static implicit operator double(RationalNumber x) => x.number;
        public static explicit operator int(RationalNumber x) => (int)x.number;
        public static explicit operator RationalNumber(int x)
        {
            RationalNumber result = new RationalNumber(x);
            return result;
        }
    }
}
