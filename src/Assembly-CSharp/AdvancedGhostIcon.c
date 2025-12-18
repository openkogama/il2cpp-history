
/* Void AddSphereVolumeIndicator(Int32) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AddSphereVolumeIndicator
               (AdvancedGhostIcon *this,int32_t Id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,Id,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      pLVar3 = (pPVar2->fields).lineRangeIndicator;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar3 = (LineRangeIndicator *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pLVar3,
                          LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                         );
      bVar4 = iRam_? != 0;
      (this->fields).lineRangeIndicator = pLVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).lineRangeIndicator >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pLVar3 = (this->fields).lineRangeIndicator;
      if (pLVar3 != (LineRangeIndicator *)0x0) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar3,(MethodInfo *)0x0);
        pGVar10 = (pMVar1->fields).gameObject;
        if ((pGVar10 != (GameObject *)0x0) &&
           (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar10,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar9,pTVar11,0,(MethodInfo *)0x0);
          pLVar3 = (this->fields).lineRangeIndicator;
          if (pLVar3 != (LineRangeIndicator *)0x0) {
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pLVar3,(MethodInfo *)0x0);
            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (((pGVar10 != (GameObject *)0x0) &&
                (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                pTVar11 != (Transform *)0x0)) &&
               (pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    (&VStack_13,pTVar11,(MethodInfo *)0x0),
               pTVar9 != (Transform *)0x0)) {
              VStack_14.x = pVVar12->x;
              VStack_14.y = pVVar12->y;
              VStack_14.z = pVVar12->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                        (pTVar9,&VStack_14,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void AdvancedGhostOnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AdvancedGhostOnPositionChanged
               (AdvancedGhostIcon *this,Object *sender,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (pCVar1 = (this->fields).cullingSubscriberBase, pCVar1 != (CullingSubscriberBase *)0x0)) {
    fVar2 = (positionChangedEventArgs->fields).NewPos.x;
    fVar3 = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = fVar2;
        pBVar5->vector[(int)uVar6].position.y = fVar3;
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CloneCubeMeshes(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_CloneCubeMeshes
               (AdvancedGhostIcon *this,MVCubeModelBase *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  pGVar2 = (this->fields).ghostBody;
  if (pGVar2 == (GhostBody *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pGVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar4 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6);
code_?:
    FUN_?();
code_?:
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
    FUN_?(pOVar4);
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar5);
    pGVar2 = (this->fields).ghostBody;
    if ((pGVar2 == (GhostBody *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar2,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    pTStackX_20 = (Transform__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (pTVar7,(MethodInfo *)0x0);
    uStack_8 = 0;
    unaff_R14 = (Object *)&pTStackX_20;
    plStack_9 = alStack_1;
    pOStack_10 = unaff_R14;
    while (method = (MethodInfo *)pTStackX_20, pTStackX_20 != (Transform__Class *)0x0) {
      cVar11 = FUN_?(0);
      pTVar12 = pTStackX_20;
      uVar13 = 0;
      if (cVar11 == '\0') {
        alStack_1[0] = FUN_?(pTStackX_20,TypeInfo__System__IDisposable);
        if (alStack_1[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
        }
        if ((body == (MVCubeModelBase *)0x0) ||
           ((body->fields).chunkInstances == (ChunkInstances *)0x0)) goto code_?;
        pTStackX_20 = (Transform__Class *)
                      FUN_?(0,TypeInfo__System__Collections__IEnumerable);
        uStack_14 = 0;
        ppTStack_15 = &pTStackX_20;
        plStack_16 = alStack_1;
        goto code_?;
      }
      pOVar4 = (Object__Class *)0x0;
      if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
      pIVar17 = (pTStackX_20->_0).image;
      uVar18 = *(ushort *)((longlong)&pIVar17[4].nameNoExt + 6);
      if (uVar18 != 0) {
        method = *(MethodInfo **)&pIVar17[2].customAttributeCount;
        do {
          if ((IEnumerator__Class *)
              (&(((Transform__Class *)method)->_0).image)[(ulonglong)uVar13 * 2] ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar19 = &pIVar17[4].typeCount +
                      (longlong)
                      (*(int *)(&(((Transform__Class *)method)->_0).gc_desc + (ulonglong)uVar13 * 2)
                      + 1) * 4;
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar18);
      }
      method = (MethodInfo *)0x1;
      puVar19 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      pOVar4 = (Object__Class *)(**(code **)puVar19)(pTVar12,*(undefined8 *)(puVar19 + 2));
      if (pOVar4 == (Object__Class *)0x0) goto code_?;
      method = (MethodInfo *)(pOVar4->_0).image;
      bVar20 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((((Transform__Class *)method)->_1).naturalAligment < bVar20) ||
         ((((Transform__Class *)method)->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) goto code_?;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar3;
      pvVar5 = (void *)(*pcRam_?)(pvVar5);
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar5,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pOVar4,0.0,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  uVar6 = func_?(&UNK_?);
  FUN_?(uVar6);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar4,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  plVar21 = (longlong *)FUN_?();
code_?:
  FUN_?(plVar21,method);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_?:
  pTVar12 = pTStackX_20;
  if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
  pIVar17 = (pTStackX_20->_0).image;
  uVar22 = 0;
  uVar13 = *(ushort *)((longlong)&pIVar17[4].nameNoExt + 6);
  if (uVar13 != 0) {
    do {
      if (*(IEnumerator__Class **)(*(longlong *)&pIVar17[2].customAttributeCount + uVar22 * 0x10) ==
          TypeInfo__System__Collections__IEnumerator) {
        puVar19 = &pIVar17[4].typeCount +
                  (longlong)
                  *(int *)(*(longlong *)&pIVar17[2].customAttributeCount + 8 + uVar22 * 0x10) * 4;
        goto code_?;
      }
      uVar18 = (short)uVar22 + 1;
      uVar22 = (ulonglong)uVar18;
    } while (uVar18 < uVar13);
  }
  puVar19 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,0);
code_?:
  cVar11 = (**(code **)puVar19)(pTVar12,*(undefined8 *)(puVar19 + 2));
  pTVar12 = pTStackX_20;
  if (cVar11 == '\0') {
    alStack_1[0] = FUN_?(pTStackX_20);
    if (alStack_1[0] != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
    }
    pGVar2 = (this->fields).ghostBody;
    if (pGVar2 != (GhostBody *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pGVar2->fields)._._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      pvVar5 = (void *)(*pcRam_?)(pvVar5);
      pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar5,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      pTVar7 = (body->fields)._.transform;
      if (pTVar7 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar5);
        if (pOVar23 == (Object *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_8 = 0;
        pOStack_10 = (Object *)((ulonglong)pOStack_10 & 0xffffffff00000000);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar4 = pOVar23[1].klass;
        if (pOVar4 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pOVar4,&uStack_8);
        return;
      }
    }
    goto code_?;
  }
  if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
  pIVar17 = (pTStackX_20->_0).image;
  uVar22 = 0;
  uVar13 = *(ushort *)((longlong)&pIVar17[4].nameNoExt + 6);
  if (uVar13 != 0) {
    do {
      if (*(IEnumerator__Class **)(*(longlong *)&pIVar17[2].customAttributeCount + uVar22 * 0x10) ==
          TypeInfo__System__Collections__IEnumerator) {
        puVar19 = &pIVar17[4].typeCount +
                  (longlong)
                  (*(int *)(*(longlong *)&pIVar17[2].customAttributeCount + 8 + uVar22 * 0x10) + 1) *
                  4;
        goto code_?;
      }
      uVar18 = (short)uVar22 + 1;
      uVar22 = (ulonglong)uVar18;
    } while (uVar18 < uVar13);
  }
  puVar19 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
  plVar21 = (longlong *)(**(code **)puVar19)(pTVar12,*(undefined8 *)(puVar19 + 2));
  if (plVar21 == (longlong *)0x0) goto code_?;
  method = (MethodInfo *)
           TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
  ;
  if (*(Il2CppClass **)(*plVar21 + 0x40) !=
      (
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ->_0).element_class) goto code_?;
  pOVar23 = (Object *)plVar21[5];
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  unaff_R14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (pOVar23,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
  if (unaff_R14 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = unaff_R14[1].klass;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pOVar4);
  pTVar7 = (Transform *)
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar5,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
  pOVar4 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pvVar5);
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar5,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (pTVar7 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Parent_of_RectTransform_is_being);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar24 = (Transform *)0x0;
  if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
    pTVar24 = pTVar7;
  }
  if (pTVar24 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)pTVar7,
               (MethodInfo *)0x0);
  }
  method = (MethodInfo *)0x1;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (pTVar7,(Transform *)pOVar4,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = unaff_R14[1].klass;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pOVar4);
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar5,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = unaff_R14[1].klass;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pOVar4);
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar5,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar25 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  uStack_8._0_4_ = (pQVar25->identityQuaternion).x;
  uStack_8._4_4_ = (pQVar25->identityQuaternion).y;
  pOStack_10 = *(Object **)&(pQVar25->identityQuaternion).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  pOVar4 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pvVar5);
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar5,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = unaff_R14[1].klass;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  (*pcRam_?)(pOVar4);
  pOVar4 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  pvVar5 = (void *)(*pcRam_?)(pvVar5);
  pOVar4 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar5,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (((Transform__Fields *)&(pOVar4->_0).name)->_)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  uVar26 = (*pcRam_?)(pvVar5);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = unaff_R14[1].klass;
  if (pOVar4 == (Object__Class *)0x0) goto code_?;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar3;
  (*pcRam_?)(pOVar4,uVar26);
  goto code_?;
}


/* Void Init(MVAdvancedGhost, MVCubeModelBase, Boolean, MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_Init
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MVCubeModelBase *body,
               bool enabledCulling,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto DAT_?;
  if ((pGVar1->fields).gameMode == 0) {
code_?:
    if (advancedGhost == (MVAdvancedGhost *)0x0) goto DAT_?;
    AdvancedGhostIcon_AddSphereVolumeIndicator
              (this,(advancedGhost->fields)._._._._.id,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto DAT_?;
    if ((pGVar1->fields).gameMode == 4) goto code_?;
  }
  if (body != (MVCubeModelBase *)0x0) {
    pAVar2 = (body->fields).Changed;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    if (pDVar3 == (Delegate *)0x0) {
      (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)
                FUN_?(pDVar3,TypeInfo__System__Action<CubeModelChangedEventArgs>);
      if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
        FUN_?(pDVar3,pAVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (body->fields).Changed = pAVar2;
      pAVar4 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
      lVar6 = FUN_?(pDVar3,TypeInfo__System__Action<CubeModelChangedEventArgs>);
      if (lVar6 == 0) {
        FUN_?(pDVar3,pAVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(body->fields).Changed >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    AdvancedGhostIcon_CloneCubeMeshes(this,body,(MethodInfo *)0x0);
    if (enabledCulling == 0) {
      (this->fields).visible = 1;
      (this->fields).wantsVisible = 1;
    }
    else {
      AdvancedGhostIcon_SetupCulling(this,advancedGhost,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar11 = (this->fields).teamIrisObjects;
    MVar12 = MVTeam__Enum_Server;
    if (team != MVTeam__Enum_None) {
      MVar12 = team;
    }
    uVar7 = 0;
    if (pLVar11 != (List_1_OculusTeamGameObject_ *)0x0) {
      lVar6 = 0x20;
      while( true ) {
        if ((pLVar11->fields)._size <= (int)uVar7) {
          return;
        }
        pLVar11 = (this->fields).teamIrisObjects;
        if (pLVar11 == (List_1_OculusTeamGameObject_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar7) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pOVar13 = (pLVar11->fields)._items;
        if (pOVar13 == (OculusTeamGameObject__Array *)0x0) break;
        if ((uint)pOVar13->max_length <= uVar7) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar14 = *(longlong *)((longlong)pOVar13->vector + lVar6 + -0x20);
        if ((lVar14 == 0) || (obj = *(Object **)(lVar14 + 0x18), obj == (Object *)0x0)) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj[1].klass == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)();
        pLVar11 = (this->fields).teamIrisObjects;
        if (pLVar11 == (List_1_OculusTeamGameObject_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar7) goto code_?;
        pOVar13 = (pLVar11->fields)._items;
        if (pOVar13 == (OculusTeamGameObject__Array *)0x0) break;
        if ((uint)pOVar13->max_length <= uVar7) goto code_?;
        lVar14 = *(longlong *)((longlong)pOVar13->vector + lVar6 + -0x20);
        if (lVar14 == 0) break;
        if (*(MVTeam__Enum *)(lVar14 + 0x10) == MVar12) {
          lVar14 = FUN_?((this->fields).teamIrisObjects,uVar7);
          if ((lVar14 == 0) || (*(GameObject **)(lVar14 + 0x18) == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)(lVar14 + 0x18),1,(MethodInfo *)0x0);
        }
        pLVar11 = (this->fields).teamIrisObjects;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 8;
        if (pLVar11 == (List_1_OculusTeamGameObject_ *)0x0) break;
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnDestroy
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnStateChange
               (AdvancedGhostIcon *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0) &&
       (((ulonglong)cullingGroupEvent >> 0x20 & 0x80) != 0)) ||
      ((bVar1 = cullingGroupEvent.m_ThisState, 3 < (bVar1 & 0x7f) &&
       (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) != 0)))) ||
     (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0)) {
    bVar2 = false;
  }
  else if ((((ulonglong)cullingGroupEvent >> 0x20 & 0x80) == 0) || ((bVar1 & 0x7f) < 4)) {
    bVar2 = true;
  }
  else {
    bVar2 = (bVar1 & 0x7f) < 4;
  }
  (this->fields).visible = bVar2;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (this->fields).visible;
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar3 != 0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,bVar3 != 0);
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetGameMode
               (AdvancedGhostIcon *this,bool isPlayMode,MethodInfo *method)

{
  (this->fields).wantsVisible = isPlayMode ^ 1;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar1 != 0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,bVar1 != 0);
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetVisibility
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar1 != 0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,bVar1 != 0);
  return;
}


/* Void SetupCulling(MVAdvancedGhost) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetupCulling
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&VStack_1);
    callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    FUN_?(callback,this);
    pCVar5 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar5,callback,(MethodInfo *)0x0);
    VStack_6.z = VStack_1.z;
    VStack_6.x = VStack_1.x;
    VStack_6.y = VStack_1.y;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (pCVar5,_UNK_?,&VStack_6,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = pCVar5;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pCVar5 = (this->fields).cullingSubscriberBase;
    if ((pCVar5 != (CullingSubscriberBase *)0x0) &&
       ((pCVar5->fields)._DistanceBandIndex_k__BackingField = 3,
       advancedGhost != (MVAdvancedGhost *)0x0)) {
      pUVar12 = (advancedGhost->fields)._._._.PositionChanged;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar12,(Delegate *)this_00,(MethodInfo *)0x0);
      pUVar14 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar13 == (Delegate *)0x0) {
        (advancedGhost->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar13,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar12 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar13,pUVar14);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (advancedGhost->fields)._._._.PositionChanged = pUVar12;
        pUVar14 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar15 = FUN_?(pDVar13,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
        if (lVar15 == 0) {
          FUN_?(pDVar13,pUVar14);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(advancedGhost->fields)._._._.PositionChanged >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_body_Changed
               (AdvancedGhostIcon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  if (e == (CubeModelChangedEventArgs *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = (e->fields).Sender;
  pTVar3 = (Transform__Class *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,pMVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_4[0] = 0;
  pGVar5 = (this->fields).ghostBody;
  if (pGVar5 == (GhostBody *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pGVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar6 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8);
code_?:
    FUN_?();
code_?:
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
    FUN_?(pOVar6);
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar7);
    pGVar5 = (this->fields).ghostBody;
    if ((pGVar5 == (GhostBody *)0x0) ||
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar5,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0))
    goto code_?;
    pTStackX_20 = (Transform__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (pTVar9,(MethodInfo *)0x0);
    uStack_10 = 0;
    unaff_R14 = (Object *)&pTStackX_20;
    plStack_11 = alStack_4;
    pOStack_12 = unaff_R14;
    while (pTVar3 = pTStackX_20, pTStackX_20 != (Transform__Class *)0x0) {
      cVar13 = FUN_?(0);
      pTVar14 = pTStackX_20;
      uVar15 = 0;
      if (cVar13 == '\0') {
        alStack_4[0] = FUN_?(pTStackX_20,TypeInfo__System__IDisposable);
        if (alStack_4[0] != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,alStack_4[0]);
        }
        if ((pMVar2 == (MVCubeModelBase *)0x0) ||
           ((pMVar2->fields).chunkInstances == (ChunkInstances *)0x0)) goto code_?;
        pTStackX_20 = (Transform__Class *)
                      FUN_?(0,TypeInfo__System__Collections__IEnumerable);
        uStack_16 = 0;
        ppTStack_17 = &pTStackX_20;
        plStack_18 = alStack_4;
        goto code_?;
      }
      pOVar6 = (Object__Class *)0x0;
      if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
      pIVar19 = (pTStackX_20->_0).image;
      uVar20 = *(ushort *)((longlong)&pIVar19[4].nameNoExt + 6);
      if (uVar20 != 0) {
        pTVar3 = *(Transform__Class **)&pIVar19[2].customAttributeCount;
        do {
          if ((IEnumerator__Class *)(&(pTVar3->_0).image)[(ulonglong)uVar15 * 2] ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar21 = &pIVar19[4].typeCount +
                      (longlong)(*(int *)(&(pTVar3->_0).gc_desc + (ulonglong)uVar15 * 2) + 1) * 4;
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar20);
      }
      pTVar3 = (Transform__Class *)0x1;
      puVar21 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      pOVar6 = (Object__Class *)(**(code **)puVar21)(pTVar14,*(undefined8 *)(puVar21 + 2));
      if (pOVar6 == (Object__Class *)0x0) goto code_?;
      pTVar3 = (Transform__Class *)(pOVar6->_0).image;
      bVar22 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pTVar3->_1).naturalAligment < bVar22) ||
         ((pTVar3->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) goto code_?;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar1;
      pvVar7 = (void *)(*pcRam_?)(pvVar7);
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar7,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pOVar6,0.0,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  uVar8 = func_?(&UNK_?);
  FUN_?(uVar8);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pOVar6,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(unaff_R14,(MethodInfo *)0x0);
code_?:
  plVar23 = (longlong *)FUN_?();
code_?:
  FUN_?(plVar23,pTVar3);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  pTVar3 = pTStackX_20;
  if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
  pIVar19 = (pTStackX_20->_0).image;
  uVar24 = 0;
  uVar15 = *(ushort *)((longlong)&pIVar19[4].nameNoExt + 6);
  if (uVar15 != 0) {
    do {
      if (*(IEnumerator__Class **)(*(longlong *)&pIVar19[2].customAttributeCount + uVar24 * 0x10) ==
          TypeInfo__System__Collections__IEnumerator) {
        puVar21 = &pIVar19[4].typeCount +
                  (longlong)
                  *(int *)(*(longlong *)&pIVar19[2].customAttributeCount + 8 + uVar24 * 0x10) * 4;
        goto code_?;
      }
      uVar20 = (short)uVar24 + 1;
      uVar24 = (ulonglong)uVar20;
    } while (uVar20 < uVar15);
  }
  puVar21 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,0);
code_?:
  cVar13 = (**(code **)puVar21)(pTVar3,*(undefined8 *)(puVar21 + 2));
  pTVar3 = pTStackX_20;
  if (cVar13 == '\0') {
    alStack_4[0] = FUN_?(pTStackX_20);
    if (alStack_4[0] != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,alStack_4[0]);
    }
    pGVar5 = (this->fields).ghostBody;
    if (pGVar5 != (GhostBody *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pGVar5->fields)._._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      pvVar7 = (void *)(*pcRam_?)(pvVar7);
      pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar7,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      pTVar9 = (pMVar2->fields)._.transform;
      if (pTVar9 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar7);
        if (pOVar25 == (Object *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_10 = 0;
        pOStack_12 = (Object *)((ulonglong)pOStack_12 & 0xffffffff00000000);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar6 = pOVar25[1].klass;
        if (pOVar6 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar25,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pOVar6,&uStack_10);
        return;
      }
    }
    goto code_?;
  }
  if (pTStackX_20 == (Transform__Class *)0x0) goto code_?;
  pIVar19 = (pTStackX_20->_0).image;
  uVar24 = 0;
  uVar15 = *(ushort *)((longlong)&pIVar19[4].nameNoExt + 6);
  if (uVar15 != 0) {
    do {
      if (*(IEnumerator__Class **)(*(longlong *)&pIVar19[2].customAttributeCount + uVar24 * 0x10) ==
          TypeInfo__System__Collections__IEnumerator) {
        puVar21 = &pIVar19[4].typeCount +
                  (longlong)
                  (*(int *)(*(longlong *)&pIVar19[2].customAttributeCount + 8 + uVar24 * 0x10) + 1) *
                  4;
        goto code_?;
      }
      uVar20 = (short)uVar24 + 1;
      uVar24 = (ulonglong)uVar20;
    } while (uVar20 < uVar15);
  }
  puVar21 = (uint32_t *)FUN_?(pTStackX_20,TypeInfo__System__Collections__IEnumerator,1);
code_?:
  plVar23 = (longlong *)(**(code **)puVar21)(pTVar3,*(undefined8 *)(puVar21 + 2));
  if (plVar23 == (longlong *)0x0) goto code_?;
  pTVar3 = (Transform__Class *)
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
  ;
  if (*(Il2CppClass **)(*plVar23 + 0x40) !=
      (
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ->_0).element_class) goto code_?;
  pOVar25 = (Object *)plVar23[5];
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  unaff_R14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (pOVar25,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
  if (unaff_R14 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = unaff_R14[1].klass;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pOVar6);
  pTVar9 = (Transform *)
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar7,
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                      );
  pOVar6 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pvVar7);
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar7,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (pTVar9 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Parent_of_RectTransform_is_being);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar26 = (Transform *)0x0;
  if (pTVar9->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
    pTVar26 = pTVar9;
  }
  if (pTVar26 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
              ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)pTVar9,
               (MethodInfo *)0x0);
  }
  pTVar3 = (Transform__Class *)0x1;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (pTVar9,(Transform *)pOVar6,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = unaff_R14[1].klass;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pOVar6);
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar7,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = unaff_R14[1].klass;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pOVar6);
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar7,
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar27 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  uStack_10._0_4_ = (pQVar27->identityQuaternion).x;
  uStack_10._4_4_ = (pQVar27->identityQuaternion).y;
  pOStack_12 = *(Object **)&(pQVar27->identityQuaternion).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7);
  pOVar6 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pvVar7);
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar7,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = unaff_R14[1].klass;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  (*pcRam_?)(pOVar6);
  pOVar6 = (Object__Class *)(this->fields).ghostBody;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  pvVar7 = (void *)(*pcRam_?)(pvVar7);
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
           Unmarshal_UnmarshalUnityObject
                     (pvVar7,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (((Transform__Fields *)&(pOVar6->_0).name)->_)._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  uVar28 = (*pcRam_?)(pvVar7);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = unaff_R14[1].klass;
  if (pOVar6 == (Object__Class *)0x0) goto code_?;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
  goto code_?;
  pcRam_? = pcVar1;
  (*pcRam_?)(pOVar6,uVar28);
  goto code_?;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Radius
               (AdvancedGhostIcon *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        return;
      }
    }
    this_00 = (this->fields).lineRangeIndicator;
    if (this_00 != (LineRangeIndicator *)0x0) {
      LineRangeIndicator::LineRangeIndicator_SetRange(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Team
               (AdvancedGhostIcon *this,MVTeam__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).teamIrisObjects;
  MVar2 = MVTeam__Enum_Server;
  if (value != MVTeam__Enum_None) {
    MVar2 = value;
  }
  uVar3 = 0;
  if (pLVar1 != (List_1_OculusTeamGameObject_ *)0x0) {
    lVar4 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar3) {
        return;
      }
      pLVar1 = (this->fields).teamIrisObjects;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar4 + -0x20);
      if ((lVar7 == 0) || (obj = *(Object **)(lVar7 + 0x18), obj == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      pLVar1 = (this->fields).teamIrisObjects;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar3) goto code_?;
      lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar4 + -0x20);
      if (lVar7 == 0) break;
      if (*(MVTeam__Enum *)(lVar7 + 0x10) == MVar2) {
        lVar7 = FUN_?((this->fields).teamIrisObjects,uVar3);
        if ((lVar7 == 0) || (*(GameObject **)(lVar7 + 0x18) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(lVar7 + 0x18),1,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).teamIrisObjects;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

