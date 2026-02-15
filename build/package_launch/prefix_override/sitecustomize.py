import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/media/nguyen-tuan-minh/DATA/ros2_ws/install/package_launch'
