
/* Void Apply() */

void Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_Apply
               (LocalTransformSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._transform;
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
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) {
    return;
  }
  pTVar1 = (this->fields)._parentTransform;
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
    obj = (this->fields)._transform;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    obj = (this->fields)._transform;
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      if (obj == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_3._0_4_ = (this->fields)._localPosition.x;
      uStack_3._4_4_ = (this->fields)._localPosition.y;
      fStack_4 = (this->fields)._localPosition.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar5);
      pTVar1 = (this->fields)._transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      fStack_7 = (this->fields)._localRotation.x;
      fStack_8 = (this->fields)._localRotation.y;
      fStack_9 = (this->fields)._localRotation.z;
      fStack_10 = (this->fields)._localRotation.w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar5);
      pTVar1 = (this->fields)._transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      uStack_11._0_4_ = (this->fields)._localScale.x;
      uStack_11._4_4_ = (this->fields)._localScale.y;
      fStack_12 = (this->fields)._localScale.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      puVar13 = &uStack_11;
      goto code_?;
    }
  }
  if (obj != (Transform *)0x0) {
    uStack_11._0_4_ = (this->fields)._localPosition.x;
    uStack_11._4_4_ = (this->fields)._localPosition.y;
    fStack_12 = (this->fields)._localPosition.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar5);
    pTVar1 = (this->fields)._transform;
    if (pTVar1 != (Transform *)0x0) {
      fStack_7 = (this->fields)._localRotation.x;
      fStack_8 = (this->fields)._localRotation.y;
      fStack_9 = (this->fields)._localRotation.z;
      fStack_10 = (this->fields)._localRotation.w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar5);
      pTVar1 = (this->fields)._transform;
      if (pTVar1 != (Transform *)0x0) {
        uStack_3._0_4_ = (this->fields)._localScale.x;
        uStack_3._4_4_ = (this->fields)._localScale.y;
        fStack_4 = (this->fields)._localScale.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        puVar13 = &uStack_3;
code_?:
        (*pcRam_?)(pvVar5,puVar13);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[RTG.LocalTransformSnapshot] GetSnapshotCollection(IEnumerable`1[UnityEngine.GameObject])
    */

List_1_RTG_LocalTransformSnapshot_ *
Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__Add_RTG__LocalTransformSnapshot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__LocalTransformSnapshot);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>);
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
    return pLVar1;
  }
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_int_->
           klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pLVar3 = (LocalTransformSnapshot__Array *)FUN_?(pvVar2,0x14);
  (pLVar1->fields)._items = pLVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  plVar8 = (longlong *)
            FUN_?(0,
                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                          ,gameObjects);
code_?:
  if (plVar8 != (longlong *)0x0) {
    cVar9 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar9 == '\0') {
      if (plVar8 == (longlong *)0x0) {
        return pLVar1;
      }
      FUN_?(0,TypeInfo__System__IDisposable,plVar8);
      return pLVar1;
    }
    if (plVar8 != (longlong *)0x0) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)(*pcVar10)();
  return pLVar1;
code_?:
  lVar11 = *plVar8;
  uVar12 = 0;
  if (*(ushort *)(lVar11 + 0x12e) != 0) {
    do {
      if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
           (*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
          TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
        puVar13 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) *
                   0x10 + 0x138 + lVar11);
        goto code_?;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)(lVar11 + 0x12e));
  }
  puVar13 = (undefined8 *)
            FUN_?(plVar8,
                          TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                         );
code_?:
  this = (GameObject *)(*(code *)*puVar13)(plVar8);
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (GameObject *)0x0) {
    bVar14 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar14 = (this->fields)._.m_CachedPtr != (void *)0x0;
  }
  if (bVar14) {
    this_00 = (LocalTransformSnapshot *)FUN_?(TypeInfo__RTG__LocalTransformSnapshot);
    if (this != (GameObject *)0x0) {
      transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this,(MethodInfo *)0x0);
      if (this_00 != (LocalTransformSnapshot *)0x0) {
        LocalTransformSnapshot_Snapshot(this_00,transform,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_RTG_LocalTransformSnapshot_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__Add_RTG__LocalTransformSnapshot_
                    );
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
    goto code_?;
  }
  goto code_?;
}


/* Boolean SameAs(Transform) */

bool Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_SameAs
               (LocalTransformSnapshot *this,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._parentTransform;
  if (transform != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (transform,(MethodInfo *)0x0);
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
    if (pTVar2 != (Transform *)0x0 || pTVar1 != (Transform *)0x0) {
      if (pTVar2 == (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pTVar1 == (Transform *)0x0) goto code_?;
        bVar3 = (pTVar1->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (pTVar1 == (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = (pTVar2->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar3 = pTVar1 == pTVar2;
      }
      if (!bVar3) {
        return 0;
      }
    }
    uStack_4._0_4_ = (this->fields)._localPosition.x;
    uStack_4._4_4_ = (this->fields)._localPosition.y;
    fVar5 = (this->fields)._localPosition.z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    fStack_7 = 0.0;
    pvVar8 = (transform->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8);
    fVar12 = _UNK_?;
    fVar5 = fVar5 - fStack_7;
    if ((uStack_4._4_4_ - uStack_6._4_4_) * (uStack_4._4_4_ - uStack_6._4_4_) +
        ((float)uStack_4 - (float)uStack_6) * ((float)uStack_4 - (float)uStack_6) +
        fVar5 * fVar5 < _UNK_?) {
      fVar5 = (this->fields)._localRotation.x;
      fVar13 = (this->fields)._localRotation.y;
      fVar14 = (this->fields)._localRotation.z;
      fVar15 = (this->fields)._localRotation.w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      uStack_17 = 0;
      pvVar8 = (transform->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8);
      if (_UNK_? <
          fVar13 * uStack_16._4_4_ + fVar5 * (float)uStack_16 + fVar14 * (float)uStack_17 +
          fVar15 * uStack_17._4_4_) {
        uStack_4._0_4_ = (this->fields)._localScale.x;
        uStack_4._4_4_ = (this->fields)._localScale.y;
        fVar5 = (this->fields)._localScale.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_6 = 0;
        fStack_7 = 0.0;
        pvVar8 = (transform->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar10 = (*pcVar9)();
          return bVar10;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar9 = (code *)swi(3);
          bVar10 = (*pcVar9)();
          return bVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&uStack_6);
        fVar5 = fVar5 - fStack_7;
        return (uStack_4._4_4_ - uStack_6._4_4_) * (uStack_4._4_4_ - uStack_6._4_4_) +
               ((float)uStack_4 - (float)uStack_6) * ((float)uStack_4 - (float)uStack_6) +
               fVar5 * fVar5 < fVar12;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void Snapshot(Transform) */

void Assembly-CSharp.dll::RTG::LocalTransformSnapshot::LocalTransformSnapshot_Snapshot
               (LocalTransformSnapshot *this,Transform *transform,MethodInfo *method)

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
      bVar1 = iRam_? != 0;
      (this->fields)._transform = transform;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (transform,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields)._parentTransform = pTVar6;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields)._parentTransform >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      fStack_8 = 0.0;
      pvVar9 = (transform->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      bVar1 = cRam_? == '\0';
      (this->fields)._localPosition.x = (float)(undefined4)uStack_7;
      (this->fields)._localPosition.y = (float)uStack_7._4_4_;
      (this->fields)._localPosition.z = fStack_8;
      if (bVar1) {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar9 = (transform->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      bVar1 = cRam_? == '\0';
      (this->fields)._localRotation.x = (float)uStack_12;
      (this->fields)._localRotation.y = uStack_12._4_4_;
      (this->fields)._localRotation.z = (float)uStack_13;
      (this->fields)._localRotation.w = uStack_13._4_4_;
      if (bVar1) {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      fStack_8 = 0.0;
      pvVar9 = (transform->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9,&uStack_7);
      (this->fields)._localScale.x = (float)(undefined4)uStack_7;
      (this->fields)._localScale.y = (float)uStack_7._4_4_;
      (this->fields)._localScale.z = fStack_8;
    }
  }
  return;
}

