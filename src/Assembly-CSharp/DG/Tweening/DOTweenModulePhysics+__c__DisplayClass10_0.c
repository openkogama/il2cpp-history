
/* Void <DOLocalPath>b__1(Vector3) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics+<>c__DisplayClass10_0::
     DOTweenModulePhysics_c_DisplayClass10_0__DOLocalPath_b__1
               (DOTweenModulePhysics_c_DisplayClass10_0 *this,Vector3 *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trans;
  obj = (this->fields).target;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (pTVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).trans;
      if ((pTVar1 == (Transform *)0x0) ||
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar1,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
      goto code_?;
      uStack_3._0_4_ = x->x;
      uStack_3._4_4_ = x->y;
      fStack_4 = x->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      fStack_6 = 0.0;
      pvVar7 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar7,&uStack_3,&uStack_5);
      uStack_9 = uStack_5;
      fStack_10 = fStack_6;
      goto code_?;
    }
  }
  uStack_9._0_4_ = x->x;
  uStack_9._4_4_ = x->y;
  fStack_10 = x->z;
code_?:
  if (obj == (Rigidbody *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7,&uStack_9);
  return;
}

