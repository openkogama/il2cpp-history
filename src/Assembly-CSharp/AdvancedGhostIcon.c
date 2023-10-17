
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
  }
  pGVar4 = (this->fields).ghostBody;
  if (pGVar4 != (GhostBody *)0x0) {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pGVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (unaff_ESI != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (unaff_ESI,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                 (MethodInfo *)0x0);
      pGVar4 = (this->fields).ghostBody;
      if ((pGVar4 != (GhostBody *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pGVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
        pIVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (pTVar5,(MethodInfo *)0x0);
        unaff_ESI = (Transform *)&stack0xffffffe4;
        uStack_1 = 1;
        while (pIVar6 != (IEnumerator *)0x0) {
          cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
          if (cVar7 == '\0') {
            uStack_1 = 0xffffffff;
            iVar8 = func_?(pIVar6,TypeInfo__System__IDisposable);
            if (iVar8 != 0) {
              func_?(0,TypeInfo__System__IDisposable,iVar8);
            }
            uStack_1 = 0xffffffff;
            if ((body != (MVCubeModelBase *)0x0) &&
               (pCVar9 = (body->fields).chunkInstances, pCVar9 != (ChunkInstances *)0x0)) {
              unaff_ESI = (Transform *)
                          func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar9);
              uStack_1 = 4;
              goto code_?;
            }
            break;
          }
          unaff_ESI = (Transform *)0x0;
          if (pIVar6 == (IEnumerator *)0x0) break;
          uVar10 = 0;
          uVar11 = (pIVar6->klass->_1).interface_offsets_count;
          pIVar12 = pIVar6;
          if (uVar11 != 0) {
            do {
              if (pIVar6->klass->interfaceOffsets[uVar10].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar13 = &(pIVar6->klass->vtable).get_Current +
                         pIVar6->klass->interfaceOffsets[uVar10].offset;
                goto code_?;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
          }
          pVVar13 = (VirtualInvokeData *)
                   func_?(pIVar6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          unaff_ESI = (Transform *)(*pVVar13->methodPtr)(pIVar6,pVVar13->method);
          if (unaff_ESI == (Transform *)0x0) break;
          pTVar14 = TypeInfo__UnityEngine__Transform;
          if (((unaff_ESI->klass->_1).typeHierarchyDepth <
               (TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth) ||
             ((unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
          unaff_ESI = (Transform *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)unaff_ESI,(MethodInfo *)0x0);
          pIVar6 = pIVar12;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pIVar6 = pIVar12;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)unaff_ESI,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
  pTVar14 = extraout_EDX;
code_?:
  uVar15 = func_?(unaff_ESI,pTVar14);
code_?:
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
code_?:
  if (unaff_ESI == (Transform *)0x0) goto code_?;
  uVar10 = 0;
  uVar11 = (unaff_ESI->klass->_1).interface_offsets_count;
  pTVar5 = unaff_ESI;
  if (uVar11 != 0) {
    do {
      if (unaff_ESI->klass->interfaceOffsets[uVar10].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
        pVVar13 = &(unaff_ESI->klass->vtable).Equals +
                 unaff_ESI->klass->interfaceOffsets[uVar10].offset;
        goto code_?;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  pVVar13 = (VirtualInvokeData *)
           func_?(unaff_ESI,TypeInfo__System__Collections__IEnumerator,0);
code_?:
  cVar7 = (*pVVar13->methodPtr)(unaff_ESI,pVVar13->method);
  if (cVar7 == '\0') {
    uStack_1 = 0xffffffff;
    iVar8 = func_?(pTVar5,TypeInfo__System__IDisposable);
    if (iVar8 != 0) {
      func_?(0,TypeInfo__System__IDisposable,iVar8);
    }
    uStack_1 = 0xffffffff;
    pGVar4 = (this->fields).ghostBody;
    if (pGVar4 != (GhostBody *)0x0) {
      unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar4,(MethodInfo *)0x0);
      pTVar5 = (body->fields)._.transform;
      if ((pTVar5 != (Transform *)0x0) &&
         (pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffb4,pTVar5,(MethodInfo *)0x0),
         unaff_ESI != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (unaff_ESI,*pVVar17,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    goto code_?;
  }
  unaff_ESI = pTVar5;
  if (pTVar5 == (Transform *)0x0) goto code_?;
  uVar10 = 0;
  uVar11 = (pTVar5->klass->_1).interface_offsets_count;
  if (uVar11 != 0) {
    do {
      if (pTVar5->klass->interfaceOffsets[uVar10].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
        pVVar13 = &(pTVar5->klass->vtable).Finalize + pTVar5->klass->interfaceOffsets[uVar10].offset;
        goto code_?;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  pVVar13 = (VirtualInvokeData *)func_?(pTVar5,TypeInfo__System__Collections__IEnumerator,1)
  ;
code_?:
  piVar18 = (int *)(*pVVar13->methodPtr)(pTVar5,pVVar13->method);
  uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                    ,piVar18);
  if (piVar18 == (int *)0x0) goto code_?;
  if (*(Il2CppClass **)(*piVar18 + 0x20) !=
      (
      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
      ->_0).element_class) goto code_?;
  iVar8 = func_?(piVar18);
  original = *(Object **)(iVar8 + 8);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  unaff_ESI = (Transform *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        (original,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
  if (unaff_ESI == (Transform *)0x0) goto code_?;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  pGVar4 = (this->fields).ghostBody;
  if ((pGVar4 == (GhostBody *)0x0) ||
     (value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pGVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (pTVar5,value_00,(MethodInfo *)0x0);
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (pTVar5 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)unaff_ESI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pTVar5 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar5,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
             (MethodInfo *)0x0);
  pGVar19 = (GameObject *)
            mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                      ((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar4 = (this->fields).ghostBody;
  if (((pGVar4 == (GhostBody *)0x0) ||
      (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar4,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
     || (value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                              (this_00,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar19,value_01,(MethodInfo *)0x0);
  unaff_ESI = (Transform *)
              mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                        ((Void *)unaff_ESI,(MethodInfo *)0x0);
  pGVar4 = (this->fields).ghostBody;
  if ((pGVar4 == (GhostBody *)0x0) ||
     (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar4,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0))
  goto code_?;
  value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar19,(MethodInfo *)0x0);
  pTVar5 = (Transform *)CONCAT31(extraout_var,value);
  if (unaff_ESI == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            ((GameObject *)unaff_ESI,value,(MethodInfo *)0x0);
  unaff_ESI = pTVar5;
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
  }
  else {
code_?:
    if (body != (MVCubeModelBase *)0x0) {
      pAVar8 = (body->fields).Changed;
      this_03 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
      if (this_03 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
        if (pAVar8 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
          (body->fields).Changed = pAVar8;
          iVar10 = func_?();
          if (iVar10 != 0) goto code_?;
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
    func_?();
    func_?();
    func_?();
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
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    pUStack_4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)pVVar1->z;
    pUStack_5 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    if (pUStack_5 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (pUStack_5,(Object *)this,
                 MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_,
                 (MethodInfo *)0x0);
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  func_?();
      if (unaff_EBX != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        position.z = (float)pUStack_4;
        position.x = (float)(undefined4)uStack_3;
        position.y = (float)uStack_3._4_4_;
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  ((CullingSubscriberBase *)unaff_EBX,4.0,position,
                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUStack_5,(MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)unaff_EBX;
        func_?();
        pCVar6 = (this->fields).cullingSubscriberBase;
        if ((pCVar6 != (CullingSubscriberBase *)0x0) &&
           ((pCVar6->fields)._DistanceBandIndex_k__BackingField = 3,
           advancedGhost != (MVAdvancedGhost *)0x0)) {
          pUStack_4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                      (advancedGhost->fields)._._._.PositionChanged;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                       ,(MethodInfo *)0x0);
            this = (AdvancedGhostIcon *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUStack_4,(Delegate *)this_01,(MethodInfo *)0x0);
            unaff_EBX = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            if ((Delegate *)this == (Delegate *)0x0) {
              (advancedGhost->fields)._._._.PositionChanged =
                   (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
              uStack_3 = CONCAT44(&(advancedGhost->fields)._._._.PositionChanged,&UNK_?);
              pUStack_4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this
              ;
              func_?();
              return;
            }
            pUStack_4 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            uStack_3 = CONCAT44(this,&UNK_?);
            pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     func_?();
            if (pUVar7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              (advancedGhost->fields)._._._.PositionChanged = pUVar7;
              unaff_EBX = 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
              ;
              pUStack_4 = 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
              ;
              uStack_3 = CONCAT44(this,&UNK_?);
              pUStack_4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                          func_?();
              if (pUStack_4 !=
                  (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
                uStack_3 = CONCAT44(&(advancedGhost->fields)._._._.PositionChanged,&UNK_?);
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  uStack_3 = CONCAT44(this,&UNK_?);
  pUStack_4 = unaff_EBX;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

