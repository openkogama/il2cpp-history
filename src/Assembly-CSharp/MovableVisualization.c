
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
  puStack_4 = &stack0xffffff50;
  puVar5 = &stack0xffffff50;
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
    pGStack_9 = pGVar7;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar7,pSVar8,(MethodInfo *)0x0);
    pGStack_10 = pGVar7;
    if (pGVar7 != (GameObject *)0x0) {
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar7,(MethodInfo *)0x0);
      pTVar12 = (cmb->fields)._.transform;
      if ((pTVar12 != (Transform *)0x0) &&
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar12,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar11,pTVar12,(MethodInfo *)0x0);
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGStack_9,(MethodInfo *)0x0);
        pTVar12 = (cmb->fields)._.transform;
        if ((pTVar12 != (Transform *)0x0) &&
           (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_14,pTVar12,(MethodInfo *)0x0),
           pTVar11 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar11,*pVVar13,(MethodInfo *)0x0);
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGStack_9,(MethodInfo *)0x0);
          pTVar12 = (cmb->fields)._.transform;
          if ((pTVar12 != (Transform *)0x0) &&
             (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  ((Quaternion *)auStack_16,pTVar12,(MethodInfo *)0x0),
             pTVar11 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar11,*pQVar15,(MethodInfo *)0x0);
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGStack_9,(MethodInfo *)0x0);
            pTVar12 = (cmb->fields)._.transform;
            if ((pTVar12 != (Transform *)0x0) &&
               (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale(&VStack_14,pTVar12,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar11,*pVVar13,(MethodInfo *)0x0);
              pCVar17 = (cmb->fields).chunkInstances;
              if (pCVar17 != (ChunkInstances *)0x0) {
                pIStack_18 = (Il2CppImage *)
                             func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar17);
                VStack_14.y = (float)&pIStack_18;
                VStack_14.z = (float)&iStack_6;
                VStack_14.x = 0.0;
                uStack_1 = 1;
                while (pIStack_18 != (Il2CppImage *)0x0) {
                  cVar19 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_18);
                  pIVar20 = pIStack_18;
                  if (cVar19 == '\0') {
                    uStack_1 = 0xffffffff;
                    iStack_6 = func_?(pIStack_18,TypeInfo__System__IDisposable);
                    if (iStack_6 != 0) {
                      func_?(0,TypeInfo__System__IDisposable,iStack_6);
                    }
                    uStack_1 = 0xffffffff;
                    piVar21 = (int *)func_?(TypeInfo__System__Type,2);
                    pIVar22 = TypeRef__UnityEngine__MeshFilter;
                    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__System__Type);
                    }
                    pTVar23 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                        ((RuntimeTypeHandle)pIVar22,(MethodInfo *)0x0);
                    if (piVar21 != (int *)0x0) {
                      if ((pTVar23 != (Type *)0x0) &&
                         (iVar24 = func_?(pTVar23,*(undefined4 *)(*piVar21 + 0x20)),
                         iVar24 == 0)) goto code_?;
                      if (piVar21[3] == 0) goto code_?;
                      piVar21[4] = (int)pTVar23;
                      func_?(piVar21 + 4,pTVar23);
                      pTVar23 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)TypeRef__UnityEngine__MeshRenderer,
                                           (MethodInfo *)0x0);
                      if ((pTVar23 != (Type *)0x0) &&
                         (iVar24 = func_?(pTVar23,*(undefined4 *)(*piVar21 + 0x20)),
                         iVar24 == 0)) goto code_?;
                      if ((uint)piVar21[3] < 2) goto code_?;
                      piVar21[5] = (int)pTVar23;
                      func_?(piVar21 + 5,pTVar23);
                      if (cRam_? == '\0') {
                        func_?(&
                                        UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                                       );
                        func_?(&TypeInfo__UnityEngine__Object);
                        func_?(&TypeRef__UnityEngine__Transform);
                        func_?(&TypeInfo__System__Type);
                        cRam_? = '\x01';
                      }
                      pOStack_25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_GetComponentsInChildren
                                             (pGStack_9,
                                              UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                                             );
                      uStack_26 = 0;
                      if (pOStack_25 != (Object__Array *)0x0) {
                        pOStack_27 = (Object__Class *)pOStack_25->vector;
                        goto code_?;
                      }
                    }
                    break;
                  }
                  pIStack_28 = pIStack_18;
                  if (pIStack_18 == (Il2CppImage *)0x0) break;
                  pOStack_27 = (Object__Class *)pIStack_18->name;
                  uVar29 = 0;
                  uVar30._0_1_ = (pOStack_27->_1).rank;
                  uVar30._1_1_ = (pOStack_27->_1).minimumAlignment;
                  uStack_26 = (uint)uVar30;
                  if (uVar30 != 0) {
                    do {
                      if (pOStack_27->interfaceOffsets[uVar29].interfaceType ==
                          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                        ppMVar31 = &(&(((Object__Class *)pIStack_18->name)->vtable).Finalize)
                                    [((Object__Class *)pIStack_18->name)->interfaceOffsets[uVar29].
                                     offset].method;
                        goto code_?;
                      }
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar30);
                  }
                  ppMVar31 = (MethodInfo **)
                             func_?(pIStack_18,TypeInfo__System__Collections__IEnumerator,1
                                            );
