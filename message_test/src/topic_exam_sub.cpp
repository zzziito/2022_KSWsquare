#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/NavSatFix.h"
#include <iostream>
using namespace std;

void getCallBack(const sensor_msgs::NavSatFix::ConstPtr& msg){
	cout << msg->latitude << endl;
}
int main(int argc, char **argv){
	ros::init(argc, argv, "topic_exam_subscriber");
    ros::NodeHandle n;
    ros::Subscriber topic_exam_sub = n.subscribe("/fix", 1000, getCallBack);
    ros::spin();
    
    return 0;
}