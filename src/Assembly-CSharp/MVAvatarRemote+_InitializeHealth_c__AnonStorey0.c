
/* Void <>m__0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<InitializeHealth>c__AnonStorey0::
     MVAvatarRemote_InitializeHealth_c_AnonStorey0___m__0
               (MVAvatarRemote_InitializeHealth_c_AnonStorey0 *this,Object *health,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).healthBar;
  this_00 = (this->fields)._this;
  if (pHVar1 != (HealthBar *)0x0) {
    previousHealth = HealthBar::HealthBar_get_Health(pHVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._this;
    if ((pMVar2 != (MVAvatarRemote *)0x0) &&
       (pMVar3 = (pMVar2->fields)._.Health, pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)
       ) {
      fVar4 = (float10)(*(code *)(pMVar3->klass->vtable).get_Value.method)
                                 (pMVar3,(pMVar3->klass->vtable).set_Value.methodPtr);
      if (this_00 != (MVAvatarRemote *)0x0) {
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this_00,previousHealth,(float)fVar4,(MethodInfo *)0x0);
        pHVar1 = (this->fields).healthBar;
        if (pHVar1 != (HealthBar *)0x0) {
          if (health != (Object *)0x0) {
            pSVar5 = TypeInfo__System__Single;
            if ((health->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar6 = (float *)func_?(health);
              HealthBar::HealthBar_set_Health(pHVar1,*pfVar6,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  health = extraout_ECX;
  pSVar5 = extraout_EDX;
code_?:
  func_?(health,pSVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <>m__1(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<InitializeHealth>c__AnonStorey0::
     MVAvatarRemote_InitializeHealth_c_AnonStorey0___m__1
               (MVAvatarRemote_InitializeHealth_c_AnonStorey0 *this,Object *maxHealth,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).healthBar;
  if (this_00 != (HealthBar *)0x0) {
    if (maxHealth != (Object *)0x0) {
      pIVar1 = TypeInfo__System__Int32;
      if ((maxHealth->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int *)func_?(maxHealth);
        HealthBar::HealthBar_set_MaxHealth(this_00,(float)*piVar2,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
  maxHealth = extraout_ECX;
  pIVar1 = extraout_EDX;
code_?:
  func_?(maxHealth,pIVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

