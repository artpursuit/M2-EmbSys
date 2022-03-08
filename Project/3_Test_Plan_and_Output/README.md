
 # TESTPLAN
 # High Level Test Plan
 |Test id|Description|Expected input|Expected Output|Pass|
 |--|--|---|---|----|
 |T01|Left Sensor|If it senses the black Line|Left Motors Rotates|:heavy_check_mark: |
|T02|Right Sensor|If it senses the black line|Right Motors Rotates|:heavy_check_mark: |
# Low Level Test Plan
 |Test id|Description|Expected input|Expected Output|Actual output|Pass|
|--|--|--|--|--|--|
|T01|Forward|LS=1 & RS=1|Left motors and right Motors ON|Left motors and Right motors ON|:heavy_check_mark:|
|T02|Turn Left |LS=0 & RS=1|Left motor front & left motor Back will turn on|Left Motors turned ON |:heavy_check_mark:|
|T03|Turn Right |LS=1 & RS=0|Right motor front & Right Motor Back will turn on|Right Motors turned On|:heavy_check_mark:|
|T04|Stop|LS=0 & Rs=0|Both Motors OFF|Both Motors OFF|:heavy_check_mark:|

![](https://github.com/artpursuit/M2-EmbSys/blob/b1a91db0fce4ec33554dc063465f893f561d8fd5/Project/3_Test_Plan_and_Output/Line%20Follower.png)
