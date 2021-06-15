
/* Void Callback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Callback
               (MVPressurePlate *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
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


/* Void Destroy() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Destroy
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).plateObject;
  if (pMVar1 != (MVPressurePlateObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).plateObject;
      if (pMVar1 != (MVPressurePlateObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).plateObject;
          if (pMVar1 != (MVPressurePlateObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields).plateObject;
              if (pMVar1 != (MVPressurePlateObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
                  pUVar4 = (this->fields).useInteractor;
                  data = (Dictionary_2_System_Object_System_Object_ *)
                         PrefabPool::PrefabPool_get_MVBatteryPrefab
                                   ((PrefabPool *)this,(MethodInfo *)0x0);
                  if (pUVar4 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_OnDestroy(pUVar4,data,(MethodInfo *)0x0);
                    MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_DoEnter
               (MVPressurePlate *this,int32_t instigatorWOID,MethodInfo *method)

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
  triggerBoxOwnerId =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
       Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
              (this_00,(int32_t)triggerBoxOwnerId,instigatorWOID,(MethodInfo *)0x0);
    (this->fields).localIsDown = 1;
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void DoExit(Int32) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_DoExit
               (MVPressurePlate *this,int32_t instigatorWOID,MethodInfo *method)

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
  triggerBoxOwnerId =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
       Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_00,(int32_t)triggerBoxOwnerId,instigatorWOID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVPressurePlate *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  uStack_5 = 0;
  uStack_6 = 0;
  func_?(&uStack_6,0x40200000,0x3ecccccd,0x40200000,0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uStack_3,fVar4,uStack_6,uStack_5,0);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Initialize
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__MVPressurePlate__Callback_bool__bool__LogicObjectManager_,
             MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
            );
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,
                      (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  this_02 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__OutputSignalTransmitter);
  WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
            (this_02,(int32_t)woId,(MethodInfo *)0x0);
  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_02;
  this_00 = (this->fields).useInteractor;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,pDVar2,(MethodInfo *)0x0);
    MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 == (IEditModeUI *)0x0) {
      cVar4 = (*(code *)(this->klass->vtable).get_HasVisualsInPlaymode.method)();
      if (cVar4 == '\0') goto code_?;
      bVar5 = MVPressurePlate_IsVisible(this,(MethodInfo *)0x0);
      if (bVar5 == 0) goto code_?;
code_?:
      pMVar6 = (this->fields).plateObject;
      if (pMVar6 == (MVPressurePlateObject *)0x0) goto code_?;
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar6->fields).plateLogicModel,2.0,(MethodInfo *)0x0);
    }
    else {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar3 != (IEditModeUI *)0x0) goto code_?;
    }
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)();
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar7 = Extensions::Extensions_GetObscuredType
                       (pDVar2,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    if (pOVar7 != (Object *)0x0) {
      if ((pOVar7->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        pOVar8 = (ObscuredBool *)func_?();
        bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit_1(*pOVar8,(MethodInfo *)0x0);
        (this->fields).isDown = bVar5;
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_InitializeInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (this_00 = (pMVar1->fields).plateLogicModel, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_IsVisible
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return 1;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_hide,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pcVar4 = (char *)func_?();
          return *pcVar4 == '\0';
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack0000001c = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnDataUpdate
               (MVPressurePlate *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnIsFiringChanged
               (MVPressurePlate *this,bool isFiring,MethodInfo *method)

{
  (this->fields).isDown = isFiring;
  if ((isFiring == 0) && ((this->fields).localIsDown != 0)) {
    (this->fields).localIsDown = 0;
  }
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnUpdate
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isDown == 0) && ((this->fields).localIsDown == 0)) {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fStack_6 = pVVar3->z;
    if (0.0 <= (float)uStack_5._4_4_) {
      return;
    }
    fStack_7 = (this->fields).speed;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                      ((MethodInfo *)0x0);
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    VStack_9.x = pVVar3->x;
    VStack_9.y = pVVar3->y;
    VStack_9.z = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_4.y = (float)TypeInfo__UnityEngine__Mathf;
      VStack_4.x = (float)&UNK_?;
      func_?();
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                      (fVar8 * fStack_7,(float)((uint)VStack_9.y ^ _UNK_?),(MethodInfo *)0x0
                      );
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_10,pTVar2,(MethodInfo *)0x0);
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar11 = (pMVar1->fields).plateModelTransform, pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_9,pTVar11,(MethodInfo *)0x0);
    VStack_10.x = pVVar3->x;
    VStack_10.y = pVVar3->y;
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar11 = (pMVar1->fields).plateModelTransform, pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar11,(MethodInfo *)0x0);
    VStack_9.x = pVVar3->x;
    VStack_9.y = pVVar3->y;
    fVar12 = pVVar3->z;
    fVar8 = VStack_10.y + fVar8;
    fVar13 = VStack_4.x;
    VStack_9.z = fVar12;
  }
  else {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar2,(MethodInfo *)0x0);
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    VStack_4.z = pVVar3->z;
    pfVar14 = &(this->fields).minY;
    if (VStack_4.y < *pfVar14 || VStack_4.y == *pfVar14) {
      return;
    }
    fStack_15 = (this->fields).speed;
    fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                         ((MethodInfo *)0x0);
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar2,(MethodInfo *)0x0);
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    VStack_4.z = pVVar3->z;
    fVar8 = (this->fields).minY;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_4.y = (float)TypeInfo__UnityEngine__Mathf;
      VStack_4.x = (float)&UNK_?;
      func_?();
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                      (fStack_7 * fStack_15,VStack_4.y - fVar8,(MethodInfo *)0x0);
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar2,(MethodInfo *)0x0);
    VStack_9.x = pVVar3->x;
    VStack_9.y = pVVar3->y;
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar11 = (pMVar1->fields).plateModelTransform, pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar11,(MethodInfo *)0x0);
    VStack_10.x = pVVar3->x;
    VStack_10.y = pVVar3->y;
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar11 = (pMVar1->fields).plateModelTransform, pTVar11 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffb8,pTVar11,(MethodInfo *)0x0);
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    fVar12 = pVVar3->z;
    fVar8 = VStack_10.y - fVar8;
    fVar13 = VStack_9.x;
    VStack_4.z = fVar12;
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  func_?(&uStack_5,fVar13,fVar8,fVar12);
  if (pTVar2 != (Transform *)0x0) {
    value.z = fStack_6;
    value.x = (float)(undefined4)uStack_5;
    value.y = (float)uStack_5._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetVisibility
               (MVPressurePlate *this,MethodInfo *method)

{
  this_00 = (this->fields).plateObject;
  if (this_00 != (MVPressurePlateObject *)0x0) {
    this_01 = (GameObject *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    pGVar1 = (GameObject__Class *)0x0;
    if (this_01 != (GameObject *)0x0) {
      pGVar2 = this_01 + 1;
      while( true ) {
        pGVar2 = (GameObject *)&pGVar2->monitor;
        if ((int)this_01[1].klass <= (int)pGVar1) {
          return;
        }
        if (this_01[1].klass <= pGVar1) break;
        if (*(Component_1 **)pGVar2 == (Component_1 *)0x0) goto code_?;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            (*(Component_1 **)pGVar2,(MethodInfo *)0x0);
        value = MVPressurePlate_IsVisible(this,(MethodInfo *)0x0);
        if (this_01 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,value,(MethodInfo *)0x0);
        pGVar1 = (GameObject__Class *)((int)&(pGVar1->_0).image + 1);
      }
      uVar3 = func_?(0,0);
      func_?(uVar3);
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetupTierInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (this_00 = (pMVar1->fields).plateLogicModel, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_SetupTierInventory((MVLogicObject *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_UnSetupTierInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (this_00 = (pMVar1->fields).plateLogicModel, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
              ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVPressurePlate(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate__ctor
               (MVPressurePlate *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).minY = -0.249;
  (this->fields).speed = 1.8;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                             ((HoverCraftMotor *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    pMVar1 = (MVPressurePlateObject *)(this->fields)._._.component;
    if (pMVar1 == (MVPressurePlateObject *)0x0) {
      pMVar2 = (MVPressurePlateObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__MVPressurePlateObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVPressurePlateObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar2 = (MVPressurePlateObject *)0x0;
      if (bVar4) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVPressurePlateObject *)0x0) goto code_?;
    }
    piVar5 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x718000;
    (this->fields).plateObject = pMVar2;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    IVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar6 | InteractionFlags__Enum_CanUseTeam,method_00);
    IVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar6 | InteractionFlags__Enum_CanUseGameRank,method_01);
    pMVar1 = (this->fields).plateObject;
    if (pMVar1 != (MVPressurePlateObject *)0x0) {
      pTVar7 = (pMVar1->fields).triggerBoxEvents;
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)this,
                 MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar7 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
        pMVar1 = (this->fields).plateObject;
        if (pMVar1 != (MVPressurePlateObject *)0x0) {
          pTVar7 = (pMVar1->fields).triggerBoxEvents;
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)this,
                     MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar7 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                      (pTVar7,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
            MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
            pMVar1 = (this->fields).plateObject;
            if (pMVar1 != (MVPressurePlateObject *)0x0) {
              pTVar7 = (pMVar1->fields).triggerBoxEvents;
              if (pTVar7 != (TriggerBoxEvents *)0x0) {
                triggerCollider =
                     TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar7,(MethodInfo *)0x0);
                pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar8,(Object *)this,MethodInfo__MVPressurePlate__DoEnter_int_,
                           MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
                pUVar9 = (UseInteractor *)func_?();
                UseInteractor::UseInteractor__ctor
                          (pUVar9,(MVWorldObjectClient *)this,(GameObject *)0x0,0,triggerCollider,
                           (Func_2_Int32_Boolean_ *)pUVar8,
                           (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,(MethodInfo *)0x0);
                pMVar1 = (this->fields).plateObject;
                (this->fields).useInteractor = (UseInteractor *)pUVar8;
                if (pMVar1 != (MVPressurePlateObject *)0x0) {
                  pTVar7 = (pMVar1->fields).triggerBoxEvents;
                  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_01,(Object *)pUVar8,
                             MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                             ,
                             MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                            );
                  if (pTVar7 != (TriggerBoxEvents *)0x0) {
                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                              (pTVar7,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0)
                    ;
                    pMVar1 = (this->fields).plateObject;
                    if (pMVar1 != (MVPressurePlateObject *)0x0) {
                      pTVar7 = (pMVar1->fields).triggerBoxEvents;
                      pUVar9 = (this->fields).useInteractor;
                      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar8,(Object *)pUVar9,
                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                 ,
                                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                                );
                      if (pTVar7 != (TriggerBoxEvents *)0x0) {
                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                  (pTVar7,(EventHandler_1_TriggerEventArgs_ *)&UNK_?,
                                   (MethodInfo *)0x0);
                        pMVar1 = (this->fields).plateObject;
                        if (pMVar1 != (MVPressurePlateObject *)0x0) {
                          pGVar10 = (pMVar1->fields).useInteractionRotator;
                          this_02 = (GameCoinLogic *)func_?();
                          GameCoinLogic::GameCoinLogic__ctor(this_02,pGVar10,0,(MethodInfo *)0x0);
                          pUVar9 = (this->fields).useInteractor;
                          if (pUVar9 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pUVar9,(UseRequirement *)this_02,(MethodInfo *)0x0);
                            pMVar1 = (this->fields).plateObject;
                            if (pMVar1 != (MVPressurePlateObject *)0x0) {
                              pGVar10 = (pMVar1->fields).useInteractionRotator;
                              this_03 = (LevelBasedUseRequirement *)func_?();
                              LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                        (this_03,pGVar10,0,(MethodInfo *)0x0);
                              pUVar9 = (this->fields).useInteractor;
                              if (pUVar9 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (pUVar9,(UseRequirement *)this_03,(MethodInfo *)0x0);
                                pMVar1 = (this->fields).plateObject;
                                if (pMVar1 != (MVPressurePlateObject *)0x0) {
                                  pGVar10 = (pMVar1->fields).useInteractionRotator;
                                  this_04 = (StarRequirement *)func_?();
                                  StarRequirement::StarRequirement__ctor
                                            (this_04,pGVar10,0,(MethodInfo *)0x0);
                                  pUVar9 = (this->fields).useInteractor;
                                  if (pUVar9 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_AddRequirement
                                              (pUVar9,(UseRequirement *)this_04,(MethodInfo *)0x0);
                                    pMVar1 = (this->fields).plateObject;
                                    if (pMVar1 != (MVPressurePlateObject *)0x0) {
                                      pGVar10 = (pMVar1->fields).useInteractionRotator;
                                      this_05 = (GameRankRequirement *)func_?();
                                      GameRankRequirement::GameRankRequirement__ctor
                                                (this_05,pGVar10,(MVWorldObjectClient *)this,0,
                                                 (MethodInfo *)0x0);
                                      pUVar9 = (this->fields).useInteractor;
                                      if (pUVar9 != (UseInteractor *)0x0) {
                                        UseInteractor::UseInteractor_AddRequirement
                                                  (pUVar9,(UseRequirement *)this_05,
                                                   (MethodInfo *)0x0);
                                        pMVar1 = (this->fields).plateObject;
                                        if (pMVar1 != (MVPressurePlateObject *)0x0) {
                                          tintObject = (pMVar1->fields).tintObject;
                                          this_06 = (TeamRequirement *)func_?();
                                          TeamRequirement::TeamRequirement__ctor
                                                    (this_06,(TintObject *)tintObject,0,
                                                     (MethodInfo *)0x0);
                                          pUVar9 = (this->fields).useInteractor;
                                          if (pUVar9 != (UseInteractor *)0x0) {
                                            UseInteractor::UseInteractor_AddRequirement
                                                      (pUVar9,(UseRequirement *)this_06,
                                                       (MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_DocumentationType
          (MVPressurePlate *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_PressurePlate;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0x40000000,0x3e800000,0,0);
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.transform;
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
  fVar3 = pVVar2->z;
  pTVar1 = (this->fields)._._.transform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_left
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    fVar5 = pVVar4->x;
    pVVar6 = (Vector3 *)pVVar4->y;
    pVVar2 = (Vector3 *)&stack0xffffffdc;
    fVar7 = 0.5;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       (pVVar2,0.5,*pVVar4,(MethodInfo *)0x0);
    uVar8._0_4_ = pVVar4->x;
    uVar8._4_4_ = pVVar4->y;
    fVar9 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar10 = &UNK_?;
      pQVar11 = TypeInfo__UnityEngine__Quaternion;
      func_?();
      uVar8 = CONCAT44(pQVar11,puVar10);
    }
    uVar12 = (undefined4)uVar8;
    rotation.y = fVar7;
    rotation.x = (float)pVVar2;
    rotation.z = fVar5;
    rotation.w = (float)pVVar6;
    point.z = fVar9;
    point.x = (float)(int)uVar8;
    point.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffdc,rotation,point,(MethodInfo *)0x0);
    a.y = (float)uVar12;
    a.x = (float)pVVar6;
    a.z = fVar3;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffdc,a,*pVVar2,(MethodInfo *)0x0);
    fVar5 = pVVar2->y;
    fVar3 = pVVar2->z;
    pVVar6->x = pVVar2->x;
    pVVar6->y = fVar5;
    pVVar6->z = fVar3;
    return pVVar6;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar13)();
  return pVVar2;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_triggerBoxEvents_TriggerEnter
               (MVPressurePlate *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

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
                  ((Object *)StringLiteral_Pressure_plate_entered_by_object,(MethodInfo *)0x0);
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
        (this->fields).localIsDown = 1;
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

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_triggerBoxEvents_TriggerExit
               (MVPressurePlate *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

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
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
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

