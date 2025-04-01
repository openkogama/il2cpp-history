
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
      ppLVar4 = &(this->fields).lineRangeIndicator;
      *ppLVar4 = pLVar3;
      func_?(ppLVar4);
      if (*ppLVar4 != (LineRangeIndicator *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)*ppLVar4,(MethodInfo *)0x0);
        this_00 = pMVar1[1].fields.inputLinkRefs;
        if ((this_00 != (List_1_MV_WorldObject_Link_ *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_00,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar5,pTVar6,0,(MethodInfo *)0x0);
          if (*ppLVar4 != (LineRangeIndicator *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)*ppLVar4,(MethodInfo *)0x0);
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (((this_02 != (GameObject *)0x0) &&
                (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_02,(MethodInfo *)0x0),
                pTVar6 != (Transform *)0x0)) &&
               (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                   ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                        (pTVar5,*pVVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  _Stack_c.dummy = &DAT_?;
  pcStack_2 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_2;
  pcStack_3 = &stack0xffffff7c;
  pcVar4 = &stack0xffffff7c;
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
    pcVar4 = pcStack_3;
  }
  pcStack_3 = pcVar4;
  pIStack_5 = (Il2CppImage *)0x0;
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 != (GhostBody *)0x0) {
    unaff_ESI = (Transform__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pGVar6,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (unaff_ESI != (Transform__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                ((Transform *)unaff_ESI,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                 (MethodInfo *)0x0);
      pGVar6 = (this->fields).ghostBody;
      if (pGVar6 != (GhostBody *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar6,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pTStack_8 = (Transform__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                                 (pTVar7,(MethodInfo *)0x0);
          unaff_ESI = (Transform__Class *)&pIStack_5;
          uStack_1._0_2_ = 1;
          uStack_1._2_1_ = 0;
          uStack_1._3_1_ = 0;
          while (pTStack_8 != (Transform__Class *)0x0) {
            cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,pTStack_8);
            pTVar10 = pTStack_8;
            if (cVar9 == '\0') {
              uStack_1._0_2_ = 0xffff;
              uStack_1._2_1_ = 0xff;
              uStack_1._3_1_ = 0xff;
              pIStack_5 = (Il2CppImage *)func_?(pTStack_8,TypeInfo__System__IDisposable);
              if (pIStack_5 != (Il2CppImage *)0x0) {
                func_?(0,TypeInfo__System__IDisposable,pIStack_5);
              }
              uStack_1._0_2_ = 0xffff;
              uStack_1._2_1_ = 0xff;
              uStack_1._3_1_ = 0xff;
              if ((body != (MVCubeModelBase *)0x0) &&
                 (pCVar11 = (body->fields).chunkInstances, pCVar11 != (ChunkInstances *)0x0)) {
                pTStack_8 = (Transform__Class *)
                             func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar11);
                uStack_1._0_2_ = 4;
                uStack_1._2_1_ = 0;
                uStack_1._3_1_ = 0;
                goto code_?;
              }
              break;
            }
            unaff_ESI = (Transform__Class *)0x0;
            if (pTStack_8 == (Transform__Class *)0x0) break;
            pIVar12 = (pTStack_8->_0).image;
            uVar13 = 0;
            uVar14 = *(ushort *)((int)&pIVar12[4].nameNoExt + 2);
            if (uVar14 != 0) {
              do {
                if (*(IEnumerator__Class **)(pIVar12[2].name + (uint)uVar13 * 8) ==
                    TypeInfo__System__Collections__IEnumerator) {
                  pIVar12 = (pTStack_8->_0).image;
                  pp_Var11 = &pIVar12[4].metadataHandle +
                             *(int *)(pIVar12[2].name + (uint)uVar13 * 8 + 4) * 2;
                  goto code_?;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar14);
            }
            pp_Var11 = (Il2CppMetadataImageHandle *)
                       func_?(pTStack_8,TypeInfo__System__Collections__IEnumerator,1);
code_?:
            this_00 = (Component *)
                      (*(code *)*pp_Var11)(pTVar10,(Il2CppNameToTypeHandleHashTable *)pp_Var11[1]);
            unaff_ESI = TypeInfo__UnityEngine__Transform;
            if (this_00 == (Component *)0x0) break;
            bVar15 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
            unaff_ESI = TypeInfo__UnityEngine__Transform;
            if (((this_00->klass->_1).naturalAligment < bVar15) ||
               ((this_00->klass->_1).typeHierarchy[bVar15 - 1] !=
                (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
            unaff_ESI = (Transform__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
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
  this_00 = extraout_EDX;
code_?:
  uVar16 = func_?(this_00,unaff_ESI);
code_?:
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  unaff_ESI = pTStack_8;
  if (pTStack_8 == (Transform__Class *)0x0) goto code_?;
  pIVar12 = (pTStack_8->_0).image;
  uVar13 = 0;
  uVar14 = *(ushort *)((int)&pIVar12[4].nameNoExt + 2);
  if (uVar14 != 0) {
    do {
      if (*(IEnumerator__Class **)(pIVar12[2].name + (uint)uVar13 * 8) ==
          TypeInfo__System__Collections__IEnumerator) {
        pIVar12 = (pTStack_8->_0).image;
        puVar18 = &pIVar12[4].exportedTypeCount + *(int *)(pIVar12[2].name + (uint)uVar13 * 8 + 4) * 2
        ;
        goto code_?;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  puVar18 = (uint32_t *)func_?(pTStack_8,TypeInfo__System__Collections__IEnumerator,0);
code_?:
  cVar9 = (*(code *)*puVar18)(unaff_ESI,puVar18[1]);
  pTVar10 = pTStack_8;
  if (cVar9 == '\0') {
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_1_ = 0xff;
    uStack_1._3_1_ = 0xff;
    pIStack_5 = (Il2CppImage *)func_?(pTStack_8,TypeInfo__System__IDisposable);
    if (pIStack_5 != (Il2CppImage *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,pIStack_5);
    }
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_1_ = 0xff;
    uStack_1._3_1_ = 0xff;
    pGVar6 = (this->fields).ghostBody;
    if (pGVar6 != (GhostBody *)0x0) {
      unaff_ESI = (Transform__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar6,(MethodInfo *)0x0);
      pTVar7 = (body->fields)._.transform;
      if (pTVar7 != (Transform *)0x0) {
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xffffffb4,pTVar7,(MethodInfo *)0x0);
        if (unaff_ESI != (Transform__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    ((Transform *)unaff_ESI,*pVVar19,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pcStack_2;
          return;
        }
      }
    }
    goto code_?;
  }
  unaff_ESI = pTVar10;
  if (pTStack_8 == (Transform__Class *)0x0) goto code_?;
  pIVar12 = (pTStack_8->_0).image;
  uVar13 = 0;
  uVar14 = *(ushort *)((int)&pIVar12[4].nameNoExt + 2);
  if (uVar14 != 0) {
    do {
      if (*(IEnumerator__Class **)(pIVar12[2].name + (uint)uVar13 * 8) ==
          TypeInfo__System__Collections__IEnumerator) {
        pIVar12 = (pTStack_8->_0).image;
        pp_Var11 = &pIVar12[4].metadataHandle + *(int *)(pIVar12[2].name + (uint)uVar13 * 8 + 4) * 2;
        goto code_?;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  pp_Var11 = (Il2CppMetadataImageHandle *)
             func_?(pTStack_8,TypeInfo__System__Collections__IEnumerator,1);
code_?:
  piVar20 = (int *)(*(code *)*pp_Var11)(pTVar10,(Il2CppNameToTypeHandleHashTable *)pp_Var11[1]);
  uVar16 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                    ,piVar20);
  if (piVar20 == (int *)0x0) goto code_?;
  if (*(Il2CppClass **)(*piVar20 + 0x20) !=
      (
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ->_0).element_class) goto code_?;
  iVar21 = func_?(piVar20);
  original = *(Object **)(iVar21 + 0x18);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  unaff_ESI = (Transform__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (original,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
  if (unaff_ESI == (Transform__Class *)0x0) goto code_?;
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
  pGVar22 = (GameObject *)
            UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 == (GhostBody *)0x0) goto code_?;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pGVar6,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) goto code_?;
  value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (this_01,(MethodInfo *)0x0);
  if (pGVar22 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar22,value_01,(MethodInfo *)0x0);
  unaff_ESI = (Transform__Class *)
              UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar6 = (this->fields).ghostBody;
  if (pGVar6 == (GhostBody *)0x0) goto code_?;
  pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pGVar22 == (GameObject *)0x0) goto code_?;
  value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar22,(MethodInfo *)0x0);
  if (unaff_ESI == (Transform__Class *)0x0) goto code_?;
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
          ppLVar5 = &(this->fields).lineRangeIndicator;
          *ppLVar5 = pLVar4;
          func_?(ppLVar5,pLVar4);
          if (*ppLVar5 != (LineRangeIndicator *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)*ppLVar5,(MethodInfo *)0x0);
            this_00 = pMVar2[1].fields.inputLinkRefs;
            if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)this_00,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar6,pTVar7,0,(MethodInfo *)0x0);
                if (*ppLVar5 != (LineRangeIndicator *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)*ppLVar5,(MethodInfo *)0x0);
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (this_02 != (GameObject *)0x0) {
                    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(this_02,(MethodInfo *)0x0);
                    if (pTVar7 != (Transform *)0x0) {
                      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_right((Vector3 *)&stack0xffffffec,pTVar7,
                                                   (MethodInfo *)0x0);
                      if (pTVar6 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                                  (pTVar6,*pVVar8,(MethodInfo *)0x0);
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
    a = (body->fields).Changed;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)this,
               MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
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
    pDVar10 = (Delegate__Class *)func_?();
    if (pDVar10 == (Delegate__Class *)0x0) goto code_?;
    pDVar9->klass = pDVar10;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnDestroy
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if (*ppCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(*ppCVar1,(MethodInfo *)0x0);
    *ppCVar1 = (CullingSubscriberBase *)0x0;
    func_?(ppCVar1,0);
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
    ppCVar6 = &(this->fields).cullingSubscriberBase;
    *ppCVar6 = pCVar5;
    func_?();
    pCVar5 = *ppCVar6;
    if (pCVar5 != (CullingSubscriberBase *)0x0) {
      (pCVar5->fields)._DistanceBandIndex_k__BackingField = 3;
      if (advancedGhost != (MVAdvancedGhost *)0x0) {
        pUVar7 = (advancedGhost->fields)._._._.PositionChanged;
        ppUVar8 = &(advancedGhost->fields)._._._.PositionChanged;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar7,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar9 == (Delegate *)0x0) {
          *ppUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          func_?();
          return;
        }
        pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          *ppUVar8 = pUVar7;
          iVar10 = func_?();
          if (iVar10 != 0) {
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).teamIrisObjects;
  if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
         (*(GameObject **)((int)RVar3 + 0xc) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar3 + 0xc),0,(MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      if (*(MVTeam__Enum *)((int)RVar3 + 8) == MVar1) {
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).teamIrisObjects;
        if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,index,
                                MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                               ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
           (*(GameObject **)((int)RVar3 + 0xc) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)RVar3 + 0xc),1,(MethodInfo *)0x0);
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      index = index + 1;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

