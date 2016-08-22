# 什么是FireGoose？
烧鹅(FireGoose)是[RadioWar](http://radiowar.org)基于AT90USB1286芯片设计的USB Rubber Ducky类开发板，外观看起来很像USB Rubber Ducky（大黄鸭），但并非Hak5所销售版本。人比较低调，所以弄了一年多的烧鹅2.0都没有好像Sensepost这样子拿出去国外上Con说，是因为觉得没有必要这样子，而且又不是什么技术含量活。

#FireGoose 1.0/1.5/2.0的区别
原有1.0版本只是一个普通的改版，所以性能真的感觉不实在，所以我们基于原来的设计以及BadUSB、USB Rubber Ducky的特点和缺点，进行了针对性的设计，1.5直接将SD卡槽去除了，体积减少了，还增加了可爱的USB外壳，存储改为8GB，加入了HUB模块，使得U盘功能和主芯片脚本功能都可以独立运行，而2.0就加入了很邪恶的WIFI模块，插入就可以进行相关的远程操作。

FireGoose V1.0

![FireGoose正面照](http://wiki.radiowar.org/images/7/7d/%E5%AE%9E%E7%89%A9%E5%9B%BE1.png)
![FireGoose背面照](http://wiki.radiowar.org/images/3/31/%E5%AE%9E%E7%89%A9%E5%9B%BE2.png)

FireGoose V2.0

![FireGoose2.0正面照](https://gd1.alicdn.com/bao/uploaded/i1/817724908/TB20_tjjVXXXXXDXpXXXXXXXXXX_!!817724908.jpg)

所以没有使用USB Rubber Ducky的固件功能，不可以直接使用USB Rubber Ducky的脚本，可以直接使用Arduino IDE来编写自定义代码、也可以使用S.E.T、Kautilya套件生成代码使用。 自带SD卡槽，可外接SD作为扩展，支持BadUSB代码。


#FireGoose是否开源？

我们现在已经公开相关的设计图，为了更好的让大家使用烧鹅，我们并没有固化底层以及任何代码，并且代码部分我们都是公开的。大家可以直接查看Gerber文件夹，以便阅读相关设计图。


#FireGoose技术资料

###Freebuf用户使用范例：
- http://www.freebuf.com/tools/68265.html
- http://www.freebuf.com/articles/67931.html
- http://www.freebuf.com/tools/67563.html

###RadioWar WIKI资料
- http://wiki.radiowar.org/烧鹅


#其他

你可以途径购买或者DIY类似的硬件：[RadioWar淘宝店](http://radiowar.taobao.com)

烧鹅(FireGoose)购买链接：[点击进入](http://item.taobao.com/item.htm?spm=a1z10.1-c.w4004-10986722805.3.HxjKY2&id=42202954800)
烧鹅1.5/2购买链接:[点击进入](https://item.taobao.com/item.htm?id=526373999850)

Teensy++2.0 DIY套餐购买链接：[点击进入](http://meal.taobao.com/mealDetail.htm?spm=a1z10.1-c.w5003-10986818160.11.HxjKY2&meal_id=63882135&seller_id=817724908&scene=taobao_shop)

烧鹅使用交流群：197061341 
