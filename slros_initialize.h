#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block cbf_v2/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Sub_cbf_v2_429;

// For Block cbf_v2/Subscribe4
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_430;

// For Block cbf_v2/Subscribe5
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_431;

// For Block cbf_v2/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Sub_cbf_v2_476;

// For Block cbf_v2/Subscribe7
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_v2_std_msgs_Bool> Sub_cbf_v2_481;

// For Block cbf_v2/Subscribe8
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_527;

// For Block cbf_v2/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Pub_cbf_v2_401;

// For Block cbf_v2/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Pub_cbf_v2_520;

// For Block cbf_v2/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_539;

// For Block cbf_v2/cbf_filter/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_447;

// For Block cbf_v2/cbf_filter/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_448;

// For Block cbf_v2/cbf_filter/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_449;

// For Block cbf_v2/cbf_filter/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_450;

// For Block cbf_v2/cbf_filter/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_463;

// For Block cbf_v2/cbf_filter/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_465;

// For Block cbf_v2/cbf_filter/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_531;

// For Block cbf_v2/cbf_filter/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_533;

// For Block cbf_v2/cbf_filter/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_535;

void slros_node_init(int argc, char** argv);

#endif
