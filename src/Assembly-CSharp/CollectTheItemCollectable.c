
/* Void CreateCollectableInstance(Vector3, Quaternion) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_CreateCollectableInstance
               (CollectTheItemCollectable *this,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::
    MVNetworkGame_OperationRequests_CloneTempWorldObjectWithOriginalReference
              (this_00,(MVWorldObjectClient *)(this->fields).collectableInstance,position,rotation,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_Destroy
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    pUVar1 = (this->fields)._._._.PositionChanged;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUVar2->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar1 = pUVar2;
      }
      if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        func_?(pUVar2,
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                       );
        goto code_?;
      }
    }
    (this->fields)._._._.PositionChanged = pUVar1;
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnCollectTheItemDestroyed;
  if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0);
    (this->fields).OnCollectTheItemDestroyed = (Action *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  return;
}


/* Dictionary`2[System.String,System.Object] GetItemData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_GetItemData
          (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  this_00 = (this->fields).collectableModel;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    pIStack_2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    pTVar3 = (Theme *)func_?(TypeInfo__System__Int32,&pIStack_2);
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_cubeModelId,pTVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pCVar4 = (this->fields).controller;
      if ((pCVar4 != (CollectTheItem *)0x0) &&
         (this_01 = (pCVar4->fields).dropOff, this_01 != (CollectTheItemDropOff *)0x0)) {
        pIStack_5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        pTVar3 = (Theme *)func_?(TypeInfo__System__Int32,&pIStack_5);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_dropOffId,pTVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        pIStack_6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        pTVar3 = (Theme *)func_?(TypeInfo__System__Int32,&pIStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_spawnerId,pTVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        uStack_7 = 1;
        puStack8 = &uStack_7;
        pBStack9 = TypeInfo__System__Boolean;
        pTVar3 = (Theme *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)pDVar1,StringLiteral_isOriginal,pTVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        return pDVar1;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)(*pcVar10)();
  return pDVar1;
}


/* Void InitializeWithController(CollectTheItem) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_InitializeWithController
               (CollectTheItemCollectable *this,CollectTheItem *controller,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).controller = controller;
  CollectTheItemCollectable_SetupCollectableModel(this,(MethodInfo *)0x0);
  this_00 = (this->fields).collectableModel;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (controller != (CollectTheItem *)0x0) {
      (controller->fields)._WoKeyInstance_k__BackingField = (int32_t)pIVar1;
      this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_01 != (MVPointLightObject *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,(Transform *)this_01,(MethodInfo *)0x0);
        uVar3._0_4_ = pVVar2->x;
        uVar3._4_4_ = pVVar2->y;
        object = (Object *)pVVar2->z;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                  );
        this_02 = (Object__Class *)func_?();
        fVar5 = (float)uVar3;
        this = (CollectTheItemCollectable *)object;
        fVar6 = (float)(int)((ulonglong)uVar3 >> 0x20);
        position = (Vector3)CONCAT84(uVar7,fVar5);
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  ((CullingSubscriberBase *)this_02,2.0,position,
                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar4,(MethodInfo *)0x0);
        pDVar8 = (Delegate *)object[0xd].monitor;
        object[0x1d].klass = this_02;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,object,
                   MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pDStack9 =
             mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar8,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pDVar8 = (Delegate *)0x0;
        if (pDStack9 == (Delegate *)0x0) {
code_?:
          object[0xd].monitor = (MonitorData *)pDVar8;
          return;
        }
        if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
            pDStack9->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pDVar8 = pDStack9;
        }
        pUStack10 =
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        if (pDVar8 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
  pDStack9 = extraout_ECX;
  pUStack10 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnEnterObject
               (CollectTheItemCollectable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).collectableInstance;
  if (this_00 != (CollectTheItemCollectableInstance *)0x0) {
    CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_SetRotationEnabled
              (this_00,0,(MethodInfo *)0x0);
    this_01 = (PrefabPool *)(this->fields).collectableModel;
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
      if (this_02 != (MVPointLightObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  ((Transform *)this_02,*pQVar1,(MethodInfo *)0x0);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          bVar3 = (*(code *)(pEVar2->klass->vtable).OnEnterObject.method)
                            (pEVar2,e,(pEVar2->klass->vtable).OnExitObject.methodPtr);
          return bVar3;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnExitObject
               (CollectTheItemCollectable *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).collectableInstance;
  if (this_00 != (CollectTheItemCollectableInstance *)0x0) {
    CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_SetRotationEnabled
              (this_00,1,(MethodInfo *)0x0);
    pEVar1 = (this->fields).editableCubeModelWrapper;
    if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
      bVar2 = (*(code *)(pEVar1->klass->vtable).OnExitObject.method)(pEVar1);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnStateChanged
               (CollectTheItemCollectable *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupCollectableModel() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_SetupCollectableModel
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (CollectTheItemCollectableInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_CollectableInstance,(MethodInfo *)0x0);
  pCVar2 = pCVar1;
  if (pCVar1 == (CollectTheItemCollectableInstance *)0x0) {
code_?:
    (this->fields).collectableInstance = pCVar2;
    if (pCVar2 == (CollectTheItemCollectableInstance *)0x0) goto code_?;
    pMVar3 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)pCVar2,StringLiteral_CollectableModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVCubeModelInstance *)0x0) {
      pMVar4 = (MVCubeModelInstance *)0x0;
    }
    else {
      bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar5) ||
         ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar4 = (MVCubeModelInstance *)0x0;
      if (bVar6) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVCubeModelInstance *)0x0) goto code_?;
    }
    (this->fields).collectableModel = pMVar4;
    if (pMVar4 == (MVCubeModelInstance *)0x0) goto code_?;
    (*(code *)(pMVar4->klass->vtable).set_Visible.method)();
    pMVar3 = (this->fields).collectableModel;
    if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
    gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)gameObject,iVar7,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(this->fields).collectableModel;
    if (this_00 == (PrefabPool *)0x0) goto code_?;
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd8,(MethodInfo *)0x0);
    if (this_01 == (MVPointLightObject *)0x0) goto code_?;
    value_00.y._2_2_ = (short)((uint)pQVar8->y >> 0x10);
    value_00._0_6_ = *(undefined6 *)pQVar8;
    value_00.z = pQVar8->z;
    value_00.w = pQVar8->w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)this_01,value_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar9 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar9 != MVGameMode__Enum_Edit) {
      return;
    }
    pCVar2 = (this->fields).collectableInstance;
    if (pCVar2 == (CollectTheItemCollectableInstance *)0x0) goto code_?;
    pUVar10 = (pCVar2->fields)._._._.PositionChanged;
    pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar11,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
    pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar12 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUVar12->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar10 = pUVar12;
      }
      if (pUVar10 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (pCVar2->fields)._._._.PositionChanged = pUVar10;
    value_01 = (this->fields).minBounds.x;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?();
    }
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minBounds.y,(MethodInfo *)0x0);
    uVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minBounds.z,(MethodInfo *)0x0);
    pMVar3 = (MVCubeModelInstance *)(uint)uVar13;
    func_?();
    uVar14 = 0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.x,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.z,(MethodInfo *)0x0);
    uVar13 = 0;
    func_?();
    fVar15 = (float)(this->fields).minCubes.currentCryptoKey;
    fVar16 = (float)(this->fields).minCubes.hiddenValue;
    fVar17 = (float)(this->fields).minCubes.fakeValue;
    fVar18 = *(float *)&(this->fields).minCubes.inited;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
    }
    value.hiddenValue = (int32_t)fVar16;
    value.currentCryptoKey = (int32_t)fVar15;
    value.fakeValue = (int32_t)fVar17;
    value._12_4_ = fVar18;
    iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    this_02 = (Collection_1_VoxelHit_ *)func_?();
    min.z = 0;
    min.x = (short)uVar14;
    min.y = (short)(uVar14 >> 0x10);
    EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
              ((EditableCubeModelWrapper *)this_02,pMVar3,min,(IntVector)((uint6)uVar13 << 0x20),
               iVar7,(MethodInfo *)0x0);
    (this->fields).editableCubeModelWrapper = (EditableCubeModelWrapper *)this_02;
    if (this_02 != (Collection_1_VoxelHit_ *)0x0) {
      this_03 = (MVCubeModelBase *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
      pCVar2 = (this->fields).collectableInstance;
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)pCVar2,
                 MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                 ,
                 MethodInfo__System__EventHandler<EditStateEventArgs>__EventHandler_System__Object__void__
                );
      if (this_03 != (MVCubeModelBase *)0x0) {
        MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                  (this_03,(EventHandler_1_EditStateEventArgs_ *)pUVar11,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    bVar5 = (TypeInfo__CollectTheItemCollectableInstance->_1).naturalAligment;
    if (((pCVar1->klass->_1).naturalAligment < bVar5) ||
       ((CollectTheItemCollectableInstance__Class *)(pCVar1->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__CollectTheItemCollectableInstance)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pCVar2 = (CollectTheItemCollectableInstance *)0x0;
    if (bVar6) {
      pCVar2 = pCVar1;
    }
    if (pCVar2 != (CollectTheItemCollectableInstance *)0x0) goto code_?;
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* CollectTheItemCollectable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable__ctor
               (CollectTheItemCollectable *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5._0_2_ = 0;
  uStack_5._2_2_ = 0;
  uStack_5._4_2_ = 0;
  uStack_5._6_1_ = 0;
  uStack_5._7_1_ = 0;
  func_?(&uStack_1,0xfffffffd,0,0xfffffffd,0);
  (this->fields).minBounds.x.currentCryptoKey = (undefined2)uStack_1;
  (this->fields).minBounds.x.hiddenValue = uStack_1._2_2_;
  (this->fields).minBounds.x.fakeValue = (undefined2)uStack_2;
  (this->fields).minBounds.x.inited = uStack_2._2_1_;
  (this->fields).minBounds.x.field_0x7 = uStack_2._3_1_;
  (this->fields).minBounds.y.currentCryptoKey = (undefined2)uStack_3;
  (this->fields).minBounds.y.hiddenValue = uStack_3._2_2_;
  (this->fields).minBounds.y.fakeValue = (undefined2)uStack_4;
  (this->fields).minBounds.y.inited = uStack_4._2_1_;
  (this->fields).minBounds.y.field_0x7 = uStack_4._3_1_;
  (this->fields).minBounds.z = uStack_5;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  OStack_10.currentCryptoKey = 0;
  OStack_10.hiddenValue = 0;
  OStack_10.fakeValue = 0;
  OStack_10.inited = 0;
  OStack_10._7_1_ = 0;
  func_?(&uStack_6,3,6,3,0);
  (this->fields).maxBounds.x.currentCryptoKey = (undefined2)uStack_6;
  (this->fields).maxBounds.x.hiddenValue = uStack_6._2_2_;
  (this->fields).maxBounds.x.fakeValue = (undefined2)uStack_7;
  (this->fields).maxBounds.x.inited = uStack_7._2_1_;
  (this->fields).maxBounds.x.field_0x7 = uStack_7._3_1_;
  (this->fields).maxBounds.y.currentCryptoKey = (undefined2)uStack_8;
  (this->fields).maxBounds.y.hiddenValue = uStack_8._2_2_;
  (this->fields).maxBounds.y.fakeValue = (undefined2)uStack_9;
  (this->fields).maxBounds.y.inited = uStack_9._2_1_;
  (this->fields).maxBounds.y.field_0x7 = uStack_9._3_1_;
  (this->fields).maxBounds.z = OStack_10;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,5,(MethodInfo *)0x0);
  iVar12 = pOVar11->hiddenValue;
  iVar13 = pOVar11->fakeValue;
  bVar14 = pOVar11->inited;
  uVar15 = *(undefined3 *)&pOVar11->field_0xd;
  (this->fields).minCubes.currentCryptoKey = pOVar11->currentCryptoKey;
  (this->fields).minCubes.hiddenValue = iVar12;
  (this->fields).minCubes.fakeValue = iVar13;
  (this->fields).minCubes.inited = bVar14;
  *(undefined3 *)&(this->fields).minCubes.field_0xd = uVar15;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
            ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_CanEdit,method_00);
  IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
            ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_DirectlySelectable,method_01
            );
  uVar17 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar18 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar18 = (uint)*piVar18 | 0x8000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar17;
  IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  uStack_5 = (ObscuredShort)CONCAT44(&UNK_?,(undefined4)uStack_5);
  MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
            ((MVWorldObjectClient *)this,
             IVar16 & (InteractionFlags__Enum_CanEnterPlay|
                      InteractionFlags__Enum_CanEarnGamePointsMinor|
                      InteractionFlags__Enum_CanEarnGamePoints|InteractionFlags__Enum_CanUseGameRank
                      |InteractionFlags__Enum_GlobalSounds|InteractionFlags__Enum_CanCloneRoot|
                      InteractionFlags__Enum_CanUseTeam|InteractionFlags__Enum_Sounds|
                      InteractionFlags__Enum_TranslatbleXZ2D|InteractionFlags__Enum_CanUseStars|
                      InteractionFlags__Enum_CanUseLevel|InteractionFlags__Enum_CanUseGameCoins|
                      InteractionFlags__Enum_CantAddChildren|InteractionFlags__Enum_IsUsable|
                      InteractionFlags__Enum_IsPreview|InteractionFlags__Enum_CanResetLogic|
                      InteractionFlags__Enum_HasSettings|InteractionFlags__Enum_CanAddToInventory|
                      InteractionFlags__Enum_CanEdit|InteractionFlags__Enum_NotTranslatbleXZ|
                      InteractionFlags__Enum_NotTranslatbleY|InteractionFlags__Enum_CanRotateZ|
                      InteractionFlags__Enum_CanRotateY|InteractionFlags__Enum_CanRotateX|
                      InteractionFlags__Enum_DontPushGroupToSelectionStack|
                      InteractionFlags__Enum_NotUserTransformable|
                      InteractionFlags__Enum_SelectionRequiresEditGroup|
                      InteractionFlags__Enum_DirectlySelectable|InteractionFlags__Enum_IsTerrain|
                      InteractionFlags__Enum_HasCubeModel|InteractionFlags__Enum_Selectable),
             method_02);
  return;
}


/* Int32 get_CollectableModelId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::
        CollectTheItemCollectable_get_CollectableModelId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                    (MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar2 = (CollectTheItem *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(int32_t)id,(MethodInfo *)0x0);
      this_01 = pCVar2;
      if (pCVar2 != (CollectTheItem *)0x0) {
        bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
        if (((pCVar2->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItem__Class *)(pCVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItem)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        this_01 = (CollectTheItem *)0x0;
        if (bVar4) {
          this_01 = pCVar2;
        }
        if (this_01 == (CollectTheItem *)0x0) goto code_?;
      }
      (this->fields).controller = this_01;
      if (this_01 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(this_01,(MethodInfo *)0x0);
        pMVar1 = (this->fields).collectableModel;
        goto code_?;
      }
    }
  }
  else {
code_?:
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      return (pMVar1->fields)._._._.id;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).controller;
  if (pCVar1 == (CollectTheItem *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                    (MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar2 = (CollectTheItem *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(int32_t)id,(MethodInfo *)0x0);
      pCVar1 = pCVar2;
      if (pCVar2 != (CollectTheItem *)0x0) {
        bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
        if (((pCVar2->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItem__Class *)(pCVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItem)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pCVar1 = (CollectTheItem *)0x0;
        if (bVar4) {
          pCVar1 = pCVar2;
        }
        if (pCVar1 == (CollectTheItem *)0x0) goto code_?;
      }
      (this->fields).controller = pCVar1;
      if (pCVar1 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
        pCVar1 = (this->fields).controller;
        goto code_?;
      }
    }
  }
  else {
code_?:
    if ((pCVar1 != (CollectTheItem *)0x0) &&
       (pCVar5 = (pCVar1->fields).dropOff, pCVar5 != (CollectTheItemDropOff *)0x0)) {
      return (pCVar5->fields)._._._._.id;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Boolean get_HasArrowIndicator() */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  pCVar1 = (this->fields).collectableInstance;
  if (pCVar1 != (CollectTheItemCollectableInstance *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields)._.blueprintData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,
                          (Type *)StringLiteral_hasIndicator,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,pPVar2);
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar4 = (bool *)func_?();
          return *pbVar4;
        }
        goto code_?;
      }
    }
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

