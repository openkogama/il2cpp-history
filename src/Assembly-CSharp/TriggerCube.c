
/* Void Callback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Callback
               (TriggerCube *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send
              (this_00,(this->fields).isDown,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::TriggerCube::TriggerCube_DoEnter
               (TriggerCube *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (instigator != -1) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    triggerBoxOwnerId =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_00,(int32_t)triggerBoxOwnerId,instigator,(MethodInfo *)0x0);
      return 1;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Trigger_cube_entered_by_object_w,(MethodInfo *)0x0);
  return 0;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_Initialize(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if (pTVar1 != (TriggerCubePrefab *)0x0) {
    unaff_ESI = (TriggerCubeTintObject *)(pTVar1->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__TriggerCube__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (unaff_ESI != (TriggerCubeTintObject *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                ((TriggerBoxEvents *)unaff_ESI,(EventHandler_1_TriggerEventArgs_ *)pUVar2,
                 (MethodInfo *)0x0);
      pTVar1 = (this->fields).objPrefab;
      if (pTVar1 != (TriggerCubePrefab *)0x0) {
        pTVar3 = (pTVar1->fields).triggerBoxEvents;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__TriggerCube__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        unaff_ESI = (TriggerCubeTintObject *)0x0;
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__TriggerCube__Callback_bool__bool__LogicObjectManager_,
                     MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
                    );
          pIVar4 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                             ((MVWorldObject *)this,1,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)pUVar2,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar4;
          woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          this_00 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)
                    func_?(TypeInfo__OutputSignalTransmitter);
          WorldObjectClientRef`1[MVWorldObjectClient]::
          WorldObjectClientRef_1_MVWorldObjectClient___ctor(this_00,(int32_t)woId,(MethodInfo *)0x0)
          ;
          pTVar5 = this->klass;
          (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_00;
          pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(code *)(pTVar5->vtable).get_RunTimeData.method)();
          if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Extensions->_1).cctor_started == 0)) {
            func_?(TypeInfo__Extensions);
          }
          unaff_ESI = (TriggerCubeTintObject *)
                      Extensions::Extensions_GetObscuredType
                                (pDVar6,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          if (unaff_ESI != (TriggerCubeTintObject *)0x0) {
            pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
            if ((unaff_ESI->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class)
            goto code_?;
            pOVar8 = (ObscuredBool *)func_?(unaff_ESI);
            bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(*pOVar8,(MethodInfo *)0x0);
            (this->fields).isDown = bVar9;
            pTVar1 = (this->fields).objPrefab;
            if (pTVar1 != (TriggerCubePrefab *)0x0) {
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pTVar1,(MethodInfo *)0x0);
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,pGVar10,2.0,(MethodInfo *)0x0);
              TriggerCube_SetScale(this,(MethodInfo *)0x0);
              pTVar1 = (this->fields).objPrefab;
              if (pTVar1 != (TriggerCubePrefab *)0x0) {
                pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pTVar1,(MethodInfo *)0x0);
                pTVar1 = (this->fields).objPrefab;
                if ((pTVar1 != (TriggerCubePrefab *)0x0) &&
                   (pTVar3 = (pTVar1->fields).triggerBoxEvents, pTVar3 != (TriggerBoxEvents *)0x0))
                {
                  triggerCollider =
                       TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
                  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Func<int,_bool>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar2,(Object *)this,MethodInfo__TriggerCube__DoEnter_int_,
                             MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
                  pUVar11 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
                  UseInteractor::UseInteractor__ctor
                            (pUVar11,(MVWorldObjectClient *)this,pGVar10,0,triggerCollider,
                             (Func_2_Int32_Boolean_ *)pUVar2,
                             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,(MethodInfo *)0x0);
                  (this->fields).useInteractor = pUVar11;
                  pTVar1 = (this->fields).objPrefab;
                  unaff_ESI = (TriggerCubeTintObject *)0x0;
                  if (pTVar1 != (TriggerCubePrefab *)0x0) {
                    unaff_ESI = (pTVar1->fields).tintObject;
                    this_01 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                    TeamRequirement::TeamRequirement__ctor
                              (this_01,(TintObject *)unaff_ESI,0,(MethodInfo *)0x0);
                    pUVar11 = (this->fields).useInteractor;
                    if (pUVar11 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar11,(UseRequirement *)this_01,(MethodInfo *)0x0);
                      pUVar11 = (this->fields).useInteractor;
                      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
                               PrefabPool::PrefabPool_get_MVBatteryPrefab
                                         ((PrefabPool *)this,(MethodInfo *)0x0);
                      unaff_ESI = (TriggerCubeTintObject *)0x0;
                      if (pUVar11 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_UpdateData(pUVar11,pDVar6,(MethodInfo *)0x0);
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
    }
  }
  func_?(0);
  pOVar7 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pOVar7);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_InitializeInventory
               (TriggerCube *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).objPrefab;
  if ((pTVar1 != (TriggerCubePrefab *)0x0) &&
     (this_00 = (pTVar1->fields).triggerBoxEvents, this_00 != (TriggerBoxEvents *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnDataUpdate
               (TriggerCube *this,MethodInfo *method)

{
  TriggerCube_SetScale(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_OnIsFiringChanged
               (TriggerCube *this,bool isFiring,MethodInfo *method)

{
  (this->fields).isDown = isFiring;
  return;
}


/* Void SetScale() */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_SetScale(TriggerCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar1,(Type *)StringLiteral_scaleX,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar2 == (Pool *)0x0)) goto code_?;
  if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
    pfVar3 = (float *)func_?();
    fVar4 = *pfVar3;
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar1,(Type *)StringLiteral_scaleY,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar2 == (Pool *)0x0)) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    puVar5 = (undefined4 *)func_?();
    uVar6 = *puVar5;
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar1,(Type *)StringLiteral_scaleZ,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar2 == (Pool *)0x0)) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    puVar5 = (undefined4 *)func_?();
    pTVar7 = (this->fields).objPrefab;
    uVar8 = *puVar5;
    uVar9 = 0;
    fVar10 = 0.0;
    func_?(&stack0xffffffdc,fVar4,uVar6);
    if (pTVar7 == (TriggerCubePrefab *)0x0) goto code_?;
    uVar11 = CONCAT44(uVar9,uVar8);
    this_00 = (pTVar7->fields).triggerBoxEvents;
    if ((this_00 == (TriggerBoxEvents *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_00,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    value.z = fVar10;
    value.x = (float)(int)uVar11;
    value.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar12,value,(MethodInfo *)0x0);
    (this->fields).outputConnectorOffset.x = fVar4 * _UNK_? + _UNK_?;
    this_01 = (this->fields)._._.outputConnectorObject;
    if ((this_01 == (GameObject *)0x0) ||
       (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_01,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar12,(this->fields).outputConnectorOffset,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar13 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar13 == (IEditModeUI *)0x0) {
      return;
    }
    cVar14 = (*(code *)(this->klass->vtable).get_HasVisualsInPlaymode.method)();
    if (cVar14 == '\0') {
      return;
    }
    fVar4 = 5.60519e-45;
    puVar15 = &UNK_?;
    pSVar16 = TypeInfo__System__Single;
    values = (Single__Array *)func_?();
    if (values == (Single__Array *)0x0) goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = fVar4;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = (float)pSVar16;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = (float)puVar15;
    if (3 < values->max_length) {
      values->vector[3] = 2.0;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1(values,(MethodInfo *)0x0)
      ;
      pCVar17 = (this->fields)._.cullingSubscriberBase;
      if (pCVar17 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar17,(MethodInfo *)0x0);
        puVar18 = (undefined8 *)
                  (*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&stack0xffffffdc);
        uVar11 = *puVar18;
        fVar10 = *(float *)(puVar18 + 1);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                   MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                  );
        pCVar17 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
        position.z = fVar10;
        position.x = (float)(int)uVar11;
        position.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar17,fVar4,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,
                   (MethodInfo *)0x0);
        (this->fields)._.cullingSubscriberBase = pCVar17;
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    func_?();
code_?:
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    uVar6 = func_?();
    func_?(uVar6);
code_?:
    uVar6 = func_?();
    func_?(uVar6);
  }
  uVar6 = func_?();
  func_?(uVar6);
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* TriggerCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube__ctor
               (TriggerCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3fc00000,0,0,0);
  (this->fields).outputConnectorOffset.x = (float)(undefined4)uStack_2;
  (this->fields).outputConnectorOffset.y = (float)uStack_2._4_4_;
  (this->fields).outputConnectorOffset.z = fStack_1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?();
    pTStack3 = extraout_EDX;
    pTStack4 = unaff_EDI;
  }
  else {
    prefabObject = MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_get_Shield
                             ((MVSimpleOneSeatVehicle *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    uVar5 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar6 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar6 = (uint)*piVar6 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar5;
    IVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar7 | InteractionFlags__Enum_HasSettings,method_00);
    IVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar7 | InteractionFlags__Enum_CanUseTeam,method_01);
    pTStack3 = (TriggerCubePrefab *)(this->fields)._._.component;
    if (pTStack3 == (TriggerCubePrefab *)0x0) {
      (this->fields).objPrefab = (TriggerCubePrefab *)0x0;
      return;
    }
    bVar8 = (TypeInfo__TriggerCubePrefab->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pTStack3->klass)->_1).naturalAligment < bVar8) ||
       ((((ObjectPrefab__Class *)pTStack3->klass)->_1).typeHierarchy[bVar8 - 1] !=
        (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pTVar10 = (TriggerCubePrefab *)0x0;
    if (bVar9) {
      pTVar10 = pTStack3;
    }
    pTStack4 = TypeInfo__TriggerCubePrefab;
    if (pTVar10 != (TriggerCubePrefab *)0x0) {
      (this->fields).objPrefab = pTVar10;
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TriggerCube::TriggerCube_get_DocumentationType
          (TriggerCube *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TriggerCube;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::TriggerCube::TriggerCube_get_InputSignalReceiver
          (TriggerCube *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::TriggerCube::TriggerCube_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,TriggerCube *this,MethodInfo *method)

{
  fVar1 = (this->fields).outputConnectorOffset.y;
  fVar2 = (this->fields).outputConnectorOffset.z;
  __return_storage_ptr__->x = (this->fields).outputConnectorOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_set_InputSignalReceiver
               (TriggerCube *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerEnter
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
      triggerInstigatorId =
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (triggerInstigatorId == -1) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Trigger_cube_entered_by_object_w,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      triggerBoxOwnerId =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_02,(int32_t)triggerBoxOwnerId,triggerInstigatorId,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TriggerCube::TriggerCube_triggerBoxEvents_TriggerExit
               (TriggerCube *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    triggerInstigatorId =
         MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (triggerInstigatorId == -1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Pressure_plated_exited_by_object,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    triggerBoxOwnerId =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items(unaff_EDI,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                (this_01,(int32_t)triggerBoxOwnerId,triggerInstigatorId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

