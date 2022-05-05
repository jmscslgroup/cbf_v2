#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "cbf_v2";

// For Block cbf_v2/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Sub_cbf_v2_429;

// For Block cbf_v2/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_430;

// For Block cbf_v2/Subscribe5
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_431;

// For Block cbf_v2/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Sub_cbf_v2_476;

// For Block cbf_v2/Subscribe7
SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_v2_std_msgs_Bool> Sub_cbf_v2_481;

// For Block cbf_v2/Subscribe8
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Sub_cbf_v2_527;

// For Block cbf_v2/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_v2_std_msgs_Float64> Pub_cbf_v2_401;

// For Block cbf_v2/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_v2_geometry_msgs_Twist> Pub_cbf_v2_520;

// For Block cbf_v2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_539;

// For Block cbf_v2/cbf_filter/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_447;

// For Block cbf_v2/cbf_filter/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_448;

// For Block cbf_v2/cbf_filter/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_449;

// For Block cbf_v2/cbf_filter/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_450;

// For Block cbf_v2/cbf_filter/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_463;

// For Block cbf_v2/cbf_filter/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_465;

// For Block cbf_v2/cbf_filter/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_531;

// For Block cbf_v2/cbf_filter/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_533;

// For Block cbf_v2/cbf_filter/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_v2_535;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

