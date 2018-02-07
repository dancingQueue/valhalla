#ifndef VALHALLA_SIF_MAGENTACOST_H_
#define VALHALLA_SIF_MAGENTACOST_H_

#include <cstdint>

#include <valhalla/sif/dynamiccost.h>
#include <boost/property_tree/ptree.hpp>

namespace valhalla {
namespace sif {

cost_ptr_t CreateMagentaCost(const boost::property_tree::ptree& config);

}
}

#endif  // VALHALLA_SIF_MAGENTACOST_H_