code_?:
                  piVar21 = (int *)(*(code *)*ppMVar31)(pIVar20,ppMVar31[1]);
                  uVar32 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                    ,piVar21);
                  if (piVar21 == (int *)0x0) break;
                  if (*(Il2CppClass **)(*piVar21 + 0x20) !=
                      (
                      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                      ->_0).element_class) goto code_?;
                  puVar33 = (undefined4 *)func_?(piVar21);
                  uStack_34 = *puVar33;
                  uStack_35 = puVar33[1];
                  uStack_36 = puVar33[2];
                  uStack_37 = puVar33[3];
                  uStack_38 = puVar33[4];
                  uStack_39 = puVar33[5];
                  pGStack_40 = (GameObject *)puVar33[6];
                  uStack_41 = puVar33[7];
                  uStack_42 = *(undefined8 *)(puVar33 + 8);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pGVar7 = pGStack_40;
                  this = (GameObject *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                   ((Object *)pGStack_40,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                  if (this == (GameObject *)0x0) break;
                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(this,(MethodInfo *)0x0);
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGStack_9,(MethodInfo *)0x0);
                  if (pTVar12 == (Transform *)0x0) break;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTVar12,pTVar11,(MethodInfo *)0x0);
                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(this,(MethodInfo *)0x0);
                  if (((pGVar7 == (GameObject *)0x0) ||
                      (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
                      pTVar11 == (Transform *)0x0)) ||
                     (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localPosition(&VStack_43,pTVar11,(MethodInfo *)0x0),
                     pTVar12 == (Transform *)0x0)) break;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar12,*pVVar13,(MethodInfo *)0x0);
                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(this,(MethodInfo *)0x0);
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                  if ((pTVar11 == (Transform *)0x0) ||
                     (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localRotation(&QStack_44,pTVar11,(MethodInfo *)0x0),
                     pTVar12 == (Transform *)0x0)) break;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar12,*pQVar15,(MethodInfo *)0x0);
                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(this,(MethodInfo *)0x0);
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                  if ((pTVar11 == (Transform *)0x0) ||
                     (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localScale
                                          ((Vector3 *)(auStack_16 + 4),pTVar11,(MethodInfo *)0x0),
                     pTVar12 == (Transform *)0x0)) break;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar12,*pVVar13,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar32 = func_?();
code_?:
  func_?(uVar32);
code_?:
  uVar45 = func_?(0);
  func_?(uVar45);
code_?:
  uVar45 = func_?(0);
  func_?(uVar45);
  pcVar46 = (code *)swi(3);
  pGVar7 = (GameObject *)(*pcVar46)();
  return pGVar7;
