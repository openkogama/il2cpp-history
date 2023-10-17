
/* Void Destroy() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Destroy(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__UpdateController);
    func_?(&MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
code_?:
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar2 != (IEditModeUI *)0x0) {
    pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
    this_00 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)this,
                 MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if ((pDVar3 == (Delegate *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
        func_?(3);
        goto code_?;
      }
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


/* Void EnterWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_EnterWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                   );
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,instigatorWOID,(MethodInfo *)0x0),
        pMVar2 != (MVWorldObject *)0x0)) &&
       (pLVar3 = pMVar2[1].fields.inputLinkRefs, pLVar3 != (List_1_MV_WorldObject_Link_ *)0x0)) {
      pOVar4 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         ((GameObject *)pLVar3,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pLVar3 = pMVar2[1].fields.inputLinkRefs;
      if (pLVar3 != (List_1_MV_WorldObject_Link_ *)0x0) {
        pOVar4 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)pLVar3,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        pLVar3 = (this->fields)._._._.inputLinkRefs;
        if (pLVar3 != (List_1_MV_WorldObject_Link_ *)0x0) {
          if (((pLVar3->fields)._size == 0) || ((this->fields)._._._.inputState != 0)) {
            if (pOVar4 == (Object_1 *)0x0) goto code_?;
            (*(code *)pOVar4->klass[1]._0.this_arg.data)();
          }
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).affectedBodies;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_01,(Object *)instigatorWOID,(Object *)&UNK_?,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__set_Item_int__MVRigidBody_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ExitWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ExitWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).affectedBodies;
    if ((pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,instigatorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                    (this_01,
                     MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if (x != (Object_1 *)0x0) {
        (*(code *)x->klass[1]._0.declaringType)(x,0xd,0xffffffff,x->klass[1]._0.parent);
        pDVar2 = (this->fields).affectedBodies;
        if (pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,instigatorWOID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                    );
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


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,float gridSize,
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

Bounds * Assembly-CSharp.dll::WindTurbine::WindTurbine_GetLocalBounds
                   (Bounds *__return_storage_ptr__,WindTurbine *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  size.y = (float)_UNK_?;
  size.x = (float)_UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  size.z = 1.5;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,(Vector3)ZEXT812(0),size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Initialize(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&TypeInfo__UpdateController);
    func_?(&
                    MethodInfo__WindTurbine__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar2 != (IEditModeUI *)0x0) {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      this_01 = (UnityAction_1_System_ByteEnum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_,(MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if ((pDVar3 != (Delegate *)0x0) && (iVar4 = func_?(), iVar4 == 0))
        goto code_?;
        func_?();
        goto code_?;
      }
    }
  }
  else {
code_?:
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    WindTurbine_SetData(this,(MethodInfo *)0x0);
    pWVar5 = (this->fields).windTurbineObject;
    if ((pWVar5 != (WindTurbineObject *)0x0) &&
       (this_02 = MVLogicObject::MVLogicObject_SetupCulling
                            ((MVLogicObject *)this,(pWVar5->fields).visualObject,2.0,
                             (MethodInfo *)0x0), this_02 != (CullingSubscriberBase *)0x0)) {
      CullingSubscriberBase::CullingSubscriberBase_set_Radius(this_02,4.0,(MethodInfo *)0x0);
      this_03 = (Action_2_Int32Enum_Object_ *)func_?();
      if (this_03 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__WindTurbine__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar6 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_03,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar6;
        func_?();
        if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
          value = func_?();
          (this->fields).isActive = value;
          pWVar5 = (this->fields).windTurbineObject;
          if ((pWVar5 != (WindTurbineObject *)0x0) &&
             (this_00 = (pWVar5->fields).windParticleSystem, this_00 != (ParticleSystem *)0x0)) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_set_enabled_Injected
                      ((ParticleSystem_EmissionModule *)&stack0xfffffff4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_InitializeInventory
               (WindTurbine *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (this_00 = (pWVar1->fields).areaColliderTransform, this_00 != (Transform *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pWVar1 = (this->fields).windTurbineObject;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (this_01 = (pWVar1->fields).windParticleSystem, this_01 != (ParticleSystem *)0x0)) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pGVar2 = (this->fields)._._.inputConnectorObject;
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_InputStateUpdateCallback
               (WindTurbine *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    (this->fields).isActive = 1;
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 != (WindTurbineObject *)0x0) &&
       (pPVar2 = (pWVar1->fields).windParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
      logicInputState =
           (LogicInputState__Enum)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&logicInputState,1,(MethodInfo *)0x0);
      return;
    }
code_?:
    uVar3 = func_?(&stack0xfffffff0);
    func_?(uVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    (this->fields).isActive = 0;
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 == (WindTurbineObject *)0x0) ||
       (pPVar2 = (pWVar1->fields).windParticleSystem, pPVar2 == (ParticleSystem *)0x0))
    goto code_?;
    logicInputState =
         (LogicInputState__Enum)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&logicInputState,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_OnDataUpdate
               (WindTurbine *this,MethodInfo *method)

{
  WindTurbine_SetData(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_OnEditModeChange
               (WindTurbine *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (pCVar2 = (pWVar1->fields).editorCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 != (WindTurbineObject *)0x0) &&
       (pCVar2 = (pWVar1->fields).areaCollider, pCVar2 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
      if (arg.playInEditor == 0) {
        return;
      }
      pWVar1 = (this->fields).windTurbineObject;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (pCVar2 = (pWVar1->fields).editorCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pWVar1 = (this->fields).windTurbineObject;
        if ((pWVar1 != (WindTurbineObject *)0x0) &&
           ((pWVar1->fields).areaCollider != (Collider *)0x0)) {
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


/* Void Rescale() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Rescale(WindTurbine *this,MethodInfo *method)

{
  pWVar1 = this;
  pWVar2 = (this->fields).windTurbineObject;
  if ((pWVar2 != (WindTurbineObject *)0x0) &&
     (pTVar3 = (pWVar2->fields).areaColliderTransform, pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
    pWVar2 = (this->fields).windTurbineObject;
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    VVar8.y = (float)uVar7;
    VVar8.x = (float)uVar6;
    if ((pWVar2 != (WindTurbineObject *)0x0) &&
       (pTVar3 = (pWVar2->fields).areaColliderTransform, pTVar3 != (Transform *)0x0)) {
      VVar8.z = (this->fields).windAreaSize;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar3,VVar8,(MethodInfo *)0x0);
      pWVar2 = (this->fields).windTurbineObject;
      if ((pWVar2 != (WindTurbineObject *)0x0) &&
         (pTVar3 = (pWVar2->fields).areaColliderTransform, pTVar3 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
        pWVar2 = (this->fields).windTurbineObject;
        uVar9 = pVVar4->x;
        uVar10 = pVVar4->y;
        if ((pWVar2 != (WindTurbineObject *)0x0) &&
           (pTVar3 = (pWVar2->fields).areaColliderTransform, pTVar3 != (Transform *)0x0)) {
          method = (MethodInfo *)0x0;
          this = (WindTurbine *)((this->fields).windAreaSize * _UNK_? + _UNK_?);
          fVar11 = (float)uVar10;
          VVar8.x = (float)uVar9;
          VVar8 = (Vector3)CONCAT84(uVar12,VVar8.x);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar3,VVar8,(MethodInfo *)0x0);
          pWVar2 = (pWVar1->fields).windTurbineObject;
          if ((pWVar2 != (WindTurbineObject *)0x0) &&
             (this_00 = (pWVar2->fields).windParticleSystem, this_00 != (ParticleSystem *)0x0)) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                      ((ParticleSystem_MainModule *)&this,
                       (pWVar1->fields).windAreaSize / _UNK_?,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                      ((ParticleSystem_MainModule *)&this,0.1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Rotate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Rotate(WindTurbine *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
      uVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      pGVar1 = (this->fields)._._.gameObject;
      fVar6 = (this->fields).windPitch - _UNK_?;
      if (pGVar1 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value.y = (float)uVar4;
          value.x = fVar6;
          value.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetData() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_SetData(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_windSize);
    func_?(&StringLiteral_windPitch);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)StringLiteral_windSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?();
      (this->fields).windAreaSize = *pfVar3;
      pDVar1 = (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_windPitch,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar3 = (float *)func_?();
            fVar4 = (this->fields).windAreaSize / _UNK_?;
            (this->fields).windPitch = *pfVar3;
            (this->fields).windStrength = fVar4 * _UNK_?;
            WindTurbine_Rescale(this,(MethodInfo *)0x0);
            WindTurbine_Rotate(this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  pOVar2 = (Object *)func_?();
code_?:
  func_?(pOVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ToggleTurbine(Boolean) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ToggleTurbine
               (WindTurbine *this,bool state,MethodInfo *method)

{
  value = state;
  (this->fields).isActive = value;
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (this_00 = (pWVar1->fields).windParticleSystem, this_00 != (ParticleSystem *)0x0)) {
    _state = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&state,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_UpdateControllerFixedUpdate
               (WindTurbine *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff2c;
  pWStack_5 = this;
  puVar6 = &stack0xffffff2c;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  KStack_8.key._options = 0;
  KStack_8.key._cultureKey = (String *)0x0;
  KStack_8.key._pattern = (String *)0x0;
  KStack_8.value = (Object *)0x0;
  uStack_9 = 0;
  if ((this->fields).isActive == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  method_00 = (MethodInfo *)(this->fields).affectedBodies;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        auStack_11,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__GetEnumerator__
                       );
    uStack_12 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10->_dictionary;
    DStack_7._version = pDVar10->_version;
    DStack_7._index = pDVar10->_index;
    DStack_7._current.key = (int32_t)(pDVar10->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pDStack_13 = &DStack_7;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                             (&DStack_7,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__MoveNext__
                             ), bVar14 != 0) {
      pTStack_15 = (Transform *)DStack_7._current.key;
      pMStack_16 = (MVRigidBody *)DStack_7._current.value;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pMStack_16,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        if (pMStack_16 == (MVRigidBody *)0x0) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        cVar17 = func_?(7);
        if (cVar17 == '\0') {
          pGVar18 = (this->fields)._._.gameObject;
          if (pGVar18 == (GameObject *)0x0) goto code_?;
          pTStack_15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar18,(MethodInfo *)0x0);
          this_02 = (Collider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pMStack_16,
                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                              );
          if (this_02 == (Collider *)0x0) goto code_?;
          pBVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                             (&BStack_20,this_02,(MethodInfo *)0x0);
          KStack_8.key._options = (int32_t)(pBVar19->m_Center).x;
          KStack_8.key._cultureKey = (String *)(pBVar19->m_Center).y;
          KStack_8.key._pattern = (String *)(pBVar19->m_Center).z;
          KStack_8.value = (Object *)(pBVar19->m_Extents).x;
          uStack_9._0_4_ = (pBVar19->m_Extents).y;
          uStack_9._4_4_ = (pBVar19->m_Extents).z;
          pRVar21 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                             (&RStack_22,&KStack_8,(MethodInfo *)0x0);
          if (pTStack_15 == (Transform *)0x0) goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              (&VStack_24,pTStack_15,(Vector3)*pRVar21,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar23->x;
          uStack_25._4_4_ = pVVar23->y;
          fStack_26 = pVVar23->z;
          fVar27 = _UNK_? -
                   (fStack_26 * fStack_26) / ((this->fields).windAreaSize * _UNK_?);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          pTStack_15 = (Transform *)(fVar27 * (this->fields).windStrength);
          pGVar18 = (this->fields)._._.gameObject;
          if ((pGVar18 == (GameObject *)0x0) ||
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar18,(MethodInfo *)0x0),
             this_03 == (Transform *)0x0)) goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)(auStack_11 + 0xc),this_03,(MethodInfo *)0x0);
          uStack_28._0_4_ = pVVar23->x;
          uStack_28._4_4_ = pVVar23->y;
          fStack_29 = pVVar23->z;
          fStack_30 = fStack_29 * (float)pTStack_15;
          impulse.y = (float)uStack_28._4_4_ * (float)pTStack_15;
          impulse.x = (float)(undefined4)uStack_28 * (float)pTStack_15;
          impulse.z = fStack_30;
          MVRigidBody::MVRigidBody_AddImpulse_1(pMStack_16,impulse,1,(MethodInfo *)0x0);
        }
      }
      else {
        method_00 = (MethodInfo *)(this->fields).keysToRemove;
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        func_?(method_00,pTStack_15);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar31 = (this->fields).keysToRemove;
    index = 0;
    if (pLVar31 != (List_1_System_Int32_ *)0x0) {
      while (index < (pLVar31->fields)._size) {
        this_00 = (this->fields).affectedBodies;
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (pWStack_5->fields).keysToRemove;
        if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (key = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           this_00 == (Dictionary_2_System_Int32_MVRigidBody_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                  );
        pLVar31 = (this->fields).keysToRemove;
        index = index + 1;
        if (pLVar31 == (List_1_System_Int32_ *)0x0) goto code_?;
      }
      pLVar31 = (pWStack_5->fields).keysToRemove;
      if (pLVar31 != (List_1_System_Int32_ *)0x0) {
        piVar32 = &(pLVar31->fields)._version;
        *piVar32 = *piVar32 + 1;
        (pLVar31->fields)._size = 0;
        goto code_?;
      }
    }
  }
code_?:
  uVar33 = func_?();
  func_?(uVar33);
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* WindTurbine(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine__ctor
               (WindTurbine *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__WindTurbineObject);
    func_?(&
                    MethodInfo__WindTurbine__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__WindTurbine__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&StringLiteral_windSize);
    func_?(&StringLiteral_windPitch);
    cRam_? = '\x01';
  }
  (this->fields).windStrength = 1000.0;
  (this->fields).windAreaSize = 10.0;
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 == (List_1_System_Int32_ *)0x0) {
code_?:
    uVar1 = func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).keysToRemove = this_00;
    func_?(&(this->fields).keysToRemove,this_00);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).windTurbinePrefab,
               worldObjects,(MethodInfo *)0x0);
    pWVar3 = (WindTurbineObject *)(this->fields)._._.component;
    if (pWVar3 == (WindTurbineObject *)0x0) {
      (this->fields).windTurbineObject = (WindTurbineObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pWVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__WindTurbineObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pWVar3->klass)->_1).typeHierarchy
          [(TypeInfo__WindTurbineObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__WindTurbineObject)) goto code_?;
      (this->fields).windTurbineObject = pWVar3;
      if (((((ObjectPrefab__Class *)pWVar3->klass)->_1).typeHierarchyDepth <
           (TypeInfo__WindTurbineObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pWVar3->klass)->_1).typeHierarchy
          [(TypeInfo__WindTurbineObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__WindTurbineObject)) goto code_?;
    }
    func_?(&(this->fields).windTurbineObject);
    pDVar4 = (this->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar4,(Object *)StringLiteral_windSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Single,pOVar5);
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar6 = (float *)func_?(pOVar5);
      (this->fields).windAreaSize = *pfVar6;
      pDVar4 = (this->fields)._._._.data;
      if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar4,(Object *)StringLiteral_windPitch,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar1 = CONCAT44(TypeInfo__System__Single,pOVar5);
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar6 = (float *)func_?(pOVar5);
          fVar7 = (this->fields).windAreaSize / _UNK_?;
          (this->fields).windPitch = *pfVar6;
          (this->fields).windStrength = fVar7 * _UNK_?;
          WindTurbine_Rescale(this,(MethodInfo *)0x0);
          WindTurbine_Rotate(this,(MethodInfo *)0x0);
          iVar8 = (this->fields)._._.interactionFlags;
          pWVar3 = (this->fields).windTurbineObject;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
               *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          uVar9 = *(uint *)((int)&(this->fields)._._.interactionFlags + 4);
          *(uint *)&(this->fields)._._.interactionFlags = (uint)iVar8 | 0x18200;
          piVar10 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar10 = (uint)*piVar10 & 0xfffffeff;
          *(uint *)((int)&(this->fields)._._.interactionFlags + 4) = uVar9 | 0x38;
          if (pWVar3 != (WindTurbineObject *)0x0) {
            pTVar11 = (pWVar3->fields).triggerBoxEvents;
            pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            if (pUVar12 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar12,(Object *)this,
                         MethodInfo__WindTurbine__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pTVar11 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                          (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
                pWVar3 = (this->fields).windTurbineObject;
                if (pWVar3 != (WindTurbineObject *)0x0) {
                  pTVar11 = (pWVar3->fields).triggerBoxEvents;
                  pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                            func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                  if (pUVar12 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (pUVar12,(Object *)this,
                               MethodInfo__WindTurbine__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                               ,(MethodInfo *)0x0);
                    if (pTVar11 != (TriggerBoxEvents *)0x0) {
                      TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                (pTVar11,(EventHandler_1_TriggerEventArgs_ *)pUVar12,
                                 (MethodInfo *)0x0);
                      this_01 = (Dictionary_2_System_Int32_MVRigidBody_ *)
                                func_?(
                                               TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>
                                               );
                      if (this_01 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
                        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                        ParameterOverride`1[System::Object]::
                        ParameterOverride_1_System_Object___ctor
                                  ((ParameterOverride_1_System_Object_ *)this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Dictionary__
                                  );
                        (this->fields).affectedBodies = this_01;
                        func_?(&(this->fields).affectedBodies,this_01);
                        (this->fields).isActive = 1;
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
      goto code_?;
    }
  }
code_?:
  func_?(uVar1);
  pWVar3 = extraout_EDX;
code_?:
  func_?(pWVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::WindTurbine::WindTurbine_get_DocumentationType
          (WindTurbine *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_WindTurbine;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.55;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::WindTurbine::WindTurbine_get_InputSignalReceiver
          (WindTurbine *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::WindTurbine::WindTurbine_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,WindTurbine *this,MethodInfo *method)

{
  this_00 = (this->fields)._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_set_InputSignalReceiver
               (WindTurbine *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,value);
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_triggerBoxEvents_TriggerEnter
               (WindTurbine *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (e != (TriggerEventArgs *)0x0) {
    WindTurbine_EnterWindZone(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_triggerBoxEvents_TriggerExit
               (WindTurbine *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (e != (TriggerEventArgs *)0x0) {
    key = (Object *)(e->fields).instigatorWOID;
    if (cRam_? == '\0') {
      func_?(&
                      MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).affectedBodies;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        return;
      }
      pDVar2 = (this->fields).affectedBodies;
      if ((pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) &&
         (this_01 = (Component *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                               (Int32Enum__Enum)key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                              ), this_01 != (Component *)0x0)) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_01,
                       MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                      );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        if (x != (Object_1 *)0x0) {
          (*(code *)x->klass[1]._0.declaringType)(x,0xd,0xffffffff,x->klass[1]._0.parent);
          pDVar2 = (this->fields).affectedBodies;
          if (pDVar2 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

