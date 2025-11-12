
/* Void <DOJump>b__1() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics+<>c__DisplayClass6_0::
     DOTweenModulePhysics_c_DisplayClass6_0__DOJump_b__1
               (DOTweenModulePhysics_c_DisplayClass6_0 *this,MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Rigidbody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody>_UnityEngine__Rigidbody_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (this->fields).startPosY = uStack_2._4_4_;
  return;
}


/* Void <DOJump>b__4() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics+<>c__DisplayClass6_0::
     DOTweenModulePhysics_c_DisplayClass6_0__DOJump_b__4
               (DOTweenModulePhysics_c_DisplayClass6_0 *this,MethodInfo *method)

{
  if ((this->fields).offsetYSet == 0) {
    pSVar1 = (this->fields).s;
    (this->fields).offsetYSet = 1;
    if (pSVar1 == (Sequence *)0x0) goto DAT_?;
    fVar2 = (this->fields).endValue.y;
    if ((pSVar1->fields)._._isRelative_k__BackingField == 0) {
      fVar2 = fVar2 - (this->fields).startPosY;
    }
    (this->fields).offsetY = fVar2;
  }
  pRVar3 = (this->fields).target;
  if (pRVar3 != (Rigidbody *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody>_UnityEngine__Rigidbody_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    uStack_5 = 0;
    pvVar6 = (pRVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_4);
    uVar9 = uStack_5;
    fVar2 = (this->fields).offsetY;
    uStack_10 = uStack_4;
    lifetimePercentage =
         DOTween.dll::DG::Tweening::TweenExtensions::TweenExtensions_ElapsedPercentage
                   ((this->fields).yTween,1,(MethodInfo *)0x0);
    fVar2 = DOTween.dll::DG::Tweening::DOVirtual::DOVirtual_EasedValue
                      (0.0,fVar2,lifetimePercentage,Ease__Enum_OutQuad,(MethodInfo *)0x0);
    pRVar3 = (this->fields).target;
    uStack_10 = CONCAT44(fVar2 + uStack_4._4_4_,(undefined4)uStack_10);
    if (pRVar3 == (Rigidbody *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_11 = uStack_10;
    uStack_12 = uVar9;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody>_UnityEngine__Rigidbody_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pRVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_11);
    return;
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

