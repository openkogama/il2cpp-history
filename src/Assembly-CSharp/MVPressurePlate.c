
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Destroy
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).plateObject;
  if (pMVar1 != (MVPressurePlateObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pEVar3 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar3,(Object *)this,
               MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).plateObject;
      if (pMVar1 != (MVPressurePlateObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pEVar3 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar3,(Object *)this,
                   MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).plateObject;
          if (pMVar1 != (MVPressurePlateObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pEVar3 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields).plateObject;
              if (pMVar1 != (MVPressurePlateObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pEVar3 = (EventHandler_1_Object_ *)
                         func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (pEVar3,(Object *)pUVar4,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
                  pUVar4 = (this->fields).useInteractor;
                  if (pUVar4 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_OnDestroy
                              (pUVar4,(this->fields)._._._.data,(MethodInfo *)0x0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_DoEnter
               (MVPressurePlate *this,int32_t instigatorWOID,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
              (this_00,(this->fields)._._._.id,instigatorWOID,(MethodInfo *)0x0);
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
              (this_00,(this->fields)._._._.id,instigatorWOID,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  pSVar4 = (SharedCubeFunctions__Class *)((float)uVar2 * _UNK_?);
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      pSVar7 = TypeInfo__SharedCubeFunctions;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar4 = pSVar7;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar4;
      rotation.x = gridSize;
      rotation.z = fVar5;
      rotation.w = fVar6;
      scale.y = fVar5;
      scale.x = (float)pSVar4;
      scale.z = fVar6;
      pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar8->y;
      fVar6 = pVVar8->z;
      __return_storage_ptr__->x = pVVar8->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar9)();
  return pVVar8;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVPressurePlate *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar2->zeroVector).x;
  uVar5 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = (float)uVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar5;
  (__return_storage_ptr__->m_Extents).z = 1.25;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Initialize
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__Extensions);
    func_?(&MethodInfo__MVPressurePlate__Callback_bool__bool__LogicObjectManager_);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__OutputSignalTransmitter);
    func_?(&StringLiteral_triggerBoxState);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__MVPressurePlate__Callback_bool__bool__LogicObjectManager_,(MethodInfo *)0x0
            );
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,
                      (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  woId = (this->fields)._._._.id;
  this_02 = (WorldObjectClientRef_1_System_Object_ *)
            func_?(TypeInfo__OutputSignalTransmitter);
  WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
            (this_02,woId,(MethodInfo *)0x0);
  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_02;
  func_?();
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) &&
        (cVar2 = (*(code *)(this->klass->vtable).get_HasVisualsInPlaymode.method)(), cVar2 != '\0'))
       && (bVar3 = MVPressurePlate_IsVisible(this,(MethodInfo *)0x0), bVar3 != 0)) {
code_?:
      pMVar4 = (this->fields).plateObject;
      if (pMVar4 == (MVPressurePlateObject *)0x0) goto code_?;
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar4->fields).plateLogicModel,2.0,(MethodInfo *)0x0);
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) goto code_?;
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)();
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar5 = Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        pOVar6 = (ObscuredBool *)func_?();
        bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit_1(*pOVar6,(MethodInfo *)0x0);
        (this->fields).isDown = bVar3;
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_hide);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return 1;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        TStack4.m_Index = (int32_t)TypeInfo__System__Boolean;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          TStack4 = TVar3;
          pcVar5 = (char *)func_?();
          return *pcVar5 == '\0';
        }
        goto code_?;
      }
    }
  }
  TStack4.m_Index = (int32_t)&UNK_?;
  func_?();
  TStack4.m_Index = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnDataUpdate
               (MVPressurePlate *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
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
  if (((this->fields).isDown == 0) && ((this->fields).localIsDown == 0)) {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
    if (0.0 < pVVar3->y || pVVar3->y == 0.0) {
      return;
    }
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    fVar7 = (this->fields).speed;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                      ((MethodInfo *)0x0);
    fVar8 = fVar8 * fVar7;
    if ((float)((uint)fVar5 ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <= fVar8) {
      fVar8 = (float)((uint)fVar5 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    }
    fVar8 = fVar8 + fVar5;
  }
  else {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    pfVar9 = &(this->fields).minY;
    if (pVVar3->y < *pfVar9 || pVVar3->y == *pfVar9) {
      return;
    }
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    fVar7 = pVVar3->x;
    fVar8 = pVVar3->y;
    fVar6 = pVVar3->z;
    fVar4 = (this->fields).speed;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                      ((MethodInfo *)0x0);
    fVar10 = fVar8 - (this->fields).minY;
    fVar5 = fVar5 * fVar4;
    if (fVar10 <= fVar5) {
      fVar5 = fVar10;
    }
    fVar8 = fVar8 - fVar5;
    fVar4 = fVar7;
  }
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 != (Transform *)0x0)) {
    value.y = fVar8;
    value.x = fVar4;
    value.z = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetVisibility
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if (pMVar1 != (MVPressurePlateObject *)0x0) {
    pRVar2 = (pMVar1->fields)._.meshRenderers;
    uVar3 = 0;
    if (pRVar2 != (Renderer__Array *)0x0) {
      ppRVar4 = pRVar2->vector;
      while( true ) {
        if ((int)pRVar2->max_length <= (int)uVar3) {
          return;
        }
        if (pRVar2->max_length <= uVar3) break;
        if (*ppRVar4 == (Renderer *)0x0) goto code_?;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)*ppRVar4,(MethodInfo *)0x0);
        MVPressurePlate_IsVisible(this,(MethodInfo *)0x0);
        if (this_00 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppRVar4 = ppRVar4 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetupTierInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).plateLogicModel, pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
              ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._.lodGameObject;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  func_?();
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
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&TypeInfo__MVPressurePlateObject);
    func_?(&MethodInfo__MVPressurePlate__DoEnter_int_);
    func_?(&
                    MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__StarRequirement);
    func_?(&TypeInfo__TeamRequirement);
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseInteractor);
    cRam_? = '\x01';
  }
  (this->fields).minY = -0.249;
  (this->fields).speed = 1.8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvPressurePlatePrefab,
               worldObjects,(MethodInfo *)0x0);
    pMVar2 = (MVPressurePlateObject *)(this->fields)._._.component;
    if (pMVar2 == (MVPressurePlateObject *)0x0) {
      (this->fields).plateObject = (MVPressurePlateObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVPressurePlateObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVPressurePlateObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVPressurePlateObject)) goto code_?;
      (this->fields).plateObject = pMVar2;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVPressurePlateObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVPressurePlateObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVPressurePlateObject)) goto code_?;
    }
    func_?(&(this->fields).plateObject);
    iVar3 = (this->fields)._._.interactionFlags;
    pMVar2 = (this->fields).plateObject;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar3 | 0x12718000;
    if (pMVar2 != (MVPressurePlateObject *)0x0) {
      pTVar4 = (pMVar2->fields).triggerBoxEvents;
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)this,
                 MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar4 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
        pMVar2 = (this->fields).plateObject;
        if (pMVar2 != (MVPressurePlateObject *)0x0) {
          pTVar4 = (pMVar2->fields).triggerBoxEvents;
          pEVar5 = (EventHandler_1_Object_ *)
                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar5,(Object *)this,
                     MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar4 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                      (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
            MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
            pMVar2 = (this->fields).plateObject;
            if (pMVar2 != (MVPressurePlateObject *)0x0) {
              pGVar6 = (pMVar2->fields).useInteractionRotator;
              pTVar4 = (((this->fields).plateObject)->fields).triggerBoxEvents;
              if (pTVar4 != (TriggerBoxEvents *)0x0) {
                triggerCollider =
                     TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar4,(MethodInfo *)0x0);
                this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
                mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                          (this_00,(Object *)this,MethodInfo__MVPressurePlate__DoEnter_int_,
                           (MethodInfo *)0x0);
                pUVar7 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
                UseInteractor::UseInteractor__ctor
                          (pUVar7,(MVWorldObjectClient *)0x0,pGVar6,0,triggerCollider,
                           (Func_2_Int32_Boolean_ *)this_00,
                           (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,1,(MethodInfo *)0x0
                          );
                pURam00000108 = pUVar7;
                func_?();
                pUVar7 = pURam00000108;
                if (iRam_? != 0) {
                  pTVar4 = *(TriggerBoxEvents **)(iRam_? + 0x18);
                  pEVar5 = (EventHandler_1_Object_ *)
                           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            (pEVar5,(Object *)pUVar7,
                             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                             ,(MethodInfo *)0x0);
                  if (pTVar4 != (TriggerBoxEvents *)0x0) {
                    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                              (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
                    pUVar7 = pURam00000108;
                    if (iRam_? != 0) {
                      pTVar4 = *(TriggerBoxEvents **)(iRam_? + 0x18);
                      pEVar5 = (EventHandler_1_Object_ *)
                               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                                (pEVar5,(Object *)pUVar7,
                                 MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                 ,(MethodInfo *)0x0);
                      if (pTVar4 != (TriggerBoxEvents *)0x0) {
                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                  (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pEVar5,
                                   (MethodInfo *)0x0);
                        if (iRam_? != 0) {
                          pGVar6 = *(GameObject **)(iRam_? + 0x28);
                          this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                          GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar6,0,(MethodInfo *)0x0);
                          if (pURam00000108 != (UseInteractor *)0x0) {
                            UseInteractor::UseInteractor_AddRequirement
                                      (pURam00000108,(UseRequirement *)this_01,(MethodInfo *)0x0);
                            if (iRam_? != 0) {
                              pGVar6 = *(GameObject **)(iRam_? + 0x28);
                              this_02 = (LevelBasedUseRequirement *)
                                        func_?(TypeInfo__LevelBasedUseRequirement);
                              LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                        (this_02,pGVar6,0,(MethodInfo *)0x0);
                              if (pURam00000108 != (UseInteractor *)0x0) {
                                UseInteractor::UseInteractor_AddRequirement
                                          (pURam00000108,(UseRequirement *)this_02,(MethodInfo *)0x0
                                          );
                                if (iRam_? != 0) {
                                  pGVar6 = *(GameObject **)(iRam_? + 0x28);
                                  this_03 = (StarRequirement *)
                                            func_?(TypeInfo__StarRequirement);
                                  StarRequirement::StarRequirement__ctor
                                            (this_03,pGVar6,0,(MethodInfo *)0x0);
                                  if (pURam00000108 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_AddRequirement
                                              (pURam00000108,(UseRequirement *)this_03,
                                               (MethodInfo *)0x0);
                                    if (iRam_? != 0) {
                                      pGVar6 = *(GameObject **)(iRam_? + 0x28);
                                      this_04 = (GameRankRequirement *)
                                                func_?(TypeInfo__GameRankRequirement);
                                      GameRankRequirement::GameRankRequirement__ctor
                                                (this_04,pGVar6,(MVWorldObjectClient *)0x0,0,
                                                 (MethodInfo *)0x0);
                                      if (pURam00000108 != (UseInteractor *)0x0) {
                                        UseInteractor::UseInteractor_AddRequirement
                                                  (pURam00000108,(UseRequirement *)this_04,
                                                   (MethodInfo *)0x0);
                                        if (iRam_? != 0) {
                                          tintObject = *(TintObject **)(iRam_? + 0x20);
                                          this_05 = (TeamRequirement *)
                                                    func_?(TypeInfo__TeamRequirement);
                                          TeamRequirement::TeamRequirement__ctor
                                                    (this_05,tintObject,0,(MethodInfo *)0x0);
                                          if (pURam00000108 != (UseInteractor *)0x0) {
                                            UseInteractor::UseInteractor_AddRequirement
                                                      (pURam00000108,(UseRequirement *)this_05,
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
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  __return_storage_ptr__->x = 2.0;
  __return_storage_ptr__->y = 0.25;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.transform;
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     (&VStack_3,pTVar1,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  pTVar1 = (this->fields)._._.transform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
    fVar8 = pQVar7->x;
    fVar9 = pQVar7->y;
    puVar10 = (undefined *)pQVar7->z;
    ppVVar11 = (Vector3__Class **)pQVar7->w;
    if (cRam_? == '\0') {
      ppVVar11 = &TypeInfo__UnityEngine__Vector3;
      puVar10 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar12->leftVector).x;
    VStack_3.y = (pVVar12->leftVector).y;
    VStack_3.z = (pVVar12->leftVector).z * _UNK_?;
    rotation.y = fVar9;
    rotation.x = fVar8;
    rotation.z = (float)puVar10;
    rotation.w = (float)ppVVar11;
    point.y = VStack_3.y * _UNK_?;
    point.x = VStack_3.x * _UNK_?;
    point.z = VStack_3.z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffd8,rotation,point,(MethodInfo *)0x0);
    uVar13 = pVVar2->x;
    uVar14 = pVVar2->y;
    fVar8 = pVVar2->z;
    __return_storage_ptr__->x = (float)uVar13 + (float)uVar4;
    __return_storage_ptr__->y = (float)uVar14 + (float)uVar5;
    __return_storage_ptr__->z = fVar8 + fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar15)();
  return pVVar2;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_triggerBoxEvents_TriggerEnter
               (MVPressurePlate *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Pressure_plate_entered_by_object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
      triggerInstigatorId =
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (triggerInstigatorId == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Pressure_plate_entered_by_object,(MethodInfo *)0x0);
        return;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_02,(this->fields)._._._.id,triggerInstigatorId,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Pressure_plated_exited_by_object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    triggerInstigatorId =
         MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (triggerInstigatorId == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pressure_plated_exited_by_object,(MethodInfo *)0x0);
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                (this_01,iRam_?,triggerInstigatorId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