code_?:
  if ((int)pOStack_25->max_length <= (int)uStack_26) {
    *unaff_FS_OFFSET = uStack_3;
    return pGStack_9;
  }
  if (pOStack_25->max_length <= uStack_26) goto code_?;
  pIStack_28 = (pOStack_27->_0).image;
  if (pIStack_28 == (Il2CppImage *)0x0) goto code_?;
  pTVar23 = mscorlib.dll::System::Object::Object_GetType((Object *)pIStack_28,(MethodInfo *)0x0);
  pIVar22 = TypeRef__UnityEngine__Transform;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                  ((RuntimeTypeHandle)pIVar22,(MethodInfo *)0x0);
  bVar47 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_EnumEquals((Int32Enum__Enum)pTVar23,(Int32Enum__Enum)rhs,(MethodInfo *)0x0)
  ;
  if (bVar47 == 0) {
    pGStack_10 = (GameObject *)(piVar21 + 4);
    uVar48 = 0;
    bVar49 = true;
    while (bVar50 = bVar49, (int)uVar48 < piVar21[3]) {
      if ((uint)piVar21[3] <= uVar48) goto code_?;
      pGStack_51 = pGStack_10->klass;
      pTStack_52 = mscorlib.dll::System::Object::Object_GetType
                             ((Object *)pIStack_28,(MethodInfo *)0x0);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pGStack_10 = (GameObject *)&pGStack_10->monitor;
      uVar48 = uVar48 + 1;
      bVar47 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
               UnsafeUtility_EnumEquals
                         ((Int32Enum__Enum)pGStack_51,(Int32Enum__Enum)pTStack_52,(MethodInfo *)0x0)
      ;
      bVar49 = false;
      if (bVar47 == 0) {
        bVar49 = bVar50;
      }
    }
    if (bVar50) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pIStack_28,(MethodInfo *)0x0);
    }
  }
  uStack_26 = uStack_26 + 1;
  pOStack_27 = (Object__Class *)&(pOStack_27->_0).gc_desc;
  goto code_?;
