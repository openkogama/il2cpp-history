
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
  bVar1 = (this->fields).isVisible;
  if (newVisible == 0) {
    if (bVar1 != 0) {
      MovableVisualization_SetMeshRenderers(this,0,(this->fields).cmbClone,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((bVar1 == 0) && ((this->fields).canBeVisible != 0)) {
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
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffff64;
  puStack_4 = &stack0xffffff64;
  if ((cmb != (MVCubeModelBase *)0x0) &&
     (method_04 = cmb, puStack_6 = (undefined4 *)&stack0xffffff64, puStack_4 = &stack0xffffff64,
     this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)cmb,(MethodInfo *)0x0), this_00 != (CelestialParam *)0x0)
     ) {
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar7,StringLiteral__clone,(MethodInfo *)0x0);
    this_01 = (Transform__Class *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              ((GameObject *)this_01,pSVar7,(MethodInfo *)0x0);
    pTStack_8 = this_01;
    if (this_01 != (Transform__Class *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_01,in_stack_10);
      pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
      if ((pMVar11 != (MVPointLightObject *)0x0) &&
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             ((Transform *)pMVar11,in_stack_13), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar9,pTVar12,in_stack_14);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)this_01,(MethodInfo *)0x0);
        method_02 = (MethodInfo *)&UNK_?;
        pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)cmb,(MethodInfo *)0x0);
        if ((pMVar11 != (MVPointLightObject *)0x0) &&
           (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_16,(Transform *)pMVar11,in_stack_17),
           pTVar9 != (Transform *)0x0)) {
          method_00 = (MethodInfo *)pVVar15->x;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar9,*pVVar15,in_stack_18);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             ((GameObject *)this_01,(MethodInfo *)0x0);
          method_01 = cmb;
          pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                             ((PrefabPool *)cmb,(MethodInfo *)0x0);
          if ((pMVar11 != (MVPointLightObject *)0x0) &&
             (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  (&QStack_20,(Transform *)pMVar11,in_stack_21),
             pTVar9 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar9,*pQVar19,in_stack_22);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_01,(MethodInfo *)0x0);
            method_03 = cmb;
            pMVar11 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                               ((PrefabPool *)cmb,(MethodInfo *)0x0);
            if ((pMVar11 != (MVPointLightObject *)0x0) &&
               (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale(&VStack_16,(Transform *)pMVar11,in_stack_23)
               , pTVar9 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar9,*pVVar15,in_stack_24);
              pMVar25 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                                  ((MVMovingPlatformNode *)cmb,(MethodInfo *)0x0);
              if (pMVar25 != (MVMovingPlatformNode *)0x0) {
                iStack_26 = func_?();
                uStack_1 = 0;
                while (iStack_26 != 0) {
                  cVar27 = func_?();
                  if (cVar27 == '\0') {
                    *puStack_6 = 0x126;
                    uStack_1 = 0xffffffff;
                    iVar28 = func_?();
                    if (iVar28 != 0) {
                      func_?();
                    }
                    iStack_26 = func_?();
                    pIVar29 = TypeRef__UnityEngine__MeshFilter;
                    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__Type);
                    }
                    pTVar30 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                        ((RuntimeTypeHandle)pIVar29,(MethodInfo *)0x0);
                    iVar28 = iStack_26;
                    if (iStack_26 != 0) {
                      if ((pTVar30 != (Type *)0x0) && (iVar31 = func_?(), iVar31 == 0))
                      goto code_?;
                      if (*(int *)(iVar28 + 0xc) == 0) goto code_?;
                      *(Type **)(iVar28 + 0x10) = pTVar30;
                      pTVar30 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)TypeRef__UnityEngine__MeshRenderer,
                                           (MethodInfo *)0x0);
                      if ((pTVar30 != (Type *)0x0) && (iVar31 = func_?(), iVar31 == 0))
                      goto code_?;
                      if (*(uint *)(iVar28 + 0xc) < 2) goto code_?;
                      bVar32 = cRam_? == '\0';
                      *(Type **)(iVar28 + 0x14) = pTVar30;
                      if (bVar32) {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (this_01 != (Transform__Class *)0x0) {
                        pUStack_33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_GetComponentsInChildren_29
                                               ((GameObject *)this_01,
                                                UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                                               );
                        puStack_6 = (undefined4 *)0x0;
                        if (pUStack_33 != (UseInteratorVisualization__Array *)0x0) {
                          pTStack_34 = (Transform *)pUStack_33->vector;
                          goto code_?;
                        }
                      }
                    }
                    break;
                  }
                  piVar35 = (int *)func_?();
                  if (piVar35 == (int *)0x0) break;
                  if (*(Il2CppClass **)(*piVar35 + 0x20) !=
                      (
                      TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                      ->_0).element_class) {
                    func_?();
                    break;
                  }
                  func_?();
                  pQVar19 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
                            SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                                      (&QStack_36,
                                       (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)
                                       &stack0xffffff70,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                                      );
                  QStack_20.x = pQVar19->x;
                  QStack_20.y = pQVar19->y;
                  QStack_20.z = pQVar19->z;
                  QStack_20.w = pQVar19->w;
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  this = QStack_20.x;
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                            Object_1_Instantiate_251
                                      ((XpBoostParticlePreviewer *)QStack_20.x,
                                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      );
                  if (this_02 == (XpBoostParticlePreviewer *)0x0) break;
                  pTStack_34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform((GameObject *)this_02,method_02);
                  method_02 = (MethodInfo *)&UNK_?;
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)this_01,(MethodInfo *)0x0);
                  if (pTStack_34 == (Transform *)0x0) break;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTStack_34,pTVar9,in_stack_37);
                  pTStack_34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform((GameObject *)this_02,(MethodInfo *)0x0);
                  if ((((XpBoostParticlePreviewer *)this == (XpBoostParticlePreviewer *)0x0) ||
                      (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform((GameObject *)this,method_00),
                      pTVar9 == (Transform *)0x0)) ||
                     (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localPosition
                                          (&VStack_16,pTVar9,(MethodInfo *)method_01),
                     pTStack_34 == (Transform *)0x0)) break;
                  method_01 = (MVCubeModelBase *)pVVar15->x;
                  method_00 = (MethodInfo *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTStack_34,*pVVar15,in_stack_38);
                  pTStack_34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform((GameObject *)this_02,(MethodInfo *)0x0);
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)this,(MethodInfo *)0x0);
                  if ((pTVar9 == (Transform *)0x0) ||
                     (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localRotation
                                          (&QStack_39,pTVar9,(MethodInfo *)method_03),
                     pTStack_34 == (Transform *)0x0)) break;
                  method_03 = (MVCubeModelBase *)pQVar19->y;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTStack_34,*pQVar19,in_stack_40);
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)this_02,(MethodInfo *)0x0);
                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)this,(MethodInfo *)0x0);
                  if ((pTVar12 == (Transform *)0x0) ||
                     (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localScale(&VStack_41,pTVar12,(MethodInfo *)cmb),
                     pTVar9 == (Transform *)0x0)) break;
                  pMVar42 = (MVCubeModelBase *)pVVar15->x;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar9,*pVVar15,(MethodInfo *)method_04);
                  cmb = pMVar42;
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
  func_?();
