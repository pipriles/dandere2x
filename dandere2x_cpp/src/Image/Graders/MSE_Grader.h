//
// Created by Tyler on 1/10/2021.
//

#ifndef DANDERE2X_CPP_MSE_GRADER_H
#define DANDERE2X_CPP_MSE_GRADER_H

#include <Image/SSIM/SSIM.h>
#include <Image/ImageUtils.h>
#include "AbstractMetric.h"


class MSE_Grader : AbstractGrader {

public:
    MSE_Grader(std::shared_ptr<Image> image1,
                std::shared_ptr<Image> image2,
                std::shared_ptr<Image> image2_compressed) :
            AbstractGrader(image1, image2, image2_compressed) {

    }

    bool passes_metric(int initial_x, int initial_y, int variable_x, int variable_y, int blocksize) override {

        double image_1_image_2_ssim = ImageUtils::mse(*this->image1, *this->image2,
                                                 initial_x, initial_y, variable_x, variable_y,
                                                 blocksize);

        double image_2_image_2_compressed_ssim = ImageUtils::mse(*this->image2, *this->image2_compressed,
                                                            initial_x, initial_y, variable_x, variable_y,
                                                            blocksize);

        if (image_1_image_2_ssim <= image_2_image_2_compressed_ssim){
            return true;
        }

        return false;
    }


};

#endif //DANDERE2X_CPP_MSE_GRADER_H
