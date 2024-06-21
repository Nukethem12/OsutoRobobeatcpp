//
// Created by adamt on 13.6.2024.
//

#ifndef OSUOBJECT_H
#define OSUOBJECT_H



class OsuObject {
public:
    int offset{};
    int getOffset() const;

private:
    void setOffest(int offs);

protected:
    OsuObject(int offs);
    OsuObject();

};



#endif //OSUOBJECT_H