code_?:
  uVar43 = func_?();
  func_?(uVar43);
code_?:
  uVar43 = func_?();
  func_?(uVar43);
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar44 = (code *)swi(3);
  pGVar45 = (GameObject *)(*pcVar44)();
  return pGVar45;
code_?:
  if ((int)pUStack_33->max_length <= (int)puStack_6) {
    *unaff_FS_OFFSET = uStack_3;
    return (GameObject *)this_01;
  }
  if ((undefined4 *)pUStack_33->max_length <= puStack_6) goto code_?;
  pTStack_8 = pTStack_34->klass;
  if (pTStack_8 == (Transform__Class *)0x0) goto code_?;
  pTVar30 = mscorlib.dll::System::Object::Object_GetType((Object *)pTStack_8,(MethodInfo *)0x0);
  pIVar29 = TypeRef__UnityEngine__Transform;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar46 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)pIVar29,(MethodInfo *)0x0);
  if (pTVar30 != pTVar46) {
    uStack_47 = 1;
    for (iVar28 = 0; iVar28 < *(int *)(iStack_26 + 0xc); iVar28 = iVar28 + 1) {
      pTVar30 = (Type *)func_?();
      pTVar46 = mscorlib.dll::System::Object::Object_GetType((Object *)pTStack_8,(MethodInfo *)0x0)
      ;
      uStack_47 = uStack_47 & 0xff;
      if (pTVar30 == pTVar46) {
        uStack_47 = 0;
      }
    }
    if ((char)uStack_47 != '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pTStack_8,(MethodInfo *)0x0);
    }
  }
  puStack_6 = (undefined4 *)((int)puStack_6 + 1);
  pTStack_34 = (Transform *)&pTStack_34->monitor;
  goto code_?;
}


