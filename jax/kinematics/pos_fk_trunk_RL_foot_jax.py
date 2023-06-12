import jax.numpy as jnp
import numpy as np
import jax
@jax.jit
def pos_fk_trunk_RL_foot(x):
	var1=-0.426
	var2=2
	var3=jnp.cos((x[15]/var2))
	var4=jnp.cos((x[16]/var2))
	var5=(var3*var4)
	var6=jnp.sin((x[16]/var2))
	var7=(var3*var6)
	var8=jnp.sin((x[15]/var2))
	var9=(var8*var6)
	var10=(var8*var4)
	var11=jnp.cos((x[17]/var2))
	var12=jnp.sin((x[17]/var2))
	var13=((var5*var11)-(var7*var12))
	var14=((var5*var12)+(var7*var11))
	var15=((var10*var12)+(var9*var11))
	var16=((var10*var11)-(var9*var12))
	var17=1
	var18=-0.213
	return jnp.array([((-0.1881+(var1*((var5*var7)+(var9*var10))))+(var1*((var13*var14)+(var15*var16)))), (((0.04675+(0.08*(var17-(var2*jnp.square(var8)))))+(var1*((var9*var7)-(var5*var10))))+(var1*((var15*var14)-(var13*var16)))), (((0.16*(var3*var8))+(var18*((var17-(var2*jnp.square(var10)))-(var2*jnp.square(var7)))))+(var18*((var17-(var2*jnp.square(var16)))-(var2*jnp.square(var14)))))])