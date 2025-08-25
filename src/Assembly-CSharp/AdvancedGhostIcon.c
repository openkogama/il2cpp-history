
/* Void AddSphereVolumeIndicator(Int32) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AddSphereVolumeIndicator
               (AdvancedGhostIcon *this,int32_t Id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,Id,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      pLVar3 = (pPVar2->fields).lineRangeIndicator;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar3 = (LineRangeIndicator *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pLVar3,
                          LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                         );
      (this->fields).lineRangeIndicator = pLVar3;
      func_?(&(this->fields).lineRangeIndicator);
      pLVar3 = (this->fields).lineRangeIndicator;
      if (pLVar3 != (LineRangeIndicator *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar3,(MethodInfo *)0x0);
        this_00 = pMVar1[1].fields.inputLinkRefs;
        if ((this_00 != (List_1_MV_WorldObject_Link_ *)0x0) &&
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_00,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar4,pTVar5,0,(MethodInfo *)0x0);
          pLVar3 = (this->fields).lineRangeIndicator;
          if (pLVar3 != (LineRangeIndicator *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pLVar3,(MethodInfo *)0x0);
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (((this_02 != (GameObject *)0x0) &&
                (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_02,(MethodInfo *)0x0),
                pTVar5 != (Transform *)0x0)) &&
               (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                   ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0),
               pTVar4 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                        (pTVar4,*pVVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AdvancedGhostOnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AdvancedGhostOnPositionChanged
               (AdvancedGhostIcon *this,Object *sender,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields).cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CloneCubeMeshes(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_CloneCubeMeshes
               (AdvancedGhostIcon *this,MVCubeModelBase *body,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  TStack_4.fields._._.m_CachedPtr = (Component__Fields)&stack0xffffff7c;
  TVar5._._.m_CachedPtr = (Component__Fields)(Component__Fields)&stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
    TVar5._._.m_CachedPtr = TStack_4.fields._._.m_CachedPtr;
  }
  TStack_4.fields._._.m_CachedPtr = TVar5._._.m_CachedPtr;
  TStack_4.klass = (Transform__Class *)0x0;
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 != (GhostBody *)0x0) {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pGVar6,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (unaff_ESI != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (unaff_ESI,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                 (MethodInfo *)0x0);
      pGVar6 = (this->fields).ghostBody;
      if (pGVar6 != (GhostBody *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pGVar6,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          TStack_4.monitor =
               (MonitorData *)
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar7,(MethodInfo *)0x0);
          unaff_ESI = &TStack_4;
          uStack_1 = 1;
          while ((Transform *)TStack_4.monitor != (Transform *)0x0) {
            cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,TStack_4.monitor);
            pMVar9 = TStack_4.monitor;
            if (cVar8 == '\0') {
              uStack_1 = 0xffffffff;
              TStack_4.klass =
                   (Transform__Class *)
                   func_?(TStack_4.monitor,TypeInfo__System__IDisposable);
              if (TStack_4.klass != (Transform__Class *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,TStack_4.klass);
              }
              uStack_1 = 0xffffffff;
              if ((body != (MVCubeModelBase *)0x0) &&
                 (pCVar10 = (body->fields).chunkInstances, pCVar10 != (ChunkInstances *)0x0)) {
                TStack_4.monitor =
                     (MonitorData *)
                     func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar10);
                uStack_1 = 4;
                goto code_?;
              }
              break;
            }
            if ((Transform *)TStack_4.monitor == (Transform *)0x0) break;
            pTVar11 = *(Transform__Class **)&(TStack_4.monitor)->field_0x0;
            uVar12 = 0;
            uVar13._0_1_ = (pTVar11->_1).rank;
            uVar13._1_1_ = (pTVar11->_1).minimumAlignment;
            if (uVar13 != 0) {
              do {
                if (pTVar11->interfaceOffsets[uVar12].interfaceType ==
                    (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                  ppMVar14 = &(&((*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->vtable).
                               Finalize)
                             [(*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->
                              interfaceOffsets[uVar12].offset].method;
                  goto code_?;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar13);
            }
            ppMVar14 = (MethodInfo **)
                      func_?(TStack_4.monitor,TypeInfo__System__Collections__IEnumerator,1
                                     );
code_?:
            unaff_ESI = (Transform *)(*(code *)*ppMVar14)(pMVar9,ppMVar14[1]);
            if (unaff_ESI == (Transform *)0x0) break;
            pTVar11 = TypeInfo__UnityEngine__Transform;
            if (((unaff_ESI->klass->_1).naturalAligment <
                 (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
               ((unaff_ESI->klass->_1).typeHierarchy
                [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
            unaff_ESI = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)unaff_ESI,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)unaff_ESI,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  pTVar11 = extraout_EDX;
code_?:
  uVar15 = func_?(unaff_ESI,pTVar11);
code_?:
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
code_?:
  unaff_ESI = (Transform *)TStack_4.monitor;
  if ((Transform *)TStack_4.monitor == (Transform *)0x0) goto code_?;
  pTVar11 = *(Transform__Class **)&(TStack_4.monitor)->field_0x0;
  uVar17 = 0;
  uVar12._0_1_ = (pTVar11->_1).rank;
  uVar12._1_1_ = (pTVar11->_1).minimumAlignment;
  if (uVar12 != 0) {
    do {
      if (pTVar11->interfaceOffsets[uVar17].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
        ppMVar14 = &(&((*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->vtable).Equals)
                   [(*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->interfaceOffsets
                    [uVar17].offset].method;
        goto code_?;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar12);
  }
  ppMVar14 = (MethodInfo **)
            func_?(TStack_4.monitor,TypeInfo__System__Collections__IEnumerator,0);
code_?:
  cVar8 = (*(code *)*ppMVar14)(unaff_ESI,ppMVar14[1]);
  pMVar9 = TStack_4.monitor;
  if (cVar8 == '\0') {
    uStack_1 = 0xffffffff;
    TStack_4.klass =
         (Transform__Class *)func_?(TStack_4.monitor,TypeInfo__System__IDisposable);
    if (TStack_4.klass != (Transform__Class *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,TStack_4.klass);
    }
    uStack_1 = 0xffffffff;
    pGVar6 = (this->fields).ghostBody;
    if (pGVar6 != (GhostBody *)0x0) {
      unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar6,(MethodInfo *)0x0);
      pTVar7 = (body->fields)._.transform;
      if (pTVar7 != (Transform *)0x0) {
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xffffffb4,pTVar7,(MethodInfo *)0x0);
        if (unaff_ESI != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_ESI,*pVVar18,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    goto code_?;
  }
  unaff_ESI = (Transform *)pMVar9;
  if ((Transform *)TStack_4.monitor == (Transform *)0x0) goto code_?;
  pTVar11 = *(Transform__Class **)&(TStack_4.monitor)->field_0x0;
  uVar12 = 0;
  uVar17._0_1_ = (pTVar11->_1).rank;
  uVar17._1_1_ = (pTVar11->_1).minimumAlignment;
  if (uVar17 != 0) {
    do {
      if (pTVar11->interfaceOffsets[uVar12].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
        ppMVar14 = &(&((*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->vtable).Finalize)
                   [(*(Transform__Class **)&(TStack_4.monitor)->field_0x0)->interfaceOffsets
                    [uVar12].offset].method;
        goto code_?;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar17);
  }
  ppMVar14 = (MethodInfo **)
            func_?(TStack_4.monitor,TypeInfo__System__Collections__IEnumerator,1);
code_?:
  piVar19 = (int *)(*(code *)*ppMVar14)(pMVar9,ppMVar14[1]);
  uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                    ,piVar19);
  if (piVar19 == (int *)0x0) goto code_?;
  if (*(Il2CppClass **)(*piVar19 + 0x20) !=
      (
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ->_0).element_class) goto code_?;
  iVar20 = func_?(piVar19);
  original = *(Object **)(iVar20 + 0x18);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  unaff_ESI = (Transform *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (original,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
  if (unaff_ESI == (Transform *)0x0) goto code_?;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 == (GhostBody *)0x0) goto code_?;
  value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pTVar7 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (pTVar7,value_00,(MethodInfo *)0x0);
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (pTVar7 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar7,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pTVar7 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar7,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
             (MethodInfo *)0x0);
  pGVar21 = (GameObject *)
            UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 == (GhostBody *)0x0) goto code_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pGVar6,(MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) goto code_?;
  value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (this_00,(MethodInfo *)0x0);
  if (pGVar21 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar21,value_01,(MethodInfo *)0x0);
  unaff_ESI = (Transform *)
              UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 == (GhostBody *)0x0) goto code_?;
  pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pGVar21 == (GameObject *)0x0) goto code_?;
  value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar21,(MethodInfo *)0x0);
  if (unaff_ESI == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            ((GameObject *)unaff_ESI,value,(MethodInfo *)0x0);
  goto code_?;
}


/* Void Init(MVAdvancedGhost, MVCubeModelBase, Boolean, MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_Init
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MVCubeModelBase *body,
               bool enabledCulling,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (advancedGhost != (MVAdvancedGhost *)0x0) {
      id = (advancedGhost->fields)._._._._.id;
      if (cRam_? == '\0') {
        func_?(&
                        LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id,(MethodInfo *)0x0);
        if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          pLVar4 = (pPVar3->fields).lineRangeIndicator;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pLVar4 = (LineRangeIndicator *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pLVar4,
                              LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                             );
          (this->fields).lineRangeIndicator = pLVar4;
          func_?(&(this->fields).lineRangeIndicator,pLVar4);
          pLVar4 = (this->fields).lineRangeIndicator;
          if (pLVar4 != (LineRangeIndicator *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pLVar4,(MethodInfo *)0x0);
            this_00 = pMVar2[1].fields.inputLinkRefs;
            if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)this_00,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar5,pTVar6,0,(MethodInfo *)0x0);
                pLVar4 = (this->fields).lineRangeIndicator;
                if (pLVar4 != (LineRangeIndicator *)0x0) {
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pLVar4,(MethodInfo *)0x0);
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (this_02 != (GameObject *)0x0) {
                    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(this_02,(MethodInfo *)0x0);
                    if (pTVar6 != (Transform *)0x0) {
                      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_right((Vector3 *)&stack0xffffffec,pTVar6,
                                                   (MethodInfo *)0x0);
                      if (pTVar5 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                                  (pTVar5,*pVVar7,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
code_?:
    func_?();
  }
  else {
code_?:
    if (body == (MVCubeModelBase *)0x0) goto code_?;
    pAVar8 = (body->fields).Changed;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)this,
               MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      AdvancedGhostIcon_CloneCubeMeshes(this,body,(MethodInfo *)0x0);
      if (enabledCulling == 0) {
        (this->fields).visible = 1;
        (this->fields).wantsVisible = 1;
      }
      else {
        AdvancedGhostIcon_SetupCulling(this,(MVAdvancedGhost *)0x0,(MethodInfo *)0x0);
      }
      AdvancedGhostIcon_set_Team(this,MVTeam__Enum_Blue,(MethodInfo *)0x0);
      return;
    }
    pAVar8 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar8 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    (body->fields).Changed = pAVar8;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnDestroy
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields).cullingSubscriberBase,0);
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnStateChange
               (AdvancedGhostIcon *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  bVar1 = CullingApiWrapper::CullingApiWrapper_Visible(cullingGroupEvent,3,(MethodInfo *)0x0);
  (this->fields).visible = bVar1;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar1 != 0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetGameMode
               (AdvancedGhostIcon *this,bool isPlayMode,MethodInfo *method)

{
  (this->fields).wantsVisible = isPlayMode ^ 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)(0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetVisibility
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar1 != 0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCulling(MVAdvancedGhost) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetupCulling
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_);
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    pCVar5 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar3;
    position.x = (float)uVar2;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar5,4.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = pCVar5;
    func_?();
    pCVar5 = (this->fields).cullingSubscriberBase;
    if (pCVar5 != (CullingSubscriberBase *)0x0) {
      (pCVar5->fields)._DistanceBandIndex_k__BackingField = 3;
      if (advancedGhost != (MVAdvancedGhost *)0x0) {
        pUVar6 = (advancedGhost->fields)._._._.PositionChanged;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar6,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar7 == (Delegate *)0x0) {
          (advancedGhost->fields)._._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          func_?();
          return;
        }
        pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          (advancedGhost->fields)._._._.PositionChanged = pUVar6;
          iVar8 = func_?();
          if (iVar8 != 0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_body_Changed
               (AdvancedGhostIcon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  if (e != (CubeModelChangedEventArgs *)0x0) {
    AdvancedGhostIcon_CloneCubeMeshes(this,(e->fields).Sender,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Radius
               (AdvancedGhostIcon *this,float value,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = (this->fields).lineRangeIndicator;
    if (this_00 == (LineRangeIndicator *)0x0) {
      uVar2 = func_?(&stack0xfffffff4);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LineRangeIndicator::LineRangeIndicator_SetRange(this_00,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Team
               (AdvancedGhostIcon *this,MVTeam__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  MVar1 = MVTeam__Enum_Server;
  if (value != MVTeam__Enum_None) {
    MVar1 = value;
  }
  index = 0;
  pLVar2 = (this->fields).teamIrisObjects;
  if (pLVar2 != (List_1_OculusTeamGameObject_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(GameObject **)((int)RVar4 + 0xc) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar4 + 0xc),0,(MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      if (*(MVTeam__Enum *)((int)RVar4 + 8) == MVar1) {
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).teamIrisObjects;
        if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           (*(GameObject **)((int)RVar4 + 0xc) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)RVar4 + 0xc),1,(MethodInfo *)0x0);
      }
      pLVar2 = (this->fields).teamIrisObjects;
      index = index + 1;
      if (pLVar2 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

