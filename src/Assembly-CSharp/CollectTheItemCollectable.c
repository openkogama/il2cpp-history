
/* Void CreateCollectableInstance(Vector3, Quaternion) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_CreateCollectableInstance
               (CollectTheItemCollectable *this,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::
    MVNetworkGame_OperationRequests_CloneTempWorldObjectWithOriginalReference
              (this_00,(MVWorldObjectClient *)(this->fields).collectableInstance,position,rotation,
               (MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_Destroy
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
code_?:
    if ((this->fields).OnCollectTheItemDestroyed != (Action *)0x0) {
      pAVar1 = (this->fields).OnCollectTheItemDestroyed;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
      (this->fields).OnCollectTheItemDestroyed = (Action *)0x0;
      func_?(&(this->fields).OnCollectTheItemDestroyed,0);
    }
    MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (this->fields)._._._.PositionChanged;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this->fields)._._._.PositionChanged = pUVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Dictionary`2[System.String,System.Object] GetItemData() */

Dictionary_2_System_String_System_Object_ *
Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_GetItemData
          (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_dropOffId);
    func_?(&StringLiteral_isOriginal);
    func_?(&StringLiteral_spawnerId);
    func_?(&StringLiteral_cubeModelId);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    pMVar2 = (this->fields).collectableModel;
    if (pMVar2 != (MVCubeModelInstance *)0x0) {
      iStack_3 = (pMVar2->fields)._._._.id;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_cubeModelId,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pCVar5 = (this->fields).controller;
      if ((pCVar5 != (CollectTheItem *)0x0) &&
         (pCVar6 = (pCVar5->fields).dropOff, pCVar6 != (CollectTheItemDropOff *)0x0)) {
        iStack_7 = (pCVar6->fields)._._._._.id;
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_dropOffId,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        iStack_8 = (this->fields)._._._._.id;
        pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_spawnerId,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        uStack_9 = 1;
        pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_9);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_isOriginal,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        return pDVar1;
      }
    }
  }
  func_?();
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
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  (this->fields).controller = controller;
  func_?();
  CollectTheItemCollectable_SetupCollectableModel(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).collectableModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) && (controller != (CollectTheItem *)0x0)) {
    (controller->fields)._WoKeyInstance_k__BackingField = (pMVar1->fields)._._._.id;
    this_00 = (this->fields)._._._.transform;
    if (this_00 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_3,this_00,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar2->x;
      uStack_4._4_4_ = pVVar2->y;
      fVar5 = pVVar2->z;
      this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
      if (this_01 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
        UnityAction_1_UnityEngine_Vector2___ctor
                  (this_01,(Object *)this,
                   MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                   ,(MethodInfo *)0x0);
        this_02 = (CullingSubscriberBase *)func_?();
        controller = (CollectTheItem *)0x0;
        if (this_02 != (CullingSubscriberBase *)0x0) {
          position.z = fVar5;
          position.x = (float)(undefined4)uStack_4;
          position.y = (float)uStack_4._4_4_;
          CullingSubscriberBase::CullingSubscriberBase__ctor_2
                    (this_02,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                     (MethodInfo *)0x0);
          (this->fields).cullingSubscriberBase = this_02;
          func_?();
          pUVar6 = (this->fields)._._._.PositionChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          controller = (CollectTheItem *)0x0;
          if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       ,(MethodInfo *)0x0);
            controller = (CollectTheItem *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pUVar6,(Delegate *)this_03,(MethodInfo *)0x0);
            if (controller == (CollectTheItem *)0x0) {
              (this->fields)._._._.PositionChanged =
                   (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
              uStack_4 = CONCAT44(&(this->fields)._._._.PositionChanged,&UNK_?);
              func_?();
              return;
            }
            uStack_4 = CONCAT44(controller,&UNK_?);
            pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     func_?();
            if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              (this->fields)._._._.PositionChanged = pUVar6;
              uStack_4 = CONCAT44(controller,&UNK_?);
              iVar7 = func_?();
              if (iVar7 != 0) {
                uStack_4 = CONCAT44(&(this->fields)._._._.PositionChanged,&UNK_?);
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
  uStack_4 = CONCAT44(controller,&UNK_?);
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_OnEnterObject
               (CollectTheItemCollectable *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).collectableInstance;
  if (this_00 != (CollectTheItemCollectableInstance *)0x0) {
    CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_SetRotationEnabled
              (this_00,0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).collectableModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      this_01 = (pMVar1->fields)._._.transform;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (this_01,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          pEVar3 = pEVar2->klass;
          pMStack4 = (pEVar3->vtable).OnEnterObject.method;
          pEStack5 = e;
          bVar6 = (*(pEVar3->vtable).OnEnterObject.methodPtr)();
          return bVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
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
      bVar2 = (*(pEVar1->klass->vtable).OnExitObject.methodPtr)(pEVar1);
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
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCollectableModel() */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_SetupCollectableModel
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                   );
    func_?(&TypeInfo__CollectTheItemCollectableInstance);
    func_?(0x8d4);
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(0xb194);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&StringLiteral_CollectableModel);
    func_?(&StringLiteral_CollectableInstance);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_CollectableInstance,(MethodInfo *)0x0);
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    pMVar2 = (MVCubeModelInstance__Class *)TypeInfo__CollectTheItemCollectableInstance;
    if (((TypeInfo__CollectTheItemCollectableInstance->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((CollectTheItemCollectableInstance__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__CollectTheItemCollectableInstance->_1).typeHierarchyDepth - 1] ==
        TypeInfo__CollectTheItemCollectableInstance)) {
      (this->fields).collectableInstance = (CollectTheItemCollectableInstance *)pMVar1;
      pMVar2 = (MVCubeModelInstance__Class *)TypeInfo__CollectTheItemCollectableInstance;
      if (((TypeInfo__CollectTheItemCollectableInstance->_1).typeHierarchyDepth <=
           (pMVar1->klass->_1).typeHierarchyDepth) &&
         ((CollectTheItemCollectableInstance__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(TypeInfo__CollectTheItemCollectableInstance->_1).typeHierarchyDepth - 1] ==
          TypeInfo__CollectTheItemCollectableInstance)) goto code_?;
    }
    goto code_?;
  }
  (this->fields).collectableInstance = (CollectTheItemCollectableInstance *)0x0;
code_?:
  func_?(&(this->fields).collectableInstance,pMVar1);
  pCVar3 = (this->fields).collectableInstance;
  if (pCVar3 == (CollectTheItemCollectableInstance *)0x0) goto code_?;
  pMVar1 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)pCVar3,StringLiteral_CollectableModel,(MethodInfo *)0x0);
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    pMVar2 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelInstance__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      (this->fields).collectableModel = pMVar1;
      pMVar2 = TypeInfo__MVCubeModelInstance;
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
           (pMVar1->klass->_1).typeHierarchyDepth) &&
         ((MVCubeModelInstance__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVCubeModelInstance)) goto code_?;
    }
