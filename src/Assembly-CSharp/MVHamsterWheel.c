
/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_CreateLocalObjects
          (MVHamsterWheel *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IVehicleCamera);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expected_camera_type_is_VehicleC);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (this_00 = (SmoothCharacterController *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                          ), this_00 != (SmoothCharacterController *)0x0)) {
    SmoothCharacterController::SmoothCharacterController_Init
              (this_00,(this->fields)._._._._._.gameObject,(CullingSubscriberBase *)0x0,
               (MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pMVar2 = (this_00->fields).controller;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar3 = _UNK_?;
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (pVVar4->upVector).x;
    fVar6 = (float)uVar5 * _UNK_?;
    fVar7 = (pVVar4->upVector).y * _UNK_?;
    fVar8 = (pVVar4->upVector).z * _UNK_?;
    if (pMVar2 != (MvCharacterController *)0x0) {
      (pMVar2->fields).center.x = fVar6;
      (pMVar2->fields).center.y = fVar7;
      (pMVar2->fields).center.z = fVar8;
      (pMVar2->fields).elipsoidRadius.x = fVar3;
      (pMVar2->fields).elipsoidRadius.y = fVar3;
      (pMVar2->fields).centerBase.x = fVar6;
      (pMVar2->fields).centerBase.y = fVar7;
      (pMVar2->fields).centerBase.z = fVar8;
      (pMVar2->fields).elipsoidRadius.z = fVar3;
      fVar7 = (pMVar2->fields).elipsoidRadius.y;
      (pMVar2->fields).radiusBase.x = (pMVar2->fields).elipsoidRadius.x;
      (pMVar2->fields).radiusBase.y = fVar7;
      (pMVar2->fields).radiusBase.z = fVar3;
      pMVar2 = (this_00->fields).controller;
      pHVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (pMVar2 != (MvCharacterController *)0x0) {
        bVar10 = iRam_? != 0;
        (pMVar2->fields).IgnoreWoIds = pHVar9;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(pMVar2->fields).IgnoreWoIds >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pGVar1 = (this->fields)._._._._._.gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          motor = (SimpleVehicleMotorBase *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             HamsterWheelMotor_MethodInfo__UnityEngine__GameObject__AddComponent<HamsterWheelMotor>__
                            );
          pVVar15 = (this->fields)._._.seatManager;
          if ((pVVar15 != (VehicleSeatManager *)0x0) &&
             (pLVar16 = (pVVar15->fields).seats, pLVar16 != (List_1_VehicleSeatBase_ *)0x0)) {
            if ((uint)(pLVar16->fields)._size <= (uint)seatID) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              pMVar18 = (MVVehicleBase_LocalObjectsBase *)(*pcVar17)();
              return pMVar18;
            }
            pVVar19 = (pLVar16->fields)._items;
            if (pVVar19 != (VehicleSeatBase__Array *)0x0) {
              if ((uint)pVVar19->max_length <= (uint)seatID) {
                FUN_?();
                pcVar17 = (code *)swi(3);
                pMVar18 = (MVVehicleBase_LocalObjectsBase *)(*pcVar17)();
                return pMVar18;
              }
              if (pVVar19->vector[seatID] != (VehicleSeatBase *)0x0) {
                pMVar20 = (pVVar19->vector[seatID]->fields).seatCamera;
                lVar21 = FUN_?(pMVar20);
                pIVar22 = TypeInfo__IVehicleCamera;
                if (lVar21 == 0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Expected_camera_type_is_VehicleC,
                             (MethodInfo *)0x0);
                  this_01 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)0x0;
                }
                else {
                  if (motor == (SimpleVehicleMotorBase *)0x0) goto code_?;
                  if (pMVar20 == (MVCameraBase *)0x0) {
                    pIVar23 = (IVehicleCamera *)0x0;
                  }
                  else {
                    pIVar23 = (IVehicleCamera *)FUN_?(pMVar20,TypeInfo__IVehicleCamera);
                    if (pIVar23 == (IVehicleCamera *)0x0) {
                      FUN_?(pMVar20,pIVar22);
                      pcVar17 = (code *)swi(3);
                      pMVar18 = (MVVehicleBase_LocalObjectsBase *)(*pcVar17)();
                      return pMVar18;
                    }
                  }
                  bVar10 = iRam_? != 0;
                  (motor->fields)._VehicleCamera_k__BackingField = pIVar23;
                  if (bVar10) {
                    uVar11 = (uint)((ulonglong)&(motor->fields)._VehicleCamera_k__BackingField >>
                                   0xc);
                    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                    do {
                      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                      LOCK();
                      bVar10 = uVar13 == *puVar14;
                      if (bVar10) {
                        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar10);
                  }
                  this_01 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)
                            FUN_?(TypeInfo__MVHamsterWheel__LocalObjectsHamsterWheel);
                  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
                            (this_01,(MVSimpleOneSeatVehicle *)this,this_00,motor,(MethodInfo *)0x0)
                  ;
                }
                return (MVVehicleBase_LocalObjectsBase *)this_01;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  pMVar18 = (MVVehicleBase_LocalObjectsBase *)(*pcVar17)();
  return pMVar18;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVHamsterWheel *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = _UNK_?;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = (pVVar1->oneVector).y;
  fVar7 = (pVVar1->oneVector).z;
  uVar8 = (pVVar1->oneVector).x;
  fVar9 = (float)uVar8 * TypeRef__System__Activator__T._0_4_;
  (__return_storage_ptr__->m_Center).x = fVar2;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar9 * fVar5;
  (__return_storage_ptr__->m_Extents).y = (fVar6 + fVar6) * fVar5;
  (__return_storage_ptr__->m_Extents).z = (fVar7 + fVar7) * fVar5;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_Initialize
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberDynamic);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVHamsterWheel__OnIsDeadChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isMovingForward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isMovingBackwards);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isGrounded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
  if (pMVar1 != (MVRuntimeDataVariables *)0x0) {
    pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar1,StringLiteral_isMovingForward,TypeRef__System__Activator__T._0_4_,0,
                        (MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).IsMovingForward = pMVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).IsMovingForward >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
    if (pMVar1 != (MVRuntimeDataVariables *)0x0) {
      pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                         (pMVar1,StringLiteral_isMovingBackwards,TypeRef__System__Activator__T._0_4_
                          ,0,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).IsMovingBackwards = pMVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).IsMovingBackwards >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pMVar1 = (this->fields)._._._._._.runtimeDataVariables;
      if (pMVar1 != (MVRuntimeDataVariables *)0x0) {
        pMVar2 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                           (pMVar1,StringLiteral_isGrounded,TypeRef__System__Activator__T._0_4_,0,
                            (MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).IsGrounded = pMVar2;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).IsGrounded >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pMVar8 = 
        HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
        ;
        pGVar9 = (this->fields)._._._._._.gameObject;
        if (pGVar9 != (GameObject *)0x0) {
          if ((
              HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                         );
          }
          this_00 = (HamsterWheelVisualization *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentInChildren_3
                              (pGVar9,0,((pMVar8->field7_0x38).rgctx_data)->method);
          MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_Initialize
                    ((MVSimpleOneSeatVehicle *)this,(MethodInfo *)0x0);
          cVar10 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                            (this,(this->klass->vtable).get_IsInSpawner.method);
          if (cVar10 == '\0') {
            pGVar9 = (this->fields)._._._._._.gameObject;
            if ((pGVar9 == (GameObject *)0x0) ||
               (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar9,
                           InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                          ), this_00 == (HamsterWheelVisualization *)0x0))
            goto code_?;
            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_00,(MethodInfo *)0x0);
            this_01 = (CullingSubscriberDynamic *)FUN_?(TypeInfo__CullingSubscriberDynamic);
            CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                      (this_01,_UNK_?,3,pGVar9,(GameObject__Array *)0x0,0,(MethodInfo *)0x0)
            ;
            bVar3 = iRam_? != 0;
            (this->fields).cullingSubscriberDynamic = this_01;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar3 = uVar6 == *puVar7;
                if (bVar3) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_00,1,(MethodInfo *)0x0);
          }
          pMVar2 = (this->fields)._._.IsVehicleDead;
          if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
            pMVar11 = (pMVar2->fields).OnChange;
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)this,
                       MethodInfo__MVHamsterWheel__OnIsDeadChange_System__Object_,(MethodInfo *)0x0)
            ;
            pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar11,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pMVar11 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar2->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar11->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar12 = pMVar11;
              }
              if (pMVar12 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              (pMVar2->fields).OnChange = pMVar12;
              pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar11->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar12 = pMVar11;
              }
              if (pMVar12 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar4 = (uint)((ulonglong)&(pMVar2->fields).OnChange >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar3 = uVar6 == *puVar7;
                if (bVar3) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            if ((this_00 != (HamsterWheelVisualization *)0x0) &&
               (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0),
               pGVar9 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar9,1,(MethodInfo *)0x0);
              vehicleSeatManager = (this->fields)._._.seatManager;
              worldObjectType = (this->fields)._._._._._._.type;
              if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c ==
                  0) {
                FUN_?();
              }
              this_03 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
                        RuntimeVariablesRepository_GetRuntimeVariables
                                  (worldObjectType,(MethodInfo *)0x0);
              if (this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (this_03,(Object *)StringLiteral_health,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                health = (this->fields)._.Health;
                pMVar2 = (this->fields).IsMovingForward;
                isMovingBackwards = (this->fields).IsMovingBackwards;
                isGrounded = (this->fields).IsGrounded;
                isInSpawner = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                                        (this,(this->klass->vtable).get_IsInSpawner.method);
                if (pOVar14 != (Object *)0x0) {
                  if ((pOVar14->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar14,lRam_?);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  HamsterWheelVisualization::HamsterWheelVisualization_Init
                            (this_00,vehicleSeatManager,*(float *)&pOVar14[1].klass,health,pMVar2,
                             isMovingBackwards,isGrounded,isInSpawner,(MethodInfo *)0x0);
                  bVar3 = iRam_? != 0;
                  (this->fields)._._.visualization = (VehicleVisualizationBase *)this_00;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(this->fields)._._.visualization >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_InitializeInventory
               (MVHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = 
  HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
  ;
  this_00 = (this->fields)._._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   HamsterWheelVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<HamsterWheelVisualization>__
                   );
    }
    pVVar2 = (VehicleVisualizationBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    bVar3 = iRam_? != 0;
    (this->fields)._._.visualization = pVVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._._.visualization >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pVVar2 = (this->fields)._._.visualization;
    if (pVVar2 != (VehicleVisualizationBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,0,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pVVar2 == (VehicleVisualizationBase *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar9 = (pVVar2->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pVVar2,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar9,0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_OnIsDeadChange
               (MVHamsterWheel *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hamster_wheel_has_died);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isDead == (Object *)0x0) goto code_?;
  if ((isDead->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(isDead);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)&isDead[1].klass != '\0') {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Hamster_wheel_has_died,(MethodInfo *)0x0);
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    pGVar3 = (this->fields)._._._._._.gameObject;
    VStack_4.x = (pVVar2->downVector).x;
    VStack_4.y = (pVVar2->downVector).y;
    fVar5 = (pVVar2->downVector).z;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    uStack_8 = 0;
    pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar9);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar11 = (float)uStack_8 + (float)uStack_8;
    fVar12 = uStack_7._4_4_ + uStack_7._4_4_;
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = ((float)uStack_7 + (float)uStack_7) * (float)uStack_7;
    uVar10._0_4_ = (pVVar2->forwardVector).x;
    uVar10._4_4_ = (pVVar2->forwardVector).y;
    fVar14 = ((float)uStack_7 + (float)uStack_7) * uStack_8._4_4_;
    fVar15 = (pVVar2->forwardVector).z;
    fVar16 = (_UNK_? - (fVar11 * (float)uStack_8 + fVar12 * uStack_7._4_4_)) *
             (float)(undefined4)uVar10 +
             (fVar12 * (float)uStack_7 - fVar11 * uStack_8._4_4_) * (float)uVar10._4_4_ +
             (fVar12 * uStack_8._4_4_ + fVar11 * (float)uStack_7) * fVar15 + VStack_4.x;
    afStackX_10[0] =
         (_UNK_? - (fVar11 * (float)uStack_8 + fVar13)) * (float)uVar10._4_4_ +
         (fVar11 * uStack_8._4_4_ + fVar12 * (float)uStack_7) * (float)(undefined4)uVar10 +
         (fVar11 * uStack_7._4_4_ - fVar14) * fVar15 + VStack_4.y;
    fVar5 = (fVar11 * (float)uStack_7 - fVar12 * uStack_8._4_4_) * (float)(undefined4)uVar10 +
             (fVar14 + fVar11 * uStack_7._4_4_) * (float)uVar10._4_4_ +
             (_UNK_? - (fVar12 * uStack_7._4_4_ + fVar13)) * fVar15 + fVar5;
    uStack_7 = uVar10;
    if ((this->fields)._._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar17 == (PrefabPool *)0x0) goto code_?;
      pGVar3 = (this->fields)._._._._._.gameObject;
      particlePrefab = (pPVar17->fields).particleExplosion;
      if ((pGVar3 == (GameObject *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar9,&VStack_4);
      fVar13 = VStack_4.z;
      fVar16 = fVar16 + VStack_4.x;
      fVar14 = afStackX_10[0] + VStack_4.y;
      fVar15 = (this->fields).deathExplosionDamageValue;
      fVar11 = (this->fields).deathExplosionRadius;
      fVar12 = (this->fields).deathExplosionImpulse;
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      explosionEvent = (ExplosionEvent *)0x0;
      local = 1;
      VStack_4.y = fVar14;
      VStack_4.x = fVar16;
    }
    else {
      pGVar3 = (this->fields)._._._._._.gameObject;
      if ((pGVar3 == (GameObject *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0)) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar9,&VStack_4);
      explosionEvent =
           (ExplosionEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)
      ;
      fVar14 = afStackX_10[0];
      uVar18._0_4_ = fVar16 + VStack_4.x;
      (explosionEvent->fields)._._RuntimeEventType_k__BackingField = 3;
      VStack_4.z = fVar5 + VStack_4.z;
      uVar18._4_4_ = afStackX_10[0] + VStack_4.y;
      VStack_4._0_8_ = uVar18;
      pIVar19 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_WorldPosToFineGrainedLocalPos
                         ((IntVector *)afStackX_10,&VStack_4,(MethodInfo *)0x0);
      bVar20 = cRam_? == '\0';
      iVar21 = pIVar19->y;
      iVar22 = pIVar19->z;
      (explosionEvent->fields)._.position.x = pIVar19->x;
      (explosionEvent->fields)._.position.y = iVar21;
      (explosionEvent->fields)._.position.z = iVar22;
      if (bVar20) {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar17 == (PrefabPool *)0x0) goto code_?;
      pGVar3 = (this->fields)._._._._._.gameObject;
      particlePrefab = (pPVar17->fields).particleExplosion;
      if ((pGVar3 == (GameObject *)0x0) ||
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar9,&VStack_4);
      fVar13 = VStack_4.z;
      fVar16 = fVar16 + VStack_4.x;
      fVar14 = fVar14 + VStack_4.y;
      fVar15 = (this->fields).deathExplosionDamageValue;
      fVar11 = (this->fields).deathExplosionRadius;
      fVar12 = (this->fields).deathExplosionImpulse;
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      local = 0;
      VStack_4.y = fVar14;
      VStack_4.x = fVar16;
    }
    VStack_4.z = fVar5 + fVar13;
    SharedWorldObjectGameplayFunctions+Explosion::
    SharedWorldObjectGameplayFunctions_Explosion_Explode
              (particlePrefab,&VStack_4,fVar15,fVar11,fVar12,local,explosionEvent,ignoreIDs,
               (MethodInfo *)0x0);
  }
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVHamsterWheel *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  if ((this->fields)._._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (this->fields)._._._.blueprintData;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pHVar3 = 
    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings;
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if (*(int *)&(pHVar3->_1).field_0x1c == 0) {
      FUN_?(pHVar3);
      pHVar3 = 
      TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings;
    }
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pHVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x23,(MethodInfo *)0x0);
    key = StringLiteral_vehicleEnergyConsumption;
    pDVar1 = (this->fields)._._._.blueprintData;
    __return_storage_ptr__->storage = iVar4;
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,key,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue,
                       4,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->storage = -1;
  return __return_storage_ptr__;
}


/* MVHamsterWheel(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVHamsterWheel::MVHamsterWheel__ctor
               (MVHamsterWheel *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).deathExplosionDamageValue = 40.0;
  (this->fields).deathExplosionRadius = 10.0;
  (this->fields).deathExplosionImpulse = 2000.0;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVVehicleBase::MVVehicleBase__ctor
              ((MVVehicleBase *)this,data,(ObjectPrefab *)(pPVar2->fields).mvHamsterWheelPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._._._.interactionFlags;
    *piVar3 = *piVar3 | 0x8000;
    (this->fields)._._.documentationType = 0x1a;
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

