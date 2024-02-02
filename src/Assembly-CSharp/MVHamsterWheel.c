
/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_CreateLocalObjects
          (MVHamsterWheel *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                   );
    func_?(&
                    SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                   );
    func_?(&TypeInfo__IVehicleCamera);
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
    func_?(&StringLiteral_Expected_camera_type_is_VehicleC);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (this_02 = (SmoothCharacterController *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                          ), this_02 != (SmoothCharacterController *)0x0)) {
    SmoothCharacterController::SmoothCharacterController_Init
              (this_02,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
               (MVWorldObjectClient *)this,(MethodInfo *)0x0);
    this_00 = (this_02->fields).controller;
    if (cRam_? == '\0') {
      in_stack_2 = &TypeInfo__UnityEngine__Vector3;
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->upVector).x;
    uVar5 = (pVVar3->upVector).y;
    unaff_ESI = (MvCharacterController *)0x0;
    if (this_00 != (MvCharacterController *)0x0) {
      center.y = (float)uVar5 * _UNK_?;
      center.x = (float)uVar4 * _UNK_?;
      center.z = (pVVar3->upVector).z * _UNK_?;
      MvCharacterController::MvCharacterController_Init(this_00,1.5,3.0,center,(MethodInfo *)0x0);
      unaff_ESI = (this_02->fields).controller;
      pHVar6 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                         ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (unaff_ESI != (MvCharacterController *)0x0) {
        (unaff_ESI->fields).IgnoreWoIds = pHVar6;
        in_stack_2 = (Vector3__Class **)&UNK_?;
        func_?(&(unaff_ESI->fields).IgnoreWoIds);
        pGVar1 = (this->fields)._._._._._.gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          motor = (SimpleVehicleMotorBase *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                            );
          pVVar7 = (this->fields)._._.seatManager;
          if (((pVVar7 != (VehicleSeatManager *)0x0) &&
              (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (pVVar7->fields).seats,
              this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
             && (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_01,seatID,
                                    MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                   ), RVar8 != (RegexCharClass_SingleRange)0x0)) {
            unaff_ESI = *(MvCharacterController **)((int)RVar8 + 0x18);
            iVar9 = func_?(unaff_ESI,TypeInfo__IVehicleCamera);
            if (iVar9 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,(MethodInfo *)0x0)
              ;
              return (MVVehicleBase_LocalObjectsBase *)0x0;
            }
            if (motor != (SimpleVehicleMotorBase *)0x0) {
              if (unaff_ESI == (MvCharacterController *)0x0) {
                pIVar10 = (IVehicleCamera *)0x0;
code_?:
                (motor->fields)._VehicleCamera_k__BackingField = pIVar10;
                func_?(&(motor->fields)._VehicleCamera_k__BackingField,pIVar10);
                this_03 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                          func_?(TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
                MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                          (this_03,(MVSimpleOneSeatVehicle *)this,this_02,motor,(MethodInfo *)0x0);
                return (MVVehicleBase_LocalObjectsBase *)this_03;
              }
              in_stack_2 = (Vector3__Class **)TypeInfo__IVehicleCamera;
              pIVar10 = (IVehicleCamera *)func_?(unaff_ESI,TypeInfo__IVehicleCamera);
              if (pIVar10 != (IVehicleCamera *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,in_stack_2);
  pcVar11 = (code *)swi(3);
  pMVar12 = (MVVehicleBase_LocalObjectsBase *)(*pcVar11)();
  return pMVar12;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVHamsterWheel *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar1->oneVector).x;
  uVar6 = (pVVar1->oneVector).y;
  fVar7 = (float)uVar5 * _UNK_?;
  fVar8 = (float)uVar6 * _UNK_?;
  fVar9 = (pVVar1->oneVector).z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = fVar2;
  fVar2 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = fVar3;
  fVar9 = fVar9 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar7 * fVar2;
  (__return_storage_ptr__->m_Extents).y = fVar8 * fVar2;
  (__return_storage_ptr__->m_Extents).z = fVar9;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_Initialize
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                   );
    func_?(&
                    HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                   );
    func_?(&MethodInfo__MVHamsterWheel__OnIsDeadChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_isMovingForward);
    func_?(&StringLiteral_isMovingBackwards);
    func_?(&StringLiteral_health);
    func_?(&StringLiteral_isGrounded);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
  if (pMVar1 == (MVRuntimeDataVariables *)0x0) {
code_?:
    func_?();
    pSVar2 = extraout_ECX;
code_?:
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?(unaff_EDI.m_Index,pSVar2);
  }
  else {
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isMovingForward,2.0,0,(MethodInfo *)0x0);
    (this->fields).IsMovingForward = pMVar4;
    func_?(&(this->fields).IsMovingForward,pMVar4);
    pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
    if (pMVar1 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isMovingBackwards,2.0,0,(MethodInfo *)0x0);
    (this->fields).IsMovingBackwards = pMVar4;
    func_?(&(this->fields).IsMovingBackwards,pMVar4);
    pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
    if (pMVar1 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isGrounded,2.0,0,(MethodInfo *)0x0);
    (this->fields).IsGrounded = pMVar4;
    func_?(&(this->fields).IsGrounded,pMVar4);
    pGVar5 = (this->fields)._._._._._.gameObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    this_00 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar5,
                         HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                        );
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
              ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
    cVar6 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)
                      (this,(this->klass->vtable).SetupVehicleEnergyContainerConfig.methodPtr);
    unaff_ESI = this_00;
    if (cVar6 == '\0') {
      pGVar5 = (this->fields)._._._._._.gameObject;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (pGVar5,
                   InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                  );
        if (this_00 != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) {
          unaff_ESI = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
          unaff_EDI.m_Index = func_?(TypeInfo__CullingSubscriberDynamic);
          CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                    ((CullingSubscriberDynamic *)unaff_EDI.m_Index,4.0,3,(GameObject *)unaff_ESI,
                     (GameObject__Array *)0x0,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)unaff_EDI.m_Index;
          func_?(&(this->fields).cullingSubscriberDynamic,unaff_EDI.m_Index);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pMVar4 = (this->fields)._._.IsVehicleDead;
    if (pMVar4 == (MVRuntimeDataVariable *)0x0) goto code_?;
    unaff_EDI.m_Index = (int32_t)(pMVar4->fields).OnChange;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,MethodInfo__MVHamsterWheel__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)unaff_EDI.m_Index,(Delegate *)this_01,(MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?(&(pMVar4->fields).OnChange,pMVar7);
      unaff_ESI = this_00;
      if (this_00 == (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) goto code_?;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      vehicleSeatManager = (this->fields)._._.seatManager;
      unaff_EDI.m_Index = *(int32_t *)((int)&(this->fields)._._._._._._ + 0x4c);
      if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
      }
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
                RuntimeVariablesRepository_GetRuntimeVariables(unaff_EDI.m_Index,(MethodInfo *)0x0);
      if (this_02 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_02,(Object *)StringLiteral_health,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      health = (this->fields)._.Health;
      pMVar4 = (this->fields).IsMovingForward;
      isMovingBackwards = (this->fields).IsMovingBackwards;
      isGrounded = (this->fields).IsGrounded;
      isInSpawner = (*(code *)(this->klass->vtable).get_IsInSpawner.method)
                              (this,(this->klass->vtable).SetupVehicleEnergyContainerConfig.
                                    methodPtr);
      if (unaff_EDI.m_Index == 0) goto code_?;
      pSVar2 = TypeInfo__System__Single;
      if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar8 = (float *)func_?(unaff_EDI.m_Index);
        HamsterWheelVisualization::HamsterWheelVisualization_Init
                  ((HamsterWheelVisualization *)this_00,vehicleSeatManager,*pfVar8,health,pMVar4,
                   isMovingBackwards,isGrounded,isInSpawner,(MethodInfo *)0x0);
        (this->fields)._._.visualization = (VehicleVisualizationBase *)this_00;
        func_?(&(this->fields)._._.visualization,this_00);
        return;
      }
      goto code_?;
    }
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar3;
    }
    pMVar9 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar4->fields).OnChange = pMVar7;
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar3;
    }
    unaff_ESI = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?(pMVar3,unaff_ESI);
  pMVar9 = extraout_ECX_00;
code_?:
  func_?(pMVar3,pMVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_InitializeInventory
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                   );
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pVVar1 = (VehicleVisualizationBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (this_00,
                        HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                       );
    (this->fields)._._.visualization = pVVar1;
    func_?(&(this->fields)._._.visualization,pVVar1);
    pVVar1 = (this->fields)._._.visualization;
    if (pVVar1 != (VehicleVisualizationBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pVVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_OnIsDeadChange
               (MVHamsterWheel *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    func_?(&StringLiteral_Hamster_wheel_has_died);
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
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Hamster_wheel_has_died,(MethodInfo *)0x0);
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar3->downVector).x;
    uVar5 = (pVVar3->downVector).y;
    fVar6 = (pVVar3->downVector).z;
    pGVar7 = (this->fields)._._._._._.gameObject;
    if ((pGVar7 != (GameObject *)0x0) &&
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
      ppVVar10 = (Vector3__Class **)pQVar9->x;
      fVar11 = pQVar9->y;
      fVar12 = pQVar9->z;
      fVar13 = pQVar9->w;
      if (cRam_? == '\0') {
        ppVVar10 = &TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = fVar11;
      rotation.x = (float)ppVVar10;
      rotation.z = fVar12;
      rotation.w = fVar13;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffa0,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      uVar15 = pVVar14->x;
      uVar16 = pVVar14->y;
      fVar11 = (float)uVar15 + (float)uVar4;
      fVar12 = (float)uVar16 + (float)uVar5;
      fVar6 = pVVar14->z + fVar6;
      if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar17 != (PrefabPool *)0x0) {
          pPVar18 = (pPVar17->fields).particleExplosion;
          pGVar7 = (this->fields)._._._._._.gameObject;
          if ((pGVar7 != (GameObject *)0x0) &&
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
             pTVar8 != (Transform *)0x0)) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
            uVar19 = pVVar14->x;
            uVar20 = pVVar14->y;
            fVar21 = pVVar14->z;
            fVar13 = (this->fields).deathExplosionDamageValue;
            fVar22 = (this->fields).deathExplosionRadius;
            fVar23 = (this->fields).deathExplosionImpulse;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position_00.y = (float)uVar20 + fVar12;
            position_00.x = (float)uVar19 + fVar11;
            position_00.z = fVar21 + fVar6;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (pPVar18,position_00,fVar13,fVar22,fVar23,1,(ExplosionEvent *)0x0,ignoreIDs,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar7 = (this->fields)._._._._._.gameObject;
        if ((pGVar7 != (GameObject *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar7,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
          uVar24 = pVVar14->x;
          uVar25 = pVVar14->y;
          fVar13 = pVVar14->z;
          fVar22 = (float)uVar24 + fVar11;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          worldPosition.y = (float)uVar25 + fVar12;
          worldPosition.x = fVar22;
          worldPosition.z = fVar13 + fVar6;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar17 != (PrefabPool *)0x0) {
            pPVar18 = (pPVar17->fields).particleExplosion;
            pGVar7 = (this->fields)._._._._._.gameObject;
            if ((pGVar7 != (GameObject *)0x0) &&
               (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
               pTVar8 != (Transform *)0x0)) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
              uVar26 = pVVar14->x;
              uVar27 = pVVar14->y;
              fVar21 = pVVar14->z;
              fVar13 = (this->fields).deathExplosionDamageValue;
              fVar22 = (this->fields).deathExplosionRadius;
              fVar23 = (this->fields).deathExplosionImpulse;
              if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              position.y = (float)uVar27 + fVar12;
              position.x = (float)uVar26 + fVar11;
              position.z = fVar21 + fVar6;
              SharedWorldObjectGameplayFunctions+Explosion::
              SharedWorldObjectGameplayFunctions_Explosion_Explode
                        (pPVar18,position,fVar13,fVar22,fVar23,0,this_00,ignoreIDs,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  isDead = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(isDead,pBVar1);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVHamsterWheel *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                   );
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  pEVar1 = TypeInfo__Extensions;
  if ((this->fields)._._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar2 = (this->fields)._._._.blueprintData;
    uVar3 = (TypeInfo__Extensions->_1).cctor_finished_or_no_cctor;
    __return_storage_ptr__->usingEnergy = 0;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->storage = 0;
    __return_storage_ptr__->consumption = 0;
    if (uVar3 == 0) {
      func_?(pEVar1);
    }
    bVar4 = Extensions::Extensions_GetBool
                      (pDVar2,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pHVar5 = 
    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings;
    pDVar2 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar4;
    if ((pHVar5->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pHVar5);
      pHVar5 = 
      TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings;
    }
    iVar6 = Extensions::Extensions_GetClampedInt
                      (pDVar2,StringLiteral_vehicleEnergyStorage,
                       (pHVar5->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pHVar5->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x23,(MethodInfo *)0x0);
    pHVar5 = 
    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings;
    __return_storage_ptr__->storage = iVar6;
    iVar6 = Extensions::Extensions_GetClampedInt
                      ((this->fields)._._._.blueprintData,StringLiteral_vehicleEnergyConsumption,
                       (pHVar5->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMinValue,
                       (pHVar5->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMaxValue,4,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar6;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  __return_storage_ptr__->storage = -1;
  return __return_storage_ptr__;
}


/* MVHamsterWheel(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel__ctor
               (MVHamsterWheel *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).deathExplosionDamageValue = 40.0;
  (this->fields).deathExplosionRadius = 10.0;
  (this->fields).deathExplosionImpulse = 2000.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
              ((MVSimpleOneSeatVehicle *)this,data,(pPVar1->fields).mvHamsterWheelPrefab,
               worldObjects,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._._._._.interactionFlags + 4) = uVar2;
    (this->fields)._._.documentationType = 0x1a;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_get_IsDead
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
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
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