code_?:
  func_?();
  goto code_?;
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
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar2;
      func_?(&(this->fields).cmbClone,pGVar2);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevUpdateDirtyTime = fVar1;
      if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
        pGVar2 = (this->fields).cmbClone;
        if (pGVar2 == (GameObject *)0x0) {
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar2 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0);
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
  (this->fields).cmb = cmb;
  func_?(&(this->fields).cmb,cmb);
  pMVar1 = (this->fields).cmb;
  if (pMVar1 == (MVCubeModelBase *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).Changed;
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      pGVar4 = MovableVisualization_CreateMeshClone(cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar4;
      func_?();
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      UpdateController::UpdateController_AddFixedUpdateObject
                ((IUpdatecontrollerSubscriberFixedUpdate *)this,
                 UpdatePriority__Enum_POST_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (cmb != (MVCubeModelBase *)0x0) {
        pVVar6 = (Vector3 *)
                 (*(code *)(cmb->klass->vtable).get_WorldPosition_1.method)
                           (&stack0xfffffff0,cmb,(cmb->klass->vtable).set_WorldPosition.methodPtr);
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar5,*pVVar6,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pQVar7 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                             ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)cmb,
                              (MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar5,*pQVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    (pMVar1->fields).Changed = pAVar2;
    iVar8 = func_?();
    if (iVar8 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    iVar1 = 0x10;
    uVar2 = 0;
    while( true ) {
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
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
      this_01 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                 ((int)pLVar3->vector + iVar1 + -0x10);
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)value[1].monitor;
      if (this_00 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_00,value,
                   MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   ,(MethodInfo *)0x0);
        value[1].monitor = (MonitorData *)this_00;
        func_?(&value[1].monitor,this_00);
      }
      if (this_01 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this_01,this_00,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
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
          uVar4 = 0;
          bVar5 = true;
          if (exclude == (Type__Array *)0x0) goto code_?;
          while (bVar6 = bVar5, (int)uVar4 < (int)exclude->max_length) {
            if (exclude->max_length <= uVar4) goto code_?;
            rhs = (Object__Array *)
                  mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            uVar4 = uVar4 + 1;
            bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_EnumEquals(0,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
            bVar5 = false;
            if (bVar3 == 0) {
              bVar5 = bVar6;
            }
          }
          if (bVar6) {
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        uStack_1 = uStack_1 + 1;
        ppOVar2 = ppOVar2 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    (this->fields).current = (MovableVisualization_Package *)0x0;
    func_?(&(this->fields).current,0);
    (this->fields).next = (MovableVisualization_Package *)0x0;
    func_?(&(this->fields).next,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    pGVar2 = (this->fields).cmbClone;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
    (this->fields).cmbClone = pGVar2;
    func_?(&(this->fields).cmbClone,pGVar2);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    (this->fields).prevUpdateDirtyTime = fVar1;
    if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
      pGVar2 = (this->fields).cmbClone;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      pGVar2 = (GameObject *)
                UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)pGVar2,(MethodInfo *)0x0);
      MovableVisualization_SetMeshRenderers(this,1,pGVar2,(MethodInfo *)0x0);
    }
    (this->fields).isDirty = 0;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this->fields).current == (MovableVisualization_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pMVar5 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).current = pMVar5;
      func_?(&(this->fields).current,pMVar5);
    }
    if ((this->fields).current == (MovableVisualization_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (MovableVisualization_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pMVar5 = (MovableVisualization_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).next = pMVar5;
      func_?(&(this->fields).next,pMVar5);
    }
  }
  if (((this->fields).current == (MovableVisualization_Package *)0x0) ||
     ((this->fields).next == (MovableVisualization_Package *)0x0)) {
    return;
  }
  pMVar5 = (this->fields).next;
  ppMVar6 = &(this->fields).current;
  ppMVar7 = &(this->fields).next;
  do {
    if (fVar1 - fVar3 < (pMVar5->fields).time) {
code_?:
      pMVar5 = (this->fields).current;
      if (pMVar5 != (MovableVisualization_Package *)0x0) {
        fVar8 = (pMVar5->fields).time;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar9 = ((fVar1 - fVar3) - fVar8) / fVar9;
        pGVar2 = (this->fields).cmbClone;
        if (pGVar2 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0);
          pMVar5 = (this->fields).current;
          if (pMVar5 != (MovableVisualization_Package *)0x0) {
            uVar11 = (pMVar5->fields).position.x;
            uVar12 = (pMVar5->fields).position.y;
            pMVar13 = (this->fields).next;
            fVar1 = (pMVar5->fields).position.z;
            if (pMVar13 != (MovableVisualization_Package *)0x0) {
              uVar14 = (pMVar13->fields).position.x;
              uVar15 = (pMVar13->fields).position.y;
              fVar3 = 0.0;
              if ((0.0 <= fVar9) && (fVar3 = _UNK_?, fVar9 <= _UNK_?)) {
                fVar3 = fVar9;
              }
              if (pTVar10 != (Transform *)0x0) {
                value.y = ((float)uVar15 - (float)uVar12) * fVar3 + (float)uVar12;
                value.x = ((float)uVar14 - (float)uVar11) * fVar3 + (float)uVar11;
                value.z = ((pMVar13->fields).position.z - fVar1) * fVar3 + fVar1;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar10,value,(MethodInfo *)0x0);
                pGVar2 = (this->fields).cmbClone;
                if (pGVar2 != (GameObject *)0x0) {
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                  pMVar5 = (this->fields).current;
                  if (((pMVar5 != (MovableVisualization_Package *)0x0) &&
                      (pMVar13 = (this->fields).next, pMVar13 != (MovableVisualization_Package *)0x0))
                     && (pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                   Quaternion_Slerp((Quaternion *)&stack0xffffffe0,
                                                    (pMVar5->fields).rotation,
                                                    (pMVar13->fields).rotation,fVar9,
                                                    (MethodInfo *)0x0), pTVar10 != (Transform *)0x0)
                     ) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar10,*pQVar16,(MethodInfo *)0x0);
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
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    if ((pQVar4->fields)._size < 1) goto code_?;
    *ppMVar6 = *ppMVar7;
    func_?(ppMVar6,*ppMVar7);
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) break;
    pMVar5 = (MovableVisualization_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                        );
    *ppMVar7 = pMVar5;
    func_?(ppMVar7,pMVar5);
    pMVar5 = *ppMVar7;
  } while (pMVar5 != (MovableVisualization_Package *)0x0);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
            );
  (this->fields).packages = this_00;
  func_?(&(this->fields).packages,this_00);
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

