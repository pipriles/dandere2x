//
// Created by Tyler on 1/10/2021.
//

#ifndef DANDERE2X_CPP_ABSTRACTMETRIC_H
#define DANDERE2X_CPP_ABSTRACTMETRIC_H

#include <memory>
#include <Image/Image.h>

using namespace std;

class AbstractGrader{
public:
    AbstractGrader(std::shared_ptr<Image> image1,
                   std::shared_ptr<Image> image2,
                   std::shared_ptr<Image> image2_compressed){
        this->image1 = image1;
        this->image2 = image2;
        this->image2_compressed = image2_compressed;

    }

    virtual bool passes_metric(int initial_x, int initial_y, int variable_x, int variable_y, int blocksize) = 0;

protected:
    std::shared_ptr<Image> image1;
    std::shared_ptr<Image> image2;
    std::shared_ptr<Image> image2_compressed;
};



#endif //DANDERE2X_CPP_ABSTRACTMETRIC_H
