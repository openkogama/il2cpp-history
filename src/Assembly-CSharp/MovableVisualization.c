
/* Void Awake() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Awake
               (MovableVisualization *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  (this->fields).prevUpdateDirtyTime = fVar1 - _UNK_?;
  return;
}


/* Void ChangeLOD(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_ChangeLOD
               (MovableVisualization *this,bool newVisible,MethodInfo *method)

{
  if (newVisible == 0) {
    if ((this->fields).isVisible != 0) {
      MovableVisualization_SetMeshRenderers(this,0,(this->fields).cmbClone,(MethodInfo *)0x0);
      return;
    }
  }
  else if (((this->fields).isVisible == 0) && ((this->fields).canBeVisible != 0)) {
    MovableVisualization_SetMeshRenderers(this,1,(this->fields).cmbClone,(MethodInfo *)0x0);
  }
  return;
}


/* GameObject CreateMeshClone(MVCubeModelBase) */

GameObject *
Assembly-CSharp.dll::MovableVisualization::MovableVisualization_CreateMeshClone
          (MVCubeModelBase *cmb,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff5c;
  puVar5 = &stack0xffffff5c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&TypeRef__UnityEngine__MeshFilter);
    func_?(&TypeRef__UnityEngine__MeshRenderer);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__clone);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  if ((cmb != (MVCubeModelBase *)0x0) &&
     (pGVar7 = (cmb->fields)._.gameObject, pGVar7 != (GameObject *)0x0)) {
    pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)pGVar7,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar8,StringLiteral__clone,(MethodInfo *)0x0);
    pGVar7 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar7,pSVar8,(MethodInfo *)0x0);
    pGStack_9 = pGVar7;
    if (pGVar7 != (GameObject *)0x0) {
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar7,(MethodInfo *)0x0);
      pTVar11 = (cmb->fields)._.transform;
      if (pTVar11 != (Transform *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar11,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar10,pTVar11,(MethodInfo *)0x0);
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar7,(MethodInfo *)0x0);
          pTVar11 = (cmb->fields)._.transform;
          if (pTVar11 != (Transform *)0x0) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_13,pTVar11,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar10,*pVVar12,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar7,(MethodInfo *)0x0);
              pTVar11 = (cmb->fields)._.transform;
              if (pTVar11 != (Transform *)0x0) {
                pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localRotation
                                    ((Quaternion *)auStack_15,pTVar11,(MethodInfo *)0x0);
                if (pTVar10 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar10,*pQVar14,(MethodInfo *)0x0);
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                  pTVar11 = (cmb->fields)._.transform;
                  if (pTVar11 != (Transform *)0x0) {
                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localScale(&VStack_13,pTVar11,(MethodInfo *)0x0);
                    if (pTVar10 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar10,*pVVar12,(MethodInfo *)0x0);
                      pCVar16 = (cmb->fields).chunkInstances;
                      if (pCVar16 != (ChunkInstances *)0x0) {
                        pTStack_17 = (Transform *)
                                     func_?(0,TypeInfo__System__Collections__IEnumerable,
                                                     pCVar16);
                        VStack_13.y = (float)&pTStack_17;
                        VStack_13.z = (float)&iStack_6;
                        VStack_13.x = 0.0;
                        uStack_1 = 1;
                        while (pTStack_17 != (Transform *)0x0) {
                          cVar18 = func_?(0,TypeInfo__System__Collections__IEnumerator,
                                                  pTStack_17);
                          pTVar11 = pTStack_17;
                          if (cVar18 == '\0') {
                            uStack_1 = 0xffffffff;
                            iStack_6 = func_?(pTStack_17,TypeInfo__System__IDisposable);
                            if (iStack_6 != 0) {
                              func_?(0,TypeInfo__System__IDisposable,iStack_6);
                            }
                            uStack_1 = 0xffffffff;
                            exclude = (Type__Array *)func_?(TypeInfo__System__Type,2);
                            handle = TypeRef__UnityEngine__MeshFilter;
                            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__System__Type);
                            }
                            pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
                            if (exclude != (Type__Array *)0x0) {
                              if (pTVar19 != (Type *)0x0) {
                                iVar20 = func_?(pTVar19,(exclude->klass->_0).element_class)
                                ;
                                if (iVar20 == 0) goto code_?;
                              }
                              if (exclude->max_length != 0) {
                                exclude->vector[0] = pTVar19;
                                func_?(exclude->vector,pTVar19);
                                pTVar19 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                    ((RuntimeTypeHandle)
                                                     TypeRef__UnityEngine__MeshRenderer,
                                                     (MethodInfo *)0x0);
                                if (pTVar19 != (Type *)0x0) {
                                  iVar20 = func_?(pTVar19,(exclude->klass->_0).
                                                                   element_class);
                                  if (iVar20 == 0) goto code_?;
                                }
                                if (1 < exclude->max_length) {
                                  exclude->vector[1] = pTVar19;
                                  func_?(exclude->vector + 1,pTVar19);
                                  MovableVisualization_RemoveAllComponentsInChildrenExclude
                                            (exclude,pGVar7,(MethodInfo *)0x0);
                                  *unaff_FS_OFFSET = uStack_3;
                                  return pGVar7;
                                }
                              }
                              func_?();
                            }
                            break;
                          }
                          pTStack_21 = pTStack_17;
                          if (pTStack_17 == (Transform *)0x0) break;
                          pTStack_22 = pTStack_17->klass;
                          uVar23 = 0;
                          uStack_24 = 0;
                          uVar25._0_1_ = (pTStack_22->_1).rank;
                          uVar25._1_1_ = (pTStack_22->_1).minimumAlignment;
                          uStack_26 = (uint)uVar25;
                          if (uVar25 != 0) {
                            do {
                              if (pTStack_22->interfaceOffsets[uVar23].interfaceType ==
                                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                                ppMVar27 = &(&(pTStack_17->klass->vtable).Finalize)
                                            [pTStack_17->klass->interfaceOffsets[uVar23].offset].
                                            method;
                                goto code_?;
                              }
                              uVar23 = uVar23 + 1;
                            } while (uVar23 < uVar25);
                          }
                          ppMVar27 = (MethodInfo **)
                                     func_?(pTStack_17,
                                                     TypeInfo__System__Collections__IEnumerator,1);
code_?:
                          piVar28 = (int *)(*(code *)*ppMVar27)(pTVar11,ppMVar27[1]);
                          uVar29 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                            ,piVar28);
                          if (piVar28 == (int *)0x0) break;
                          if (*(Il2CppClass **)(*piVar28 + 0x20) !=
                              (
                              TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                              ->_0).element_class) goto code_?;
                          puVar30 = (undefined4 *)func_?(piVar28);
                          uStack_31 = *puVar30;
                          uStack_32 = puVar30[1];
                          uStack_33 = puVar30[2];
                          uStack_34 = puVar30[3];
                          uStack_35 = puVar30[4];
                          uStack_36 = puVar30[5];
                          pGStack_37 = (GameObject *)puVar30[6];
                          uStack_38 = puVar30[7];
                          uStack_39 = *(undefined8 *)(puVar30 + 8);
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          this = pGStack_37;
                          this_00 = (GameObject *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Instantiate_4
                                              ((Object *)pGStack_37,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                              );
                          if (this_00 == (GameObject *)0x0) break;
                          pTStack_21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                          if (pTStack_21 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                    (pTStack_21,pTVar11,(MethodInfo *)0x0);
                          pTStack_21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          if (this == (GameObject *)0x0) break;
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar11 == (Transform *)0x0) break;
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localPosition(&VStack_40,pTVar11,(MethodInfo *)0x0)
                          ;
                          if (pTStack_21 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localPosition(pTStack_21,*pVVar12,(MethodInfo *)0x0);
                          pTStack_21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar11 == (Transform *)0x0) break;
                          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localRotation(&QStack_41,pTVar11,(MethodInfo *)0x0)
                          ;
                          if (pTStack_21 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation(pTStack_21,*pQVar14,(MethodInfo *)0x0);
                          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(this_00,(MethodInfo *)0x0);
                          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(this,(MethodInfo *)0x0);
                          if (pTVar10 == (Transform *)0x0) break;
                          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localScale
                                              ((Vector3 *)(auStack_15 + 4),pTVar10,(MethodInfo *)0x0)
                          ;
                          if (pTVar11 == (Transform *)0x0) break;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar11,*pVVar12,(MethodInfo *)0x0);
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
  }
  uVar29 = func_?();
code_?:
  func_?(uVar29);
code_?:
  uVar42 = func_?(0);
  func_?(uVar42);
code_?:
  uVar42 = func_?(0);
  func_?(uVar42);
  pcVar43 = (code *)swi(3);
  pGVar7 = (GameObject *)(*pcVar43)();
  return pGVar7;
}


