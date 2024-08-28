
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
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  pUVar2 = (this->fields)._._._.PositionChanged;
  ppUVar3 = &(this->fields)._._._.PositionChanged;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar4 == (Delegate *)0x0) {
    *ppUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    func_?();
    this_00 = *ppCVar1;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      *ppCVar1 = (CullingSubscriberBase *)0x0;
      func_?();
      this = (CollectTheItemCollectable *)0x0;
code_?:
      pAVar5 = (this->fields).OnCollectTheItemDestroyed;
      ppAVar6 = &(this->fields).OnCollectTheItemDestroyed;
      if (pAVar5 != (Action *)0x0) {
        (*(pAVar5->fields)._._.invoke_impl)
                  ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
        *ppAVar6 = (Action *)0x0;
        func_?(ppAVar6,0);
      }
      MVWorldObjectClient::MVWorldObjectClient_Destroy
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      *ppUVar3 = pUVar2;
      iVar7 = func_?();
      if (iVar7 == 0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  pMVar1 = (this->fields).collectableModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    iStack_2 = (pMVar1->fields)._._._.id;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_cubeModelId,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                );
      pCVar4 = (this->fields).controller;
      if ((pCVar4 != (CollectTheItem *)0x0) &&
         (pCVar5 = (pCVar4->fields).dropOff, pCVar5 != (CollectTheItemDropOff *)0x0)) {
        iStack_6 = (pCVar5->fields)._._._._.id;
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_dropOffId,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        iStack_7 = (this->fields)._._._._.id;
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_spawnerId,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        uStack_8 = 1;
        pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_isOriginal,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  );
        return (Dictionary_2_System_String_System_Object_ *)this_00;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pDVar10 = (Dictionary_2_System_String_System_Object_ *)(*pcVar9)();
  return pDVar10;
}


/* Void InitializeWithController(CollectTheItem) */

void Assembly-CSharp.dll::CollectTheItemCollectable::
     CollectTheItemCollectable_InitializeWithController
               (CollectTheItemCollectable *this,CollectTheItem *controller,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).controller;
  *ppCVar1 = controller;
  func_?(ppCVar1,controller);
  CollectTheItemCollectable_SetupCollectableModel(this,(MethodInfo *)0x0);
  pMVar2 = (this->fields).collectableModel;
  if ((pMVar2 == (MVCubeModelInstance *)0x0) || (controller == (CollectTheItem *)0x0)) {
code_?:
    func_?();
  }
  else {
    (controller->fields)._WoKeyInstance_k__BackingField = (pMVar2->fields)._._._.id;
    this_00 = (this->fields)._._._.transform;
    if (this_00 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,(MethodInfo *)0x0);
    this_02 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar5;
    position.x = (float)uVar4;
    position.z = fVar6;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_02;
    func_?();
    pUVar7 = (this->fields)._._._.PositionChanged;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    controller = (CollectTheItem *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar7,(Delegate *)this_03,(MethodInfo *)0x0);
    pUVar8 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (controller == (CollectTheItem *)0x0) {
      pCStack9 = (CollectTheItem *)&(this->fields)._._._.PositionChanged;
      *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)pCStack9 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      pCStack10 = (CollectTheItemCollectable *)controller;
      func_?();
      return;
    }
    pCStack10 =
         (CollectTheItemCollectable *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pCStack9 = controller;
    pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    pCStack10 = (CollectTheItemCollectable *)pUVar8;
    if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    this = (CollectTheItemCollectable *)&(this->fields)._._._.PositionChanged;
    *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)this = pUVar7;
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pCStack10 =
         (CollectTheItemCollectable *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pCStack9 = controller;
    pCStack10 = (CollectTheItemCollectable *)func_?();
    if (pCStack10 != (CollectTheItemCollectable *)0x0) {
      pCStack9 = (CollectTheItem *)this;
      func_?();
      return;
    }
  }
  pCStack9 = controller;
  pCStack10 = (CollectTheItemCollectable *)unaff_EBX;
  func_?();
  pCStack10 = this;
