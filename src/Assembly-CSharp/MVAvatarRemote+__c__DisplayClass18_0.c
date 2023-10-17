
/* Void <InitializeHealth>b__0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass18_0::
     MVAvatarRemote_c_DisplayClass18_0__InitializeHealth_b__0
               (MVAvatarRemote_c_DisplayClass18_0 *this,Object *health,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).healthBar;
  this_00 = (this->fields).__4__this;
  if ((pHVar1 != (HealthBar *)0x0) &&
     (this_01 = (pHVar1->fields).healthPivot, this_01 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_3,this_01,(MethodInfo *)0x0);
    pMVar4 = (this->fields).__4__this;
    fStack_5 = pVVar2->x;
    fStack_6 = (pHVar1->fields)._MaxHealth_k__BackingField;
    if ((pMVar4 != (MVAvatarRemote *)0x0) &&
       (pMVar7 = (pMVar4->fields)._.Health, pMVar7 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)
       ) {
      fVar8 = (float10)(*(pMVar7->klass->vtable).get_Value.methodPtr)
                                 (pMVar7,(pMVar7->klass->vtable).get_Value.method);
      if (this_00 != (MVAvatarRemote *)0x0) {
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this_00,fStack_6 * fStack_5,(float)fVar8,(MethodInfo *)0x0);
        pHVar1 = (this->fields).healthBar;
        if (pHVar1 != (HealthBar *)0x0) {
          if (health != (Object *)0x0) {
            pSVar9 = TypeInfo__System__Single;
            if ((health->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar10 = (float *)func_?(health);
              HealthBar::HealthBar_SetScaleFromHealth(pHVar1,*pfVar10,(MethodInfo *)0x0);
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
  pSVar9 = extraout_EDX;
code_?:
  func_?(health,pSVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <InitializeHealth>b__1(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass18_0::
     MVAvatarRemote_c_DisplayClass18_0__InitializeHealth_b__1
               (MVAvatarRemote_c_DisplayClass18_0 *this,Object *maxHealth,MethodInfo *method)

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

