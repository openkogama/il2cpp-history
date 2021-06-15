
/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_CreateLocalObjects
          (MVHamsterWheel *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_01 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (pGVar1,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    if (this_01 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Init
                (this_01,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
                 (MVWorldObjectClient *)this,(MethodInfo *)0x0);
      this_02 = (MvCharacterController *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         (&VStack_3,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_3,*pVVar2,0.5,(MethodInfo *)0x0);
      unaff_ESI = (Object *)0x0;
      if (this_02 != (MvCharacterController *)0x0) {
        MvCharacterController::MvCharacterController_Init(this_02,1.5,3.0,*pVVar2,(MethodInfo *)0x0)
        ;
        unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                               (MethodInfo *)0x0);
        pHVar4 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                           ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (unaff_ESI != (Object *)0x0) {
          unaff_ESI[0xb].monitor = (MonitorData *)pHVar4;
          pGVar1 = (this->fields)._._._._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            this_03 = (DayNightCycle *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                (pGVar1,
                                 HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                                );
            pVVar5 = (this->fields)._._.seatManager;
            if ((pVVar5 != (VehicleSeatManager *)0x0) &&
               (this_00 = (pVVar5->fields).seats, this_00 != (List_1_VehicleSeatBase_ *)0x0)) {
              this_04 = (KogamaSettingNumericBase_1_System_Single_ *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                   seatID,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                  );
              if (this_04 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
                unaff_ESI = (Object *)
                            MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                      (this_04,(MethodInfo *)0x0);
                iVar6 = func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                if (iVar6 == 0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                             (MethodInfo *)0x0);
                  return (MVVehicleBase_LocalObjectsBase *)0x0;
                }
                if (this_03 != (DayNightCycle *)0x0) {
                  pIStack_7 = TypeInfo__IVehicleCamera;
                  if (unaff_ESI == (Object *)0x0) {
                    value = (CelestialParam *)0x0;
code_?:
                    DayNightCycle::DayNightCycle_set_CurrentMoonParam
                              (this_03,value,(MethodInfo *)0x0);
                    this_05 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                              func_?(TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
                    MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                    MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                              (this_05,(MVSimpleOneSeatVehicle *)this,this_01,
                               (SimpleVehicleMotorBase *)this_03,(MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)this_05;
                  }
                  value = (CelestialParam *)func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                  if (value != (CelestialParam *)0x0) goto code_?;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,pIStack_7);
  pcVar8 = (code *)swi(3);
  pMVar9 = (MVVehicleBase_LocalObjectsBase *)(*pcVar8)();
  return pMVar9;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_Destroy
               (MVHamsterWheel *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberDynamic;
  if (this_00 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
  }
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVHamsterWheel *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
            ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            ((Vector3 *)&stack0xffffffe8,*pVVar1,2.0,(MethodInfo *)0x0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?();
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_Initialize
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pOVar1 == (ObjectPrefab *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       ((MVRuntimeDataVariables *)pOVar1,StringLiteral_isMovingForward,2.0,0,
                        (MethodInfo *)0x0);
    (this->fields).IsMovingForward = pMVar2;
    pOVar1 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar1 == (ObjectPrefab *)0x0) goto code_?;
    pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       ((MVRuntimeDataVariables *)pOVar1,StringLiteral_isMovingBackwards,2.0,0,
                        (MethodInfo *)0x0);
    (this->fields).IsMovingBackwards = pMVar2;
    pOVar1 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar1 == (ObjectPrefab *)0x0) goto code_?;
    pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       ((MVRuntimeDataVariables *)pOVar1,StringLiteral_isGrounded,2.0,0,
                        (MethodInfo *)0x0);
    (this->fields).IsGrounded = pMVar2;
    pGVar3 = (this->fields)._._._._._.gameObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (pGVar3,
                         HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                        );
    this_05 = this_00;
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
              ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
    cVar4 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
    if (cVar4 == '\0') {
      pGVar3 = (this->fields)._._._._._.gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                  (pGVar3,
                   InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                  );
        if (this_00 != (UseInteratorVisualization__Array *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,(MethodInfo *)0x0);
          this_01 = (CullingSubscriberDynamic *)func_?();
          this_04 = (Behaviour *)0x3;
          CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                    (this_01,4.0,3,pGVar3,(GameObject__Array *)0x0,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberDynamic = this_01;
          this_05 = (UseInteratorVisualization__Array *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (this_04,1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pMVar2 = (this->fields)._._.IsVehicleDead;
    if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar5 = (pMVar2->fields).OnChange;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__MVHamsterWheel__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar6;
      }
      if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    (pMVar2->fields).OnChange = pMVar5;
    if (this_05 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_05,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    vehicleSeatManager = (this->fields)._._.seatManager;
    worldObjectType =
         System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
         Object,System::Object]::
         Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                   ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                    this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
              RuntimeVariablesRepository_GetRuntimeVariables
                        ((WorldObjectType__Enum)worldObjectType,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_03,(Type *)StringLiteral_health,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    health = (this->fields)._.Health;
    pMVar2 = (this->fields).IsMovingForward;
    isMovingBackwards = (this->fields).IsMovingBackwards;
    isGrounded = (this->fields).IsGrounded;
    isInSpawner = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?();
      HamsterWheelVisualization::HamsterWheelVisualization_Init
                ((HamsterWheelVisualization *)this_05,vehicleSeatManager,*pfVar8,health,pMVar2,
                 isMovingBackwards,isGrounded,isInSpawner,(MethodInfo *)0x0);
      (this->fields)._._.visualization = (VehicleVisualizationBase *)this_05;
      return;
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

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_InitializeInventory
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (this_00,
                         HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                        );
    (this->fields)._._.visualization = (VehicleVisualizationBase *)this_01;
    if (this_01 != (UseInteratorVisualization__Array *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_OnIsDeadChange
               (MVHamsterWheel *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isDead != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((isDead->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar2 = (char *)func_?(isDead);
    if (*pcVar2 == '\0') {
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Hamster_wheel_has_died,(MethodInfo *)0x0);
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    uStack_3 = CONCAT44(ignoreIDs,(undefined4)uStack_3);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                       ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
    VStack_5.y = pVVar4->x;
    VStack_5.z = pVVar4->y;
    fVar6 = pVVar4->z;
    pGVar7 = (this->fields)._._._._._.gameObject;
    if ((pGVar7 != (GameObject *)0x0) &&
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
      fVar10 = pQVar9->x;
      fVar11 = pQVar9->y;
      fVar12 = pQVar9->z;
      fVar13 = pQVar9->w;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
      VVar14 = *pVVar4;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      rotation.y = fVar11;
      rotation.x = fVar10;
      rotation.z = fVar12;
      rotation.w = fVar13;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffcc,rotation,VVar14,(MethodInfo *)0x0);
      VVar14.z = fVar6;
      VVar14.x = VStack_5.y;
      VVar14.y = VStack_5.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffcc,VVar14,*pVVar4,(MethodInfo *)0x0);
      VVar15 = *pVVar4;
      VVar16 = *pVVar4;
      VVar14 = *pVVar4;
      if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        pPVar17 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar17 != (PrefabPool *)0x0) {
          pPVar18 = PrefabPool::PrefabPool_get_ParticleExplosion(pPVar17,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._._._._._.gameObject;
          if ((pGVar7 != (GameObject *)0x0) &&
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_5,pTVar8,(MethodInfo *)0x0);
            uVar19._0_4_ = pVVar4->x;
            uVar19._4_4_ = pVVar4->y;
            fVar6 = pVVar4->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            VVar16.z = fVar6;
            VVar16.x = (float)uVar19;
            VVar16.y = SUB84(uVar19,4);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffd8,VVar16,VVar15,(MethodInfo *)0x0);
            fVar6 = (this->fields).deathExplosionDamageValue;
            fVar10 = (this->fields).deathExplosionRadius;
            fVar11 = (this->fields).deathExplosionImpulse;
            uVar20._0_4_ = pVVar4->x;
            uVar20._4_4_ = pVVar4->y;
            fVar12 = pVVar4->z;
            VStack_5.z = fVar11;
            if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
              uVar20._4_4_ = (float)&UNK_?;
              func_?();
            }
            VVar15.z = fVar12;
            VVar15.x = (float)uVar20;
            VVar15.y = SUB84(uVar20,4);
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (pPVar18,VVar15,fVar6,fVar10,VStack_5.z,1,(ExplosionEvent *)0x0,
                       (HashSet_1_System_Int32_ *)((ulonglong)uStack_3 >> 0x20),(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar7 = (this->fields)._._._._._.gameObject;
        if ((pGVar7 != (GameObject *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffcc,pTVar8,(MethodInfo *)0x0);
          VStack_5.y = pVVar4->x;
          VStack_5.z = pVVar4->y;
          fVar6 = pVVar4->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fVar6;
          a.x = VStack_5.y;
          a.y = VStack_5.z;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffcc,a,VVar14,(MethodInfo *)0x0);
          uStack_3._0_4_ = pVVar4->x;
          uStack_3._4_4_ = pVVar4->y;
          fVar6 = pVVar4->z;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          VStack_5.z = (float)this_00;
          worldPosition.z = fVar6;
          worldPosition.x = (float)(undefined4)uStack_3;
          worldPosition.y = uStack_3._4_4_;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?(TypeInfo__PrefabPool);
          }
          pPVar17 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar17 != (PrefabPool *)0x0) {
            pPVar18 = PrefabPool::PrefabPool_get_ParticleExplosion(pPVar17,(MethodInfo *)0x0);
            pGVar7 = (this->fields)._._._._._.gameObject;
            if ((pGVar7 != (GameObject *)0x0) &&
               (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
               pTVar8 != (Transform *)0x0)) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffcc,pTVar8,(MethodInfo *)0x0);
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffd8,*pVVar4,VVar16,(MethodInfo *)0x0);
              fVar6 = (this->fields).deathExplosionDamageValue;
              fStack_21 = (this->fields).deathExplosionRadius;
              fVar10 = (this->fields).deathExplosionImpulse;
              uVar22._0_4_ = pVVar4->x;
              uVar22._4_4_ = pVVar4->y;
              fVar11 = pVVar4->z;
              uStack_3._4_4_ = fVar10;
              if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0))
              {
                uVar22._4_4_ = (float)&UNK_?;
                func_?();
              }
              position.z = fVar11;
              position.x = (float)uVar22;
              position.y = SUB84(uVar22,4);
              SharedWorldObjectGameplayFunctions+Explosion::
              SharedWorldObjectGameplayFunctions_Explosion_Explode
                        (pPVar18,position,fVar6,fStack_21,uStack_3._4_4_,0,
                         (ExplosionEvent *)VStack_5.z,ignoreIDs,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  isDead = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(isDead,pBVar1);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* MVHamsterWheel(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel__ctor
               (MVHamsterWheel *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).deathExplosionDamageValue = 40.0;
  (this->fields).deathExplosionRadius = 10.0;
  (this->fields).deathExplosionImpulse = 2000.0;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    _vehiclePrefab =
         (VehicleBaseObject *)
         PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
         PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                   ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,(MethodInfo *)0x0);
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
              ((MVSimpleOneSeatVehicle *)this,data,_vehiclePrefab,worldObjects,(MethodInfo *)0x0);
    (this->fields)._._.documentationType = 0x1a;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_get_IsDead
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      goto code_?;
    }
  }
  pOVar1 = (Object *)func_?(0);
code_?:
  func_?(pOVar1);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

