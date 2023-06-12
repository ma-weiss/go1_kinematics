import jax.numpy as jnp
import numpy as np
import jax
@jax.jit
def J_pos_fk_trunk_RR_foot(x):
	output = jnp.zeros((3, 18))
	var1=-0.426
	var2=2
	var3=(x[12]/var2)
	var4=jnp.sin(var3)
	var5=(x[13]/var2)
	var6=jnp.cos(var5)
	var7=(var4*var6)
	var8=(x[13]/var2)
	var9=jnp.sin(var8)
	var10=0.5
	var11=(var10*jnp.cos(var3))
	var12=(var9*var11)
	var13=(var4*var9)
	var14=(var6*var11)
	var15=(x[12]/var2)
	var16=jnp.cos(var15)
	var17=(var16*var9)
	var18=(var10*jnp.sin(var15))
	var19=(var6*var18)
	var20=(var16*var6)
	var21=(var9*var18)
	var22=(x[14]/var2)
	var23=jnp.sin(var22)
	var24=(x[14]/var2)
	var25=jnp.cos(var24)
	var26=((var20*var23)+(var17*var25))
	var27=((var23*var21)-(var25*var19))
	var28=((var20*var25)-(var17*var23))
	var29=((var23*var19)+(var25*var21))
	var30=((var7*var25)-(var13*var23))
	var31=((var23*var14)+(var25*var12))
	var32=((var7*var23)+(var13*var25))
	var33=((var25*var14)-(var23*var12))
	var34=-0.213
	var35=(var17+var17)
	var36=(var7+var7)
	var37=(var26+var26)
	var38=(var30+var30)
	var39=(var10*jnp.cos(var8))
	var40=(var16*var39)
	var41=(var10*jnp.sin(var5))
	var42=(var16*var41)
	var43=(var4*var39)
	var44=(var4*var41)
	var45=((var25*var40)-(var23*var42))
	var46=((var25*var42)+(var23*var40))
	var47=((var25*var43)-(var23*var44))
	var48=((var25*var44)+(var23*var43))
	var49=(var10*jnp.cos(var22))
	var50=(var10*jnp.sin(var24))
	var51=((var20*var49)-(var17*var50))
	var52=((var20*var50)+(var17*var49))
	var53=((var7*var49)-(var13*var50))
	var54=((var7*var50)+(var13*var49))
	output = output.at[0,12].set( ((var1*(((var7*var12)+(var13*var14))-((var17*var19)+(var20*var21))))+(var1*(((var26*var27)-(var28*var29))+((var30*var31)+(var32*var33))))))
	output = output.at[1,12].set( (((var1*(((var17*var12)-(var13*var21))-((var20*var14)-(var7*var19))))-(-0.08*(var2*((var4+var4)*var11))))+(var1*(((var26*var31)-(var32*var29))-((var30*var27)+(var28*var33))))))
	output = output.at[2,12].set( (((-0.16*((var16*var11)-(var4*var18)))+(var34*((var2*(var35*var21))-(var2*(var36*var14)))))+(var34*((var2*(var37*var29))-(var2*(var38*var33))))))
	output = output.at[0,13].set( ((var1*(((var20*var40)-(var17*var42))+((var7*var43)-(var13*var44))))+(var1*(((var28*var45)-(var26*var46))+((var30*var47)-(var32*var48))))))
	output = output.at[1,13].set( ((var1*(((var17*var43)+(var13*var40))+((var7*var42)+(var20*var44))))+(var1*(((var26*var47)+(var32*var45))+((var30*var46)+(var28*var48))))))
	output = output.at[2,13].set( ((var34*((var2*(var36*var44))-(var2*(var35*var40))))+(var34*((var2*(var38*var48))-(var2*(var37*var45))))))
	output = output.at[0,14].set( (var1*(((var28*var51)-(var26*var52))+((var30*var53)-(var32*var54)))))
	output = output.at[1,14].set( (var1*(((var26*var53)+(var32*var51))+((var30*var52)+(var28*var54)))))
	output = output.at[2,14].set( (var34*((var2*(var38*var54))-(var2*(var37*var51)))))
	return output