code_?:
    func_?(pMVar1,pMVar2);
    goto code_?;
  }
  (this->fields).collectableModel = (MVCubeModelInstance *)0x0;
code_?:
  func_?(&(this->fields).collectableModel,pMVar1);
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 == (MVCubeModelInstance *)0x0) goto code_?;
  (*(pMVar1->klass->vtable).set_Visible.methodPtr)
            ((short)pMVar1,1,(pMVar1->klass->vtable).set_Visible.method);
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 == (MVCubeModelInstance *)0x0) goto code_?;
  gameObject = (pMVar1->fields)._._.gameObject;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,iVar4,(MethodInfo *)0x0);
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 == (MVCubeModelInstance *)0x0) goto code_?;
  this_00 = (pMVar1->fields)._._.transform;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (this_00 == (Transform *)0x0) goto code_?;
  value_00.z._2_2_ = (short)((uint)(pQVar5->identityQuaternion).z >> 0x10);
  value_00._0_10_ = *(unkbyte10 *)&pQVar5->identityQuaternion;
  value_00.w = (pQVar5->identityQuaternion).w;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
            (this_00,value_00,(MethodInfo *)0x0);
  MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar6 != MVGameMode__Enum_Edit) {
    return;
  }
  pCVar3 = (this->fields).collectableInstance;
  if (pCVar3 == (CollectTheItemCollectableInstance *)0x0) goto code_?;
  pUStack_7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
              (pCVar3->fields)._._._.PositionChanged;
  pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  if (pUVar8 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar8,(Object *)this,
             MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pMVar2 = (MVCubeModelInstance__Class *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUStack_7,(Delegate *)pUVar8,(MethodInfo *)0x0);
  pUStack_7 = 
  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
  if (pMVar2 == (MVCubeModelInstance__Class *)0x0) {
    (pCVar3->fields)._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    iVar9 = 0;
code_?:
    func_?(&(pCVar3->fields)._._._.PositionChanged,iVar9);
    pUStack_7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields).collectableModel;
    value_01 = (this->fields).minBounds.x;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    }
    uVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
    uVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minBounds.y,(MethodInfo *)0x0);
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).minBounds.z,(MethodInfo *)0x0);
    IStack_13.x = 0;
    IStack_13.y = 0;
    IStack_13.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_13,(uint)uVar10,(uint)uVar11,(uint)uVar12,(MethodInfo *)0x0);
    uVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxBounds.x,(MethodInfo *)0x0);
    uVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxBounds.y,(MethodInfo *)0x0);
    uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_op_Implicit_1((this->fields).maxBounds.z,(MethodInfo *)0x0);
    IStack_14.x = 0;
    IStack_14.y = 0;
    IStack_14.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_14,(uint)uVar10,(uint)uVar11,(uint)uVar12,(MethodInfo *)0x0);
    iVar4 = (this->fields).minCubes.currentCryptoKey;
    iVar15 = (this->fields).minCubes.hiddenValue;
    iVar16 = (this->fields).minCubes.fakeValue;
    uVar17 = *(undefined4 *)&(this->fields).minCubes.inited;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    value.hiddenValue = iVar15;
    value.currentCryptoKey = iVar4;
    value.fakeValue = iVar16;
    value._12_4_ = uVar17;
    iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    pEVar18 = (EditableCubeModelWrapper *)func_?();
    if (pEVar18 != (EditableCubeModelWrapper *)0x0) {
      min.z = IStack_13.z;
      min.x = IStack_13.x;
      min.y = IStack_13.y;
      max.z = IStack_14.z;
      max.x = IStack_14.x;
      max.y = IStack_14.y;
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (pEVar18,(MVCubeModelInstance *)pUStack_7,min,max,iVar4,(MethodInfo *)0x0);
      (this->fields).editableCubeModelWrapper = pEVar18;
      func_?(&(this->fields).editableCubeModelWrapper,pEVar18);
      pEVar18 = (this->fields).editableCubeModelWrapper;
      if (pEVar18 != (EditableCubeModelWrapper *)0x0) {
        pMVar1 = (pEVar18->fields).cubeModelBase;
        pCVar3 = (this->fields).collectableInstance;
        pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        if ((pUVar8 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar8,(Object *)pCVar3,
                       MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                       ,(MethodInfo *)0x0), pMVar1 != (MVCubeModelInstance *)0x0)) {
          MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                    ((MVCubeModelBase *)pMVar1,(EventHandler_1_EditStateEventArgs_ *)pUVar8,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pUVar19 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              func_?(pMVar2,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    if (pUVar19 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (pCVar3->fields)._._._.PositionChanged = pUVar19;
      pUStack_7 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      iVar9 = func_?(pMVar2,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (iVar9 != 0) goto code_?;
    }
code_?:
    func_?(pMVar2,pUStack_7);
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* CollectTheItemCollectable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable__ctor
               (CollectTheItemCollectable *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1._0_2_ = 0;
  uVar1._2_2_ = 0;
  uVar2._0_2_ = 0;
  uVar2._2_1_ = 0;
  uVar2._3_1_ = 0;
  uVar3._0_2_ = 0;
  uVar3._2_2_ = 0;
  ObscuredIntVector::ObscuredIntVector__ctor_1
            ((ObscuredIntVector *)&stack0xffffffd4,-3,0,-3,(MethodInfo *)0x0);
  (this->fields).minBounds.x.currentCryptoKey = (int16_t)uVar1;
  (this->fields).minBounds.x.hiddenValue = SUB42(uVar1,2);
  (this->fields).minBounds.x.fakeValue = (int16_t)uVar2;
  (this->fields).minBounds.x.inited = SUB41(uVar2,2);
  (this->fields).minBounds.x.field_0x7 = SUB41(uVar2,3);
  (this->fields).minBounds.y.currentCryptoKey = (int16_t)uVar3;
  (this->fields).minBounds.y.hiddenValue = SUB42(uVar3,2);
  (this->fields).minBounds.y.fakeValue = 0;
  (this->fields).minBounds.y.inited = 0;
  (this->fields).minBounds.y.field_0x7 = 0;
  (this->fields).minBounds.z.currentCryptoKey = 0;
  (this->fields).minBounds.z.hiddenValue = 0;
  (this->fields).minBounds.z.fakeValue = 0;
  (this->fields).minBounds.z.inited = 0;
  (this->fields).minBounds.z.field_0x7 = 0;
  OStack_4.currentCryptoKey = 0;
  OStack_4.hiddenValue = 0;
  OStack_4.fakeValue = 0;
  OStack_4.inited = 0;
  OStack_4._7_1_ = 0;
  OStack_5.currentCryptoKey = 0;
  OStack_5.hiddenValue = 0;
  OStack_5.fakeValue = 0;
  OStack_5.inited = 0;
  OStack_5._7_1_ = 0;
  puStack_6._0_2_ = 0;
  puStack_6._2_2_ = 0;
  iVar7 = 0;
  bVar8 = 0;
  uVar9 = 0;
  ObscuredIntVector::ObscuredIntVector__ctor_1
            ((ObscuredIntVector *)&OStack_4,3,6,3,(MethodInfo *)0x0);
  (this->fields).maxBounds.x.currentCryptoKey = OStack_4.currentCryptoKey;
  (this->fields).maxBounds.x.hiddenValue = OStack_4.hiddenValue;
  (this->fields).maxBounds.x.fakeValue = OStack_4.fakeValue;
  (this->fields).maxBounds.x.inited = OStack_4.inited;
  (this->fields).maxBounds.x.field_0x7 = OStack_4._7_1_;
  (this->fields).maxBounds.y.currentCryptoKey = OStack_5.currentCryptoKey;
  (this->fields).maxBounds.y.hiddenValue = OStack_5.hiddenValue;
  (this->fields).maxBounds.y.fakeValue = OStack_5.fakeValue;
  (this->fields).maxBounds.y.inited = OStack_5.inited;
  (this->fields).maxBounds.y.field_0x7 = OStack_5._7_1_;
  (this->fields).maxBounds.z = _puStack_34;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  stack0xffffffd0 = &UNK_?;
  pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_11,5,(MethodInfo *)0x0);
  iVar12 = pOVar10->hiddenValue;
  iVar13 = pOVar10->fakeValue;
  bVar14 = pOVar10->inited;
  uVar15 = *(undefined3 *)&pOVar10->field_0xd;
  (this->fields).minCubes.currentCryptoKey = pOVar10->currentCryptoKey;
  (this->fields).minCubes.hiddenValue = iVar12;
  (this->fields).minCubes.fakeValue = iVar13;
  (this->fields).minCubes.inited = bVar14;
  *(undefined3 *)&(this->fields).minCubes.field_0xd = uVar15;
  stack0xffffffd0 = this;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar16 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar16 = (uint)*piVar16 | 0x1000;
  piVar16 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar16 = (uint)*piVar16 | 8;
  unique0x00017200 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar16 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar16 = (uint)*piVar16 | 0x8000;
  piVar16 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar16 = (uint)*piVar16 & 0xffffdfff;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = unique0x00017200;
  return;
}


/* Int32 get_CollectableModelId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::
        CollectTheItemCollectable_get_CollectableModelId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItem);
    cRam_? = '\x01';
  }
  if ((this->fields).collectableModel == (MVCubeModelInstance *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar1 = (CollectTheItem *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
      if (pCVar1 == (CollectTheItem *)0x0) {
        (this->fields).controller = (CollectTheItem *)0x0;
      }
      else {
        unaff_EDI = TypeInfo__CollectTheItem;
        if (((pCVar1->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItem->_1).typeHierarchyDepth) ||
           ((CollectTheItem__Class *)
            (pCVar1->klass->_1).typeHierarchy[(TypeInfo__CollectTheItem->_1).typeHierarchyDepth - 1]
            != TypeInfo__CollectTheItem)) goto code_?;
        (this->fields).controller = pCVar1;
        unaff_EDI = TypeInfo__CollectTheItem;
        if (((pCVar1->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItem->_1).typeHierarchyDepth) ||
           ((CollectTheItem__Class *)
            (pCVar1->klass->_1).typeHierarchy[(TypeInfo__CollectTheItem->_1).typeHierarchyDepth - 1]
            != TypeInfo__CollectTheItem)) goto code_?;
      }
      unaff_EDI = (CollectTheItem__Class *)&UNK_?;
      func_?(&(this->fields).controller);
      pCVar1 = (this->fields).controller;
      if (pCVar1 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    pMVar2 = (this->fields).collectableModel;
    if (pMVar2 != (MVCubeModelInstance *)0x0) {
      return (pMVar2->fields)._._._.id;
    }
  }
  func_?();
  pCVar1 = extraout_EDX;
code_?:
  func_?(pCVar1,unaff_EDI);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItem);
    cRam_? = '\x01';
  }
  if ((this->fields).controller == (CollectTheItem *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar1 = (CollectTheItem *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
      if (pCVar1 == (CollectTheItem *)0x0) {
        (this->fields).controller = (CollectTheItem *)0x0;
      }
      else {
        unaff_EDI = TypeInfo__CollectTheItem;
        if (((pCVar1->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItem->_1).typeHierarchyDepth) ||
           ((CollectTheItem__Class *)
            (pCVar1->klass->_1).typeHierarchy[(TypeInfo__CollectTheItem->_1).typeHierarchyDepth - 1]
            != TypeInfo__CollectTheItem)) goto code_?;
        (this->fields).controller = pCVar1;
        unaff_EDI = TypeInfo__CollectTheItem;
        if (((pCVar1->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItem->_1).typeHierarchyDepth) ||
           ((CollectTheItem__Class *)
            (pCVar1->klass->_1).typeHierarchy[(TypeInfo__CollectTheItem->_1).typeHierarchyDepth - 1]
            != TypeInfo__CollectTheItem)) goto code_?;
      }
      unaff_EDI = (CollectTheItem__Class *)&UNK_?;
      func_?(&(this->fields).controller);
      pCVar1 = (this->fields).controller;
      if (pCVar1 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    pCVar1 = (this->fields).controller;
    if ((pCVar1 != (CollectTheItem *)0x0) &&
       (pCVar2 = (pCVar1->fields).dropOff, pCVar2 != (CollectTheItemDropOff *)0x0)) {
      return (pCVar2->fields)._._._._.id;
    }
  }
  func_?();
  pCVar1 = extraout_EDX;
code_?:
  func_?(pCVar1,unaff_EDI);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_HasArrowIndicator() */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_HasArrowIndicator
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  pCVar1 = (this->fields).collectableInstance;
  if (pCVar1 != (CollectTheItemCollectableInstance *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&StringLiteral_hasIndicator);
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields)._.blueprintData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_hasIndicator,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar4 = (bool *)func_?();
          return *pbVar4;
        }
        goto code_?;
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_HasDropOff() */

bool Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_HasDropOff
               (CollectTheItemCollectable *this,MethodInfo *method)

{
  if ((this->fields).controller == (CollectTheItem *)0x0) {
    return 0;
  }
  return (((this->fields).controller)->fields).dropOff != (CollectTheItemDropOff *)0x0;
}

