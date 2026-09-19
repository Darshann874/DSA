class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int cl=max(x1,min(xCenter,x2));
        int cs=max(y1,min(yCenter,y2));

        int dx=cl-xCenter;
        int dy=cs-yCenter;

        return dx*dx + dy* dy <=radius*radius;
        
    }
};