/* Void HandleDirty() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_HandleDirty
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isDirty != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime) {
      pGVar2 = (this->fields).cmbClone;
      ppGVar3 = &(this->fields).cmbClone;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
      *ppGVar3 = pGVar2;
      func_?(ppGVar3,pGVar2);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevUpdateDirtyTime = fVar1;
      if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
        if (*ppGVar3 == (GameObject *)0x0) {
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pGVar2 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)*ppGVar3,(MethodInfo *)0x0);
        MovableVisualization_SetMeshRenderers(this,1,pGVar2,(MethodInfo *)0x0);
      }
      (this->fields).isDirty = 0;
    }
  }
  return;
}


/* Void Init(MVCubeModelBase) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Init
               (MovableVisualization *this,MVCubeModelBase *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).cmb;
  *ppMVar1 = cmb;
  func_?(ppMVar1,cmb);
  pMVar2 = *ppMVar1;
  if (pMVar2 == (MVCubeModelBase *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar3 = (pMVar2->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      pGVar5 = MovableVisualization_CreateMeshClone(cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar5;
      func_?();
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      UpdateController::UpdateController_AddFixedUpdateObject
                ((IUpdatecontrollerSubscriberFixedUpdate *)this,
                 UpdatePriority__Enum_POST_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (cmb != (MVCubeModelBase *)0x0) {
        pVVar7 = (Vector3 *)
                 (*(code *)(cmb->klass->vtable).get_WorldPosition_1.method)
                           (&stack0xfffffff0,cmb,(cmb->klass->vtable).set_WorldPosition.methodPtr);
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar6,*pVVar7,(MethodInfo *)0x0);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pQVar8 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                             ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)cmb,
                              (MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar6,*pQVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pAVar3 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar3 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    (pMVar2->fields).Changed = pAVar3;
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_OnDestroy
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                    ,in_ECX,unaff_EBP);
    func_?(&TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass7_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass7_0;
  value = (Object *)func_?();
  object = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    iVar1 = 0x10;
    uVar2 = 0;
    while( true ) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        object = (Object *)&UNK_?;
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar3->max_length <= (int)uVar2) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if (pLVar3->max_length <= uVar2) break;
      this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)value[1].monitor;
      this_00 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                 ((int)pLVar3->vector + iVar1 + -0x10);
      value = object;
      if (this_01 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_01,object,
                   MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   ,(MethodInfo *)0x0);
        object[1].monitor = (MonitorData *)this_01;
        func_?(&object[1].monitor,this_01);
        value = object;
      }
      if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this_00,this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      object = value;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveAllComponentsInChildrenExclude(Type[], GameObject) */

