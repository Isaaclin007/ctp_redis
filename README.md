ctp_Redis
=====

### ����

ctp_redis����hiredis��xredis��ʹ��xredisǰ��Ҫ��װhiredis�⣻
[xredis](https://git.oschina.net/showmsg/xrdis_rosolve) ʹ�����Լ��޸Ĺ��İ汾��RedisNode������;
Ĭ�ϰ�װ����;
```bash
make&sudo make install
```

### ����

* ��amake��pump���߷ŵ�����������
* ����ǰ��Ҫ�����û�������;

```bash
cat ~/.bash_profile
LD_LIBRARY_PATH=/lib:/usr/lib:/usr/local/lib:.
export LD_LIBRARY_PATH
C_INCLUDE_PATH=/usr/include:/usr/local/include:/usr/local/include:/usr/local/include/zookeeper
export C_INCLUDE_PATH

CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/usr/include:/usr/local/include:/usr/local/include/hiredis:/usr/local/include/zookeeper:/usr/local/include/xredis
export CPLUS_INCLUDE_PATH
```
### ����

```bash
# start market
./market
# start trade
./trade
# start plot
./plot GroupA 1
./plot GroupB 2
./plot GroupB 3
```

### ϵͳ�ܹ�
![ctp_redis](https://git.oschina.net/showmsg/ctp_redis/attach_files/download?i=68212&u=http%3A%2F%2Ffiles.git.oschina.net%2Fgroup1%2FM00%2F00%2F8A%2FPaAvDFgRUQyAPuhHAAB8P8lt_pQ795.png%3Ftoken%3D08f181a0faa5658a16c57072ac0ced70%26ts%3D1477530081%26attname%3DplotDesign.png)

### ���ܵ�

* �໷��֧��;
* trade �����ӿ�, market ����ת��, plot ���Խ���;
* plot [���] [Ψһ���],�������һ���������������һ����ֻ��һ����������ͬ�����У�ֻ���ܣ������ͣ�
  ��������崵����������̾���Ϊ������з��ͣ�
* Ψһ��ʶ���ڱ�ʶ������������λ�ã�
* ʹ��lrangeʹ���ܴﵽ����240000��/�룻
* ֧�����ö��˺Ž���;
### TODO

* json��struct���л���תʵ��;
* ����ǰ�á�·�ɡ��������ֱ����ǣ�
* ����ǰ��չ��;

### ��ع���

<p>[Simnow](http://www.simnow.com.cn/)ע����վ;
<p>[Redis](http://redis.io/)���ص�ַ;

<p><p>����:showmsg
<p>QQȺ:12277157

<p><p>��л:
<p>[xredis](https://github.com/0xsky/xredis)
<p>[ctpService](https://coding.net/u/laozhu_zzy)
<p>��л����C++��Դ���ÿ�Ĺ�����!!!




			