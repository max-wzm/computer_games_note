# Information Theory HW 1

## 

(1). 

一幅牌有 $A_{52}^{52}=52!$ 种不同的排列，任一排列的概率 $p = \frac{1}{52!}$, 于是对应的信息量为：

$$
I = -\log_{2} p=\log_2 52!=225.6\ bit
$$

其中，52!可以用Stirling公式近似计算。

(2).

由于点数不同，因此，每个点数都有4种花色作为选择，对应的概率为 $p = \frac{4^{13}}{C_{52}^{13}}$

$$
I = -\log_{2} p=-\log_2 \frac{4^{13}}{C_{52}^{13}}=13.2\ bit
$$

##

令 A = 「两个🎲的点数之和为3」，则只有2种情况：(1, 2) / (2, 1). 于是

$$
p(A) = 2/36 = 1/18\qquad I(A) = -\log_2p(A)=4.17\ bit
$$

令 B = 「两个🎲的点数之和为7」，则有6种情况. 于是

$$
p(B) = 6/36 = 1/6\qquad I(B) = -\log_2p(B)=2.58\ bit
$$


## 

(1).

对于变量X，Y,

$$
H(X)=-\sum_{X} p(x) \log p(x)=1 b i t\\
H(Y)=-\sum_{Y} p(y) \log p(y)=1 b i t
$$

对于变量Z，

$$
p(Z=0) = 7/8,\qquad p(Z=1)=1/8.\\
H(Z)=-\sum_{Z} p(z) \log p(z)=0.54 b i t
$$

对于变量XZ，

$$
p(X=0, Z=0) = p(Y=0)=1/2, p(X=0,Z=1)=0, \\
p(X=1,Z=0)=3/8,p(X=1,Z=1)=1/8.\\
H(X, Z)=-\sum_{X Z} p(x z) \log p(x z)=1.41bit
$$

对于变量YZ，与变量XZ同理，
$$
H(Y,Z)=-\sum_{YZ} p(yz) \log p(yz)=1.41bit
$$

对于变量XYZ，由于Z = XY，

$$
H(X,Y,Z)=H(X, Y)=-\sum_{X Y} p(xy) \log p(x y)=1.81bit
$$

(2).
$$
\begin{gathered}
H(X \mid Y)=H(X, Y)-H(Y)=0.81 b i t, \\
H(Y \mid X)=H(X, Y)-H(X)=0.81 b i t, \\
H(X \mid Z)=H(X, Z)-H(Z)=0.86 b i t, \\
H(Z \mid X)=H(X, Z)-H(X)=0.41 b i t, \\
H(Y \mid Z)=H(Y, Z)-H(Z)=0.86 b i t, \\
H(Z \mid Y)=H(Y, Z)-H(X)=0.41 b i t, \\
H(X \mid Y, Z)=H(X, Y, Z)-H(YZ)=0.40 b i t, \\
H(Y \mid X, Z)=H(X, Y, Z)-H(XZ)=0.40 b i t, \\
H(Z \mid X, Y)=H(X, Y, Z)-H(XY)=0 b i t .
\end{gathered}
$$

(3).
$$
\begin{gathered}
I(X ; Y)=H(X)-H(X \mid Y)=0.19 b i t, \\
I(X ; Z)=H(X)-H(X \mid Z)=0.14 b i t, \\
I(Y ; Z)=H(Y)-H(Y \mid Z)=0.14 b i t, \\
I(X ; Y \mid Z)=H(X \mid Z)-H(X \mid Y, Z)=0.46 b i t, \\
I(Y ; Z \mid X)=H(Y \mid X)-H(Y \mid X, Z)=0.41 b i t, \\
I(X ; Z \mid Y)=H(X \mid Y)-H(X \mid Y, Z)=0.41 b i t .
\end{gathered}
$$
## 

首先，由熵的可加性，可以得到：

$$
H\left(X_{1} X_{2} \ldots X_{N}\right)= H\left(X_{1}\right)+H\left(X_{2} \mid X_{1}\right)+H\left(X_{3} \mid X_{1} X_{2}\right)+\ldots+H\left(X_{N} \mid X_{1} \ldots X_{N-1}\right)
$$

接下来，由于条件熵不大于信息熵，即 $H(X|Y)\le H(X)$ 可以得到

$$
H\left(X_{i} \mid X_{1} \ldots X_{i-1}\right)\le H(X_i) \quad \mathrm{for}\ i=1,2,\dots,N.
$$

由上两式可得

$$
H\left(X_{1}, X_{2}, \cdots, X_{N}\right) \leq H\left(X_{1}\right)+H\left(X_{2}\right)+\cdots+
H\left(X_{N}\right)
$$

当且仅当 $X_1, X_2, \dots, X_N$ 相互独立，等号成立。

