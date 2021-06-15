
/* Void Activate(Object, TakeDamageEventArgs) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Activate
               (ShootableButton *this,Object *sender,TakeDamageEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).targetCollider;
  if (this_00 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).buttonObject;
    if ((pSVar1 != (ShootableButtonObject *)0x0) &&
       (this_01 = (pSVar1->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
                  (this_02,(int32_t)woID,1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar1 == (IEditModeUI *)0x0) {
      func_?(0);
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar1);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_,
               MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 != (Delegate *)0x0) {
      pDVar4 = (Delegate *)0x0;
      if ((Action_1_EditModeChangeArgs___Class *)pDVar3->klass ==
          TypeInfo__System__Action<EditModeChangeArgs>) {
        pDVar4 = pDVar3;
      }
      if (pDVar4 == (Delegate *)0x0) goto code_?;
    }
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)0x0,(MethodInfo *)0x0);
  if (pCRam000000e8 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCRam000000e8,(MethodInfo *)0x0);
    pCRam000000e8 = (CullingSubscriberBase *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,ShootableButton *this,float gridSize,
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
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,1.5,(MethodInfo *)0x0);
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

Bounds * Assembly-CSharp.dll::ShootableButton::ShootableButton_GetLocalBounds
                   (Bounds *__return_storage_ptr__,ShootableButton *this,
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
  func_?(&uStack_6,0x40001062,0x40001062,0x3f3374bc,0);
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

void Assembly-CSharp.dll::ShootableButton::ShootableButton_Initialize
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pLVar2 = (LogicInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar1,
                        LogicInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<LogicInteractable>__
                       );
    (this->fields).interactable = pLVar2;
    pGVar1 = (this->fields)._._.gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                (pGVar1,
                 ClientSideLogicInteractionHandler_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideLogicInteractionHandler>__
                );
      pLVar2 = (this->fields).interactable;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<TakeDamageEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__ShootableButton__Activate_System__Object__TakeDamageEventArgs_,
                 MethodInfo__System__EventHandler<TakeDamageEventArgs>__EventHandler_System__Object__void__
                );
      if (pLVar2 != (LogicInteractable *)0x0) {
        LogicInteractable::LogicInteractable_add_OnDamageEvent
                  (pLVar2,(EventHandler_1_TakeDamageEventArgs_ *)pUVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar4 != (IEditModeUI *)0x0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pIVar4 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if (pIVar4 == (IEditModeUI *)0x0) goto code_?;
          pDVar5 = (Delegate *)func_?();
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<EditModeChangeArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__ShootableButton__OnEditModeChange_EditModeChangeArgs_,
                     MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
          if (pDVar5 != (Delegate *)0x0) {
            pDVar6 = (Delegate *)0x0;
            if ((Action_1_EditModeChangeArgs___Class *)pDVar5->klass ==
                TypeInfo__System__Action<EditModeChangeArgs>) {
              pDVar6 = pDVar5;
            }
            if (pDVar6 == (Delegate *)0x0) {
              func_?();
              goto code_?;
            }
          }
          in_stack_7 = (GreyOutObjectScript *)&UNK_?;
          func_?();
        }
        pSVar8 = (this->fields).buttonObject;
        if ((pSVar8 != (ShootableButtonObject *)0x0) &&
           (pCVar9 = (pSVar8->fields).targetCollider2D, pCVar9 != (Collider *)0x0)) {
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar9,0,(MethodInfo *)0x0);
          pSVar8 = (this->fields).buttonObject;
          if (pSVar8 != (ShootableButtonObject *)0x0) {
            pCVar9 = (pSVar8->fields).targetCollider3D;
            (this->fields).targetCollider = pCVar9;
            (this->fields)._._.collider = pCVar9;
            MVLogicObject::MVLogicObject_SetupCulling
                      ((MVLogicObject *)this,(pSVar8->fields).visualRoot,2.0,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__ShootableButton__SignalCallback_bool__bool__LogicObjectManager_,
                       MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
                      );
            pIVar10 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                                ((MVWorldObject *)this,0,
                                 (Action_3_Boolean_Boolean_LogicObjectManager_ *)pUVar3,
                                 (MethodInfo *)0x0);
            (this->fields)._InputSignalReceiver_k__BackingField = pIVar10;
            woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
            this_00 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
            WorldObjectClientRef`1[MVWorldObjectClient]::
            WorldObjectClientRef_1_MVWorldObjectClient___ctor
                      (this_00,(int32_t)woId,(MethodInfo *)0x0);
            (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_00;
            iVar11 = ShootableButton_get_CurrentTime(this,(MethodInfo *)0x0);
            if (iVar11 == -1) {
              return;
            }
            pCVar9 = (this->fields).targetCollider;
            if (pCVar9 != (Collider *)0x0) {
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                        (pCVar9,0,(MethodInfo *)0x0);
              pSVar8 = (this->fields).buttonObject;
              if ((pSVar8 != (ShootableButtonObject *)0x0) &&
                 ((pSVar8->fields).greyOutObject != (GreyOutObjectScript *)0x0)) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)in_stack_7,
                           MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                           ,
                           MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                          );
                GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                          (in_stack_7,
                           (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)pUVar3,
                           (MethodInfo *)0x0);
                (in_stack_7->fields).isGreyedIn = 0;
                return;
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

void Assembly-CSharp.dll::ShootableButton::ShootableButton_OnDataUpdate
               (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
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
      if (((pSVar1 != (ShootableButtonObject *)0x0) &&
          (pCVar2 = (pSVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) &&
         (UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    (pCVar2,0,(MethodInfo *)0x0), (this->fields).targetCollider != (Collider *)0x0))
      {
        pcVar3 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          pcVar3 = (code *)func_?();
          if (pcVar3 == (code *)0x0) {
            puStack4 = (undefined *)0x0;
            puStack5 = (undefined *)0x0;
            puStack6 = (undefined *)func_?();
            func_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pcRam_? = pcVar3;
        (*pcRam_?)();
        return;
      }
    }
  }
  puStack5 = (undefined *)0x0;
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
        cRam_? = '\x01';
      }
      if (TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 ==
          (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                   ,
                   MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                  );
        TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 =
             (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01;
      }
      if (in_stack_2 != (GreyOutObjectScript *)0x0) {
        GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                  (in_stack_2,TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0,
                   (MethodInfo *)0x0);
        (in_stack_2->fields).isGreyedIn = 1;
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        cRam_? = '\x01';
      }
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)in_stack_2,
                 MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                 ,
                 MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                );
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
        cRam_? = '\x01';
      }
      if (TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 ==
          (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                   ,
                   MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                  );
        TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 =
             (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01;
      }
      if (in_stack_2 != (GreyOutObjectScript *)0x0) {
        GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                  (in_stack_2,TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0,
                   (MethodInfo *)0x0);
        (in_stack_2->fields).isGreyedIn = 1;
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_00,(Type *)StringLiteral_duration,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Single,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar5 = (float *)func_?(pPVar3);
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
  uVar4 = func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?(0);
    pSStack1 = extraout_EDX;
    pSStack2 = unaff_EDI;
  }
  else {
    prefabObject = MVTeleportGroup::MVTeleportGroup_get_Teleporter2
                             ((MVTeleportGroup *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
              ((MVWorldObjectClient *)this,PlayInteractionType__Enum_HandlesHits,(MethodInfo *)0x0);
    pSStack1 = (ShootableButtonObject *)(this->fields)._._.component;
    if (pSStack1 == (ShootableButtonObject *)0x0) {
      (this->fields).buttonObject = (ShootableButtonObject *)0x0;
      return;
    }
    bVar5 = (TypeInfo__ShootableButtonObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSStack1->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pSStack1->klass)->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pSVar7 = (ShootableButtonObject *)0x0;
    if (bVar6) {
      pSVar7 = pSStack1;
    }
    pSStack2 = TypeInfo__ShootableButtonObject;
    if (pSVar7 != (ShootableButtonObject *)0x0) {
      (this->fields).buttonObject = pSVar7;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 get_CurrentTime() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_CurrentTime
                  (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_cT,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::ShootableButton::ShootableButton_get_DocumentationType
          (ShootableButton *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ShootableButton;
}


/* Int32 get_Duration() */

int32_t Assembly-CSharp.dll::ShootableButton::ShootableButton_get_Duration
                  (ShootableButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pSStack2 = TypeInfo__System__Single;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pSStack2 = (Single__Class *)pPVar1;
        pfVar3 = (float *)func_?();
        return (int)(*pfVar3 * _UNK_?);
      }
      goto code_?;
    }
  }
  pSStack2 = (Single__Class *)0x0;
  func_?();
  pSStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::ShootableButton::ShootableButton_get_InputSignalReceiver
          (ShootableButton *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0x3fcccccd,0,0,0);
  return __return_storage_ptr__;
}


/* Void set_CurrentTime(Int32) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_CurrentTime
               (ShootableButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_InputSignalReceiver
               (ShootableButton *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}


/* Void set_IsActive(Boolean) */

void Assembly-CSharp.dll::ShootableButton::ShootableButton_set_IsActive
               (ShootableButton *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value - 1,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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