/* Void HandleDirty() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_HandleDirty
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDirty != 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime) {
      pGVar2 = (this->fields).cmbClone;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
      (this->fields).cmbClone = pGVar2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevUpdateDirtyTime = fVar1;
      if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).cmbClone;
        if (this_00 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar2 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).cmb = cmb;
  if (cmb != (MVCubeModelBase *)0x0) {
    pAVar1 = (cmb->fields).Changed;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__MovableVisualization__cmb_Changed_CubeModelChangedEventArgs_,
               MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__)
    ;
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    if (pAVar2 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    }
    (cmb->fields).Changed = pAVar1;
    pGVar3 = MovableVisualization_CreateMeshClone(cmb,(MethodInfo *)0x0);
    (this->fields).cmbClone = pGVar3;
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?();
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_POST_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pVVar5 = (Vector3 *)(*(code *)(cmb->klass->vtable).get_WorldPosition_1.method)();
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,*pVVar5,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pQVar6 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)cmb,
                          (MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,*pQVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_OnDestroy
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    in_ECX = extraout_ECX;
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
    in_ECX = extraout_ECX_00;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,in_ECX,unaff_EBP);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveFixedUpdateObject_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  object = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this_00->fields)._._._._.m_CachedPtr = this;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar2 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->fixedUpdateBuckets ==
          (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)object,
                 MethodInfo__UpdateController___RemoveFixedUpdateObject_c__AnonStorey1____m__0_PriorityDataFixedUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataFixedUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveAllComponentsInChildrenExclude(Type[], GameObject) */

