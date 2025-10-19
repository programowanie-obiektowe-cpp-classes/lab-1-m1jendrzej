class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
    Wektor2D()
    {
        x_ = 0;
        y_ = 0;
    }

    Wektor2D(double a, double b)
    {
        x_ = a;
        y_ = b;
    }

    void setX(double a) { x_ = a; };

    void setY(double a) { y_ = a; }

    double getX() { return x_; };

    double getY() { return y_; };

    Wektor2D operator+(const Wektor2D& vector2)
    {
        return Wektor2D{x_ + vector2.x_, y_ + vector2.y_};
    }

    double operator*(const Wektor2D& vector2) 
    { 
        return x_ * vector2.x_ + y_ * vector2.y_; 
    }

private:
    double x_;
    double y_;
};
