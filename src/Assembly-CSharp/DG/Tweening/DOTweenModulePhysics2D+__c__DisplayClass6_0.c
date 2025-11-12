
/* Void <DOLocalPath>b__1(Vector3) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass6_0::
     DOTweenModulePhysics2D_c_DisplayClass6_0__DOLocalPath_b__1
               (DOTweenModulePhysics2D_c_DisplayClass6_0 *this,Vector3 *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trans;
  obj = (this->fields).target;
  if (pTVar1 == (Transform *)0x0) goto code_?;
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
  if (pTVar1 == (Transform *)0x0) {
code_?:
    uVar2 = x->x;
    uVar3 = x->y;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    pTVar1 = (this->fields).trans;
    if ((pTVar1 == (Transform *)0x0) ||
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar1,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    uStack_4._0_4_ = x->x;
    uStack_4._4_4_ = x->y;
    fStack_5 = x->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_4,&uStack_6);
    uVar2 = (undefined4)uStack_6;
    uVar3 = (undefined4)((ulonglong)uStack_6 >> 0x20);
  }
  uStack_4 = CONCAT44(uVar3,uVar2);
  if (obj != (Rigidbody2D *)0x0) {
    uStack_6 = CONCAT44(uVar3,uVar2);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody2D>_UnityEngine__Rigidbody2D_
                    ,uStack_6,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (Rigidbody2D *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_6);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