void Assembly-CSharp.dll::MovableVisualization::
     MovableVisualization_RemoveAllComponentsInChildrenExclude
               (Type__Array *exclude,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (gameObject,
                        UnityEngine__Component__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Component>______
                       );
    uStack_2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      pTVar3 = (Type__Class *)pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uStack_2) {
          return;
        }
        if (pUVar1->max_length <= uStack_2) break;
        obj = (pTVar3->_0).image;
        if (obj == (Il2CppImage *)0x0) goto code_?;
        pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
        pTVar5 = TypeInfo__System__Type;
        handle = TypeRef__UnityEngine__Transform;
        pUVar1 = unaff_ESI;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          pUVar1 = (UseInteratorVisualization__Array *)&UNK_?;
          func_?();
          pTVar3 = pTVar5;
        }
        pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        if (pTVar4 != pTVar6) {
          bVar7 = true;
          iVar8 = 0;
          while( true ) {
            if (exclude == (Type__Array *)0x0) goto code_?;
            if ((int)exclude->max_length <= iVar8) break;
            pTVar4 = (Type *)func_?(iVar8);
            pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)obj,(MethodInfo *)0x0);
            if (pTVar4 == pTVar6) {
              bVar7 = false;
            }
            iVar8 = iVar8 + 1;
          }
          if (bVar7) {
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
          }
        }
        uStack_2 = uStack_2 + 1;
        pTVar3 = (Type__Class *)&(pTVar3->_0).gc_desc;
        unaff_ESI = pUVar1;
      }
      uVar9 = func_?(0,0);
      func_?(uVar9);
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Reset
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).packages;
  if (this_00 != (Queue_1_MovableVisualization_Package_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
              ((Queue_1_System_Int32_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Clear__
              );
    (this->fields).current = (MovableVisualization_Package *)0x0;
    (this->fields).next = (MovableVisualization_Package *)0x0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMeshRenderers(Boolean, GameObject) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_SetMeshRenderers
               (MovableVisualization *this,bool enable,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (gameObject,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          (this->fields).isVisible = enable;
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppUVar3,enable,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_Update
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isDirty != 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0),
     _UNK_? < fVar1 - (this->fields).prevUpdateDirtyTime)) {
    pGVar2 = (this->fields).cmbClone;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pGVar2 = MovableVisualization_CreateMeshClone((this->fields).cmb,(MethodInfo *)0x0);
    (this->fields).cmbClone = pGVar2;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    (this->fields).prevUpdateDirtyTime = fVar1;
    if (((this->fields).isVisible != 0) && ((this->fields).canBeVisible != 0)) {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).cmbClone;
      if (this_00 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      pGVar2 = (GameObject *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         (this_00,(MethodInfo *)0x0);
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
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar6 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).current = (MovableVisualization_Package *)pSVar7;
    }
    if ((this->fields).current == (MovableVisualization_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (MovableVisualization_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_MovableVisualization_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar6 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).packages;
      if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                          );
      (this->fields).next = (MovableVisualization_Package *)pSVar7;
    }
  }
  if (((this->fields).current == (MovableVisualization_Package *)0x0) ||
     (pSVar7 = (SmoothPhysicsMovement_Package *)(this->fields).next,
     pSVar7 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar1 - fVar3 < (pSVar7->fields).time) {
code_?:
      pMVar8 = (this->fields).current;
      if (pMVar8 != (MovableVisualization_Package *)0x0) {
        fVar9 = (pMVar8->fields).time;
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar10 = ((fVar1 - fVar3) - fVar9) / fVar10;
        pGVar2 = (this->fields).cmbClone;
        if (pGVar2 != (GameObject *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0);
          pMVar8 = (this->fields).current;
          if (pMVar8 != (MovableVisualization_Package *)0x0) {
            pMVar12 = (this->fields).next;
            a_00 = (pMVar8->fields).position;
            if (pMVar12 != (MovableVisualization_Package *)0x0) {
              uVar13._0_4_ = (pMVar12->fields).position.x;
              uVar13._4_4_ = (pMVar12->fields).position.y;
              fVar1 = (pMVar12->fields).position.z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              b.z = fVar1;
              b.x = (float)uVar13;
              b.y = SUB84(uVar13,4);
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                                  ((Vector3 *)&stack0xffffffdc,a_00,b,fVar10,(MethodInfo *)0x0);
              if (pTVar11 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar11,*pVVar14,(MethodInfo *)0x0);
                pGVar2 = (this->fields).cmbClone;
                if (pGVar2 != (GameObject *)0x0) {
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                  pMVar8 = (this->fields).current;
                  if (pMVar8 != (MovableVisualization_Package *)0x0) {
                    fVar1 = (pMVar8->fields).rotation.x;
                    fVar3 = (pMVar8->fields).rotation.y;
                    fVar9 = (pMVar8->fields).rotation.z;
                    fVar15 = (pMVar8->fields).rotation.w;
                    pMVar8 = (this->fields).next;
                    if (pMVar8 != (MovableVisualization_Package *)0x0) {
                      fVar16 = (pMVar8->fields).rotation.x;
                      puVar17 = (undefined *)(pMVar8->fields).rotation.y;
                      pQVar18 = (Quaternion__Class *)(pMVar8->fields).rotation.z;
                      fVar19 = (pMVar8->fields).rotation.w;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        puVar17 = &UNK_?;
                        pQVar18 = TypeInfo__UnityEngine__Quaternion;
                        func_?();
                      }
                      a.y = fVar3;
                      a.x = fVar1;
                      a.z = fVar9;
                      a.w = fVar15;
                      b_00.y = (float)puVar17;
                      b_00.x = fVar16;
                      b_00.z = (float)pQVar18;
                      b_00.w = fVar19;
                      pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_Slerp((Quaternion *)&stack0xffffffd8,a,b_00,fVar10,
                                                 (MethodInfo *)0x0);
                      if (pTVar11 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar11,*pQVar20,(MethodInfo *)0x0);
                        return;
                      }
                    }
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
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__get_Count__
                       );
    if ((int)pIVar5 < 1) goto code_?;
    (this->fields).current = (this->fields).next;
    pQVar6 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar6,
                         MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Dequeue__
                        );
    (this->fields).next = (MovableVisualization_Package *)pSVar7;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_UpdateControllerFixedUpdate
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (PrefabPool *)(this->fields).cmb;
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this->fields).packages;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVPointLightObject *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,(Transform *)pMVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->x;
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pPVar1 = (PrefabPool *)(this->fields).cmb;
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVPointLightObject *)0x0) {
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffe4,(Transform *)pMVar2,(MethodInfo *)0x0);
          fVar8 = pQVar7->x;
          fVar9 = pQVar7->y;
          fVar10 = pQVar7->w;
          pTVar11 = (Transform *)&UNK_?;
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_12);
          pSVar13 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime
                             ((MethodInfo *)0x0);
          (this_01->fields)._ = (MonoBehaviour__Fields)fVar4;
          (this_01->fields).state = (int32_t)fVar5;
          (this_01->fields).originalScale.x = fVar6;
          (this_01->fields).OnScaleAnimationStopped = pSVar13;
          (this_01->fields).originalScale.y = fVar8;
          (this_01->fields).originalScale.z = fVar9;
          (this_01->fields).target = pTVar11;
          (this_01->fields).testState = (int32_t)fVar10;
          if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
            System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
            Queue_1_SmoothPhysicsMovement_Package__Enqueue
                      (this_00,(SmoothPhysicsMovement_Package *)this_01,
                       MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Enqueue_MovableVisualization__Package_
                      );
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MovableVisualization() */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization__ctor
               (MovableVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<MovableVisualization::Package>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Queue<MovableVisualization::Package>__Queue__
            );
  (this->fields).packages = (Queue_1_MovableVisualization_Package_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
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
  return (this->fields).canBeVisible != 0;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MovableVisualization::MovableVisualization_set_Visible
               (MovableVisualization *this,bool value,MethodInfo *method)

{
  (this->fields).canBeVisible = value;
  MovableVisualization_SetMeshRenderers(this,value,(this->fields).cmbClone,(MethodInfo *)0x0);
  return;
}

