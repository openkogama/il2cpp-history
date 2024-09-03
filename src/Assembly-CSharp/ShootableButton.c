
/* Void Activate(Object, TakeDamageEventArgs) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Activate
               (ShootableButton *this,Object *sender,TakeDamageEventArgs *e,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
                  (this_02,(this->fields)._._._.id,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Destroy
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pSVar1 = (ShootableButton *)
             TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pSVar1 == (ShootableButton *)0x0) {
      func_?();
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pSVar1);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 != (Delegate *)0x0) {
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    unaff_EBP = 3;
    func_?(3);
    this = pSVar1;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields)._.cullingSubscriberBase,0);
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,ShootableButton *this,float gridSize,
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

Bounds * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetLocalBounds
                   (Bounds *__return_storage_ptr__,ShootableButton *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

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
  (__return_storage_ptr__->m_Extents).z = 0.3505;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Initialize
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&TypeInfo__System__EventHandler<TakeDamageEventArgs>);
    func_?(&
                    ClientSideLogicInteractionHandler_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideLogicInteractionHandler>__
                   );
    func_?(&
                    LogicInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<LogicInteractable>__
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__OutputSignalTransmitter);
    func_?(&MethodInfo__ShootableButton__Activate_System__Object__TakeDamageEventArgs_);
    func_?(&MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_);
    func_?(&MethodInfo__ShootableButton__SignalCallback_bool__bool__LogicObjectManager_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pLVar2 = (LogicInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar1,
                        LogicInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<LogicInteractable>__
                       );
    (this->fields).interactable = pLVar2;
    func_?(&(this->fields).interactable,pLVar2);
    pGVar1 = (this->fields)._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (pGVar1,
                 ClientSideLogicInteractionHandler_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideLogicInteractionHandler>__
                );
      pLVar2 = (this->fields).interactable;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ShootableButton__Activate_System__Object__TakeDamageEventArgs_,
                 (MethodInfo *)0x0);
      if (pLVar2 != (LogicInteractable *)0x0) {
        LogicInteractable::LogicInteractable_add_OnDamageEvent
                  (pLVar2,(EventHandler_1_TakeDamageEventArgs_ *)this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
            (IEditModeUI *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
          pDVar4 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar3);
          this_02 = (UnityAction_1_System_Int32Enum_ *)
                    func_?(TypeInfo__System__Action<EditModeChangeArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_02,(Object *)this,
                     MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_,
                     (MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar4,(Delegate *)this_02,(MethodInfo *)0x0);
          if (pDVar4 != (Delegate *)0x0) {
            iVar5 = func_?();
            if (iVar5 == 0) {
              func_?();
              goto code_?;
            }
          }
          in_stack_6 = (GreyOutObjectScript *)0x3;
          func_?();
        }
        pSVar7 = (this->fields).buttonObject;
        if ((pSVar7 != (ShootableButtonObject *)0x0) &&
           (pCVar8 = (pSVar7->fields).targetCollider2D, pCVar8 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar8,0,(MethodInfo *)0x0);
          pSVar7 = (this->fields).buttonObject;
          if (pSVar7 != (ShootableButtonObject *)0x0) {
            (this->fields).targetCollider = (pSVar7->fields).targetCollider3D;
            func_?();
            (this->fields)._._.collider = (this->fields).targetCollider;
            func_?(&(this->fields)._._.collider);
            pSVar7 = (this->fields).buttonObject;
            if (pSVar7 != (ShootableButtonObject *)0x0) {
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,(pSVar7->fields).visualRoot,2.0,(MethodInfo *)0x0);
              this_03 = (Action_3_Int32_Int32_ByteEnum_ *)
                        func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
              mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::
              Action_3_Int32_Int32_ByteEnum___ctor
                        (this_03,(Object *)this,
                         MethodInfo__ShootableButton__SignalCallback_bool__bool__LogicObjectManager_
                         ,(MethodInfo *)0x0);
              pIVar9 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                                 ((MVWorldObject *)this,0,
                                  (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_03,
                                  (MethodInfo *)0x0);
              (this->fields)._InputSignalReceiver_k__BackingField = pIVar9;
              func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar9);
              iVar10 = (this->fields)._._._.id;
              puVar11 = &UNK_?;
              this_04 = (WorldObjectClientRef_1_System_Object_ *)
                        func_?(TypeInfo__OutputSignalTransmitter);
              WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                        (this_04,iVar10,(MethodInfo *)0x0);
              (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_04;
              func_?();
              iVar10 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
              if (iVar10 == -1) {
                return;
              }
              pCVar8 = (this->fields).targetCollider;
              if (pCVar8 != (Collider *)0x0) {
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (pCVar8,0,(MethodInfo *)0x0);
                pSVar7 = (this->fields).buttonObject;
                if ((pSVar7 != (ShootableButtonObject *)0x0) &&
                   ((pSVar7->fields).greyOutObject != (GreyOutObjectScript *)0x0)) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?(&
                                    MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                                   );
                    cRam_? = '\x01';
                  }
                  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                            ,puVar11);
                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
                  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                            (this_00,(Object *)in_stack_6,
                             MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                             ,(MethodInfo *)0x0);
                  GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                            (in_stack_6,
                             (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,
                             (MethodInfo *)0x0);
                  (in_stack_6->fields).isGreyedIn = 0;
                  return;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_InitializeInventory
               (ShootableButton *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).buttonObject;
  if ((pSVar1 != (ShootableButtonObject *)0x0) &&
     (this_00 = (pSVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
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

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnDataUpdate
               (ShootableButton *this,MethodInfo *method)

{
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnEditModeChange
               (ShootableButton *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pSVar1 = (this->fields).buttonObject;
  if ((pSVar1 != (ShootableButtonObject *)0x0) &&
     (pCVar2 = (pSVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pCVar2 = (this->fields).targetCollider;
    if (pCVar2 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pSVar1 = (this->fields).buttonObject;
      if ((pSVar1 != (ShootableButtonObject *)0x0) &&
         (pCVar2 = (pSVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        if ((this->fields).targetCollider != (Collider *)0x0) {
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

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnIsFiringChanged
               (ShootableButton *this,bool isFiring,MethodInfo *method)

{
  ShootableButton_set_CurrentTime(this,isFiring - 1,(MethodInfo *)0x0);
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Reset
               (ShootableButton *this,MethodInfo *method)

{
  ShootableButton_set_CurrentTime(this,-1,(MethodInfo *)0x0);
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       ((pSVar1->fields).greyOutObject != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        ppMStack2 =
             &
             MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
        ;
        func_?();
        cRam_? = '\x01';
      }
      ppMStack2 =
           (MethodInfo **)TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>;
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (in_stack_3,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                 (MethodInfo *)0x0);
      (in_stack_3->fields).isGreyedIn = 1;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetToDownState() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SetToDownState
               (ShootableButton *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       ((pSVar1->fields).greyOutObject != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                               );
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,(Object *)in_stack_2,
                 MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (in_stack_2,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                 (MethodInfo *)0x0);
      (in_stack_2->fields).isGreyedIn = 0;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToUpState() */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SetToUpState
               (ShootableButton *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       ((pSVar1->fields).greyOutObject != (GreyOutObjectScript *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,(MethodInfo *)0x0);
      GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                (in_stack_2,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                 (MethodInfo *)0x0);
      (in_stack_2->fields).isGreyedIn = 1;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_SignalCallback
               (ShootableButton *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  iVar1 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
  if (iVar1 == -1) {
    pOVar2 = (this->fields).outputSignalTransmitter;
    if (pOVar2 != (OutputSignalTransmitter *)0x0) {
      OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    iVar1 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?(&TypeInfo__System__Single);
      func_?(&StringLiteral_duration);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._._._.data;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_duration,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
      if (TVar3.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        pOVar2 = (this->fields).outputSignalTransmitter;
        if ((int)(*pfVar5 * _UNK_?) < iVar1) {
          if (pOVar2 != (OutputSignalTransmitter *)0x0) {
            OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar2,0,(MethodInfo *)0x0);
            ShootableButton_set_CurrentTime(this,-1,(MethodInfo *)0x0);
            ShootableButton_SetToUpState(this,(MethodInfo *)0x0);
            return;
          }
        }
        else if (pOVar2 != (OutputSignalTransmitter *)0x0) {
          OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar2,1,(MethodInfo *)0x0);
          iVar1 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
          ShootableButton_set_CurrentTime(this,iVar1 + 100,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ShootableButton(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton__ctor
               (ShootableButton *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ShootableButtonObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    func_?();
    pSVar2 = extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).shootableButtonPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    pSVar2 = (ShootableButtonObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    (this->fields)._._._PlayInteractionType_k__BackingField = 1;
    if (pSVar2 == (ShootableButtonObject *)0x0) {
      (this->fields).buttonObject = (ShootableButtonObject *)0x0;
      func_?();
      return;
    }
    if (((TypeInfo__ShootableButtonObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
        [(TypeInfo__ShootableButtonObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
      (this->fields).buttonObject = pSVar2;
      if (((TypeInfo__ShootableButtonObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pSVar2->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pSVar2->klass)->_1).typeHierarchy
          [(TypeInfo__ShootableButtonObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
        func_?();
        return;
      }
    }
  }
  func_?(pSVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 get_CurrentTime() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_CurrentTime
                  (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_cT);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_cT,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
    pOVar2 = (ObscuredInt *)func_?();
    iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 get_Duration() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_Duration
                  (ShootableButton *this,MethodInfo *method)

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
                      (this_00,(Object *)StringLiteral_duration,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar2 = (float *)func_?();
        return (int)(*pfVar2 * _UNK_?);
      }
      func_?();
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::ShootableButton::ShootableButton_get_IsActive
               (ShootableButton *this,MethodInfo *method)

{
  iVar1 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::ShootableButton::ShootableButton_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,ShootableButton *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.6;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_CurrentTime(Int32) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_CurrentTime
               (ShootableButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_cT);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value_00.hiddenValue = (int32_t)pEVar3;
  value_00.currentCryptoKey = (int32_t)puVar2;
  value_00.fakeValue = iVar4;
  value_00.inited = pOVar1->inited;
  value_00._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_cT,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}


/* Void set_IsActive(Boolean) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_IsActive
               (ShootableButton *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_cT);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value - 1,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value_00.hiddenValue = (int32_t)pEVar3;
  value_00.currentCryptoKey = (int32_t)puVar2;
  value_00.fakeValue = iVar4;
  value_00.inited = pOVar1->inited;
  value_00._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_cT,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

