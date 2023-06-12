import jax.numpy as jnp
import numpy as np
import jax
@jax.jit
def coriolis(q, dq):
	var1=jnp.cos(q[3])
	var2=jnp.cos(q[4])
	var3=0.00051223
	var4=jnp.cos(q[5])
	var5=(var2*dq[3])
	var6=jnp.sin(q[5])
	var7=((var4*var5)-(var6*dq[4]))
	var8=jnp.sin(q[4])
	var9=(var8*dq[3])
	var10=(var9*dq[4])
	var11=((var7*dq[5])-(var6*var10))
	var12=-0.021231
	var13=((var4*dq[4])+(var6*var5))
	var14=((var4*var10)+(var13*dq[5]))
	var15=4.801
	var16=jnp.sin(q[3])
	var17=((var1*dq[1])-(var16*dq[0]))
	var18=(var17*dq[3])
	var19=((var1*dq[0])+(var16*dq[1]))
	var20=((var8*var19)+(var2*dq[2]))
	var21=((var2*var18)-(var20*dq[4]))
	var22=0.021231
	var23=(dq[5]-var9)
	var24=-0.0557169
	var25=((var4*var20)-(var6*var17))
	var26=(((var22*var23)+(var24*var13))+(var15*var25))
	var27=-0.00051223
	var28=0.0557169
	var29=((var4*var17)+(var6*var20))
	var30=(((var27*var23)+(var28*var7))+(var15*var29))
	var31=3.06179e-06
	var32=jnp.cos(q[15])
	var33=jnp.sin(q[15])
	var34=((var32*var7)-(var33*var13))
	var35=(((var32*var11)-(var33*var14))+(var34*dq[15]))
	var36=0.000377621
	var37=((var32*var13)+(var33*var7))
	var38=(((var33*var11)+(var32*var14))+(var37*dq[15]))
	var39=0.510299
	var40=-0.04675
	var41=(var21-(var40*var14))
	var42=-0.000377621
	var43=(var23+dq[15])
	var44=-0.00276072
	var45=0.1881
	var46=(var45*var33)
	var47=(var40*var32)
	var48=-0.1881
	var49=(var48*var32)
	var50=((((var46*var7)-((var47*var23)+(var49*var13)))-(var33*var29))+(var32*var25))
	var51=(((var42*var43)+(var44*var37))+(var39*var50))
	var52=-3.06179e-06
	var53=0.00276072
	var54=(var40*var33)
	var55=(var48*var33)
	var56=(var45*var32)
	var57=(((var32*var29)-(((var54*var23)+(var55*var13))+(var56*var7)))+(var33*var25))
	var58=(((var52*var43)+(var53*var34))+(var39*var57))
	var59=jnp.cos(q[16])
	var60=-0.029427
	var61=0.0170318
	var62=jnp.sin(q[16])
	var63=((var59*var43)-(var62*var34))
	var64=(var5*dq[4])
	var65=((var63*dq[16])-((var62*var64)+(var59*var38)))
	var66=0.898919
	var67=0.08
	var68=(var67*var59)
	var69=-0.08
	var70=(var69*var62)
	var71=((var2*var19)-(var8*dq[2]))
	var72=((var8*var18)+(var71*dq[4]))
	var73=(var19*dq[3])
	var74=(((var6*var72)-(var4*var73))+(var25*dq[5]))
	var75=(((var6*var73)+(var4*var72))-(var29*dq[5]))
	var76=((((((var47*var64)-(var49*var11))-(var46*var14))-(var33*var74))+(var32*var75))-(var57*dq[15]))
	var77=((var40*var7)+var71)
	var78=(var69*var59)
	var79=(var67*var62)
	var80=(((var62*var77)-((var78*var43)+(var79*var34)))+(var59*var50))
	var81=(((((var68*var38)-(var70*var64))+(var59*var41))-(var62*var76))-(var80*dq[16]))
	var82=(var37+dq[16])
	var83=-0.0170318
	var84=0.00311745
	var85=(((var83*var63)+(var84*var82))+(var66*var80))
	var86=((var62*var43)+(var59*var34))
	var87=0.029427
	var88=-0.00311745
	var89=(((var87*var63)+(var88*var86))+(var66*var57))
	var90=jnp.cos(q[17])
	var91=-0.0321003
	var92=-0.000206526
	var93=jnp.sin(q[17])
	var94=(((var62*var38)-(var59*var64))-(var86*dq[16]))
	var95=((var90*var63)-(var93*var86))
	var96=(((var93*var94)+(var90*var65))+(var95*dq[17]))
	var97=0.218015
	var98=0.213
	var99=(var98*var90)
	var100=((((var70*var43)-(var68*var34))+(var59*var77))-(var62*var50))
	var101=(((((var78*var64)+(var79*var38))+(var62*var41))+(var59*var76))+(var100*dq[16]))
	var102=(var98*var93)
	var103=(((var93*var100)-(var102*var82))+(var90*var80))
	var104=((((var90*var81)-(var99*var35))-(var93*var101))-(var103*dq[17]))
	var105=(var82+dq[17])
	var106=0.000206526
	var107=-0.000993282
	var108=(((var106*var95)+(var107*var105))+(var97*var103))
	var109=((var93*var63)+(var90*var86))
	var110=0.0321003
	var111=0.000993282
	var112=((var98*var63)+var57)
	var113=(((var110*var95)+(var111*var109))+(var97*var112))
	var114=((((var91*var35)+(var92*var96))+(var97*var104))+((var105*var108)-(var109*var113)))
	var115=(((var90*var94)-(var93*var65))-(var109*dq[17]))
	var116=(((var90*var100)-(var99*var82))-(var93*var80))
	var117=((((var93*var81)-(var102*var35))+(var90*var101))+(var116*dq[17]))
	var118=(((var91*var105)+(var92*var109))+(var97*var116))
	var119=((((var106*var115)+(var107*var35))+(var97*var117))+((var95*var113)-(var105*var118)))
	var120=(((((var60*var35)+(var61*var65))+(var66*var81))+((var82*var85)-(var86*var89)))+((var90*var114)+(var93*var119)))
	var121=(((var60*var82)+(var61*var86))+(var66*var100))
	var122=(((((var83*var94)+(var84*var35))+(var66*var101))+((var63*var89)-(var82*var121)))+((var90*var119)-(var93*var114)))
	var123=(((((var31*var35)-(var36*var38))+(var39*var41))+((var37*var51)-(var34*var58)))+((var59*var120)+(var62*var122)))
	var124=jnp.cos(q[12])
	var125=jnp.sin(q[12])
	var126=((var124*var7)-(var125*var13))
	var127=(((var124*var11)-(var125*var14))+(var126*dq[12]))
	var128=((var124*var13)+(var125*var7))
	var129=(((var125*var11)+(var124*var14))+(var128*dq[12]))
	var130=0.04675
	var131=(var21-(var130*var14))
	var132=(var23+dq[12])
	var133=(var45*var125)
	var134=(var130*var124)
	var135=(var48*var124)
	var136=((((var133*var7)-((var134*var23)+(var135*var13)))-(var125*var29))+(var124*var25))
	var137=(((var36*var132)+(var44*var128))+(var39*var136))
	var138=(var130*var125)
	var139=(var48*var125)
	var140=(var45*var124)
	var141=(((var124*var29)-(((var138*var23)+(var139*var13))+(var140*var7)))+(var125*var25))
	var142=(((var52*var132)+(var53*var126))+(var39*var141))
	var143=jnp.cos(q[13])
	var144=jnp.sin(q[13])
	var145=((var143*var132)-(var144*var126))
	var146=((var145*dq[13])-((var144*var64)+(var143*var129)))
	var147=(var69*var143)
	var148=(var67*var144)
	var149=((((((var134*var64)-(var135*var11))-(var133*var14))-(var125*var74))+(var124*var75))-(var141*dq[12]))
	var150=((var130*var7)+var71)
	var151=(var67*var143)
	var152=(var69*var144)
	var153=(((var144*var150)-((var151*var132)+(var152*var126)))+(var143*var136))
	var154=(((((var147*var129)-(var148*var64))+(var143*var131))-(var144*var149))-(var153*dq[13]))
	var155=(var128+dq[13])
	var156=(((var61*var145)+(var84*var155))+(var66*var153))
	var157=((var144*var132)+(var143*var126))
	var158=(((var87*var145)+(var88*var157))+(var66*var141))
	var159=jnp.cos(q[14])
	var160=jnp.sin(q[14])
	var161=(((var144*var129)-(var143*var64))-(var157*dq[13]))
	var162=((var159*var145)-(var160*var157))
	var163=(((var160*var161)+(var159*var146))+(var162*dq[14]))
	var164=(var98*var159)
	var165=((((var148*var132)-(var147*var126))+(var143*var150))-(var144*var136))
	var166=(((((var151*var64)+(var152*var129))+(var144*var131))+(var143*var149))+(var165*dq[13]))
	var167=(var98*var160)
	var168=(((var160*var165)-(var167*var155))+(var159*var153))
	var169=((((var159*var154)-(var164*var127))-(var160*var166))-(var168*dq[14]))
	var170=(var155+dq[14])
	var171=(((var106*var162)+(var107*var170))+(var97*var168))
	var172=((var160*var145)+(var159*var157))
	var173=((var98*var145)+var141)
	var174=(((var110*var162)+(var111*var172))+(var97*var173))
	var175=((((var91*var127)+(var92*var163))+(var97*var169))+((var170*var171)-(var172*var174)))
	var176=(((var159*var161)-(var160*var146))-(var172*dq[14]))
	var177=(((var159*var165)-(var164*var155))-(var160*var153))
	var178=((((var160*var154)-(var167*var127))+(var159*var166))+(var177*dq[14]))
	var179=(((var91*var170)+(var92*var172))+(var97*var177))
	var180=((((var106*var176)+(var107*var127))+(var97*var178))+((var162*var174)-(var170*var179)))
	var181=(((((var60*var127)+(var83*var146))+(var66*var154))+((var155*var156)-(var157*var158)))+((var159*var175)+(var160*var180)))
	var182=(((var60*var155)+(var83*var157))+(var66*var165))
	var183=(((((var61*var161)+(var84*var127))+(var66*var166))+((var145*var158)-(var155*var182)))+((var159*var180)-(var160*var175)))
	var184=(((((var31*var127)-(var42*var129))+(var39*var131))+((var128*var137)-(var126*var142)))+((var143*var181)+(var144*var183)))
	var185=jnp.cos(q[9])
	var186=jnp.sin(q[9])
	var187=((var185*var7)-(var186*var13))
	var188=(((var185*var11)-(var186*var14))+(var187*dq[9]))
	var189=((var185*var13)+(var186*var7))
	var190=(((var186*var11)+(var185*var14))+(var189*dq[9]))
	var191=(var21-(var40*var14))
	var192=(var23+dq[9])
	var193=(var48*var186)
	var194=(var40*var185)
	var195=(var45*var185)
	var196=((((var193*var7)-((var194*var23)+(var195*var13)))-(var186*var29))+(var185*var25))
	var197=(((var42*var192)+(var53*var189))+(var39*var196))
	var198=(var40*var186)
	var199=(var45*var186)
	var200=(var48*var185)
	var201=(((var185*var29)-(((var198*var23)+(var199*var13))+(var200*var7)))+(var186*var25))
	var202=(((var52*var192)+(var44*var187))+(var39*var201))
	var203=jnp.cos(q[10])
	var204=jnp.sin(q[10])
	var205=((var203*var192)-(var204*var187))
	var206=((var205*dq[10])-((var204*var64)+(var203*var190)))
	var207=(var67*var203)
	var208=(var69*var204)
	var209=((((((var194*var64)-(var195*var11))-(var193*var14))-(var186*var74))+(var185*var75))-(var201*dq[9]))
	var210=((var40*var7)+var71)
	var211=(var69*var203)
	var212=(var67*var204)
	var213=(((var204*var210)-((var211*var192)+(var212*var187)))+(var203*var196))
	var214=(((((var207*var190)-(var208*var64))+(var203*var191))-(var204*var209))-(var213*dq[10]))
	var215=(var189+dq[10])
	var216=(((var83*var205)+(var84*var215))+(var66*var213))
	var217=((var204*var192)+(var203*var187))
	var218=(((var87*var205)+(var88*var217))+(var66*var201))
	var219=jnp.cos(q[11])
	var220=jnp.sin(q[11])
	var221=(((var204*var190)-(var203*var64))-(var217*dq[10]))
	var222=((var219*var205)-(var220*var217))
	var223=(((var220*var221)+(var219*var206))+(var222*dq[11]))
	var224=(var98*var219)
	var225=((((var208*var192)-(var207*var187))+(var203*var210))-(var204*var196))
	var226=(((((var211*var64)+(var212*var190))+(var204*var191))+(var203*var209))+(var225*dq[10]))
	var227=(var98*var220)
	var228=(((var220*var225)-(var227*var215))+(var219*var213))
	var229=((((var219*var214)-(var224*var188))-(var220*var226))-(var228*dq[11]))
	var230=(var215+dq[11])
	var231=(((var106*var222)+(var107*var230))+(var97*var228))
	var232=((var220*var205)+(var219*var217))
	var233=((var98*var205)+var201)
	var234=(((var110*var222)+(var111*var232))+(var97*var233))
	var235=((((var91*var188)+(var92*var223))+(var97*var229))+((var230*var231)-(var232*var234)))
	var236=(((var219*var221)-(var220*var206))-(var232*dq[11]))
	var237=(((var219*var225)-(var224*var215))-(var220*var213))
	var238=((((var220*var214)-(var227*var188))+(var219*var226))+(var237*dq[11]))
	var239=(((var91*var230)+(var92*var232))+(var97*var237))
	var240=((((var106*var236)+(var107*var188))+(var97*var238))+((var222*var234)-(var230*var239)))
	var241=(((((var60*var188)+(var61*var206))+(var66*var214))+((var215*var216)-(var217*var218)))+((var219*var235)+(var220*var240)))
	var242=(((var60*var215)+(var61*var217))+(var66*var225))
	var243=(((((var83*var221)+(var84*var188))+(var66*var226))+((var205*var218)-(var215*var242)))+((var219*var240)-(var220*var235)))
	var244=(((((var31*var188)-(var36*var190))+(var39*var191))+((var189*var197)-(var187*var202)))+((var203*var241)+(var204*var243)))
	var245=jnp.cos(q[6])
	var246=jnp.sin(q[6])
	var247=((var245*var7)-(var246*var13))
	var248=(((var245*var11)-(var246*var14))+(var247*dq[6]))
	var249=((var245*var13)+(var246*var7))
	var250=(((var246*var11)+(var245*var14))+(var249*dq[6]))
	var251=(var21-(var130*var14))
	var252=(var23+dq[6])
	var253=(var48*var246)
	var254=(var130*var245)
	var255=(var45*var245)
	var256=((((var253*var7)-((var254*var23)+(var255*var13)))-(var246*var29))+(var245*var25))
	var257=(((var36*var252)+(var53*var249))+(var39*var256))
	var258=(var130*var246)
	var259=(var45*var246)
	var260=(var48*var245)
	var261=(((var245*var29)-(((var258*var23)+(var259*var13))+(var260*var7)))+(var246*var25))
	var262=(((var52*var252)+(var44*var247))+(var39*var261))
	var263=jnp.cos(q[7])
	var264=jnp.sin(q[7])
	var265=((var263*var252)-(var264*var247))
	var266=((var265*dq[7])-((var264*var64)+(var263*var250)))
	var267=(var69*var263)
	var268=(var67*var264)
	var269=((((((var254*var64)-(var255*var11))-(var253*var14))-(var246*var74))+(var245*var75))-(var261*dq[6]))
	var270=((var130*var7)+var71)
	var271=(var67*var263)
	var272=(var69*var264)
	var273=(((var264*var270)-((var271*var252)+(var272*var247)))+(var263*var256))
	var274=(((((var267*var250)-(var268*var64))+(var263*var251))-(var264*var269))-(var273*dq[7]))
	var275=(var249+dq[7])
	var276=(((var61*var265)+(var84*var275))+(var66*var273))
	var277=((var264*var252)+(var263*var247))
	var278=(((var87*var265)+(var88*var277))+(var66*var261))
	var279=jnp.cos(q[8])
	var280=jnp.sin(q[8])
	var281=(((var264*var250)-(var263*var64))-(var277*dq[7]))
	var282=((var279*var265)-(var280*var277))
	var283=(((var280*var281)+(var279*var266))+(var282*dq[8]))
	var284=(var98*var279)
	var285=((((var268*var252)-(var267*var247))+(var263*var270))-(var264*var256))
	var286=(((((var271*var64)+(var272*var250))+(var264*var251))+(var263*var269))+(var285*dq[7]))
	var287=(var98*var280)
	var288=(((var280*var285)-(var287*var275))+(var279*var273))
	var289=((((var279*var274)-(var284*var248))-(var280*var286))-(var288*dq[8]))
	var290=(var275+dq[8])
	var291=(((var106*var282)+(var107*var290))+(var97*var288))
	var292=((var280*var265)+(var279*var277))
	var293=((var98*var265)+var261)
	var294=(((var110*var282)+(var111*var292))+(var97*var293))
	var295=((((var91*var248)+(var92*var283))+(var97*var289))+((var290*var291)-(var292*var294)))
	var296=(((var279*var281)-(var280*var266))-(var292*dq[8]))
	var297=(((var279*var285)-(var284*var275))-(var280*var273))
	var298=((((var280*var274)-(var287*var248))+(var279*var286))+(var297*dq[8]))
	var299=(((var91*var290)+(var92*var292))+(var97*var297))
	var300=((((var106*var296)+(var107*var248))+(var97*var298))+((var282*var294)-(var290*var299)))
	var301=(((((var60*var248)+(var83*var266))+(var66*var274))+((var275*var276)-(var277*var278)))+((var279*var295)+(var280*var300)))
	var302=(((var60*var275)+(var83*var277))+(var66*var285))
	var303=(((((var61*var281)+(var84*var248))+(var66*var286))+((var265*var278)-(var275*var302)))+((var279*var300)-(var280*var295)))
	var304=(((((var31*var248)-(var42*var250))+(var39*var251))+((var249*var257)-(var247*var262)))+((var263*var301)+(var264*var303)))
	var305=((((((((var3*var11)-(var12*var14))+(var15*var21))+((var13*var26)-(var7*var30)))+var123)+var184)+var244)+var304)
	var306=(((var3*var13)+(var12*var7))+(var15*var71))
	var307=((((((var54*var64)-(var55*var11))+(var56*var14))+(var32*var74))+(var33*var75))+(var50*dq[15]))
	var308=(((var31*var37)+(var36*var34))+(var39*var77))
	var309=((var98*var94)+var307)
	var310=((((var110*var115)+(var111*var96))+(var97*var309))+((var109*var118)-(var95*var108)))
	var311=((((var39*var307)-((var52*var64)+(var53*var38)))+((var34*var308)-(var43*var51)))+(((((var87*var94)+(var88*var65))+(var66*var307))+((var86*var121)-(var63*var85)))+var310))
	var312=(((((var44*var35)-(var42*var64))+(var39*var76))+((var43*var58)-(var37*var308)))+((var59*var122)-(var62*var120)))
	var313=((((((var138*var64)-(var139*var11))+(var140*var14))+(var124*var74))+(var125*var75))+(var136*dq[12]))
	var314=(((var31*var128)+(var42*var126))+(var39*var150))
	var315=((var98*var161)+var313)
	var316=((((var110*var176)+(var111*var163))+(var97*var315))+((var172*var179)-(var162*var171)))
	var317=((((var39*var313)-((var52*var64)+(var53*var129)))+((var126*var314)-(var132*var137)))+(((((var87*var161)+(var88*var146))+(var66*var313))+((var157*var182)-(var145*var156)))+var316))
	var318=(((((var44*var127)-(var36*var64))+(var39*var149))+((var132*var142)-(var128*var314)))+((var143*var183)-(var144*var181)))
	var319=((((((var198*var64)-(var199*var11))+(var200*var14))+(var185*var74))+(var186*var75))+(var196*dq[9]))
	var320=(((var31*var189)+(var36*var187))+(var39*var210))
	var321=((var98*var221)+var319)
	var322=((((var110*var236)+(var111*var223))+(var97*var321))+((var232*var239)-(var222*var231)))
	var323=((((var39*var319)-((var52*var64)+(var44*var190)))+((var187*var320)-(var192*var197)))+(((((var87*var221)+(var88*var206))+(var66*var319))+((var217*var242)-(var205*var216)))+var322))
	var324=(((((var53*var188)-(var42*var64))+(var39*var209))+((var192*var202)-(var189*var320)))+((var203*var243)-(var204*var241)))
	var325=((((((var258*var64)-(var259*var11))+(var260*var14))+(var245*var74))+(var246*var75))+(var256*dq[6]))
	var326=(((var31*var249)+(var42*var247))+(var39*var270))
	var327=((var98*var281)+var325)
	var328=((((var110*var296)+(var111*var283))+(var97*var327))+((var292*var299)-(var282*var291)))
	var329=((((var39*var325)-((var52*var64)+(var44*var250)))+((var247*var326)-(var252*var257)))+(((((var87*var281)+(var88*var266))+(var66*var325))+((var277*var302)-(var265*var276)))+var328))
	var330=(((((var53*var248)-(var36*var64))+(var39*var269))+((var252*var262)-(var249*var326)))+((var263*var303)-(var264*var301)))
	var331=(((((((var15*var74)-((var27*var64)+(var28*var14)))+((var7*var306)-(var23*var26)))+((var32*var311)-(var33*var312)))+((var124*var317)-(var125*var318)))+((var185*var323)-(var186*var324)))+((var245*var329)-(var246*var330)))
	var332=((((((((var24*var11)-(var22*var64))+(var15*var75))+((var23*var30)-(var13*var306)))+((var33*var311)+(var32*var312)))+((var125*var317)+(var124*var318)))+((var186*var323)+(var185*var324)))+((var246*var329)+(var245*var330)))
	var333=((var6*var331)+(var4*var332))
	var334=((var2*var305)+(var8*var333))
	var335=((var4*var331)-(var6*var332))
	var336=0.0372553
	var337=0.000344834
	var338=1.82585e-05
	var339=0.0163298
	var340=1.20729e-06
	var341=(((((var339*var23)+(var337*var13))+(var340*var7))+(var27*var29))+(var22*var25))
	var342=0.0455402
	var343=(((((var340*var23)+(var338*var13))+(var342*var7))+(var12*var71))+(var28*var29))
	var344=0.00060583
	var345=9.83094e-06
	var346=-1.49093e-08
	var347=0.000305569
	var348=-2.36724e-07
	var349=(((((var347*var43)+(var345*var37))+(var348*var34))+(var52*var57))+(var42*var50))
	var350=0.000411809
	var351=(((((var348*var43)+(var346*var37))+(var350*var34))+(var36*var77))+(var53*var57))
	var352=-5.89635e-05
	var353=0.00611659
	var354=-0.00056337
	var355=0.00668189
	var356=0.000235476
	var357=(((((var355*var63)+(var352*var82))+(var356*var86))+(var87*var57))+(var83*var80))
	var358=0.0013583
	var359=(((((var356*var63)+(var354*var82))+(var358*var86))+(var61*var100))+(var88*var57))
	var360=1.96751e-07
	var361=0.00872703
	var362=-3.38686e-06
	var363=0.00870194
	var364=-1.13309e-05
	var365=(((((var363*var95)+(var360*var105))+(var364*var109))+(var110*var112))+(var106*var103))
	var366=5.12617e-05
	var367=(((((var364*var95)+(var362*var105))+(var366*var109))+(var92*var116))+(var111*var112))
	var368=((((((var360*var115)+(var361*var35))+(var362*var96))+(var91*var104))+(var107*var117))+((((var109*var365)-(var95*var367))+(var103*var118))-(var116*var108)))
	var369=(((((((var352*var94)+(var353*var35))+(var354*var65))+(var60*var81))+(var84*var101))+((((var86*var357)-(var63*var359))+(var80*var121))-(var100*var85)))+((var368-(var99*var114))-(var102*var119)))
	var370=(((((((var344*var35)-(var345*var64))-(var346*var38))+(var31*var41))+(var44*var76))+((((var34*var349)-(var43*var351))+(var50*var308))-(var77*var51)))+var369)
	var371=(((((var345*var43)+(var344*var37))+(var346*var34))+(var31*var77))+(var44*var50))
	var372=(((((var352*var63)+(var353*var82))+(var354*var86))+(var60*var100))+(var84*var80))
	var373=(((((var360*var95)+(var361*var105))+(var362*var109))+(var91*var116))+(var107*var103))
	var374=((((((var364*var115)+(var362*var35))+(var366*var96))+(var92*var104))+(var111*var309))+((((var95*var373)-(var105*var365))-(var112*var118))+(var116*var113)))
	var375=((((((var363*var115)+(var360*var35))+(var364*var96))+(var110*var309))+(var106*var117))+((((var105*var367)-(var109*var373))-(var103*var113))+(var112*var108)))
	var376=(((((((var356*var94)+(var354*var35))+(var358*var65))+(var61*var81))+(var88*var307))+((((var63*var372)-(var82*var357))-(var57*var121))+(var100*var89)))+((var90*var374)-(var93*var375)))
	var377=(((((((var355*var94)+(var352*var35))+(var356*var65))+(var87*var307))+(var83*var101))+((((var82*var359)-(var86*var372))-(var80*var89))+(var57*var85)))+(((var90*var375)+(var93*var374))+(var98*var310)))
	var378=(((((((var346*var35)-(var348*var64))-(var350*var38))+(var36*var41))+(var53*var307))+((((var43*var371)-(var37*var349))-(var57*var308))+(var77*var58)))+((((var59*var376)-(var62*var377))-(var68*var120))-(var79*var122)))
	var379=-9.83094e-06
	var380=1.49093e-08
	var381=(((((var347*var132)+(var379*var128))+(var348*var126))+(var52*var141))+(var36*var136))
	var382=(((((var348*var132)+(var380*var128))+(var350*var126))+(var42*var150))+(var53*var141))
	var383=5.89635e-05
	var384=0.00056337
	var385=(((((var355*var145)+(var383*var155))+(var356*var157))+(var87*var141))+(var61*var153))
	var386=(((((var356*var145)+(var384*var155))+(var358*var157))+(var83*var165))+(var88*var141))
	var387=(((((var363*var162)+(var360*var170))+(var364*var172))+(var110*var173))+(var106*var168))
	var388=(((((var364*var162)+(var362*var170))+(var366*var172))+(var92*var177))+(var111*var173))
	var389=((((((var360*var176)+(var361*var127))+(var362*var163))+(var91*var169))+(var107*var178))+((((var172*var387)-(var162*var388))+(var168*var179))-(var177*var171)))
	var390=(((((((var383*var161)+(var353*var127))+(var384*var146))+(var60*var154))+(var84*var166))+((((var157*var385)-(var145*var386))+(var153*var182))-(var165*var156)))+((var389-(var164*var175))-(var167*var180)))
	var391=(((((((var344*var127)-(var379*var64))-(var380*var129))+(var31*var131))+(var44*var149))+((((var126*var381)-(var132*var382))+(var136*var314))-(var150*var137)))+var390)
	var392=(((((var379*var132)+(var344*var128))+(var380*var126))+(var31*var150))+(var44*var136))
	var393=(((((var383*var145)+(var353*var155))+(var384*var157))+(var60*var165))+(var84*var153))
	var394=(((((var360*var162)+(var361*var170))+(var362*var172))+(var91*var177))+(var107*var168))
	var395=((((((var364*var176)+(var362*var127))+(var366*var163))+(var92*var169))+(var111*var315))+((((var162*var394)-(var170*var387))-(var173*var179))+(var177*var174)))
	var396=((((((var363*var176)+(var360*var127))+(var364*var163))+(var110*var315))+(var106*var178))+((((var170*var388)-(var172*var394))-(var168*var174))+(var173*var171)))
	var397=(((((((var356*var161)+(var384*var127))+(var358*var146))+(var83*var154))+(var88*var313))+((((var145*var393)-(var155*var385))-(var141*var182))+(var165*var158)))+((var159*var395)-(var160*var396)))
	var398=(((((((var355*var161)+(var383*var127))+(var356*var146))+(var87*var313))+(var61*var166))+((((var155*var386)-(var157*var393))-(var153*var158))+(var141*var156)))+(((var159*var396)+(var160*var395))+(var98*var316)))
	var399=(((((((var380*var127)-(var348*var64))-(var350*var129))+(var42*var131))+(var53*var313))+((((var132*var392)-(var128*var381))-(var141*var314))+(var150*var142)))+((((var143*var397)-(var144*var398))-(var147*var181))-(var152*var183)))
	var400=2.36724e-07
	var401=(((((var347*var192)+(var379*var189))+(var400*var187))+(var52*var201))+(var42*var196))
	var402=(((((var400*var192)+(var346*var189))+(var350*var187))+(var36*var210))+(var44*var201))
	var403=(((((var355*var205)+(var352*var215))+(var356*var217))+(var87*var201))+(var83*var213))
	var404=(((((var356*var205)+(var354*var215))+(var358*var217))+(var61*var225))+(var88*var201))
	var405=(((((var363*var222)+(var360*var230))+(var364*var232))+(var110*var233))+(var106*var228))
	var406=(((((var364*var222)+(var362*var230))+(var366*var232))+(var92*var237))+(var111*var233))
	var407=((((((var360*var236)+(var361*var188))+(var362*var223))+(var91*var229))+(var107*var238))+((((var232*var405)-(var222*var406))+(var228*var239))-(var237*var231)))
	var408=(((((((var352*var221)+(var353*var188))+(var354*var206))+(var60*var214))+(var84*var226))+((((var217*var403)-(var205*var404))+(var213*var242))-(var225*var216)))+((var407-(var224*var235))-(var227*var240)))
	var409=(((((((var344*var188)-(var379*var64))-(var346*var190))+(var31*var191))+(var53*var209))+((((var187*var401)-(var192*var402))+(var196*var320))-(var210*var197)))+var408)
	var410=(((((var379*var192)+(var344*var189))+(var346*var187))+(var31*var210))+(var53*var196))
	var411=(((((var352*var205)+(var353*var215))+(var354*var217))+(var60*var225))+(var84*var213))
	var412=(((((var360*var222)+(var361*var230))+(var362*var232))+(var91*var237))+(var107*var228))
	var413=((((((var364*var236)+(var362*var188))+(var366*var223))+(var92*var229))+(var111*var321))+((((var222*var412)-(var230*var405))-(var233*var239))+(var237*var234)))
	var414=((((((var363*var236)+(var360*var188))+(var364*var223))+(var110*var321))+(var106*var238))+((((var230*var406)-(var232*var412))-(var228*var234))+(var233*var231)))
	var415=(((((((var356*var221)+(var354*var188))+(var358*var206))+(var61*var214))+(var88*var319))+((((var205*var411)-(var215*var403))-(var201*var242))+(var225*var218)))+((var219*var413)-(var220*var414)))
	var416=(((((((var355*var221)+(var352*var188))+(var356*var206))+(var87*var319))+(var83*var226))+((((var215*var404)-(var217*var411))-(var213*var218))+(var201*var216)))+(((var219*var414)+(var220*var413))+(var98*var322)))
	var417=(((((((var346*var188)-(var400*var64))-(var350*var190))+(var36*var191))+(var44*var319))+((((var192*var410)-(var189*var401))-(var201*var320))+(var210*var202)))+((((var203*var415)-(var204*var416))-(var207*var241))-(var212*var243)))
	var418=(((((var347*var252)+(var345*var249))+(var400*var247))+(var52*var261))+(var36*var256))
	var419=(((((var400*var252)+(var380*var249))+(var350*var247))+(var42*var270))+(var44*var261))
	var420=(((((var355*var265)+(var383*var275))+(var356*var277))+(var87*var261))+(var61*var273))
	var421=(((((var356*var265)+(var384*var275))+(var358*var277))+(var83*var285))+(var88*var261))
	var422=(((((var363*var282)+(var360*var290))+(var364*var292))+(var110*var293))+(var106*var288))
	var423=(((((var364*var282)+(var362*var290))+(var366*var292))+(var92*var297))+(var111*var293))
	var424=((((((var360*var296)+(var361*var248))+(var362*var283))+(var91*var289))+(var107*var298))+((((var292*var422)-(var282*var423))+(var288*var299))-(var297*var291)))
	var425=(((((((var383*var281)+(var353*var248))+(var384*var266))+(var60*var274))+(var84*var286))+((((var277*var420)-(var265*var421))+(var273*var302))-(var285*var276)))+((var424-(var284*var295))-(var287*var300)))
	var426=(((((((var344*var248)-(var345*var64))-(var380*var250))+(var31*var251))+(var53*var269))+((((var247*var418)-(var252*var419))+(var256*var326))-(var270*var257)))+var425)
	var427=(((((var345*var252)+(var344*var249))+(var380*var247))+(var31*var270))+(var53*var256))
	var428=(((((var383*var265)+(var353*var275))+(var384*var277))+(var60*var285))+(var84*var273))
	var429=(((((var360*var282)+(var361*var290))+(var362*var292))+(var91*var297))+(var107*var288))
	var430=((((((var364*var296)+(var362*var248))+(var366*var283))+(var92*var289))+(var111*var327))+((((var282*var429)-(var290*var422))-(var293*var299))+(var297*var294)))
	var431=((((((var363*var296)+(var360*var248))+(var364*var283))+(var110*var327))+(var106*var298))+((((var290*var423)-(var292*var429))-(var288*var294))+(var293*var291)))
	var432=(((((((var356*var281)+(var384*var248))+(var358*var266))+(var83*var274))+(var88*var325))+((((var265*var428)-(var275*var420))-(var261*var302))+(var285*var278)))+((var279*var430)-(var280*var431)))
	var433=(((((((var355*var281)+(var383*var248))+(var356*var266))+(var87*var325))+(var61*var286))+((((var275*var421)-(var277*var428))-(var273*var278))+(var261*var276)))+(((var279*var431)+(var280*var430))+(var98*var328)))
	var434=(((((((var380*var248)-(var400*var64))-(var350*var250))+(var42*var251))+(var44*var325))+((((var252*var427)-(var249*var418))-(var261*var326))+(var270*var262)))+((((var263*var432)-(var264*var433))-(var267*var301))-(var272*var303)))
	var435=((((((((((var336*var11)-(var337*var64))-(var338*var14))+(var3*var21))+(var24*var75))+((((var7*var341)-(var23*var343))+(var25*var306))-(var71*var26)))+((((var32*var370)-(var33*var378))-(var55*var311))-(var49*var312)))+((((var124*var391)-(var125*var399))-(var139*var317))-(var135*var318)))+((((var185*var409)-(var186*var417))-(var199*var323))-(var195*var324)))+((((var245*var426)-(var246*var434))-(var259*var329))-(var255*var330)))
	var436=(((((var337*var23)+(var336*var13))+(var338*var7))+(var3*var71))+(var24*var25))
	var437=((((((((((var338*var11)-(var340*var64))-(var342*var14))+(var12*var21))+(var28*var74))+((((var23*var436)-(var13*var341))-(var29*var306))+(var71*var30)))+(((((var33*var370)+(var32*var378))+(var40*var123))-(var56*var311))+(var46*var312)))+(((((var125*var391)+(var124*var399))+(var130*var184))-(var140*var317))+(var133*var318)))+(((((var186*var409)+(var185*var417))+(var40*var244))-(var200*var323))+(var193*var324)))+(((((var246*var426)+(var245*var434))+(var130*var304))-(var260*var329))+(var253*var330)))
	var438=(((((((var345*var35)-(var347*var64))-(var348*var38))+(var52*var307))+(var42*var76))+((((var37*var351)-(var34*var371))-(var50*var58))+(var57*var51)))+((((var59*var377)+(var62*var376))+(var70*var120))-(var78*var122)))
	var439=(((((((var379*var127)-(var347*var64))-(var348*var129))+(var52*var313))+(var36*var149))+((((var128*var382)-(var126*var392))-(var136*var142))+(var141*var137)))+((((var143*var398)+(var144*var397))+(var148*var181))-(var151*var183)))
	var440=(((((((var379*var188)-(var347*var64))-(var400*var190))+(var52*var319))+(var42*var209))+((((var189*var402)-(var187*var410))-(var196*var202))+(var201*var197)))+((((var203*var416)+(var204*var415))+(var208*var241))-(var211*var243)))
	var441=(((((((var345*var248)-(var347*var64))-(var400*var250))+(var52*var325))+(var36*var269))+((((var249*var419)-(var247*var427))-(var256*var262))+(var261*var257)))+((((var263*var433)+(var264*var432))+(var268*var301))-(var271*var303)))
	var442=((((((((((var337*var11)-(var339*var64))-(var340*var14))+(var27*var74))+(var22*var75))+((((var13*var343)-(var7*var436))-(var25*var30))+(var29*var26)))+((var438-(var54*var311))-(var47*var312)))+((var439-(var138*var317))-(var134*var318)))+((var440-(var198*var323))-(var194*var324)))+((var441-(var258*var329))-(var254*var330)))
	return jnp.array([((var1*var334)-(var16*var335)), ((var16*var334)+(var1*var335)), ((var2*var333)-(var8*var305)), ((var2*((var6*var435)+(var4*var437)))-(var8*var442)), ((var4*var435)-(var6*var437)), var442, var441, var425, var424, var440, var408, var407, var439, var390, var389, var438, var369, var368])