%bcond_without tests
%bcond_without weak_deps

%global __os_install_post %(echo '%{__os_install_post}' | sed -e 's!/usr/lib[^[:space:]]*/brp-python-bytecompile[[:space:]].*$!!g')
%global __provides_exclude_from ^/opt/ros/humble/.*$
%global __requires_exclude_from ^/opt/ros/humble/.*$

Name:           ros-humble-sick-scan-xd
Version:        3.5.0
Release:        1%{?dist}%{?release_suffix}
Summary:        ROS sick_scan_xd package

License:        Apache-2.0
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-humble-diagnostic-msgs
Requires:       ros-humble-diagnostic-updater
Requires:       ros-humble-geometry-msgs
Requires:       ros-humble-nav-msgs
Requires:       ros-humble-rcl-interfaces
Requires:       ros-humble-rosidl-default-runtime
Requires:       ros-humble-sensor-msgs
Requires:       ros-humble-std-msgs
Requires:       ros-humble-tf2
Requires:       ros-humble-tf2-ros
Requires:       ros-humble-visualization-msgs
Requires:       ros-humble-ros-workspace
BuildRequires:  ros-humble-ament-cmake
BuildRequires:  ros-humble-diagnostic-msgs
BuildRequires:  ros-humble-diagnostic-updater
BuildRequires:  ros-humble-geometry-msgs
BuildRequires:  ros-humble-nav-msgs
BuildRequires:  ros-humble-rcl-interfaces
BuildRequires:  ros-humble-rosidl-default-generators
BuildRequires:  ros-humble-sensor-msgs
BuildRequires:  ros-humble-std-msgs
BuildRequires:  ros-humble-tf2
BuildRequires:  ros-humble-tf2-ros
BuildRequires:  ros-humble-visualization-msgs
BuildRequires:  ros-humble-ros-workspace
BuildRequires:  ros-humble-rosidl-typesupport-fastrtps-c
BuildRequires:  ros-humble-rosidl-typesupport-fastrtps-cpp
Provides:       %{name}-devel = %{version}-%{release}
Provides:       %{name}-doc = %{version}-%{release}
Provides:       %{name}-runtime = %{version}-%{release}
Provides:       ros-humble-rosidl-interface-packages(member)

%if 0%{?with_tests}
BuildRequires:  ros-humble-ament-lint-auto
BuildRequires:  ros-humble-ament-lint-common
%endif

%if 0%{?with_weak_deps}
Supplements:    ros-humble-rosidl-interface-packages(all)
%endif

%description
ROS 1 and 2 driver for SICK scanner

%prep
%autosetup -p1

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
mkdir -p .obj-%{_target_platform} && cd .obj-%{_target_platform}
%cmake3 \
    -UINCLUDE_INSTALL_DIR \
    -ULIB_INSTALL_DIR \
    -USYSCONF_INSTALL_DIR \
    -USHARE_INSTALL_PREFIX \
    -ULIB_SUFFIX \
    -DCMAKE_INSTALL_PREFIX="/opt/ros/humble" \
    -DAMENT_PREFIX_PATH="/opt/ros/humble" \
    -DCMAKE_PREFIX_PATH="/opt/ros/humble" \
    -DSETUPTOOLS_DEB_LAYOUT=OFF \
%if !0%{?with_tests}
    -DBUILD_TESTING=OFF \
%endif
    ..

%make_build

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
%make_install -C .obj-%{_target_platform}

%if 0%{?with_tests}
%check
# Look for a Makefile target with a name indicating that it runs tests
TEST_TARGET=$(%__make -qp -C .obj-%{_target_platform} | sed "s/^\(test\|check\):.*/\\1/;t f;d;:f;q0")
if [ -n "$TEST_TARGET" ]; then
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
CTEST_OUTPUT_ON_FAILURE=1 \
    %make_build -C .obj-%{_target_platform} $TEST_TARGET || echo "RPM TESTS FAILED"
else echo "RPM TESTS SKIPPED"; fi
%endif

%files
/opt/ros/humble

%changelog
* Sat Jul 20 2024 rostest <ros.test@lehning.de> - 3.5.0-1
- Autogenerated by Bloom

* Mon Jun 24 2024 rostest <ros.test@lehning.de> - 3.4.0-1
- Autogenerated by Bloom

* Thu Mar 14 2024 rostest <ros.test@lehning.de> - 3.2.5-1
- Autogenerated by Bloom

* Tue Feb 13 2024 rostest <ros.test@lehning.de> - 3.1.11-3
- Autogenerated by Bloom

* Tue Feb 13 2024 rostest <ros.test@lehning.de> - 3.1.11-2
- Autogenerated by Bloom

* Wed Jan 17 2024 rostest <ros.test@lehning.de> - 3.1.11-1
- Autogenerated by Bloom

* Tue Jan 16 2024 rostest <ros.test@lehning.de> - 3.1.10-1
- Autogenerated by Bloom

* Mon Jan 15 2024 rostest <ros.test@lehning.de> - 3.1.8-1
- Autogenerated by Bloom

* Fri Jan 12 2024 rostest <ros.test@lehning.de> - 3.1.7-2
- Autogenerated by Bloom

* Fri Jan 12 2024 rostest <ros.test@lehning.de> - 3.1.7-1
- Autogenerated by Bloom

* Mon Jan 08 2024 rostest <ros.test@lehning.de> - 3.1.6-1
- Autogenerated by Bloom

