
/* Void <InitializeHealth>b__0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass23_0::
     MVAvatarRemote_c_DisplayClass23_0__InitializeHealth_b__0
               (MVAvatarRemote_c_DisplayClass23_0 *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).healthBar;
  this_00 = (this->fields).__4__this;
  if (pHVar1 != (HealthBar *)0x0) {
    previousHealth = HealthBar::HealthBar_get_Health(pHVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).__4__this;
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
              HealthBar::HealthBar_SetScaleFromHealth(pHVar1,*pfVar6,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  health = extraout_ECX;
  pSVar5 = extraout_EDX;
code_?:
  func_?(health,pSVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <InitializeHealth>b__1(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass23_0::
     MVAvatarRemote_c_DisplayClass23_0__InitializeHealth_b__1
               (MVAvatarRemote_c_DisplayClass23_0 *this,Object *maxHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).healthBar;
  if (pHVar1 != (HealthBar *)0x0) {
    if (maxHealth != (Object *)0x0) {
      pIVar2 = TypeInfo__System__Int32;
      if ((maxHealth->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int *)func_?(maxHealth);
        (pHVar1->fields)._MaxHealth_k__BackingField = (float)*piVar3;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  maxHealth = extraout_ECX;
  pIVar2 = extraout_EDX;
code_?:
  func_?(maxHealth,pIVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

