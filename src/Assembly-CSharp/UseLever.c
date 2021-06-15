
/* Void Destroy() */

void Assembly-CSharp.dll::UseLever::UseLever_Destroy(UseLever *this,MethodInfo *method)

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
  if (pIVar1 == (IEditModeUI *)0x0) {
code_?:
    pUVar2 = (this->fields).useLeverObject;
    if (pUVar2 != (UseLeverObject *)0x0) {
      pTVar3 = (pUVar2->fields).triggerBoxEvents;
      pUVar4 = (pUVar2->fields).useInteractor;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)pUVar4,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar3 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
        pUVar2 = (this->fields).useLeverObject;
        if (pUVar2 != (UseLeverObject *)0x0) {
          pTVar3 = (pUVar2->fields).triggerBoxEvents;
          pUVar4 = (pUVar2->fields).useInteractor;
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)pUVar4,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar3 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                      (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
            pUVar2 = (this->fields).useLeverObject;
            if (pUVar2 != (UseLeverObject *)0x0) {
              pUVar4 = (pUVar2->fields).useInteractor;
              data = (Dictionary_2_System_Object_System_Object_ *)
                     PrefabPool::PrefabPool_get_MVBatteryPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
              if ((pUVar4 != (UseInteractor *)0x0) &&
                 (this_00 = (pUVar4->fields).useInteractorVisuals,
                 this_00 != (UseInteratorVisualization *)0x0)) {
                UseInteratorVisualization::UseInteratorVisualization_DestroyRequirementObjects
                          (this_00,data,(MethodInfo *)0x0);
                MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar1 != (IEditModeUI *)0x0) {
      pDVar6 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar1);
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_,
                 MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar6,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar6 != (Delegate *)0x0) {
        pDVar7 = (Delegate *)0x0;
        if ((Action_1_EditModeChangeArgs___Class *)pDVar6->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar7 = pDVar6;
        }
        if (pDVar7 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  func_?(0);
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

Bounds * Assembly-CSharp.dll::UseLever::UseLever_GetLocalBounds
                   (Bounds *__return_storage_ptr__,UseLever *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

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
  func_?(&uStack_6,0x3f99999a,0x3f99999a,0x3e4ccccd,0);
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

void Assembly-CSharp.dll::UseLever::UseLever_Initialize(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 == (IEditModeUI *)0x0) {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Edit) goto code_?;
    cVar3 = '\0';
    func_?(&stack0xfffffffb,0,0);
    pUVar4 = (this->fields).useLeverObject;
    if ((pUVar4 != (UseLeverObject *)0x0) &&
       (pCVar5 = (pUVar4->fields).editCollider, pCVar5 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar5,1,(MethodInfo *)0x0);
      pUVar4 = (this->fields).useLeverObject;
      if ((pUVar4 != (UseLeverObject *)0x0) &&
         (pCVar5 = (pUVar4->fields).leverCollider, pCVar5 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar5,0,(MethodInfo *)0x0);
        if (cVar3 == '\0') {
code_?:
          pUVar4 = (this->fields).useLeverObject;
          if (pUVar4 != (UseLeverObject *)0x0) {
            pUVar6 = (pUVar4->fields).useInteractor;
            data = (Dictionary_2_System_Object_System_Object_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
            if ((pUVar6 != (UseInteractor *)0x0) &&
               (this_00 = (pUVar6->fields).useInteractorVisuals,
               this_00 != (UseInteratorVisualization *)0x0)) {
              UseInteratorVisualization::UseInteratorVisualization_UpdateData
                        (this_00,data,(pUVar6->fields).woOwnerID,(MethodInfo *)0x0);
              pUVar4 = (this->fields).useLeverObject;
              if (pUVar4 != (UseLeverObject *)0x0) {
                MVLogicObject::MVLogicObject_SetupCulling
                          ((MVLogicObject *)this,(pUVar4->fields).visualRoot,2.0,(MethodInfo *)0x0);
                pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar7,(Object *)this,
                           MethodInfo__UseLever__SignalCallback_bool__bool__LogicObjectManager_,
                           MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
                          );
                pIVar8 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                                    ((MVWorldObject *)this,1,
                                     (Action_3_Boolean_Boolean_LogicObjectManager_ *)pUVar7,
                                     (MethodInfo *)0x0);
                (this->fields)._InputSignalReceiver_k__BackingField = pIVar8;
                woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                this_01 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
                WorldObjectClientRef`1[MVWorldObjectClient]::
                WorldObjectClientRef_1_MVWorldObjectClient___ctor
                          (this_01,(int32_t)woId,(MethodInfo *)0x0);
                (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
                bVar9 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
                (this->fields).localIsDown = bVar9;
                return;
              }
            }
          }
        }
        else {
          pUVar4 = (this->fields).useLeverObject;
          if ((pUVar4 != (UseLeverObject *)0x0) &&
             (pCVar5 = (pUVar4->fields).editCollider, pCVar5 != (Collider *)0x0)) {
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      (pCVar5,0,(MethodInfo *)0x0);
            pUVar4 = (this->fields).useLeverObject;
            if ((pUVar4 != (UseLeverObject *)0x0) &&
               (pCVar5 = (pUVar4->fields).leverCollider, pCVar5 != (Collider *)0x0)) {
              UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                        (pCVar5,1,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar1 != (IEditModeUI *)0x0) {
      pDVar10 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar1);
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,MethodInfo__UseLever__OnEditModeChange_EditModeChangeArgs_,
                 MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar10,(Delegate *)pUVar7,(MethodInfo *)0x0);
      if (pDVar10 != (Delegate *)0x0) {
        pDVar11 = (Delegate *)0x0;
        if ((Action_1_EditModeChangeArgs___Class *)pDVar10->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar11 = pDVar10;
        }
        if (pDVar11 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::UseLever::UseLever_InitializeInventory(UseLever *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useLeverObject;
  if ((pUVar1 != (UseLeverObject *)0x0) &&
     (this_00 = (pUVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
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

void Assembly-CSharp.dll::UseLever::UseLever_OnDataUpdate(UseLever *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useLeverObject;
  if (pUVar1 != (UseLeverObject *)0x0) {
    pUVar2 = (pUVar1->fields).useInteractor;
    data = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if ((pUVar2 != (UseInteractor *)0x0) &&
       (this_00 = (pUVar2->fields).useInteractorVisuals, this_00 != (UseInteratorVisualization *)0x0
       )) {
      UseInteratorVisualization::UseInteratorVisualization_UpdateData
                (this_00,data,(pUVar2->fields).woOwnerID,(MethodInfo *)0x0);
      woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  }
  puStack5 = (undefined *)0x0;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pUVar1 = (this->fields).useLeverObject;
  if ((this->fields).localIsDown == 0) {
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc4,pTVar2,(MethodInfo *)0x0);
    if (0.0 <= pVVar3->z) {
      return;
    }
    fVar4 = (this->fields).speed;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                      ((MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc4,pTVar2,(MethodInfo *)0x0);
    fVar6 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
              (fVar5 * fVar4,(float)((uint)fVar6 ^ _UNK_?),(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar7 = (pUVar1->fields).plateButtonTransform, pTVar7 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar7 = (pUVar1->fields).plateButtonTransform, pTVar7 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&puStack_8,pTVar7,(MethodInfo *)0x0);
  }
  else {
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&puStack_8,pTVar2,(MethodInfo *)0x0);
    pfVar9 = &(this->fields).minY;
    if (pVVar3->z < *pfVar9 || pVVar3->z == *pfVar9) {
      return;
    }
    fVar4 = (this->fields).speed;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                      ((MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&puStack_8,pTVar2,(MethodInfo *)0x0);
    puVar10 = (undefined *)pVVar3->z;
    fVar6 = (this->fields).minY;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      puVar10 = &UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
              (fVar5 * fVar4,(float)puVar10 - fVar6,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar2 = (pUVar1->fields).plateButtonTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&puStack_8,pTVar2,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar7 = (pUVar1->fields).plateButtonTransform, pTVar7 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&puStack_8,pTVar7,(MethodInfo *)0x0);
    pUVar1 = (this->fields).useLeverObject;
    if ((pUVar1 == (UseLeverObject *)0x0) ||
       (pTVar7 = (pUVar1->fields).plateButtonTransform, pTVar7 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&puStack_8,pTVar7,(MethodInfo *)0x0);
  }
  uVar11 = 0;
  fVar4 = 0.0;
  puVar10 = &UNK_?;
  func_?();
  if (pTVar2 != (Transform *)0x0) {
    value.y = (float)puVar10;
    value.x = (float)uVar11;
    value.z = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseLever::UseLever_Reset(UseLever *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_beginActivated,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
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
  func_?();
code_?:
  func_?();
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_SetupTierInventory((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseLever::UseLever_Use(UseLever *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).requestSend == 0) {
    (this->fields).requestSend = 1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    bVar1 = UseLever_get_IsActivated(this,(MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,(int32_t)woID,bVar1 == 0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).minY = -0.25;
  (this->fields).speed = 1.8;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   MVSoundEmitter::MVSoundEmitter_get_InputSignalReceiver
                             ((MVSoundEmitter *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    piVar1 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0xADDR;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar3 = (TypeInfo__UseLeverObject->_1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
         ((pDVar2->klass->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__UseLeverObject))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar4) {
        data = pDVar2;
      }
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    (this->fields).useLeverObject = (UseLeverObject *)data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      triggerCollider = (data->fields).valueSlots;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,MethodInfo__UseLever__Use_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      owner = TypeInfo__UseInteractor;
      pUVar6 = (UseInteractor *)func_?();
      UseInteractor::UseInteractor__ctor
                (pUVar6,(MVWorldObjectClient *)this,(GameObject *)owner,0,
                 (Collider *)triggerCollider,(Func_2_Int32_Boolean_ *)pUVar5,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,(MethodInfo *)0x0);
      (data->fields).emptySlot = (int32_t)pUVar6;
      pUVar7 = (this->fields).useLeverObject;
      if (pUVar7 != (UseLeverObject *)0x0) {
        pTVar8 = (pUVar7->fields).triggerBoxEvents;
        pUVar6 = (pUVar7->fields).useInteractor;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)pUVar6,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar8 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar8,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
          pUVar7 = (this->fields).useLeverObject;
          if (pUVar7 != (UseLeverObject *)0x0) {
            pTVar8 = (pUVar7->fields).triggerBoxEvents;
            pUVar6 = (pUVar7->fields).useInteractor;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)pUVar6,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar8 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar8,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              pUVar7 = (this->fields).useLeverObject;
              if (pUVar7 != (UseLeverObject *)0x0) {
                pGVar9 = (pUVar7->fields).useInteractionRotator;
                fVar10 = 1.0;
                uVar11 = CONCAT44(0x3f000000,&stack0xffffffec);
                func_?();
                this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                displayObjectOffset.z = fVar10;
                displayObjectOffset.x = (float)(int)uVar11;
                displayObjectOffset.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                GameCoinLogic::GameCoinLogic__ctor_1
                          (this_01,pGVar9,displayObjectOffset,1,(MethodInfo *)0x0);
                pUVar7 = (this->fields).useLeverObject;
                if (((pUVar7 != (UseLeverObject *)0x0) &&
                    (pUVar6 = (pUVar7->fields).useInteractor, pUVar6 != (UseInteractor *)0x0)) &&
                   (pUVar12 = (pUVar6->fields).useInteractorVisuals,
                   pUVar12 != (UseInteratorVisualization *)0x0)) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pLVar13 = (pUVar12->fields).useRequirements;
                  if (pLVar13 != (List_1_UseRequirement_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              ((List_1_UIPushOption_ *)pLVar13,(UIPushOption__Enum)this_01,
                               MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                              );
                    UseInteratorVisualization::UseInteratorVisualization_CalculateSpacing
                              (pUVar12,(MethodInfo *)0x0);
                    pUVar7 = (this->fields).useLeverObject;
                    if (pUVar7 != (UseLeverObject *)0x0) {
                      pGVar9 = (pUVar7->fields).useInteractionRotator;
                      this_02 = (LevelBasedUseRequirement *)func_?();
                      LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                                (this_02,pGVar9,1,(MethodInfo *)0x0);
                      pUVar7 = (this->fields).useLeverObject;
                      if (((pUVar7 != (UseLeverObject *)0x0) &&
                          (pUVar6 = (pUVar7->fields).useInteractor, pUVar6 != (UseInteractor *)0x0
                          )) && (pUVar12 = (pUVar6->fields).useInteractorVisuals,
                                pUVar12 != (UseInteratorVisualization *)0x0)) {
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pLVar13 = (pUVar12->fields).useRequirements;
                        if (pLVar13 != (List_1_UseRequirement_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                          List_1_UIPushOption__Add
                                    ((List_1_UIPushOption_ *)pLVar13,(UIPushOption__Enum)this_02,
                                     MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                                    );
                          UseInteratorVisualization::UseInteratorVisualization_CalculateSpacing
                                    (pUVar12,(MethodInfo *)0x0);
                          pUVar7 = (this->fields).useLeverObject;
                          if (pUVar7 != (UseLeverObject *)0x0) {
                            pGVar9 = (pUVar7->fields).useInteractionRotator;
                            this_03 = (StarRequirement *)func_?();
                            StarRequirement::StarRequirement__ctor
                                      (this_03,pGVar9,1,(MethodInfo *)0x0);
                            pUVar7 = (this->fields).useLeverObject;
                            if (((pUVar7 != (UseLeverObject *)0x0) &&
                                (pUVar6 = (pUVar7->fields).useInteractor,
                                pUVar6 != (UseInteractor *)0x0)) &&
                               (pUVar12 = (pUVar6->fields).useInteractorVisuals,
                               pUVar12 != (UseInteratorVisualization *)0x0)) {
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pLVar13 = (pUVar12->fields).useRequirements;
                              if (pLVar13 != (List_1_UseRequirement_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                                List_1_UIPushOption__Add
                                          ((List_1_UIPushOption_ *)pLVar13,
                                           (UIPushOption__Enum)this_03,
                                           MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                                          );
                                UseInteratorVisualization::
                                UseInteratorVisualization_CalculateSpacing(pUVar12,(MethodInfo *)0x0)
                                ;
                                pUVar7 = (this->fields).useLeverObject;
                                if (pUVar7 != (UseLeverObject *)0x0) {
                                  pGVar9 = (pUVar7->fields).useInteractionRotator;
                                  this_04 = (GameRankRequirement *)func_?();
                                  GameRankRequirement::GameRankRequirement__ctor
                                            (this_04,pGVar9,(MVWorldObjectClient *)this,1,
                                             (MethodInfo *)0x0);
                                  pUVar7 = (this->fields).useLeverObject;
                                  if (((pUVar7 != (UseLeverObject *)0x0) &&
                                      (pUVar6 = (pUVar7->fields).useInteractor,
                                      pUVar6 != (UseInteractor *)0x0)) &&
                                     (pUVar12 = (pUVar6->fields).useInteractorVisuals,
                                     pUVar12 != (UseInteratorVisualization *)0x0)) {
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    pLVar13 = (pUVar12->fields).useRequirements;
                                    if (pLVar13 != (List_1_UseRequirement_ *)0x0) {
                                      mscorlib.dll::System::Collections::Generic::
                                      List`1[UIPushOption]::List_1_UIPushOption__Add
                                                ((List_1_UIPushOption_ *)pLVar13,
                                                 (UIPushOption__Enum)this_04,
                                                 MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                                                );
                                      UseInteratorVisualization::
                                      UseInteratorVisualization_CalculateSpacing
                                                (pUVar12,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean get_BeginActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_BeginActivated(UseLever *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_beginActivated,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pBStack2 = TypeInfo__System__Boolean;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pBStack2 = (Boolean__Class *)pPVar1;
        pbVar3 = (bool *)func_?();
        return *pbVar3;
      }
      goto code_?;
    }
  }
  pBStack2 = (Boolean__Class *)0x0;
  func_?();
  pBStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::UseLever::UseLever_get_DocumentationType(UseLever *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Lever;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::UseLever::UseLever_get_InputSignalReceiver(UseLever *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
}


/* Boolean get_IsActivated() */

bool Assembly-CSharp.dll::UseLever::UseLever_get_IsActivated(UseLever *this,MethodInfo *method)

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
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_a,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0x3f99999a,0,0,0);
  return __return_storage_ptr__;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::UseLever::UseLever_set_InputSignalReceiver
               (UseLever *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}


/* Void set_IsActivated(Boolean) */

void Assembly-CSharp.dll::UseLever::UseLever_set_IsActivated
               (UseLever *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  value_00 = *pOVar1;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  Extensions::Extensions_SetObscuredType_3
            (hashtable,StringLiteral_a,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
            );
  return;
}

