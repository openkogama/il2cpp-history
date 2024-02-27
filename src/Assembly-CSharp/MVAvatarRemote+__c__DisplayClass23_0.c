
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
  if ((pHVar1 != (HealthBar *)0x0) &&
     (pTVar2 = (pHVar1->fields).healthPivot, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    pMVar5 = (this->fields).__4__this;
    fStack_6 = pVVar3->x;
    fStack_7 = (pHVar1->fields)._MaxHealth_k__BackingField;
    if ((pMVar5 != (MVAvatarRemote *)0x0) &&
       (pMVar8 = (pMVar5->fields)._.Health, pMVar8 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)
       ) {
      fVar9 = (float10)(*(code *)(pMVar8->klass->vtable).get_Value.method)
                                  (pMVar8,(pMVar8->klass->vtable).set_Value.methodPtr);
      if (this_00 != (MVAvatarRemote *)0x0) {
        MVAvatar::MVAvatar_TrySpawningHealParticles
                  ((MVAvatar *)this_00,fStack_7 * fStack_6,(float)fVar9,(MethodInfo *)0x0);
        pHVar1 = (this->fields).healthBar;
        if (pHVar1 != (HealthBar *)0x0) {
          if (health != (Object *)0x0) {
            pSVar10 = TypeInfo__System__Single;
            if ((health->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar11 = (float *)func_?(health);
            fVar12 = *pfVar11;
            pTVar2 = (pHVar1->fields).healthPivot;
            if (pTVar2 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 (&VStack_13,pTVar2,(MethodInfo *)0x0);
              uVar14 = pVVar3->y;
              VStack_4.x = fVar12 / (pHVar1->fields)._MaxHealth_k__BackingField;
              if (VStack_4.x < 0.0) {
                VStack_4.x = 0.0;
              }
              else if (_UNK_? < VStack_4.x) {
                VStack_4.x = _UNK_?;
              }
              pTVar2 = (pHVar1->fields).healthPivot;
              VStack_4.y = (float)uVar14;
              if (pTVar2 != (Transform *)0x0) {
                value.y = (float)uVar14;
                value.x = VStack_4.x;
                value.z = pVVar3->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar2,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  health = extraout_ECX;
  pSVar10 = extraout_EDX;
code_?:
  func_?(health,pSVar10);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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

