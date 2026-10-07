#pragma once

class UpdateStrategy
{
public:
    virtual ~UpdateStrategy() = default;
    virtual void updateQuality() = 0;

protected:
    static constexpr int kNormalDegradeValue = 1;
};