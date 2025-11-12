
/* Boolean SameAs(Transform) */

bool Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_SameAs
               (WorldTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields)._worldPosition.x;
  uStack_1._4_4_ = (this->fields)._worldPosition.y;
  fVar2 = (this->fields)._worldPosition.z;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
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
  pvVar7 = (transform->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar7);
  fVar9 = _UNK_?;
  fVar2 = fVar2 - fStack_6;
  if ((uStack_1._4_4_ - uStack_5._4_4_) * (uStack_1._4_4_ - uStack_5._4_4_) +
      ((float)uStack_1 - (float)uStack_5) * ((float)uStack_1 - (float)uStack_5) + fVar2 * fVar2
      < _UNK_?) {
    fVar2 = (this->fields)._worldRotation.x;
    fVar10 = (this->fields)._worldRotation.y;
    fVar11 = (this->fields)._worldRotation.z;
    fVar12 = (this->fields)._worldRotation.w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_13 = 0;
    uStack_14 = 0;
    pvVar7 = (transform->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar7);
    if (_UNK_? <
        fVar10 * uStack_13._4_4_ + fVar2 * (float)uStack_13 + fVar11 * (float)uStack_14 +
        fVar12 * uStack_14._4_4_) {
      uStack_1._0_4_ = (this->fields)._worldScale.x;
      uStack_1._4_4_ = (this->fields)._worldScale.y;
      fVar2 = (this->fields)._worldScale.z;
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
      pvVar7 = (transform->fields)._._.m_CachedPtr;
      if (pvVar7 != (void *)0x0) {
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar7,&uStack_5);
        fVar2 = fVar2 - fStack_6;
        return (uStack_1._4_4_ - uStack_5._4_4_) * (uStack_1._4_4_ - uStack_5._4_4_) +
               ((float)uStack_1 - (float)uStack_5) * ((float)uStack_1 - (float)uStack_5) +
               fVar2 * fVar2 < fVar9;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Void Snaphot(Transform) */

void Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
               (WorldTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (transform != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((transform->fields)._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_1 = 0;
      fStack_2 = 0.0;
      pvVar3 = (transform->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      bVar6 = cRam_? == '\0';
      (this->fields)._worldPosition.x = (float)(undefined4)uStack_1;
      (this->fields)._worldPosition.y = (float)uStack_1._4_4_;
      (this->fields)._worldPosition.z = fStack_2;
      if (bVar6) {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      pvVar3 = (transform->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      bVar6 = cRam_? == '\0';
      (this->fields)._worldRotation.x = (float)uStack_7;
      (this->fields)._worldRotation.y = uStack_7._4_4_;
      (this->fields)._worldRotation.z = (float)uStack_8;
      (this->fields)._worldRotation.w = uStack_8._4_4_;
      if (bVar6) {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_1 = 0;
      fStack_2 = 0.0;
      pvVar3 = (transform->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&uStack_1);
      (this->fields)._worldScale.x = (float)(undefined4)uStack_1;
      (this->fields)._worldScale.y = (float)uStack_1._4_4_;
      (this->fields)._worldScale.z = fStack_2;
    }
  }
  return;
}


/* Quaternion get_WorldRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::WorldTransformSnapshot::WorldTransformSnapshot_get_WorldRotation
          (Quaternion *__return_storage_ptr__,WorldTransformSnapshot *this,MethodInfo *method)

{
  fVar1 = (this->fields)._worldRotation.y;
  fVar2 = (this->fields)._worldRotation.z;
  fVar3 = (this->fields)._worldRotation.w;
  __return_storage_ptr__->x = (this->fields)._worldRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}

