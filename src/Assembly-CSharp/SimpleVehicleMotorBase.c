
/* Vector3 ApplyWaterGravity(Vector3, Single, Single) */

Vector3 * Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_ApplyWaterGravity
                    (Vector3 *__return_storage_ptr__,Vector3 *velocity,float waterProximity,
                    float deltaTime,MethodInfo *method)

{
  fVar1 = deltaTime * _UNK_? * waterProximity + velocity->y;
  velocity->y = fVar1;
  if (0.0 < fVar1) {
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    velocity->y = fVar1;
  }
  fVar1 = velocity->z;
  fVar2 = velocity->y;
  __return_storage_ptr__->x = velocity->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_DealImpactDamage
               (SimpleVehicleMotorBase *this,Vector3 *curVelocity,Vector3 *prevVelocity,
               MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 == (ImpactState *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  VStack_2.x = prevVelocity->x;
  VStack_2.y = prevVelocity->y;
  VStack_2.z = prevVelocity->z;
  interactableLocal = (this->fields).interactableLocal;
  VStack_3.x = curVelocity->x;
  VStack_3.y = curVelocity->y;
  VStack_3.z = curVelocity->z;
  fVar4 = ImpactState::ImpactState_UpdateImpactState
                    (this_00,&VStack_3,&VStack_2,interactableLocal,(MethodInfo *)0x0);
  if (fVar4 != 0.0) {
    pMVar5 = (this->fields).interactableLocal;
    if (pMVar5 == (MVInteractableBase *)0x0) goto code_?;
    (*(pMVar5->klass->vtable).__unknown.methodPtr)
              (pMVar5,fVar4,0,CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),
               (pMVar5->klass->vtable).__unknown.method);
  }
  return;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
               (SimpleVehicleMotorBase *this,SmoothCharacterController *smoothController,
               VehicleInteractable *interactableLocalParam,
               VehicleEnergyContainerConfig *vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovableMotorState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).smoothController = smoothController;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).smoothController >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar6 = (this->fields).smoothController;
  if ((pSVar6 != (SmoothCharacterController *)0x0) &&
     (pMVar7 = (pSVar6->fields).controller, pMVar7 != (MvCharacterController *)0x0)) {
    pAVar8 = (pMVar7->fields).OnControllerColliderHit;
    pDVar9 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
    if (interactableLocalParam != (VehicleInteractable *)0x0) {
      FUN_?(pDVar9,interactableLocalParam);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar8,pDVar9,(MethodInfo *)0x0);
      pAVar10 = TypeInfo__System__Action<MVControllerColliderHit>;
      if (pDVar9 == (Delegate *)0x0) {
        (pMVar7->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
      }
      else {
        pAVar8 = (Action_1_MVControllerColliderHit_ *)
                  FUN_?(pDVar9,TypeInfo__System__Action<MVControllerColliderHit>);
        if (pAVar8 == (Action_1_MVControllerColliderHit_ *)0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar7->fields).OnControllerColliderHit = pAVar8;
        pAVar10 = TypeInfo__System__Action<MVControllerColliderHit>;
        lVar12 = FUN_?(pDVar9,TypeInfo__System__Action<MVControllerColliderHit>);
        if (lVar12 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).OnControllerColliderHit >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if ((smoothController != (SmoothCharacterController *)0x0) &&
         (pMVar7 = (smoothController->fields).controller, pMVar7 != (MvCharacterController *)0x0)) {
        pAVar8 = (pMVar7->fields).OnControllerColliderHit;
        pIVar13 = (this->fields).impactState;
        pDVar9 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
        FUN_?(pDVar9,pIVar13);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar8,pDVar9,(MethodInfo *)0x0);
        pAVar10 = TypeInfo__System__Action<MVControllerColliderHit>;
        if (pDVar9 == (Delegate *)0x0) {
          (pMVar7->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
        }
        else {
          pAVar8 = (Action_1_MVControllerColliderHit_ *)
                    FUN_?(pDVar9,TypeInfo__System__Action<MVControllerColliderHit>);
          if (pAVar8 == (Action_1_MVControllerColliderHit_ *)0x0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pMVar7->fields).OnControllerColliderHit = pAVar8;
          pAVar10 = TypeInfo__System__Action<MVControllerColliderHit>;
          lVar12 = FUN_?(pDVar9,TypeInfo__System__Action<MVControllerColliderHit>);
          if (lVar12 == 0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pMVar7->fields).OnControllerColliderHit >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pMVar14 = (MVMovableMotorState *)FUN_?(TypeInfo__MVMovableMotorState);
        bVar1 = iRam_? != 0;
        (this->fields).movableMotorState = pMVar14;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).movableMotorState >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pSVar6 = (this->fields).smoothController;
        if (pSVar6 != (SmoothCharacterController *)0x0) {
          pMVar7 = (pSVar6->fields).controller;
          this_00 = (Func_1_UnityEngine_Vector2Int_ *)
                    FUN_?(
                                 TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                                 );
          mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::
          Func_1_UnityEngine_Vector2Int___ctor
                    (this_00,(Object *)pMVar7,
                     MethodInfo__MvCharacterController__GetOverlappingObjects__,(MethodInfo *)0x0);
          this_01 = (MVRigidBody_StuckEvaluator *)
                    FUN_?(TypeInfo__MVRigidBody__StuckEvaluator);
          MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                    (this_01,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_00,
                     (MethodInfo *)0x0);
          bVar1 = iRam_? != 0;
          (this->fields).stuckEvaluator = this_01;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&(this->fields).stuckEvaluator >> 0xc);
            uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
              puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_02 != (GameObject *)0x0) {
            pVVar15 = (VehicleEnergyContainer *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (this_02,
                                 WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                                );
            iVar16 = iRam_?;
            (this->fields).vehicleEnergyContainer = pVVar15;
            if (iVar16 != 0) {
              uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyContainer >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
                iVar16 = iRam_?;
              } while (!bVar1);
            }
            pVVar15 = (this->fields).vehicleEnergyContainer;
            if (pVVar15 != (VehicleEnergyContainer *)0x0) {
              uVar17 = vehicleEnergyContainerConfig->usingEnergy;
              uVar18 = vehicleEnergyContainerConfig->storage;
              (pVVar15->fields)._UsingEnergy_k__BackingField = uVar17;
              fVar19 = (float)(int)uVar18 * _UNK_?;
              (pVVar15->fields).originalEnergyStorage = fVar19;
              (pVVar15->fields).energyStorage = fVar19;
              (pVVar15->fields).consumption = (float)vehicleEnergyContainerConfig->consumption;
              pVVar15 = (this->fields).vehicleEnergyContainer;
              if (pVVar15 != (VehicleEnergyContainer *)0x0) {
                (pVVar15->fields).consumingEnergy = 1;
                (this->fields).interactableLocal = (MVInteractableBase *)interactableLocalParam;
                if (iVar16 != 0) {
                  uVar2 = (uint)((ulonglong)&(this->fields).interactableLocal >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_IsStuck
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  this_02 = (this->fields).stuckEvaluator;
  if (this_02 == (MVRigidBody_StuckEvaluator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_4 = 0;
  iStack_5 = 0;
  uStack_6 = 0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  iStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  pIStack_13 = (IntVector__Array *)0x0;
  uStack_14 = 0;
  pDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_16 = 0;
  iStack_17 = 0;
  pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  if (fVar20 - (this_02->fields).updateTime < (this_02->fields).updateInterval) {
    pDVar21 = (this_02->fields).stuckObjects;
    if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    if ((pDVar21->fields)._count == (pDVar21->fields)._freeCount) {
      return 0;
    }
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
    uVar22 = uStack_16;
code_?:
    uStack_16 = uVar22;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  (this_02->fields).updateTime = fVar20;
  pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                       (this_02,(MethodInfo *)0x0);
  if (pDVar23 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    if (pDVar23 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar23,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
      return 0;
    }
  }
  else {
    pDVar24 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pDVar24,MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    pDStack_25 = pDVar24;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                      ),
                 pDVar26 !=
                 (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      pDStack_27 = (pDVar26->fields)._dictionary;
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)0x0;
      uStack_29 = 0;
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
        uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
          puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
          LOCK();
          bVar34 = uVar32 == *puVar33;
          if (bVar34) {
            *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar34);
      }
      if (pDStack_27 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_30 = pDStack_27;
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)((ulonglong)(uint)(pDStack_27->fields)._version << 0x20);
      uStack_29 = 0;
      uStack_35 = (longlong)ppDStack_28;
      uStack_36 = 0;
      pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
      ppDStack_28 = &pDStack_27;
code_?:
      if (pDStack_27 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        if (uStack_35._4_4_ == (pDStack_27->fields)._version) {
          uVar22 = (uint)uStack_35;
code_?:
          if (pDStack_27 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            if (uVar22 < (uint)(pDStack_27->fields)._count) {
              pDVar37 = (pDStack_27->fields)._entries;
              lVar38 = (longlong)(int)uVar22;
              uStack_35 = CONCAT44(uStack_35._4_4_,uVar22 + 1);
              if (pDVar37 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) {
                if (uVar22 < (uint)pDVar37->max_length) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            uStack_35 = CONCAT44(uStack_35._4_4_,(pDStack_27->fields)._count + 1);
            uStack_36 = (ulonglong)uStack_36._4_4_ << 0x20;
            if (pDVar24 !=
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              iStack_5 = *(int *)((longlong)&(pDVar24->fields)._entries + 4);
              uStack_29 = 0;
              uStack_4 = 0;
              uStack_6 = 0;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_3;
              pDStack_3 = pDVar24;
              while( true ) {
                if (pDStack_3 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4)) ||
                   (lVar38 = (longlong)(int)uStack_4,
                   *(uint *)&(pDStack_3->fields)._entries <= uStack_4)) break;
                pIVar39 = (pDStack_3->fields)._buckets;
                if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar39->max_length <= uStack_4) goto code_?;
                uStack_6 = CONCAT44(uStack_6._4_4_,pIVar39->vector[lVar38]);
                uStack_4 = uStack_4 + 1;
                pDVar21 = (this_02->fields).stuckObjects;
                if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                              0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,pIVar39->vector[lVar38]
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                          );
              }
              if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (pDStack_3 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4))
              goto code_?;
              uStack_4 = *(int *)&(pDStack_3->fields)._entries + 1;
              uStack_6 = uStack_6 & 0xffffffff00000000;
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_40 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(ulonglong)(uint)(pDVar23->fields)._version;
              uStack_42 = 2;
              uStack_43 = (IntVector__Array *)0x0;
              uStack_44 = 0;
              uStack_45 = 0;
              uStack_8 = uStack_41;
              iStack_9 = 0;
              uStack_10 = 0;
              uStack_11 = 0;
              uStack_12 = 0;
              pIStack_13 = (IntVector__Array *)0x0;
              uStack_14 = 2;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_7;
              pDStack_7 = pDVar23;
              pDStack_40 = pDVar23;
              do {
                if (pDStack_7 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((int)uStack_8 != (pDStack_7->fields)._version) goto code_?;
                uVar22 = uStack_8._4_4_;
                do {
                  if (pDStack_7 ==
                      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) goto code_?;
                  if ((uint)(pDStack_7->fields)._count <= uVar22) {
                    uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                 *)CONCAT44((pDStack_7->fields)._count + 1,(int)uStack_8);
                    iStack_9 = 0;
                    uStack_10 = 0;
                    uStack_11 = 0;
                    uStack_12 = 0;
                    pIStack_13 = (IntVector__Array *)0x0;
                    iVar46 = (pDVar23->fields)._count;
                    if (0 < iVar46) {
                      pIVar39 = (pDVar23->fields)._buckets;
                      if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._buckets,0,(int32_t)pIVar39->max_length,
                                 (MethodInfo *)0x0);
                      (pDVar23->fields)._count = 0;
                      (pDVar23->fields)._freeList = -1;
                      (pDVar23->fields)._freeCount = 0;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._entries,0,iVar46,(MethodInfo *)0x0);
                    }
                    piVar47 = &(pDVar23->fields)._version;
                    *piVar47 = *piVar47 + 1;
                    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)(this_02->fields).stuckObjects;
                    if ((pDVar23 ==
                         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                          *)0x0) ||
                       (pDVar48 = mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[UnityEngine::UIElements::
                                  TypeConverterRegistry+ConverterKey,System::Object]::
                                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                            (pDVar23,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                            ),
                       pDVar48 ==
                       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0)) goto code_?;
                    pDVar23 = (pDVar48->fields)._dictionary;
                    ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                    **)0x0;
                    uStack_29 = 0;
                    if (iRam_? != 0) {
                      uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                      uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                      do {
                        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                        LOCK();
                        bVar34 = uVar32 == *puVar33;
                        if (bVar34) {
                          *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar34);
                    }
                    fVar20 = TypeRef__System__Activator__T._0_4_;
                    if (pDVar23 ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
                      pDStack_30 = pDVar23;
                      FUN_?();
                      pcVar1 = (code *)swi(3);
                      bVar2 = (*pcVar1)();
                      return bVar2;
                    }
                    iStack_17 = (pDVar23->fields)._version;
                    uStack_29 = 0;
                    uStack_16 = 0;
                    pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
                    pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                   *)0x0;
                    ppDStack_28 = &pDStack_15;
                    pDStack_15 = pDVar23;
                    while( true ) {
                      if (pDStack_15 ==
                          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)0x0) goto code_?;
                      if (iStack_17 != (pDStack_15->fields)._version) break;
                      do {
                        if (pDStack_15 ==
                            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0) goto code_?;
                        if ((uint)(pDStack_15->fields)._count <= uStack_16) {
                          return 0;
                        }
                        pDVar37 = (pDStack_15->fields)._entries;
                        lVar38 = (longlong)(int)uStack_16;
                        uVar22 = uStack_16 + 1;
                        if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                       *)0x0) goto code_?;
                        bVar34 = (uint)pDVar37->max_length <= uStack_16;
                        uStack_16 = uVar22;
                        if (bVar34) goto code_?;
                      } while ((&pDVar37->vector[0].hashCode)[lVar38 * 6] < 0);
                      pMStack_18 = *(MVRigidBody_StuckEvaluator_StuckObject **)
                                     ((longlong)&pDVar37->vector[0].key + lVar38 * 0x18 + 8);
                      func_?();
                      pMVar49 = pMStack_18;
                      if (pMStack_18 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0)
                      goto code_?;
                      pcVar1 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar1;
                      fVar50 = (float)(*pcRam_?)();
                      if ((fVar20 <= fVar50 - (pMVar49->fields).stuckTime) &&
                         (bVar2 = MVRigidBody+StuckEvaluator+StuckObject::
                                   MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                             (pMVar49,(MethodInfo *)0x0), bVar2 == 0)) {
                        return 1;
                      }
                    }
                    goto code_?;
                  }
                  pDVar37 = (pDStack_7->fields)._entries;
                  lVar38 = (longlong)(int)uVar22;
                  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(uVar22 + 1,(int)uStack_8);
                  if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar37->max_length <= uVar22) goto code_?;
                  lVar51 = lVar38 * 0x20;
                  uVar22 = uVar22 + 1;
                } while (pDVar37->vector[lVar38].hashCode < 0);
                iVar46 = *(int32_t *)&pDVar37->vector[lVar38].key.SourceType;
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                uStack_52 = (IntVector__Array *)0x0;
                apIStack_53[0] = (IntVector__Array *)0x0;
                pTVar54 = &pDVar37->vector[lVar38].key;
                pIVar55 = *(IntVector__Array **)&pTVar54->DestinationType;
                pIVar56 = *(IntVector__Array **)(pTVar54 + 1);
                if ((MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(pDStack_25._4_4_,iVar46);
                uStack_52 = pIVar55;
                apIStack_53[0] = pIVar56;
                func_?(apIStack_53);
                iStack_9 = (int32_t)pDStack_25;
                uStack_10 = pDStack_25._4_4_;
                uStack_11 = SUB84(uStack_52,0);
                uStack_12 = uStack_52._4_4_;
                pIStack_13 = apIStack_53[0];
                func_?(&pIStack_13);
                iVar46 = iStack_9;
                pDStack_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)CONCAT44(uStack_10,iStack_9);
                uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)CONCAT44(uStack_12,uStack_11);
                uStack_43 = pIStack_13;
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                          (this_02->fields).stuckObjects;
                if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                   (this_01,iStack_9,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                                    ->klass->rgctx_data[0x21].method);
                pDVar21 = (this_02->fields).stuckObjects;
                if (iVar57 < 0) {
                  pMVar49 = (MVRigidBody_StuckEvaluator_StuckObject *)
                            FUN_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
                  pDStack_25 = uStack_41;
                  uStack_52 = uStack_43;
                  MVRigidBody+StuckEvaluator+StuckObject::
                  MVRigidBody_StuckEvaluator_StuckObject__ctor
                            (pMVar49,(MVOverlapResult *)&pDStack_25,(MethodInfo *)0x0);
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                             (Object *)pMVar49,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar51 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                             ->klass->rgctx_data[0x22].method);
                }
                else {
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  pOVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      );
                  if (pOVar58 == (Object *)0x0) goto code_?;
                  *(undefined4 *)&pOVar58[1].monitor = (undefined4)uStack_41;
                  *(undefined4 *)((longlong)&pOVar58[1].monitor + 4) = uStack_41._4_4_;
                  *(undefined4 *)&pOVar58[2].klass = (undefined4)uStack_43;
                  *(undefined4 *)((longlong)&pOVar58[2].klass + 4) = uStack_43._4_4_;
                  func_?();
                }
              } while( true );
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
code_?:
  uVar22 = uVar22 + 1;
  if (-1 < (&pDVar37->vector[0].hashCode)[lVar38 * 6]) goto code_?;
  goto code_?;
code_?:
  iVar46 = *(int32_t *)((longlong)&pDVar37->vector[0].key + lVar38 * 0x18);
  uStack_36 = CONCAT44(uStack_36._4_4_,iVar46);
  iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                     ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar23,iVar46,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar57 < 0) {
    if (pDVar24 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    FUN_?(pDVar24,iVar46,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* Void Move(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Move
               (SimpleVehicleMotorBase *this,Vector3 *velocity,Vector3 *baseVelocity,float deltaTime
               ,MethodInfo *method)

{
  uVar1 = baseVelocity->x;
  uVar2 = baseVelocity->y;
  VStack_3.x = velocity->x;
  VStack_3.y = velocity->y;
  pSVar4 = (this->fields).smoothController;
  if ((pSVar4 != (SmoothCharacterController *)0x0) &&
     (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
    VStack_3.y = ((float)uVar2 + VStack_3.y) * deltaTime;
    VStack_3.x = ((float)uVar1 + VStack_3.x) * deltaTime;
    VStack_3.z = (baseVelocity->z + velocity->z) * deltaTime;
    (*(pMVar5->klass->vtable).__unknown_1.methodPtr)
              (pMVar5,&VStack_3,(pMVar5->klass->vtable).__unknown_1.method);
    pSVar4 = (this->fields).smoothController;
    if ((pSVar4 != (SmoothCharacterController *)0x0) &&
       (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
      VStack_3.x = velocity->x;
      VStack_3.y = velocity->y;
      VStack_3.z = velocity->z;
      MVGroundState::MVGroundState_Update
                (this_00,(pSVar4->fields).controller,&VStack_3,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnLocalVehicleLeave() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_OnLocalVehicleLeave
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).DirectInputMoveMap.x = (pVVar1->zeroVector).x;
  (this->fields).DirectInputMoveMap.y = fVar2;
  (this->fields).DirectInputMoveMap.z = fVar3;
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_RefillEnergy
               (SimpleVehicleMotorBase *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyContainer;
  if (this_00 != (VehicleEnergyContainer *)0x0) {
    aVStack_1[0].spawnerId = vehicleEnergyRefill->spawnerId;
    aVStack_1[0].prediction = vehicleEnergyRefill->prediction;
    aVStack_1[0]._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
    aVStack_1[0].amount = vehicleEnergyRefill->amount;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._.impulseVectors;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    this_00 = (this->fields).smoothController;
    if (this_00 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController::SmoothCharacterController_Reset(this_00,(MethodInfo *)0x0);
      pIVar3 = (this->fields).impactState;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar5 = (pVVar4->zeroVector).z;
      if (pIVar3 != (ImpactState *)0x0) {
        fVar6 = (pVVar4->zeroVector).y;
        (pIVar3->fields).prevVelocityChangeVector.x = (pVVar4->zeroVector).x;
        (pIVar3->fields).prevVelocityChangeVector.y = fVar6;
        (pIVar3->fields).prevVelocityChangeVector.z = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::
     SimpleVehicleMotorBase_RollbackRefillEnergyPrediction
               (SimpleVehicleMotorBase *this,int32_t spawnerId,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 == (VehicleEnergyContainer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                  ,CONCAT44(in_register_00000014,spawnerId),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (pVVar1->fields).predictions;
  if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar3,spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar4 < 0) {
      return;
    }
    pDVar5 = (pDVar3->fields)._entries;
    if (pDVar5 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                   *)0x0) {
      if ((uint)pDVar5->max_length <= uVar4) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar6 = pDVar5->vector[(int)uVar4].value.vehicleEnergyRefill.amount;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar6 = (pVVar1->fields).energyStorage - fVar6 * (pVVar1->fields).originalEnergyStorage;
      (pVVar1->fields).energyStorage = fVar6;
      if (fVar6 < 0.0) {
        (pVVar1->fields).energyStorage = 0.0;
      }
      pDVar3 = (pVVar1->fields).predictions;
      if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar3,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_SuspendImpactDamage
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    bVar2 = cRam_? == '\0';
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar3->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateFunction() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_UpdateFunction
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (obj = (pSVar1->fields).smoothPhysicsMovement, obj == (SmoothPhysicsMovement *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar8 = iRam_? != 0;
      (obj->fields).current = pSVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar7;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar7 = (obj->fields).next;
  do {
    if (fVar4 - fVar5 < (pSVar7->fields).time) {
code_?:
      pSVar7 = (obj->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar13 = (pSVar7->fields).time;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar14 = (float)(*pcRam_?)();
      fVar14 = ((fVar4 - fVar5) - fVar13) / fVar14;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      pvVar15 = (void *)(*pcRam_?)(pvVar15);
      pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar15,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar4 = _UNK_?;
      pSVar7 = (obj->fields).current;
      if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_18._0_4_ = (pSVar17->fields).position.x;
      uStack_18._4_4_ = (pSVar17->fields).position.y;
      QStack_19.x = (pSVar7->fields).position.x;
      QStack_19.y = (pSVar7->fields).position.y;
      if (fVar14 < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = _UNK_?;
        if (fVar14 <= _UNK_?) {
          fVar5 = fVar14;
        }
      }
      if (pOVar16 != (Object *)0x0) {
        QStack_19.y = ((float)uStack_18._4_4_ - QStack_19.y) * fVar5 + QStack_19.y;
        QStack_19.x = ((float)(undefined4)uStack_18 - QStack_19.x) * fVar5 + QStack_19.x;
        QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar5 +
                      (pSVar7->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar20 = pOVar16[1].klass;
        if (pOVar20 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar20);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        pvVar15 = (void *)(*pcRam_?)(pvVar15);
        pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar15,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar7 = (obj->fields).current;
        if ((pSVar7 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar17 = (obj->fields).next, pSVar17 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_21._0_4_ = (pSVar17->fields).rotation.x;
          uStack_21._4_4_ = (pSVar17->fields).rotation.y;
          uStack_22._0_4_ = (pSVar17->fields).rotation.z;
          uStack_22._4_4_ = (pSVar17->fields).rotation.w;
          QStack_23.x = (pSVar7->fields).rotation.x;
          QStack_23.y = (pSVar7->fields).rotation.y;
          QStack_23.z = (pSVar7->fields).rotation.z;
          QStack_23.w = (pSVar7->fields).rotation.w;
          uStack_18 = 0;
          uStack_24 = 0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&QStack_23,&uStack_21,fVar14,&uStack_18);
          if (pOVar16 == (Object *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_25 = (undefined4)uStack_18;
          uStack_26 = uStack_18._4_4_;
          uStack_27 = (float)uStack_24;
          uStack_28 = uStack_24._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar20 = pOVar16[1].klass;
          if (pOVar20 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pOVar20);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar30 = (pSVar17->fields).position.x;
            uVar31 = (pSVar17->fields).position.y;
            uStack_18._0_4_ = (pSVar7->fields).position.x;
            uStack_18._4_4_ = (pSVar7->fields).position.y;
            if (fVar14 < 0.0) {
              fVar4 = 0.0;
            }
            else if (fVar14 <= fVar4) {
              fVar4 = fVar14;
            }
            QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar4 +
                          (pSVar7->fields).position.z;
            QStack_19.y = ((float)uVar31 - (float)uStack_18._4_4_) * fVar4 + (float)uStack_18._4_4_;
            QStack_19.x = ((float)uVar30 - (float)(undefined4)uStack_18) * fVar4 +
                          (float)(undefined4)uStack_18;
            (*(pMVar29->klass->vtable).set_WorldPosition.methodPtr)(pMVar29,&QStack_19);
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_23.x = (pSVar17->fields).rotation.x;
            QStack_23.y = (pSVar17->fields).rotation.y;
            QStack_23.z = (pSVar17->fields).rotation.z;
            QStack_23.w = (pSVar17->fields).rotation.w;
            uStack_21._0_4_ = (pSVar7->fields).rotation.x;
            uStack_21._4_4_ = (pSVar7->fields).rotation.y;
            uStack_22._0_4_ = (pSVar7->fields).rotation.z;
            uStack_22._4_4_ = (pSVar7->fields).rotation.w;
            QStack_19.x = 0.0;
            QStack_19.y = 0.0;
            QStack_19.z = 0.0;
            QStack_19.w = 0.0;
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(&uStack_21,&QStack_23,fVar14,&QStack_19);
            if (pMVar29 == (MVWorldObjectClient *)0x0) break;
            QStack_23.x = QStack_19.x;
            QStack_23.y = QStack_19.y;
            QStack_23.z = QStack_19.z;
            QStack_23.w = QStack_19.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar29,&QStack_23,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar32 = (obj->fields).cullingSubscriberBase;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) goto DAT_?;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          pvVar15 = (void *)(*pcRam_?)(pvVar15);
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar16 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_18 = 0;
            uStack_24 = uStack_24 & 0xffffffff00000000;
            pOVar20 = pOVar16[1].klass;
            if (pOVar20 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pOVar20,&uStack_18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar33 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar33 != (BoundingSphere__Array *)0x0) {
              uVar9 = (pCVar32->fields)._CullingIndex_k__BackingField;
              if (uVar9 < (uint)pBVar33->max_length) {
                pBVar33->vector[(int)uVar9].position.x = (float)(undefined4)uStack_18;
                pBVar33->vector[(int)uVar9].position.y = (float)uStack_18._4_4_;
                pBVar33->vector[(int)uVar9].position.z = (float)uStack_24;
                return;
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar6->fields)._size < 1) goto code_?;
    bVar8 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar6,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar8 = iRam_? != 0;
    (obj->fields).next = pSVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pSVar7 = (obj->fields).next;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_UsesEnergy
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    return (pVVar1->fields)._UsingEnergy_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Single WaterProximity() */

float Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).waterPlaneManager;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_01 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_2[0].x = 0.0;
      aVStack_2[0].y = 0.0;
      aVStack_2[0].z = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,aVStack_2);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar8 = (pVVar7->upVector).x;
      uVar6._0_4_ = (float)uVar8 * _UNK_? + aVStack_2[0].x;
      if (this_00 != (WaterPlaneManager *)0x0) {
        uVar6._4_4_ = (pVVar7->upVector).y * _UNK_? + aVStack_2[0].y;
        aVStack_2[0]._0_8_ = uVar6;
        aVStack_2[0].z = (pVVar7->upVector).z * _UNK_? + aVStack_2[0].z;
        fVar5 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                          (this_00,aVStack_2,(MethodInfo *)0x0);
        return fVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* SimpleVehicleMotorBase() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase__ctor
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ImpactState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&_831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  explosionEvents =
       (RuntimeEventType__Enum__Array *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)explosionEvents,
             __831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field,
             (MethodInfo *)0x0);
  this_00 = (ImpactState *)FUN_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).impactState = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).impactState >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroundState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar1 = iRam_? != 0;
  (pMVar6->fields).groundMaterial = pMVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&pMVar6->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_8 = (ulonglong)uVar2 << 0x20;
  uVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_11._0_2_ = (ushort)(bVar10 != 0) << 8;
  uStack_11 = (uint)CONCAT12(1,(short)uStack_11);
  bVar1 = cRam_? == '\0';
  (pMVar6->fields).grounded.currentCryptoKey = uVar9;
  *(undefined3 *)&(pMVar6->fields).grounded.field_0x1 = lStack_8._1_3_;
  (pMVar6->fields).grounded.hiddenValue = lStack_8._4_4_;
  (pMVar6->fields).grounded.fakeValue = (undefined1)uStack_11;
  (pMVar6->fields).grounded.fakeValueChanged = uStack_11._1_1_;
  (pMVar6->fields).grounded.inited = uStack_11._2_1_;
  (pMVar6->fields).grounded.field_0xb = uStack_11._3_1_;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar12->zeroVector).y;
  fVar14 = (pVVar12->zeroVector).z;
  (pMVar6->fields).groundNormal.x = (pVVar12->zeroVector).x;
  (pMVar6->fields).groundNormal.y = fVar13;
  (pMVar6->fields).groundNormal.z = fVar14;
  (this->fields)._.groundState = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.groundState >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._.weight = 1.0;
  (this->fields)._.density = 1.0;
  (this->fields)._.isPlayerControlled = 1;
  pLVar15 = (List_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  bVar1 = iRam_? != 0;
  (this->fields)._.impulseVectors = pLVar15;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.impulseVectors >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._._.findWorldObjectParent = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Grounded
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 != (MVGroundState *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar2._0_1_ = (pMVar1->fields).grounded.currentCryptoKey;
    uVar2._1_3_ = *(undefined3 *)&(pMVar1->fields).grounded.field_0x1;
    uVar2._4_4_ = (pMVar1->fields).grounded.hiddenValue;
    uVar3._0_1_ = (pMVar1->fields).grounded.fakeValue;
    uVar3._1_1_ = (pMVar1->fields).grounded.fakeValueChanged;
    uVar3._2_1_ = (pMVar1->fields).grounded.inited;
    uVar3._3_1_ = (pMVar1->fields).grounded.field_0xb;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStack_4._0_8_ = uVar2;
    OStack_4._8_4_ = uVar3;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}

