
/* List`1[UnityEngine.GameObject] CloneHierarchies(List`1[UnityEngine.GameObject],
   ObjectCloning+Config) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_CloneHierarchies
          (List_1_UnityEngine_GameObject_ *roots,ObjectCloning_Config *cloneConfig,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectCloning);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (roots == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_UnityEngine_GameObject_ *)(*pcVar1)();
    return pLVar2;
  }
  if ((roots->fields)._size == 0) {
    this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  }
  else {
    capacity = (roots->fields)._size;
    this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&OStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    OStack_4._8_8_ = (ulonglong)(uint)(roots->fields)._version << 0x20;
    uStack_8 = 0;
    LStack_9._index = OStack_4.TransformFlags;
    LStack_9._version = OStack_4.Layer;
    LStack_9._current = (Object *)0x0;
    OStack_4.Parent = (Transform *)roots;
    LStack_9._list = (List_1_System_Object_ *)roots;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), root = LStack_9._current, bVar10 != 0) {
      if (*(int *)&(TypeInfo__RTG__ObjectCloning->_1).field_0x1c == 0) {
        FUN_?();
      }
      OStack_4.Parent = cloneConfig->Parent;
      OStack_4.TransformFlags = cloneConfig->TransformFlags;
      OStack_4.Layer = cloneConfig->Layer;
      pGVar11 = ObjectCloning_CloneHierarchy((GameObject *)root,&OStack_4,(MethodInfo *)0x0);
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
      if (pGVar11 == (GameObject *)0x0) {
        bVar12 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar12 = (pGVar11->fields)._.m_CachedPtr != (void *)0x0;
      }
      if (bVar12) {
        if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                     *)0x0) goto code_?;
        FUN_?(this,pGVar11);
      }
    }
  }
  return (List_1_UnityEngine_GameObject_ *)this;
}


/* GameObject CloneHierarchy(GameObject, ObjectCloning+Config) */

GameObject *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_CloneHierarchy
          (GameObject *root,ObjectCloning_Config *cloneConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
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
  if (root == (GameObject *)0x0) {
    return (GameObject *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((root->fields)._.m_CachedPtr == (void *)0x0) {
    return (GameObject *)0x0;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->zeroVector).x;
  uVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar7 = (pQVar6->identityQuaternion).x;
  fVar8 = (pQVar6->identityQuaternion).y;
  fVar9 = (pQVar6->identityQuaternion).z;
  fVar10 = (pQVar6->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar2->oneVector).x;
  uVar12 = (pVVar2->oneVector).y;
  fVar13 = (pVVar2->oneVector).z;
  if ((cloneConfig->TransformFlags & 1) != 0) {
    if (pTVar1 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_14 = 0;
    fStack_15 = 0.0;
    pvVar16 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcRam_? = pcVar17;
    (*pcRam_?)(pvVar16);
    uVar3 = (undefined4)uStack_14;
    uVar4 = (undefined4)((ulonglong)uStack_14 >> 0x20);
    fVar5 = fStack_15;
  }
  if ((cloneConfig->TransformFlags & 2) != 0) {
    if (pTVar1 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_20 = 0;
    uStack_21 = 0;
    pvVar16 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcRam_? = pcVar17;
    (*pcRam_?)(pvVar16);
    fVar7 = (float)uStack_20;
    fVar8 = uStack_20._4_4_;
    fVar9 = (float)uStack_21;
    fVar10 = uStack_21._4_4_;
  }
  if ((cloneConfig->TransformFlags & 4) != 0) {
    if (pTVar1 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_22 = 0;
    fStack_23 = 0.0;
    pvVar16 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
    pcRam_? = pcVar17;
    (*pcRam_?)(pvVar16,&uStack_22);
    uVar11 = (undefined4)uStack_22;
    uVar12 = (undefined4)((ulonglong)uStack_22 >> 0x20);
    fVar13 = fStack_23;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_20 = CONCAT44(fVar8,fVar7);
  uStack_21 = CONCAT44(fVar10,fVar9);
  uStack_22 = CONCAT44(uVar4,uVar3);
  fStack_23 = fVar5;
  pGVar18 = (GameObject *)FUN_?(root);
  name = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                   ((Object_1 *)root,(MethodInfo *)0x0);
  if (pGVar18 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
              ((Object_1 *)pGVar18,name,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar18,cloneConfig->Layer,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar18,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      uStack_14 = CONCAT44(uVar12,uVar11);
      fStack_15 = fVar13;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar16 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar16 != (void *)0x0) {
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar17 = (code *)swi(3);
          pGVar18 = (GameObject *)(*pcVar17)();
          return pGVar18;
        }
        pcRam_? = pcVar17;
        (*pcRam_?)(pvVar16,&uStack_14);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar1,cloneConfig->Parent,(MethodInfo *)0x0);
        return pGVar18;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      pGVar18 = (GameObject *)(*pcVar17)();
      return pGVar18;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  pGVar18 = (GameObject *)(*pcVar17)();
  return pGVar18;
}


/* ObjectCloning() */

void Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectCloning);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__RTG__ObjectCloning->static_fields;
  (pOVar1->_defaultConfig).Parent = (Transform *)0x0;
  (pOVar1->_defaultConfig).TransformFlags = 0;
  (pOVar1->_defaultConfig).Layer = 0;
  (TypeInfo__RTG__ObjectCloning->static_fields->_defaultConfig).TransformFlags = 7;
  (TypeInfo__RTG__ObjectCloning->static_fields->_defaultConfig).Layer = 0;
  return;
}


/* ObjectCloning+Config get_DefaultConfig() */

ObjectCloning_Config *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_get_DefaultConfig
          (ObjectCloning_Config *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectCloning);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectCloning->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__ObjectCloning);
  }
  pOVar1 = TypeInfo__RTG__ObjectCloning->static_fields;
  iVar2 = (pOVar1->_defaultConfig).TransformFlags;
  iVar3 = (pOVar1->_defaultConfig).Layer;
  __return_storage_ptr__->Parent = (pOVar1->_defaultConfig).Parent;
  __return_storage_ptr__->TransformFlags = iVar2;
  __return_storage_ptr__->Layer = iVar3;
  return __return_storage_ptr__;
}