void Assembly-CSharp.dll::MovableVisualization::
     MovableVisualization_RemoveAllComponentsInChildrenExclude
               (Type__Array *exclude,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__UnityEngine__Transform);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    rhs = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                    (gameObject,
                     UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                    );
    uStack_1 = 0;
    if (rhs != (Object__Array *)0x0) {
      ppOVar2 = rhs->vector;
      while( true ) {
        if ((int)rhs->max_length <= (int)uStack_1) {
          return;
        }
        if (rhs->max_length <= uStack_1) break;
        obj = (Object_1 *)*ppOVar2;
        if (obj == (Object_1 *)0x0) goto code_?;
        lhs = mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
        handle = TypeRef__UnityEngine__Transform;
        rhs = unaff_ESI;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          rhs = (Object__Array *)&UNK_?;
          func_?(TypeInfo__System__Type);
        }
        rhs_00 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs_00,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          bVar4 = true;
          uVar5 = 0;
          while( true ) {
            if (exclude == (Type__Array *)0x0) goto code_?;
            if ((int)exclude->max_length <= (int)uVar5) break;
            if (exclude->max_length <= uVar5) goto code_?;
            rhs = (Object__Array *)
                  mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_EnumEquals(0,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              bVar4 = false;
            }
            uVar5 = uVar5 + 1;
          }
          if (bVar4) {
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        uStack_1 = uStack_1 + 1;
        ppOVar2 = ppOVar2 + 1;
        unaff_ESI = rhs;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Reset
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).packages;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
              );
    ppMVar1 = &(this->fields).current;
    *ppMVar1 = (MovableVisualization_Package *)0x0;
    func_?(ppMVar1,&stack0xfffffffc,&UNK_?,ppMVar1,0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMeshRenderers(Boolean, GameObject) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_SetMeshRenderers
               (MovableVisualization *this,bool enable,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (gameObject,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar2) {
          (this->fields).isVisible = enable;
          return;
        }
        if (pOVar1->max_length <= uVar2) break;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar3,enable,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppOVar3 = ppOVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Update
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (((this->fields).isDirty != 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0),
     _UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime)) {
    ppGVar2 = &(this->fields).cmbClone;
    pGVar3 = *ppGVar2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    pGVar3 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
    *ppGVar2 = pGVar3;
    func_?(ppGVar2,pGVar3);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    (this->fields).prevUpdateDirtyTime = fVar1;
    if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
      if (*ppGVar2 == (GameObject *)0x0) goto code_?;
      pGVar3 = (GameObject *)
                UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)*ppGVar2,(MethodInfo *)0x0);
      MovableVisualization_SetMeshRenderers(this,1,pGVar3,(MethodInfo *)0x0);
    }
    (this->fields).isDirty = 0;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  ppMVar5 = &(this->fields).current;
  if (*ppMVar5 == (MovableVisualization_Package *)0x0) {
    pQVar6 = (this->fields).packages;
    if (pQVar6 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pMVar7 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      *ppMVar5 = pMVar7;
      func_?(ppMVar5,pMVar7);
    }
    if (*ppMVar5 == (MovableVisualization_Package *)0x0) {
      return;
    }
  }
  ppMVar8 = &(this->fields).next;
  if ((this->fields).next == (MovableVisualization_Package *)0x0) {
    pQVar6 = (this->fields).packages;
    if (pQVar6 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pMVar7 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      *ppMVar8 = pMVar7;
      func_?(ppMVar8,pMVar7);
    }
  }
  if (*ppMVar5 != (MovableVisualization_Package *)0x0) {
    pMVar7 = (this->fields).next;
    ppMVar8 = &(this->fields).next;
    if (pMVar7 != (MovableVisualization_Package *)0x0) {
      do {
        if (fVar1 - fVar4 < (pMVar7->fields).time) {
code_?:
          if (*ppMVar5 != (MovableVisualization_Package *)0x0) {
            fVar9 = ((*ppMVar5)->fields).time;
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            fVar10 = ((fVar1 - fVar4) - fVar9) / fVar10;
            pGVar3 = (this->fields).cmbClone;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              pMVar7 = *ppMVar5;
              if (pMVar7 != (MovableVisualization_Package *)0x0) {
                uVar12 = (pMVar7->fields).position.x;
                uVar13 = (pMVar7->fields).position.y;
                pMVar14 = *ppMVar8;
                fVar1 = (pMVar7->fields).position.z;
                if (pMVar14 != (MovableVisualization_Package *)0x0) {
                  uVar15 = (pMVar14->fields).position.x;
                  uVar16 = (pMVar14->fields).position.y;
                  fVar4 = 0.0;
                  if ((0.0 <= fVar10) && (fVar4 = _UNK_?, fVar10 <= _UNK_?)) {
                    fVar4 = fVar10;
                  }
                  if (pTVar11 != (Transform *)0x0) {
                    value.y = ((float)uVar16 - (float)uVar13) * fVar4 + (float)uVar13;
                    value.x = ((float)uVar15 - (float)uVar12) * fVar4 + (float)uVar12;
                    value.z = ((pMVar14->fields).position.z - fVar1) * fVar4 + fVar1;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar11,value,(MethodInfo *)0x0);
                    pGVar3 = (this->fields).cmbClone;
                    if (pGVar3 != (GameObject *)0x0) {
                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                      if (((*ppMVar5 != (MovableVisualization_Package *)0x0) &&
                          (*ppMVar8 != (MovableVisualization_Package *)0x0)) &&
                         (pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                    Quaternion_Slerp((Quaternion *)&stack0xffffffd4,
                                                     ((*ppMVar5)->fields).rotation,
                                                     ((*ppMVar8)->fields).rotation,fVar10,
                                                     (MethodInfo *)0x0), pTVar11 != (Transform *)0x0
                         )) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar11,*pQVar17,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        pQVar6 = (this->fields).packages;
        if (pQVar6 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
        if ((pQVar6->fields)._size < 1) goto code_?;
        *ppMVar5 = *ppMVar8;
        func_?(ppMVar5,*ppMVar8);
        pQVar6 = (this->fields).packages;
        if (pQVar6 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
        pMVar7 = (MovableVisualization_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar6,
                             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                            );
        *ppMVar8 = pMVar7;
        func_?(ppMVar8,pMVar7);
        pMVar7 = *ppMVar8;
      } while (pMVar7 != (MovableVisualization_Package *)0x0);
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_UpdateControllerFixedUpdate
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MovableVisualization__Package);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cmb;
  this_00 = (this->fields).packages;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
    OStack_5.klass = (Object__Class *)pVVar3->x;
    OStack_5.monitor = (MonitorData *)pVVar3->y;
    pOVar6 = (Object__Class *)pVVar3->z;
    pMVar1 = (this->fields).cmb;
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)auStack_4,pTVar2,(MethodInfo *)0x0);
      auStack_4._0_4_ = pQVar7->x;
      auStack_4._4_4_ = pQVar7->y;
      pMStack_8 = (MonitorData *)pQVar7->z;
      pOStack_9 = (Object__Class *)pQVar7->w;
      value = (Object *)func_?(TypeInfo__MovableVisualization__Package);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,in_stack_10);
      pMVar11 = (MonitorData *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime
                         ((MethodInfo *)0x0);
      value[1] = OStack_5;
      value[2].klass = pOVar6;
      value[4].monitor = pMVar11;
      value[2].monitor = (MonitorData *)auStack_4._0_4_;
      value[3].klass = (Object__Class *)auStack_4._4_4_;
      value[3].monitor = pMStack_8;
      value[4].klass = pOStack_9;
      if (this_00 != (Queue_1_MovableVisualization_Package_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_00,value,
                   MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MovableVisualization() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization__ctor
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_MovableVisualization_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
            );
  ppQVar1 = &(this->fields).packages;
  *ppQVar1 = this_00;
  func_?(ppQVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void cmb_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_cmb_Changed
               (MovableVisualization *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  (this->fields).isDirty = 1;
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MovableVisualization::MovableVisualization_get_Visible
               (MovableVisualization *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    return 0;
  }
  return (this->fields).canBeVisible;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_set_Visible
               (MovableVisualization *this,bool value,MethodInfo *method)

{
  (this->fields).canBeVisible = value;
  MovableVisualization_SetMeshRenderers(this,value,(this->fields).cmbClone,(MethodInfo *)0x0);
  return;
}

