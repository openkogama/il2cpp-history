
/* Void <InitializeHealth>b__0(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass23_0::
     MVAvatarRemote_c_DisplayClass23_0__InitializeHealth_b__0
               (MVAvatarRemote_c_DisplayClass23_0 *this,Object *health,MethodInfo *method)

{
  pHVar1 = (this->fields).healthBar;
  this_00 = (this->fields).__4__this;
  if ((pHVar1 != (HealthBar *)0x0) &&
     (pTVar2 = (pHVar1->fields).healthPivot, pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&uStack_3);
    pMVar8 = (this->fields).__4__this;
    fVar9 = (float)uStack_3 * (pHVar1->fields)._MaxHealth_k__BackingField;
    if (((pMVar8 != (MVAvatarRemote *)0x0) &&
        (pMVar10 = (pMVar8->fields)._.Health, pMVar10 != (MVRuntimeDataVariable_1_System_Single_ *)0x0
        )) && (currentHealth =
                    (float)(*(pMVar10->klass->vtable).get_Value.methodPtr)
                                     (pMVar10,(pMVar10->klass->vtable).get_Value.method),
              this_00 != (MVAvatarRemote *)0x0)) {
      MVAvatar::MVAvatar_TrySpawningHealParticles
                ((MVAvatar *)this_00,fVar9,currentHealth,(MethodInfo *)0x0);
      pHVar1 = (this->fields).healthBar;
      if ((pHVar1 != (HealthBar *)0x0) && (health != (Object *)0x0)) {
        if ((health->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(health,lRam_?);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar9 = *(float *)&health[1].klass;
        pTVar2 = (pHVar1->fields).healthPivot;
        if (pTVar2 == (Transform *)0x0) {
          FUN_?(pHVar1,health->klass,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_3 = 0;
        uStack_4 = 0;
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5);
        fVar9 = fVar9 / (pHVar1->fields)._MaxHealth_k__BackingField;
        if (fVar9 < 0.0) {
          fVar9 = 0.0;
        }
        else if (_UNK_? < fVar9) {
          fVar9 = _UNK_?;
        }
        pTVar2 = (pHVar1->fields).healthPivot;
        _fStack_28 = CONCAT44((int)((ulonglong)uStack_3 >> 0x20),fVar9);
        if (pTVar2 == (Transform *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_11 = uStack_4;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&fStack_12);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <InitializeHealth>b__1(Object) */

void Assembly-CSharp.dll::MVAvatarRemote+<>c__DisplayClass23_0::
     MVAvatarRemote_c_DisplayClass23_0__InitializeHealth_b__1
               (MVAvatarRemote_c_DisplayClass23_0 *this,Object *maxHealth,MethodInfo *method)

{
  pHVar1 = (this->fields).healthBar;
  if ((pHVar1 != (HealthBar *)0x0) && (maxHealth != (Object *)0x0)) {
    if ((maxHealth->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
      (pHVar1->fields)._MaxHealth_k__BackingField = (float)*(int *)&maxHealth[1].klass;
      return;
    }
    FUN_?(maxHealth);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

