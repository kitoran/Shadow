#ifndef CONTINUOUSBUFFER_H
#define CONTINUOUSBUFFER_H


class ContinuousBuffer
{
public:
    ContinuousBuffer();

    QVector<Point2> points;
    struct segment
    {
        int start;
        float leftStart;
        float rightStart;
        int finish;
        float leftFinish;
        float rightFinish;
    };
    QVector<segment> segments;
    // OR:
    struct triangle
    {
        int a;
        float aValue;
        int b;
        float bValue;
        int c;
        float cValue;
    };
    QVector<triangle> triangles;

    void addTriangle(const Point4&a,
                     Point4 b,
                     Point4 c) {
        Point2 af {a.x/a.t, a.y/a.t};
        Point2 bf {b.x/b.t, b.y/b.t};
        Point2 cf {c.x/c.t, c.y/c.t};
        // ориентируем пл часовой
        if(cross(bf-af, cf-af) <0) {
            swap(b,c);
            swap(bf,cf);
        }

        enum crossing {
            noCrossing,
            inside,
            outside
        };
        QVector<crossing> fwqfewf;
        QVector<bool> insidea;
        QVector<bool> insideb;
        QVector<bool> insidec;
        for(Point2 ht: points) {
            insidea.append(cross(bf-ht, cf-ht)>0);
            insideb.append(cross(cf-ht, af-ht)>0);
            insidec.append(cross(af-ht, bf-ht)>0);
        }
        for(segment ht: segments) {
            if(insidea[ht.start] != insidea[ht.finish]) {
                Point2 p =
                // посмотреть видимо ли

                .
            }
        }


    }
};

#endif // CONTINUOUSBUFFER_H
