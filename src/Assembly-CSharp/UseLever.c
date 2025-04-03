
/* Void Destroy() */

void Assembly-CSharp.dll::UseLever::UseLever_Destroy(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
code_?:
    pUVar1 = (this->fields).useLeverObject;
    if (pUVar1 != (UseLeverObject *)0x0) {
      pTVar2 = (pUVar1->fields).triggerBoxEvents;
      pUVar3 = (pUVar1->fields).useInteractor;
      pEVar4 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar4,(Object *)pUVar3,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar2 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
        pUVar1 = (this->fields).useLeverObject;
        if (pUVar1 != (UseLeverObject *)0x0) {
          pTVar2 = (pUVar1->fields).triggerBoxEvents;
          pUVar3 = (pUVar1->fields).useInteractor;
          pEVar4 = (EventHandler_1_Object_ *)
                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (pEVar4,(Object *)pUVar3,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar2 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                      (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar4,(MethodInfo *)0x0);
            pUVar1 = (this->fields).useLeverObject;
            if ((pUVar1 != (UseLeverObject *)0x0) &&
               (pUVar3 = (pUVar1->fields).useInteractor, pUVar3 != (UseInteractor *)0x0)) {
              UseInteractor::UseInteractor_OnDestroy
                        (pUVar3,(this->fields)._._._.data,(MethodInfo *)0x0);
              MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar5 != (IEditModeUI *)0x0) {
      pDVar6 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar5);
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar6 != (Delegate *)0x0) {
        iVar7 = func_?();
        if (iVar7 == 0) goto code_?;
      }
      func_?(3,TypeInfo__IEditModeUI);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::UseLever::UseLever_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,UseLever *this,float gridSize,Vector3 position,
                    MethodInfo *method)

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
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      uVar7 = 0;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar4 = pQVar8->z;
      fVar5 = pQVar8->w;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = 0.0;
      rotation.x = fVar6;
      rotation.z = fVar4;
      rotation.w = fVar5;
      scale.y = (float)uVar7;
      scale.x = (float)this_01;
      scale.z = fVar6;
      pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar9->y;
      fVar4 = pVVar9->z;
      __return_storage_ptr__->x = pVVar9->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?(fVar4,fVar5);
  pcVar10 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar10)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::UseLever::UseLever_GetLocalBounds
                   (Bounds *__return_storage_ptr__,UseLever *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar1->zeroVector).x;
  uVar4 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = fVar2;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = (float)uVar4;
  (__return_storage_ptr__->m_Extents).y = (float)uVar4;
  (__return_storage_ptr__->m_Extents).z = 0.1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::UseLever::UseLever_Initialize(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__OutputSignalTransmitter);
    func_?(&MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_);
    func_?(&MethodInfo__UseLever__SignalCallback_bool__bool__LogicObjectManager_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
code_?:
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_Edit) {
      pUVar2 = (this->fields).useLeverObject;
      if ((pUVar2 != (UseLeverObject *)0x0) &&
         (pCVar3 = (pUVar2->fields).editCollider, pCVar3 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar3,1,(MethodInfo *)0x0);
        pUVar2 = (this->fields).useLeverObject;
        if ((pUVar2 != (UseLeverObject *)0x0) &&
           (pCVar3 = (pUVar2->fields).leverCollider, pCVar3 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar3,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
code_?:
      pUVar2 = (this->fields).useLeverObject;
      if ((pUVar2 != (UseLeverObject *)0x0) &&
         (this_00 = (pUVar2->fields).useInteractor, this_00 != (UseInteractor *)0x0)) {
        UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0)
        ;
        pUVar2 = (this->fields).useLeverObject;
        if (pUVar2 != (UseLeverObject *)0x0) {
          MVLogicObject::MVLogicObject_SetupCulling
                    ((MVLogicObject *)this,(pUVar2->fields).visualRoot,2.0,(MethodInfo *)0x0);
          this_02 = (Action_3_Boolean_Boolean_Object_ *)func_?();
          mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::
          Action_3_Boolean_Boolean_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__UseLever__SignalCallback_bool__bool__LogicObjectManager_,
                     (MethodInfo *)0x0);
          pIVar4 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                             ((MVWorldObject *)this,1,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_02,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar4;
          func_?();
          woId = (this->fields)._._._.id;
          this_03 = (WorldObjectClientRef_1_System_Object_ *)func_?();
          WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                    (this_03,woId,(MethodInfo *)0x0);
          (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_03;
          func_?();
          bVar5 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
          (this->fields).localIsDown = bVar5;
          return;
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar6 != (IEditModeUI *)0x0) {
      pDVar7 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar6);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar7 != (Delegate *)0x0) {
        iVar8 = func_?();
        if (iVar8 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_InitializeInventory(UseLever *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::UseLever::UseLever_OnDataUpdate(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractor, this_00 != (UseInteractor *)0x0)) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    woID = (this->fields)._._._.id;
    worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
              (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::UseLever::UseLever_OnEditModeChange
               (UseLever *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (pCVar2 = (pUVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pCVar2 = (pUVar1->fields).leverCollider, pCVar2 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pUVar1 = (this->fields).useLeverObject;
      if ((pUVar1 != (UseLeverObject *)0x0) &&
         (pCVar2 = (pUVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pUVar1 = (this->fields).useLeverObject;
        if ((pUVar1 != (UseLeverObject *)0x0) && ((pUVar1->fields).leverCollider != (Collider *)0x0)
           ) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          (*pcRam_?)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::UseLever::UseLever_OnIsFiringChanged
               (UseLever *this,bool isFiring,MethodInfo *method)

{
  UseLever_set_IsActivated(this,isFiring,(MethodInfo *)0x0);
  (this->fields).localIsDown = isFiring;
  (this->fields).requestSend = 0;
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::UseLever::UseLever_OnUpdate(UseLever *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pUVar1 = (this->fields).useLeverObject;
  if ((this->fields).localIsDown == 0) {
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      if (0.0 < pVVar3->z || pVVar3->z == 0.0) {
        return;
      }
      pUVar1 = (this->fields).useLeverObject;
      if ((pUVar1 != (UseLeverObject *)0x0) &&
         (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
        uVar4 = pVVar3->x;
        uVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        fVar7 = (this->fields).speed;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                           ((MethodInfo *)0x0);
        fVar8 = fVar8 * fVar7;
        pUVar1 = (this->fields).useLeverObject;
        if ((float)((uint)fVar6 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) <=
            fVar8) {
          fVar8 = (float)((uint)fVar6 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        }
        if ((pUVar1 != (UseLeverObject *)0x0) &&
           (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
          value.y = (float)uVar5;
          value.x = (float)uVar4;
          value.z = fVar8 + fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if ((pUVar1 != (UseLeverObject *)0x0) &&
          (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
    pfVar9 = &(this->fields).minY;
    if (pVVar3->z < *pfVar9 || pVVar3->z == *pfVar9) {
      return;
    }
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 != (UseLeverObject *)0x0) &&
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      uVar10 = pVVar3->x;
      uVar11 = pVVar3->y;
      fVar7 = (this->fields).speed;
      puVar12 = &UNK_?;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                         ((MethodInfo *)0x0);
      fVar8 = (float)puVar12 - (this->fields).minY;
      pUVar1 = (this->fields).useLeverObject;
      fVar6 = fVar13 * fVar7;
      if (fVar8 <= fVar13 * fVar7) {
        fVar6 = fVar8;
      }
      if ((pUVar1 != (UseLeverObject *)0x0) &&
         (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 != (Transform *)0x0)) {
        value_00.y = (float)uVar11;
        value_00.x = (float)uVar10;
        value_00.z = (float)puVar12 - fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseLever::UseLever_Reset(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_beginActivated);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_beginActivated,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        UseLever_set_IsActivated(this,*pbVar2,(MethodInfo *)0x0);
        (this->fields).requestSend = 0;
        bVar3 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
        (this->fields).localIsDown = bVar3;
        return;
      }
      goto code_?;
    }
  }
  TVar1.m_Index = func_?();
code_?:
  func_?(TVar1.m_Index);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_SetupTierInventory(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_SetupTierInventory((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::UseLever::UseLever_SignalCallback
               (UseLever *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  isHot = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,isHot,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_UnSetupTierInventory(UseLever *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseLever::UseLever_Use(UseLever *this,int32_t userWoID,MethodInfo *method)

{
  if ((this->fields).requestSend == 0) {
    (this->fields).requestSend = 1;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    woID = (this->fields)._._._.id;
    bVar1 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,woID,bVar1 == 0,(MethodInfo *)0x0);
    bVar1 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
    (this->fields).localIsDown = bVar1 == 0;
  }
  return 1;
}


/* UseLever(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::UseLever::UseLever__ctor
               (UseLever *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__StarRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseLeverObject);
    func_?(&MethodInfo__UseLever__Use_int_);
    cRam_? = '\x01';
  }
  (this->fields).minY = -0.25;
  (this->fields).speed = 1.8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).useLeverPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x100000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x200000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x400000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0xADDR;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    pUVar4 = (UseLeverObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    puVar5 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
    *puVar5 = *puVar5 | 2;
    *(int *)&(this->fields)._._.interactionFlags = (int)(this->fields)._._.interactionFlags;
    unaff_EDI = TypeInfo__UseLeverObject;
    if (pUVar4 == (UseLeverObject *)0x0) {
      (this->fields).useLeverObject = (UseLeverObject *)0x0;
    }
    else {
      bVar6 = (TypeInfo__UseLeverObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pUVar4->klass)->_1).naturalAligment < bVar6) ||
         ((((ObjectPrefab__Class *)pUVar4->klass)->_1).typeHierarchy[bVar6 - 1] !=
          (Il2CppClass *)TypeInfo__UseLeverObject)) goto code_?;
      (this->fields).useLeverObject = pUVar4;
      bVar6 = (TypeInfo__UseLeverObject->_1).naturalAligment;
      unaff_EDI = TypeInfo__UseLeverObject;
      if (((((ObjectPrefab__Class *)pUVar4->klass)->_1).naturalAligment < bVar6) ||
         ((((ObjectPrefab__Class *)pUVar4->klass)->_1).typeHierarchy[bVar6 - 1] !=
          (Il2CppClass *)TypeInfo__UseLeverObject)) goto code_?;
    }
    ppUVar7 = &(this->fields).useLeverObject;
    func_?(ppUVar7,pUVar4);
    pUVar4 = *ppUVar7;
    if (pUVar4 != (UseLeverObject *)0x0) {
      pGVar8 = (pUVar4->fields).useInteractionRotator;
      triggerCollider = (pUVar4->fields).leverCollider;
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__UseLever__Use_int_,(MethodInfo *)0x0);
      pUVar9 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar9,(MVWorldObjectClient *)this,pGVar8,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      ppUVar10 = &(pUVar4->fields).useInteractor;
      *ppUVar10 = pUVar9;
      func_?(ppUVar10,pUVar9);
      unaff_EDI = (UseLeverObject__Class *)&(this->fields).useLeverObject;
      pUVar4 = *(UseLeverObject **)unaff_EDI;
      if (pUVar4 != (UseLeverObject *)0x0) {
        pTVar11 = (pUVar4->fields).triggerBoxEvents;
        pUVar9 = (pUVar4->fields).useInteractor;
        pEVar12 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar12,(Object *)pUVar9,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar11 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pEVar12,(MethodInfo *)0x0);
          pUVar4 = *(UseLeverObject **)unaff_EDI;
          if (pUVar4 != (UseLeverObject *)0x0) {
            pTVar11 = (pUVar4->fields).triggerBoxEvents;
            pUVar9 = (pUVar4->fields).useInteractor;
            pEVar12 = (EventHandler_1_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar12,(Object *)pUVar9,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar11 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pEVar12,(MethodInfo *)0x0);
              if (*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) {
                pGVar8 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractionRotator;
                uVar3 = _UNK_?;
                this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                displayObjectOffset.y = (float)_UNK_?;
                displayObjectOffset.x = (float)uVar3;
                displayObjectOffset.z = 0.0;
                GameCoinLogic::GameCoinLogic__ctor_1
                          (this_01,pGVar8,displayObjectOffset,1,(MethodInfo *)0x0);
                if ((*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) &&
                   (pUVar9 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractor,
                   pUVar9 != (UseInteractor *)0x0)) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar9,(UseRequirement *)this_01,(MethodInfo *)0x0);
                  if (*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) {
                    pGVar8 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractionRotator;
                    this_02 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                              (this_02,pGVar8,1,(MethodInfo *)0x0);
                    if ((*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) &&
                       (pUVar9 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractor,
                       pUVar9 != (UseInteractor *)0x0)) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar9,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      if (*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) {
                        pGVar8 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractionRotator;
                        this_03 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                        StarRequirement::StarRequirement__ctor(this_03,pGVar8,1,(MethodInfo *)0x0);
                        if ((*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) &&
                           (pUVar9 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractor,
                           pUVar9 != (UseInteractor *)0x0)) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar9,(UseRequirement *)this_03,(MethodInfo *)0x0);
                          if (*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) {
                            pGVar8 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractionRotator
                            ;
                            this_04 = (GameRankRequirement *)
                                      func_?(TypeInfo__GameRankRequirement);
                            GameRankRequirement::GameRankRequirement__ctor
                                      (this_04,pGVar8,(MVWorldObjectClient *)this,1,
                                       (MethodInfo *)0x0);
                            if ((*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) &&
                               (pUVar9 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractor,
                               pUVar9 != (UseInteractor *)0x0)) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar9,(UseRequirement *)this_04,(MethodInfo *)0x0);
                              if (*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) {
                                pGVar8 = ((*(UseLeverObject **)unaff_EDI)->fields).
                                         useInteractionRotator;
                                this_05 = (RewardedAdRequirement *)
                                          func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                                RewardedAdRequirement__ctor(this_05,pGVar8,(MethodInfo *)0x0);
                                if ((*(UseLeverObject **)unaff_EDI != (UseLeverObject *)0x0) &&
                                   (pUVar9 = ((*(UseLeverObject **)unaff_EDI)->fields).useInteractor
                                   , pUVar9 != (UseInteractor *)0x0)) {
                                  UseInteractor::UseInteractor_AddRequirement
                                            (pUVar9,(UseRequirement *)this_05,(MethodInfo *)0x0);
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
  func_?();
  pUVar4 = extraout_EDX;
code_?:
  func_?(pUVar4,unaff_EDI);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean get_BeginActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_BeginActivated(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_beginActivated,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::UseLever::UseLever_get_DocumentationType(UseLever *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Lever;
}


/* Boolean get_IsActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_IsActivated(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_a);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_a,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
    pOVar2 = (ObscuredBool *)func_?();
    bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::UseLever::UseLever_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,UseLever *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.2;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_IsActivated(Boolean) */

void Assembly-CSharp.dll::UseLever::UseLever_set_IsActivated
               (UseLever *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_a);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  value_00 = *pOVar1;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions::Extensions_SetObscuredType
            (hashtable,StringLiteral_a,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
            );
  return;
}

