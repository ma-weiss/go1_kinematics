import jax.numpy as jnp
import numpy as np
import jax
@jax.jit
def J_POS_YPR_FK_TRUNK_RL_FOOT(x):
	output = jnp.zeros((6, 18))
	var1=-0.426
	var2=2
	var3=(x[15]/var2)
	var4=jnp.sin(var3)
	var5=(x[16]/var2)
	var6=jnp.cos(var5)
	var7=(var4*var6)
	var8=(x[16]/var2)
	var9=jnp.sin(var8)
	var10=0.5
	var11=(var10*jnp.cos(var3))
	var12=(var9*var11)
	var13=(var4*var9)
	var14=(var6*var11)
	var15=(x[15]/var2)
	var16=jnp.cos(var15)
	var17=(var16*var9)
	var18=(var10*jnp.sin(var15))
	var19=(var6*var18)
	var20=(var16*var6)
	var21=(var9*var18)
	var22=(x[17]/var2)
	var23=jnp.sin(var22)
	var24=(x[17]/var2)
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
	var39=1
	var40=(var39-(var2*(jnp.square(var26)+jnp.square(var32))))
	var41=(var2*((var28*var32)+(var30*var26)))
	var42=(jnp.square(var41)+jnp.square(var40))
	var43=(var40/var42)
	var44=(var41/var42)
	var45=(var32+var32)
	var46=(var26+var26)
	var47=jnp.sqrt((var39-jnp.square((var2*((var28*var26)-(var32*var30))))))
	var48=(var39-(var2*(jnp.square(var30)+jnp.square(var26))))
	var49=(var2*((var28*var30)+(var26*var32)))
	var50=(jnp.square(var49)+jnp.square(var48))
	var51=(var48/var50)
	var52=(var49/var50)
	var53=(var30+var30)
	var54=(var26+var26)
	var55=(var10*jnp.cos(var8))
	var56=(var16*var55)
	var57=(var10*jnp.sin(var5))
	var58=(var16*var57)
	var59=(var4*var55)
	var60=(var4*var57)
	var61=((var25*var56)-(var23*var58))
	var62=((var25*var58)+(var23*var56))
	var63=((var25*var59)-(var23*var60))
	var64=((var25*var60)+(var23*var59))
	var65=(var10*jnp.cos(var22))
	var66=(var10*jnp.sin(var24))
	var67=((var20*var65)-(var17*var66))
	var68=((var20*var66)+(var17*var65))
	var69=((var7*var65)-(var13*var66))
	var70=((var7*var66)+(var13*var65))
	output = output.at[0,15].set( ((var1*(((var7*var12)+(var13*var14))-((var17*var19)+(var20*var21))))+(var1*(((var26*var27)-(var28*var29))+((var30*var31)+(var32*var33))))))
	output = output.at[1,15].set( (((var1*(((var17*var12)-(var13*var21))-((var20*var14)-(var7*var19))))-(0.08*(var2*((var4+var4)*var11))))+(var1*(((var26*var31)-(var32*var29))-((var30*var27)+(var28*var33))))))
	output = output.at[2,15].set( (((0.16*((var16*var11)-(var4*var18)))+(var34*((var2*(var35*var21))-(var2*(var36*var14)))))+(var34*((var2*(var37*var29))-(var2*(var38*var33))))))
	output = output.at[3,15].set( ((var43*(var2*(((var32*var27)+(var28*var31))+((var26*var33)-(var30*var29)))))+(var44*(var2*((var45*var31)-(var46*var29))))))
	output = output.at[4,15].set( ((var2*(((var26*var27)-(var28*var29))-((var30*var31)+(var32*var33))))/var47))
	output = output.at[5,15].set( ((var51*(var2*(((var30*var27)+(var28*var33))+((var26*var31)-(var32*var29)))))+(var52*(var2*((var53*var33)-(var54*var29))))))
	output = output.at[0,16].set( ((var1*(((var20*var56)-(var17*var58))+((var7*var59)-(var13*var60))))+(var1*(((var28*var61)-(var26*var62))+((var30*var63)-(var32*var64))))))
	output = output.at[1,16].set( ((var1*(((var17*var59)+(var13*var56))+((var7*var58)+(var20*var60))))+(var1*(((var26*var63)+(var32*var61))+((var30*var62)+(var28*var64))))))
	output = output.at[2,16].set( ((var34*((var2*(var36*var60))-(var2*(var35*var56))))+(var34*((var2*(var38*var64))-(var2*(var37*var61))))))
	output = output.at[3,16].set( ((var43*(var2*(((var28*var63)-(var32*var62))+((var30*var61)-(var26*var64)))))+(var44*(var2*((var46*var61)+(var45*var63))))))
	output = output.at[4,16].set( ((var2*(((var28*var61)-(var26*var62))-((var30*var63)-(var32*var64))))/var47))
	output = output.at[5,16].set( ((var51*(var2*(((var32*var61)+(var26*var63))-((var30*var62)+(var28*var64)))))+(var52*(var2*((var54*var61)-(var53*var64))))))
	output = output.at[0,17].set( (var1*(((var28*var67)-(var26*var68))+((var30*var69)-(var32*var70)))))
	output = output.at[1,17].set( (var1*(((var26*var69)+(var32*var67))+((var30*var68)+(var28*var70)))))
	output = output.at[2,17].set( (var34*((var2*(var38*var70))-(var2*(var37*var67)))))
	output = output.at[3,17].set( ((var43*(var2*(((var28*var69)-(var32*var68))+((var30*var67)-(var26*var70)))))+(var44*(var2*((var46*var67)+(var45*var69))))))
	output = output.at[4,17].set( ((var2*(((var28*var67)-(var26*var68))-((var30*var69)-(var32*var70))))/var47))
	output = output.at[5,17].set( ((var51*(var2*(((var32*var67)+(var26*var69))-((var30*var68)+(var28*var70)))))+(var52*(var2*((var54*var67)-(var53*var70))))))
	return output
