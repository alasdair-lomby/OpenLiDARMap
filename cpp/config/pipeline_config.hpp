#pragma once

#include <cstddef>

namespace openlidarmap::config {

struct PipelineConfig {
    double translation_threshold{};
    double rotation_threshold{};
    bool visualize{};
    bool save_submaps{};
    double map_save_interval{};

    PipelineConfig()
        : translation_threshold(0.05),
          rotation_threshold(0.01),
          visualize(false),
          save_submaps(true),
          map_save_interval(30.0) {}
};

}  // namespace openlidarmap::config

