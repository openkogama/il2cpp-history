
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
  if (pGVar1 != (GameObject *)0x0) {
    this_02 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                        );
    if (this_02 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Init
                (this_02,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
                 (MVWorldObjectClient *)this,(MethodInfo *)0x0);
      this_00 = (this_02->fields).controller;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar3 = (pVVar2->upVector).x;
      uVar4 = (pVVar2->upVector).y;
      unaff_ESI = (MvCharacterController *)0x0;
      if (this_00 != (MvCharacterController *)0x0) {
        center.y = (float)uVar4 * _UNK_?;
        center.x = (float)uVar3 * _UNK_?;
        center.z = (pVVar2->upVector).z * _UNK_?;
        MvCharacterController::MvCharacterController_Init(this_00,1.5,3.0,center,(MethodInfo *)0x0);
        unaff_ESI = (this_02->fields).controller;
        pHVar5 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                           ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (unaff_ESI != (MvCharacterController *)0x0) {
          (unaff_ESI->fields).IgnoreWoIds = pHVar5;
          func_?();
          pGVar1 = (this->fields)._._._._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            hoverCraftMotor =
                 (SimpleVehicleMotorBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (pGVar1,
                            HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                           );
            pVVar6 = (this->fields)._._.seatManager;
            if ((pVVar6 != (VehicleSeatManager *)0x0) &&
               (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (pVVar6->fields).seats,
               this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
            {
              RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_01,seatID,
                                 MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                );
              if (RVar7 != (RegexCharClass_SingleRange)0x0) {
                unaff_ESI = *(MvCharacterController **)((int)RVar7 + 0x18);
                iVar8 = func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                if (iVar8 == 0) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                             (MethodInfo *)0x0);
                  return (MVVehicleBase_LocalObjectsBase *)0x0;
                }
                if (hoverCraftMotor != (SimpleVehicleMotorBase *)0x0) {
                  pIStack_9 = TypeInfo__IVehicleCamera;
                  if (unaff_ESI == (MvCharacterController *)0x0) {
                    pIVar10 = (IVehicleCamera *)0x0;
code_?:
                    ppIVar11 = &(hoverCraftMotor->fields)._VehicleCamera_k__BackingField;
                    *ppIVar11 = pIVar10;
                    func_?(ppIVar11,pIVar10);
                    this_03 = (MVHoverCraft_LocalObjectsHoverCraft *)
                              func_?(TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
                    MVHoverCraft+LocalObjectsHoverCraft::MVHoverCraft_LocalObjectsHoverCraft__ctor
                              (this_03,(MVSimpleOneSeatVehicle *)this,this_02,hoverCraftMotor,
                               (MethodInfo *)0x0);
                    return (MVVehicleBase_LocalObjectsBase *)this_03;
                  }
                  pIVar10 = (IVehicleCamera *)func_?(unaff_ESI,TypeInfo__IVehicleCamera);
                  if (pIVar10 != (IVehicleCamera *)0x0) goto code_?;
                  goto code_?;
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
  func_?(unaff_ESI,pIStack_9);
  pcVar12 = (code *)swi(3);
  pMVar13 = (MVVehicleBase_LocalObjectsBase *)(*pcVar12)();
  return pMVar13;
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
    ppMVar5 = &(this->fields).IsMovingForward;
    *ppMVar5 = pMVar4;
    func_?(ppMVar5,pMVar4);
    pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
    if (pMVar1 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isMovingBackwards,2.0,0,(MethodInfo *)0x0);
    ppMVar5 = &(this->fields).IsMovingBackwards;
    *ppMVar5 = pMVar4;
    func_?(ppMVar5,pMVar4);
    pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
    if (pMVar1 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isGrounded,2.0,0,(MethodInfo *)0x0);
    ppMVar5 = &(this->fields).IsGrounded;
    *ppMVar5 = pMVar4;
    func_?(ppMVar5,pMVar4);
    pGVar6 = (this->fields)._._._._._.gameObject;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    this_00 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar6,
                         HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                        );
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
              ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
    cVar7 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)
                      (this,(this->klass->vtable).SetupVehicleEnergyContainerConfig.methodPtr);
    unaff_ESI = this_00;
    if (cVar7 == '\0') {
      pGVar6 = (this->fields)._._._._._.gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (pGVar6,
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
          ppCVar8 = &(this->fields).cullingSubscriberDynamic;
          *ppCVar8 = (CullingSubscriberDynamic *)unaff_EDI.m_Index;
          func_?(ppCVar8,unaff_EDI.m_Index);
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
    uVar9 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      (pMVar4->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?(&(pMVar4->fields).OnChange,pMVar10);
      unaff_ESI = this_00;
      if (this_00 == (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0) goto code_?;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
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
        pfVar11 = (float *)func_?(unaff_EDI.m_Index);
        HamsterWheelVisualization::HamsterWheelVisualization_Init
                  ((HamsterWheelVisualization *)this_00,vehicleSeatManager,*pfVar11,health,pMVar4,
                   isMovingBackwards,isGrounded,isInSpawner,(MethodInfo *)0x0);
        ppVVar12 = &(this->fields)._._.visualization;
        *ppVVar12 = (VehicleVisualizationBase *)this_00;
        func_?(ppVVar12,this_00);
        return;
      }
      goto code_?;
    }
    pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar10 = pMVar3;
    }
    if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar4->fields).OnChange = pMVar10;
    pMVar10 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar10 = pMVar3;
    }
    unaff_ESI = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar10 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  uVar9 = func_?(pMVar3,unaff_ESI);
code_?:
  func_?(uVar9);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    ppVVar2 = &(this->fields)._._.visualization;
    *ppVVar2 = pVVar1;
    func_?(ppVVar2,pVVar1);
    if (*ppVVar2 != (VehicleVisualizationBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)*ppVVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
                          ((Quaternion *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
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
                          ((Vector3 *)&stack0xffffffb0,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      uVar15 = pVVar14->x;
      uVar16 = pVVar14->y;
      fVar6 = pVVar14->z + fVar6;
      if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar17 != (PrefabPool *)0x0) {
          particlePrefab = (pPVar17->fields).particleExplosion;
          pGVar7 = (this->fields)._._._._._.gameObject;
          if ((pGVar7 != (GameObject *)0x0) &&
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
             pTVar8 != (Transform *)0x0)) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
            uVar18 = pVVar14->x;
            uVar19 = pVVar14->y;
            fStack_20 = pVVar14->z;
            fVar11 = (this->fields).deathExplosionDamageValue;
            fVar12 = (this->fields).deathExplosionRadius;
            fVar13 = (this->fields).deathExplosionImpulse;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_00 = (ExplosionEvent *)0x0;
            local = 1;
            fVar21 = (float)uVar18;
            fVar22 = (float)uVar19;
code_?:
            fStack_23 = fVar22 + (float)uVar16 + (float)uVar5;
            fStack_24 = fVar21 + (float)uVar15 + (float)uVar4;
            fStack_20 = fStack_20 + fVar6;
            position.y = fStack_23;
            position.x = fStack_24;
            position.z = fStack_20;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (particlePrefab,position,fVar11,fVar12,fVar13,local,this_00,ignoreIDs,
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
                              ((Vector3 *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
          uVar25 = pVVar14->x;
          uVar26 = pVVar14->y;
          fVar11 = pVVar14->z;
          fVar12 = (float)uVar25 + (float)uVar15 + (float)uVar4;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          worldPosition.y = (float)uVar26 + (float)uVar16 + (float)uVar5;
          worldPosition.x = fVar12;
          worldPosition.z = fVar11 + fVar6;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar17 != (PrefabPool *)0x0) {
            particlePrefab = (pPVar17->fields).particleExplosion;
            pGVar7 = (this->fields)._._._._._.gameObject;
            if ((pGVar7 != (GameObject *)0x0) &&
               (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
               pTVar8 != (Transform *)0x0)) {
              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffb0,pTVar8,(MethodInfo *)0x0);
              fVar21 = pVVar14->x;
              fVar22 = pVVar14->y;
              fStack_20 = pVVar14->z;
              fVar11 = (this->fields).deathExplosionDamageValue;
              fVar12 = (this->fields).deathExplosionRadius;
              fVar13 = (this->fields).deathExplosionImpulse;
              if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              local = 0;
              goto code_?;
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
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  pDVar2 = (this->fields)._._._.blueprintData;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
    pDVar2 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar4;
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings->
        _1).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                     );
    }
    iVar5 = Extensions::Extensions_GetClampedInt
                      (pDVar2,StringLiteral_vehicleEnergyStorage,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).storageMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).storageMaxValue,0x23
                       ,(MethodInfo *)0x0);
    __return_storage_ptr__->storage = iVar5;
    iVar5 = Extensions::Extensions_GetClampedInt
                      ((this->fields)._._._.blueprintData,StringLiteral_vehicleEnergyConsumption,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue,
                       4,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar5;
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

