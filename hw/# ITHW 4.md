# ITHW 4

##

依题意，可得失真矩阵为：

$$
D=\begin{bmatrix}
0&1\\
1 &0
\end{bmatrix}.
$$

## 

$$
D_{min}=\sum_{i}p(x_i)d(x_i,y^*)=\frac{1}{4}\left(0+0+0+0 \right) =0,\\
D_{max}=\min_{p(y)} \sum_i p(x_i)d(x_i,y)=\frac{1}{4}\min \left\{ 3,3,3,3 \right\} =\frac{3}{4}.
$$

##

$$
D_{min}=\sum_{i}p(x_i)d(x_i,y^*)=\frac{1}{2}(0+0)=0 ,\\
$$

此时信道矩阵为：

$$
P_{Y|X}=\begin{bmatrix}
1&0\\
0&1
\end{bmatrix}.
$$
并且，

$$
D_{max}=\min_{p(y)} \sum_i p(x_i)d(x_i,y)=\frac{1}{2}\min \left\{ \alpha ,\alpha  \right\} =\frac{1}{2}\alpha .
$$

此时信道矩阵为：

$$
P_{Y|X}=\begin{bmatrix}
1&0\\
1&0
\end{bmatrix}\quad \text{或者}\quad P_{Y|X}=\begin{bmatrix}
0&1\\
0&1
\end{bmatrix}.
$$

##

观察发现两消息只有最后3个字符不同。

对于明文  $M_0=awn, M_1=usk,$ 

$$
M_0\oplus M_1=0x20|04|05\\
C_0=M_0\oplus K=0x 94|81|4d.
$$

于是

$$
C_1=M_1\oplus K=M_0\oplus K\oplus(M_1 \oplus M_0)\\=C_0\oplus(M_1 \oplus M_0)=0x80|85|48.
$$

因此，新明文的加密结果为：