code_?:
  pCStack9 = controller;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
          pIStack4 = (pEVar3->vtable).OnExitObject.methodPtr;
          pEStack5 = e;
          bVar6 = (*(code *)(pEVar3->vtable).OnEnterObject.method)();
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
    func_?(&
                    MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
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
  pMVar2 = (MVCubeModelInstance__Class *)this;
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    (this->fields).collectableInstance = (CollectTheItemCollectableInstance *)0x0;
code_?:
    ppCVar3 = &(this->fields).collectableInstance;
    func_?(ppCVar3,pMVar1);
    if (*ppCVar3 != (CollectTheItemCollectableInstance *)0x0) {
      pMVar1 = (MVCubeModelInstance *)
               MVBlueprintBase::MVBlueprintBase_GetChild
                         ((MVBlueprintBase *)*ppCVar3,StringLiteral_CollectableModel,
                          (MethodInfo *)0x0);
      if (pMVar1 == (MVCubeModelInstance *)0x0) {
        (this->fields).collectableModel = (MVCubeModelInstance *)0x0;
      }
      else {
        bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        pMVar5 = TypeInfo__MVCubeModelInstance;
        if (((pMVar1->klass->_1).naturalAligment < bVar4) ||
           ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__MVCubeModelInstance)) goto code_?;
        (this->fields).collectableModel = pMVar1;
        bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        pMVar2 = TypeInfo__MVCubeModelInstance;
        if (((pMVar1->klass->_1).naturalAligment < bVar4) ||
           ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__MVCubeModelInstance)) goto code_?;
      }
      ppMVar6 = &(this->fields).collectableModel;
      func_?(ppMVar6,pMVar1);
      pMVar1 = *ppMVar6;
      if (pMVar1 != (MVCubeModelInstance *)0x0) {
        (*(code *)(pMVar1->klass->vtable).set_Visible.method)
                  (pMVar1,1,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
        pMVar2 = (MVCubeModelInstance__Class *)0x0;
        if (*ppMVar6 != (MVCubeModelInstance *)0x0) {
          gameObject = ((*ppMVar6)->fields)._._.gameObject;
          iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Player,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,iVar7,(MethodInfo *)0x0);
          pMVar2 = (MVCubeModelInstance__Class *)0x0;
          if (*ppMVar6 != (MVCubeModelInstance *)0x0) {
            pMVar2 = (MVCubeModelInstance__Class *)((*ppMVar6)->fields)._._.transform;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            if (pMVar2 != (MVCubeModelInstance__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        ((Transform *)pMVar2,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                         (MethodInfo *)0x0);
              MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (MVar8 != MVGameMode__Enum_Edit) {
                return;
              }
              pCVar9 = *ppCVar3;
              if (pCVar9 != (CollectTheItemCollectableInstance *)0x0) {
                a = (pCVar9->fields)._._._.PositionChanged;
                this_00 = (UnityAction_2_System_Object_System_Object_ *)
                          func_?(
                                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                         );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_00,(Object *)this,
                           MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                           ,(MethodInfo *)0x0);
                pMVar2 = (MVCubeModelInstance__Class *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
                if (pMVar2 == (MVCubeModelInstance__Class *)0x0) {
                  (pCVar9->fields)._._._.PositionChanged =
                       (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                }
                else {
                  puVar10 = &UNK_?;
                  iVar11 = func_?();
                  if (iVar11 == 0) goto code_?;
                  *(int *)(puVar10 + 0x6c) = iVar11;
                  iVar11 = func_?();
                  if (iVar11 == 0) goto code_?;
                }
                func_?();
                uVar12._0_2_ = (this->fields).minBounds.x.fakeValue;
                uVar12._2_1_ = (this->fields).minBounds.x.inited;
                uVar12._3_1_ = (this->fields).minBounds.x.field_0x7;
                uVar13 = (this->fields).minBounds.x.currentCryptoKey;
                uVar14 = (this->fields).minBounds.x.hiddenValue;
                value_00.hiddenValue = uVar14;
                value_00.currentCryptoKey = uVar13;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                value_00.fakeValue = (short)uVar12;
                value_00.inited = (char)((uint)uVar12 >> 0x10);
                value_00._7_1_ = (char)((uint)uVar12 >> 0x18);
                uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1(value_00,(MethodInfo *)0x0);
                uVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1
                                  ((this->fields).minBounds.y,(MethodInfo *)0x0);
                uVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1
                                  ((this->fields).minBounds.z,(MethodInfo *)0x0);
                uStack_18._0_2_ = 0;
                uStack_18._2_2_ = 0;
                uStack_18._4_4_ = &UNK_?;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          ((IntVector *)&uStack_18,(uint)uVar15,(uint)uVar16,(uint)uVar17,
                           (MethodInfo *)0x0);
                pMVar1 = *(MVCubeModelInstance **)&(this->fields).maxBounds.x.fakeValue;
                uVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1
                                  ((this->fields).maxBounds.x,(MethodInfo *)0x0);
                uVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1
                                  ((this->fields).maxBounds.y,(MethodInfo *)0x0);
                uVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredShort::ObscuredShort_op_Implicit_1
                                  ((this->fields).maxBounds.z,(MethodInfo *)0x0);
                uVar19._0_2_ = 0;
                uVar19._2_2_ = 0;
                iVar20 = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          ((IntVector *)&stack0xffffffec,(uint)uVar15,(uint)uVar16,(uint)uVar17,
                           (MethodInfo *)0x0);
                iVar7 = (this->fields).minCubes.currentCryptoKey;
                iVar21 = (this->fields).minCubes.hiddenValue;
                iVar22 = (this->fields).minCubes.fakeValue;
                uVar12 = *(undefined4 *)&(this->fields).minCubes.inited;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                value.hiddenValue = iVar21;
                value.currentCryptoKey = iVar7;
                value.fakeValue = iVar22;
                value._12_4_ = uVar12;
                iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                this_01 = (EditableCubeModelWrapper *)func_?();
                min.z = uStack_18._4_2_;
                min.x = (int16_t)uStack_18;
                min.y = uStack_18._2_2_;
                max.z = iVar20;
                max.x = (int16_t)uVar19;
                max.y = SUB42(uVar19,2);
                EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                          (this_01,pMVar1,min,max,iVar7,(MethodInfo *)0x0);
                pMVar2 = (MVCubeModelInstance__Class *)&(this->fields).editableCubeModelWrapper;
                *(EditableCubeModelWrapper **)pMVar2 = this_01;
                func_?();
                if (*(EditableCubeModelWrapper **)pMVar2 != (EditableCubeModelWrapper *)0x0) {
                  pMVar1 = ((*(EditableCubeModelWrapper **)pMVar2)->fields).cubeModelBase;
                  pMVar2 = (MVCubeModelInstance__Class *)*ppCVar3;
                  this_02 = (EventHandler_1_Object_ *)
                            func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            (this_02,(Object *)pMVar2,
                             MethodInfo__CollectTheItemCollectableInstance__SetupGreyoutScript_System__Object__EditStateEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pMVar1 != (MVCubeModelInstance *)0x0) {
                    MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                              ((MVCubeModelBase *)pMVar1,
                               (EventHandler_1_EditStateEventArgs_ *)this_02,(MethodInfo *)0x0);
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
  else {
    bVar4 = (TypeInfo__CollectTheItemCollectableInstance->_1).naturalAligment;
    pMVar5 = (MVCubeModelInstance__Class *)TypeInfo__CollectTheItemCollectableInstance;
    if ((bVar4 <= (pMVar1->klass->_1).naturalAligment) &&
       ((CollectTheItemCollectableInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar4 - 1] ==
        TypeInfo__CollectTheItemCollectableInstance)) {
      (this->fields).collectableInstance = (CollectTheItemCollectableInstance *)pMVar1;
      bVar4 = (TypeInfo__CollectTheItemCollectableInstance->_1).naturalAligment;
      pMVar5 = (MVCubeModelInstance__Class *)TypeInfo__CollectTheItemCollectableInstance;
      if ((bVar4 <= (pMVar1->klass->_1).naturalAligment) &&
         ((CollectTheItemCollectableInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar4 - 1]
          == TypeInfo__CollectTheItemCollectableInstance)) goto code_?;
    }
code_?:
    func_?(pMVar1,pMVar5);
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1,pMVar2);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pCVar1 = (CollectTheItem *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
    if (pCVar1 == (CollectTheItem *)0x0) {
      (this->fields).controller = (CollectTheItem *)0x0;
code_?:
      ppCVar2 = &(this->fields).controller;
      func_?(ppCVar2);
      pCVar1 = *ppCVar2;
      if (pCVar1 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(pCVar1,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
    if (((pCVar1->klass->_1).naturalAligment < bVar3) ||
       ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__CollectTheItem)) goto code_?;
    (this->fields).controller = pCVar1;
    bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
    pCVar4 = TypeInfo__CollectTheItem;
    if ((bVar3 <= (pCVar1->klass->_1).naturalAligment) &&
       ((CollectTheItem__Class *)(pCVar1->klass->_1).typeHierarchy[bVar3 - 1] ==
        TypeInfo__CollectTheItem)) goto code_?;
  }
  else {
code_?:
    pMVar5 = (this->fields).collectableModel;
    if (pMVar5 != (MVCubeModelInstance *)0x0) {
      return (pMVar5->fields)._._._.id;
    }
code_?:
    func_?();
    pCVar1 = extraout_EDX;
    pCVar4 = unaff_EBX;
  }
  func_?(pCVar1,pCVar4);
  pCVar1 = extraout_EDX_00;
code_?:
  func_?(pCVar1);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                  (CollectTheItemCollectable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItem);
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).controller;
  if ((this->fields).controller == (CollectTheItem *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pCVar2 = (CollectTheItem *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
      if (pCVar2 == (CollectTheItem *)0x0) {
        *ppCVar1 = (CollectTheItem *)0x0;
      }
      else {
        bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
        if (((pCVar2->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItem__Class *)(pCVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItem)) goto code_?;
        *ppCVar1 = pCVar2;
        bVar3 = (TypeInfo__CollectTheItem->_1).naturalAligment;
        if (((pCVar2->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItem__Class *)(pCVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItem)) goto code_?;
      }
      func_?(ppCVar1);
      if (*ppCVar1 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem_SetupReferences(*ppCVar1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  else {
code_?:
    if ((*ppCVar1 != (CollectTheItem *)0x0) &&
       (pCVar4 = ((*ppCVar1)->fields).dropOff, pCVar4 != (CollectTheItemDropOff *)0x0)) {
      return (pCVar4->fields)._._._._.id;
    }
  }
  func_?();
  pCVar2 = extraout_EDX;
code_?:
  func_?(pCVar2);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
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
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (pCVar1->fields)._.blueprintData;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_hasIndicator,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,TVar2.m_Index);
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
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
  pCVar1 = (this->fields).controller;
  if (pCVar1 == (CollectTheItem *)0x0) {
    return 0;
  }
  return (pCVar1->fields).dropOff != (CollectTheItemDropOff *)0x0;
}

