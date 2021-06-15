
/* Void Destroy() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Destroy(WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar2 == (IEditModeUI *)0x0) {
      func_?(0);
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_,
               MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 != (Delegate *)0x0) {
      pDVar5 = (Delegate *)0x0;
      if ((Action_1_EditModeChangeArgs___Class *)pDVar4->klass ==
          TypeInfo__System__Action<EditModeChangeArgs>) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) goto code_?;
    }
    func_?();
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void EnterWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_EnterWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (this_03 = (DayNightCycle *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_02,instigatorWOID,(MethodInfo *)0x0),
        this_03 != (DayNightCycle *)0x0)) &&
       (pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_03,(MethodInfo *)0x0),
       pCVar2 != (CelestialParam *)0x0)) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        ((GameObject *)pCVar2,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                        );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_03,(MethodInfo *)0x0);
      if (pCVar2 != (CelestialParam *)0x0) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)pCVar2,
                       MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                      );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        this_04 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                  JsonSchemaType]::
                  Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                            ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                              *)this,(MethodInfo *)0x0);
        if (this_04 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_04,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                             );
          if ((pOVar3 == (Object *)0x0) ||
             (bVar1 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
                      ThemeAttribute_1_System_Boolean__get_Value
                                ((ThemeAttribute_1_System_Boolean_ *)this,(MethodInfo *)0x0),
             bVar1 != 0)) {
            if (x == (UseInteractorHandler *)0x0) goto code_?;
            (*(code *)x->klass[1]._0.namespaze)();
          }
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).affectedBodies;
          if (this_01 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                      (this_01,instigatorWOID,(TerrainUtility_TerrainMap *)value,
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ExitWindZone(Int32) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ExitWindZone
               (WindTurbine *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).affectedBodies;
  if (this_00 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,instigatorWOID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).affectedBodies;
    if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar2,instigatorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                            ), this_01 != (TerrainUtility_TerrainMap *)0x0)) {
      x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                    ((Component_1 *)this_01,
                     MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                    );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if (x != (MVInteractableBase *)0x0) {
        (*(code *)(x->klass->vtable).__unknown_3.method)
                  (x,0xd,0xffffffff,(x->klass->vtable).__unknown_4.methodPtr);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).affectedBodies;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar2,instigatorWOID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
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

Bounds * Assembly-CSharp.dll::WindTurbine::WindTurbine_GetLocalBounds
                   (Bounds *__return_storage_ptr__,WindTurbine *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&uStack_4,0x40000000,0x40000000,0x3fc00000,0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uStack_2,uStack_1,uStack_4,uStack_3,0);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Initialize(WindTurbine *this,MethodInfo *method)

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
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar2 != (IEditModeUI *)0x0) {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__WindTurbine__OnEditModeChange_EditModeChangeArgs_
                 ,MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pDVar3 != (Delegate *)0x0) {
        pDVar5 = (Delegate *)0x0;
        if ((Action_1_EditModeChangeArgs___Class *)pDVar3->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar5 = pDVar3;
        }
        if (pDVar5 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    WindTurbine_SetData(this,(MethodInfo *)0x0);
    pWVar6 = (this->fields).windTurbineObject;
    if (pWVar6 != (WindTurbineObject *)0x0) {
      this_01 = MVLogicObject::MVLogicObject_SetupCulling
                          ((MVLogicObject *)this,(pWVar6->fields).visualObject,2.0,(MethodInfo *)0x0
                          );
      if (this_01 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_set_Radius(this_01,4.0,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__WindTurbine__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,
                   MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                  );
        pIVar7 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)pUVar4,(MethodInfo *)0x0
                           );
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar7;
        if (pIVar7 != (IInputSignalReceiver *)0x0) {
          bVar8 = func_?();
          (this->fields).isActive = bVar8;
          pWVar6 = (this->fields).windTurbineObject;
          if ((pWVar6 != (WindTurbineObject *)0x0) &&
             (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(pWVar6->fields).windParticleSystem,
             this_00 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_00,(MethodInfo *)0x0);
            func_?();
            return;
          }
        }
      }
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

void Assembly-CSharp.dll::WindTurbine::WindTurbine_InitializeInventory
               (WindTurbine *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (this_00 = (pWVar1->fields).areaColliderTransform, this_00 != (Transform *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pWVar1 = (this->fields).windTurbineObject;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (this_01 = (pWVar1->fields).windParticleSystem, this_01 != (ParticleSystem *)0x0)) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
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
  func_?(0);
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
       (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pWVar1->fields).windParticleSystem,
       pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) {
      logicInputState =
           (LogicInputState__Enum)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar2,(MethodInfo *)0x0);
      func_?(&logicInputState,1,0);
      return;
    }
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    logicInputState = LogicInputState__Enum_FromColdToHot;
    (this->fields).isActive = 0;
    pWVar1 = (this->fields).windTurbineObject;
    if ((pWVar1 == (WindTurbineObject *)0x0) ||
       (pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pWVar1->fields).windParticleSystem,
       pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) goto code_?;
    logicInputState =
         (LogicInputState__Enum)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                   (pDVar2,(MethodInfo *)0x0);
    func_?(&logicInputState,0,0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_OnDataUpdate
               (WindTurbine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WindTurbine_SetData(this,(MethodInfo *)0x0);
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


/* Void Rescale() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_Rescale(WindTurbine *this,MethodInfo *method)

{
  pWVar1 = (this->fields).windTurbineObject;
  if ((pWVar1 != (WindTurbineObject *)0x0) &&
     (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&puStack_4,pTVar2,(MethodInfo *)0x0);
    pWVar1 = (this->fields).windTurbineObject;
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    value.y = (float)uVar6;
    value.x = (float)uVar5;
    if ((pWVar1 != (WindTurbineObject *)0x0) &&
       (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
      value.z = (this->fields).windAreaSize;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar2,value,(MethodInfo *)0x0);
      pWVar1 = (this->fields).windTurbineObject;
      if ((pWVar1 != (WindTurbineObject *)0x0) &&
         (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
        pWVar1 = (this->fields).windTurbineObject;
        uVar7 = pVVar3->x;
        uVar8 = pVVar3->y;
        value_00.y = (float)uVar8;
        value_00.x = (float)uVar7;
        if ((pWVar1 != (WindTurbineObject *)0x0) &&
           (pTVar2 = (pWVar1->fields).areaColliderTransform, pTVar2 != (Transform *)0x0)) {
          value_00.z = (this->fields).windAreaSize * _UNK_? + _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,value_00,(MethodInfo *)0x0);
          pWVar1 = (this->fields).windTurbineObject;
          if ((pWVar1 != (WindTurbineObject *)0x0) &&
             (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(pWVar1->fields).windParticleSystem,
             this_00 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_00,(MethodInfo *)0x0);
            fStack9 = (this->fields).windAreaSize / _UNK_?;
            uStack10 = 0;
            func_?();
            uStack10 = 0;
            fStack9 = 0.1;
            func_?();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar1,(Type *)StringLiteral_windSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?();
      (this->fields).windAreaSize = *pfVar3;
      pDVar1 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar1,(Type *)StringLiteral_windPitch,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
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
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ToggleTurbine(Boolean) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_ToggleTurbine
               (WindTurbine *this,bool state,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  (this->fields).isActive = state;
  pWVar2 = (this->fields).windTurbineObject;
  if ((pWVar2 != (WindTurbineObject *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(pWVar2->fields).windParticleSystem,
     this_00 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_00,(MethodInfo *)0x0);
    func_?(&pOStack_1,_state,0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_UpdateControllerFixedUpdate
               (WindTurbine *this,MethodInfo *method)

{
  pWVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff38;
  puVar6 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  LStack_7.fields._NextReward_k__BackingField.value = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  LStack_7.klass = (LevelRewardsManager__Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_7.fields._NextReward_k__BackingField.key = 0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  uStack_13 = 0;
  func_?();
  if ((this->fields).isActive == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  this_00 = (this->fields).affectedBodies;
  puStack_14 = (undefined4 *)&stack0xffffff38;
  puStack_5 = &stack0xffffff38;
  if (this_00 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
    puStack_14 = (undefined4 *)&stack0xffffff38;
    puStack_5 = &stack0xffffff38;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        auStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__GetEnumerator__
                       );
    LStack_7.klass = (LevelRewardsManager__Class *)pDVar15->dictionary;
    LStack_7.monitor = (MonitorData *)pDVar15->next;
    LStack_7.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)pDVar15->stamp;
    LStack_7.fields._NextReward_k__BackingField.key = (pDVar15->current).key;
    LStack_7.fields._NextReward_k__BackingField.value = (int32_t)(pDVar15->current).value;
    uStack_2 = 0;
    while (cVar17 = func_?(), cVar17 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            (&LStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVRigidBody>__get_Current__
                            );
      unaff_EDI = (WindTurbine *)func_?();
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      method_00 = unaff_EDI;
      bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
      VStack_19.x = (float)&KStack_8;
      if (bVar18 == 0) {
        VStack_19.y = (float)
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Value__
        ;
        iVar20 = func_?();
        if (iVar20 == 0) goto code_?;
        cVar17 = func_?(7,iVar20);
        if (cVar17 == '\0') {
          pGVar21 = (this->fields)._._.gameObject;
          if (pGVar21 == (GameObject *)0x0) goto code_?;
          unaff_EDI = (WindTurbine *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar21,(MethodInfo *)method_00);
          this_04 = (Component_1 *)func_?();
          if ((this_04 == (Component_1 *)0x0) ||
             (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_GetComponent_58
                                  (this_04,
                                   UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                  ), this_05 == (MVInteractableBase *)0x0)) goto code_?;
          pBVar22 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                             ((Bounds *)&stack0xffffff44,(Collider *)this_05,(MethodInfo *)0x0);
          fStack_9 = (pBVar22->m_Center).x;
          fStack_10 = (pBVar22->m_Center).y;
          fStack_11 = (pBVar22->m_Center).z;
          fStack_12 = (pBVar22->m_Extents).x;
          uStack_13._0_4_ = (pBVar22->m_Extents).y;
          uStack_13._4_4_ = (pBVar22->m_Extents).z;
          pVVar23 = (Vector3 *)func_?();
          if (unaff_EDI == (WindTurbine *)0x0) goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              (aVStack_24,(Transform *)unaff_EDI,*pVVar23,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar23->x;
          uStack_25._4_4_ = pVVar23->y;
          fStack_26 = pVVar23->z;
          fStack_27 = (this->fields).windAreaSize;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fStack_27 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                                (_UNK_? -
                                 (fStack_26 * fStack_26) / (fStack_27 * _UNK_?),0.0,
                                 (MethodInfo *)0x0);
          fStack_27 = fStack_27 * (this->fields).windStrength;
          unaff_EDI = (WindTurbine *)func_?();
          pGVar21 = (this->fields)._._.gameObject;
          if ((pGVar21 == (GameObject *)0x0) ||
             (this_06 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar21,in_stack_28),
             this_06 == (Transform *)0x0)) goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              (&VStack_19,this_06,in_stack_29);
          uStack_30._0_4_ = pVVar23->x;
          uStack_30._4_4_ = pVVar23->y;
          LStack_7.fields.OnRewardsReturned = (Action *)pVVar23->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          in_stack_29 = (MethodInfo *)((ulonglong)uStack_30 >> 0x20);
          in_stack_28 = (MethodInfo *)(auStack_16 + 8);
          a.z = (float)LStack_7.fields.OnRewardsReturned;
          a.x = (float)(undefined4)uStack_30;
          a.y = (float)uStack_30._4_4_;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)in_stack_28,a,fStack_27,(MethodInfo *)0x0);
          if (unaff_EDI == (WindTurbine *)0x0) goto code_?;
          MVRigidBody::MVRigidBody_AddImpulse_1
                    ((MVRigidBody *)unaff_EDI,*pVVar23,1,(MethodInfo *)0x0);
        }
      }
      else {
        VStack_19.y = (float)
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVRigidBody>__get_Key__
        ;
        this_01 = (List_1_UIPushOption_ *)(this->fields).keysToRemove;
        item = func_?();
        unaff_EDI = (WindTurbine *)0x0;
        if (this_01 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_01,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    unaff_EDI = (WindTurbine *)0x0;
    *puStack_14 = 0x104;
    uStack_2 = 0xffffffff;
    func_?();
    pLVar31 = (this->fields).keysToRemove;
    this = (WindTurbine *)0x0;
    if (pLVar31 != (List_1_System_Int32_ *)0x0) {
      while (pOVar32 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  pLVar31,
                                  MethodInfo__System__Collections__Generic__List<int>__get_Count__),
            unaff_EDI = this, (int)this < (int)pOVar32) {
        this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pWVar1->fields).affectedBodies;
        pLVar31 = (pWVar1->fields).keysToRemove;
        if ((pLVar31 == (List_1_System_Int32_ *)0x0) ||
           (key = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__get_Item
                            (pLVar31,(int32_t)this,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           this_02 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_02,key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                  );
        pLVar31 = (pWVar1->fields).keysToRemove;
        unaff_EDI = (WindTurbine *)((int)&this->klass + 1);
        this = unaff_EDI;
        if (pLVar31 == (List_1_System_Int32_ *)0x0) goto code_?;
      }
      this_03 = (List_1_UnityEngine_UIVertex_ *)(pWVar1->fields).keysToRemove;
      if (this_03 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_03,MethodInfo__System__Collections__Generic__List<int>__Clear__);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* WindTurbine(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine__ctor
               (WindTurbine *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).windStrength = 1000.0;
  (this->fields).windAreaSize = 10.0;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).keysToRemove = (List_1_System_Int32_ *)this_00;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    prefabObject = (ObjectPrefab *)
                   ShootableButton::ShootableButton_get_InputSignalReceiver
                             ((ShootableButton *)this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    pWVar1 = (WindTurbineObject *)(this->fields)._._.component;
    if (pWVar1 == (WindTurbineObject *)0x0) {
      pWVar2 = (WindTurbineObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__WindTurbineObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pWVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pWVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__WindTurbineObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pWVar2 = (WindTurbineObject *)0x0;
      if (bVar4) {
        pWVar2 = pWVar1;
      }
      if (pWVar2 == (WindTurbineObject *)0x0) goto code_?;
    }
    (this->fields).windTurbineObject = pWVar2;
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar5,(Type *)StringLiteral_windSize,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar6 == (Pool *)0x0) goto code_?;
    if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?();
      (this->fields).windAreaSize = *pfVar7;
      pDVar5 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pDVar5 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar5,(Type *)StringLiteral_windPitch,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar6 != (Pool *)0x0) {
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar7 = (float *)func_?();
          fVar8 = (this->fields).windAreaSize / _UNK_?;
          (this->fields).windPitch = *pfVar7;
          (this->fields).windStrength = fVar8 * _UNK_?;
          WindTurbine_Rescale(this,(MethodInfo *)0x0);
          WindTurbine_Rotate(this,(MethodInfo *)0x0);
          piVar9 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar9 = (uint)*piVar9 | 0x18000;
          pWVar1 = (this->fields).windTurbineObject;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
               *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          if (pWVar1 != (WindTurbineObject *)0x0) {
            pTVar10 = (pWVar1->fields).triggerBoxEvents;
            pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar11,(Object *)this,
                       MethodInfo__WindTurbine__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar10 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar10,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
              pWVar1 = (this->fields).windTurbineObject;
              if (pWVar1 != (WindTurbineObject *)0x0) {
                pTVar10 = (pWVar1->fields).triggerBoxEvents;
                pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar11,(Object *)this,
                           MethodInfo__WindTurbine__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar10 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar10,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
                  this_02 = (Dictionary_2_System_Int32_MVRigidBody_ *)func_?();
                  System.Core.dll::System::Collections::Generic::
                  HashSet`1[AvatarModifierPackage+AvatarModifier]::
                  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Dictionary__
                            );
                  (this->fields).affectedBodies = this_02;
                  (this->fields).isActive = 1;
                  return;
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
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0xbfc66666,0,0,0);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::WindTurbine::WindTurbine_triggerBoxEvents_TriggerExit
               (WindTurbine *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (e != (TriggerEventArgs *)0x0) {
    key = (e->fields).instigatorWOID;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields).affectedBodies;
    if (this_00 != (Dictionary_2_System_Int32_MVRigidBody_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        return;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).affectedBodies;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar2,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__get_Item_int_
                              ), this_01 != (TerrainUtility_TerrainMap *)0x0)) {
        x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)this_01,
                       MVInteractableBase_MethodInfo__UnityEngine__Component__GetComponent<MVInteractableBase>__
                      );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        if (x != (MVInteractableBase *)0x0) {
          (*(code *)(x->klass->vtable).__unknown_3.method)
                    (x,0xd,0xffffffff,(x->klass->vtable).__unknown_4.methodPtr);
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).affectedBodies;
          if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar2,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody>__Remove_int_
                      );
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

