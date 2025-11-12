
/* Void Destroy() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Destroy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if ((pMVar1 == (MVSimpleOneSeatVehicle *)0x0) ||
     (pMVar2 = (pMVar1->fields).Health, pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar4 = (pMVar2->fields)._._.OnChange;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
             (MethodInfo *)0x0);
  pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
  }
  else {
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar5 = pMVar4;
    }
    if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      FUN_?(pMVar4,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields)._._.OnChange = pMVar5;
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar5 = pMVar4;
    }
    if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pMVar2->fields)._._.OnChange >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Enter
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar2 = (this->fields).triggerHandler;
  if (pMVar2 != (MVTriggerHandler *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pMVar2,1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).triggerHandler;
    if (pMVar2 != (MVTriggerHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (pMVar2->fields).wasResetThisFrame = 1;
      pDVar3 = (Dictionary_2_System_UInt32_System_Object_ *)(pMVar2->fields).triggerBoxEvents;
      if (pDVar3 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        uStack_4 = 0;
        uStack_5 = 0;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        puStack_11 = (undefined *)(ulonglong)(uint)(pDVar3->fields)._version;
        uStack_12 = 2;
        auStack_1._8_8_ = puStack_11;
        KStack_13.key = 0;
        KStack_13._4_4_ = 0;
        KStack_13.value = (Object *)0x0;
        uStack_14._0_4_ = 2;
        uStack_14._4_4_ = 0;
        pDStack_7 = pDVar3;
        auStack_1._0_8_ = pDVar3;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                   *)auStack_1,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                                 ), this_00 = KStack_13.value, bVar15 != 0) {
          other = MVTriggerHandler::MVTriggerHandler_get_TriggingCollider(pMVar2,(MethodInfo *)0x0);
          if ((TriggerBoxEvents *)this_00 == (TriggerBoxEvents *)0x0) goto code_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                    ((TriggerBoxEvents *)this_00,other,(MethodInfo *)0x0);
        }
        pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(pMVar2->fields).newTriggerBoxEvents;
        if (pDVar16 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          TypeConverterRegistry+ConverterKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                    (pDVar16,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                    );
          pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)(pMVar2->fields).triggerBoxEvents;
          if (pDVar16 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                      (pDVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            return;
          }
        }
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_FixedUpdate
          (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,
          IInputToPlayerMovement *movementMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).vehicleMotor;
  if (movementMap == (IInputToPlayerMovement *)0x0) {
    if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar1->fields).HandleInput = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_?(auStack_3,0,TypeInfo__IInputToPlayerMovement,movementMap);
    fVar4 = *(float *)(puVar2 + 1);
    if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    uVar5 = *puVar2;
    (pSVar1->fields).DirectInputMoveMap.x = (float)(int)uVar5;
    (pSVar1->fields).DirectInputMoveMap.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    (pSVar1->fields).DirectInputMoveMap.z = fVar4;
    pSVar1 = (this->fields).vehicleMotor;
    bVar6 = FUN_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
    if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar1->fields).Jump = bVar6;
    pSVar1 = (this->fields).vehicleMotor;
    if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar1->fields).HandleInput = 1;
  }
  pSVar1 = (this->fields).vehicleMotor;
  if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
    (*(pSVar1->klass->vtable).__unknown_3.methodPtr)
              (pSVar1,(pSVar1->klass->vtable).__unknown_3.method);
    return movementMap;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (IInputToPlayerMovement *)(*pcVar7)();
  return pIVar8;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVSimpleOneSeatVehicle *)0x0) {
    this_00 = (pMVar1->fields).IsFiring;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        value = (Object *)FUN_?(lRam_?);
        FUN_?(value + 1,&uStackX_8);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      else {
        value = (Object *)0x0;
      }
    }
    else {
      value = (Object *)((ulonglong)uStackX_9 << 8);
    }
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      this_01 = (this->fields).triggerHandler;
      if (this_01 != (MVTriggerHandler *)0x0) {
        MVTriggerHandler::MVTriggerHandler_Reset(this_01,(MethodInfo *)0x0);
        pVVar6 = (this->fields).pickupOwner;
        if (pVVar6 != (VehiclePickupOwner *)0x0) {
          pPVar7 = (pVVar6->fields)._.currentItem;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pPVar7 != (PickupItem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pPVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
              pVVar6 = (this->fields).pickupOwner;
              if ((pVVar6 == (VehiclePickupOwner *)0x0) ||
                 (pPVar7 = (pVVar6->fields)._.currentItem, pPVar7 == (PickupItem *)0x0))
              goto code_?;
              (*(pPVar7->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr)
                        (pPVar7,(pPVar7->klass->vtable).OnLeaveVehicleWithWeapon.method);
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_RefillEnergy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,
               VehicleEnergyRefill *vehicleEnergyRefill,MethodInfo *method)

{
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (this_00 = (pSVar1->fields).vehicleEnergyContainer, this_00 != (VehicleEnergyContainer *)0x0))
  {
    aVStack_2[0].spawnerId = vehicleEnergyRefill->spawnerId;
    aVStack_2[0].prediction = vehicleEnergyRefill->prediction;
    aVStack_2[0]._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
    aVStack_2[0].amount = vehicleEnergyRefill->amount;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,aVStack_2,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RollbackVehicleRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_RollbackVehicleRefillEnergyPrediction
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,int32_t spawnerId,
               MethodInfo *method)

{
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 == (SimpleVehicleMotorBase *)0x0) ||
     (pVVar2 = (pSVar1->fields).vehicleEnergyContainer, pVVar2 == (VehicleEnergyContainer *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  pDVar4 = (pVVar2->fields).predictions;
  if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar4,spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar5 < 0) {
      return;
    }
    pDVar6 = (pDVar4->fields)._entries;
    if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                   *)0x0) {
      if ((uint)pDVar6->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar7 = pDVar6->vector[(int)uVar5].value.vehicleEnergyRefill.amount;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar7 = (pVVar2->fields).energyStorage - fVar7 * (pVVar2->fields).originalEnergyStorage;
      (pVVar2->fields).energyStorage = fVar7;
      if (fVar7 < 0.0) {
        (pVVar2->fields).energyStorage = 0.0;
      }
      pDVar4 = (pVVar2->fields).predictions;
      if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar4,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Update
          (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,
          InputToInGameAction *interactionInput,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vehicle_is_stuck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).vehicleMotor;
  if (((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
      (pSVar2 = (pSVar1->fields).smoothController, pSVar2 != (SmoothCharacterController *)0x0)) &&
     (this_00 = (pSVar2->fields).smoothPhysicsMovement, this_00 != (SmoothPhysicsMovement *)0x0)) {
    SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_00,(MethodInfo *)0x0);
    if (interactionInput == (InputToInGameAction *)0x0) {
      return (InputToInGameAction *)0x0;
    }
    this_01 = (this->fields).pickupGUI;
    if (this_01 != (PickupGUI *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)this_01,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pVVar4 = (this->fields).pickupOwner;
        if (pVVar4 == (VehiclePickupOwner *)0x0) goto code_?;
        MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pVVar4,(MethodInfo *)0x0);
        pMVar5 = (this->fields).owner;
        if ((pMVar5 == (MVSimpleOneSeatVehicle *)0x0) ||
           (pVVar4 = (this->fields).pickupOwner, pVVar4 == (VehiclePickupOwner *)0x0))
        goto code_?;
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pVVar4,(interactionInput->fields).fire,(pMVar5->fields).IsFiring
                   ,(MethodInfo *)0x0);
      }
      pVVar4 = (this->fields).pickupOwner;
      if (pVVar4 != (VehiclePickupOwner *)0x0) {
        pPVar6 = (pVVar4->fields)._.currentItem;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar6 != (PickupItem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pPVar6->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pVVar4 = (this->fields).pickupOwner;
            if ((pVVar4 == (VehiclePickupOwner *)0x0) ||
               (pPVar6 = (pVVar4->fields)._.currentItem, pPVar6 == (PickupItem *)0x0))
            goto code_?;
            if ((pPVar6->fields)._IsHolstered_k__BackingField == 0) {
              (interactionInput->fields).fire = 0;
            }
          }
        }
        if ((interactionInput->fields).drop != 0) {
          pMVar5 = (this->fields).owner;
          if ((pMVar5 == (MVSimpleOneSeatVehicle *)0x0) ||
             (this_02 = (pMVar5->fields)._._._._.gameObject, this_02 == (GameObject *)0x0))
          goto code_?;
          pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this_02,
                              MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                             );
          if (pOVar7 == (Object *)0x0) goto code_?;
          (*(code *)pOVar7->klass[1]._0.byval_arg.data)(pOVar7);
        }
        pSVar1 = (this->fields).vehicleMotor;
        if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
           (this_03 = (pSVar1->fields).stuckEvaluator, this_03 != (MVRigidBody_StuckEvaluator *)0x0)
           ) {
          bVar3 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                            (this_03,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
          }
          (interactionInput->fields).ignorePickupOwner = 1;
          return interactionInput;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar9 = (InputToInGameAction *)(*pcVar8)();
  return pIVar9;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_UsesEnergy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (pVVar2 = (pSVar1->fields).vehicleEnergyContainer, pVVar2 != (VehicleEnergyContainer *)0x0)) {
    return (pVVar2->fields)._UsingEnergy_k__BackingField;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle(MVSimpleOneSeatVehicle,
   SmoothCharacterController, SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__ctor
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,
               MVSimpleOneSeatVehicle *vehicleBase,SmoothCharacterController *smoothController,
               SimpleVehicleMotorBase *motor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__Enter__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__Leave__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if ((vehicleBase != (MVSimpleOneSeatVehicle *)0x0) &&
     (pMVar1 = (vehicleBase->fields).Health, pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar2 = (pMVar1->fields)._._.OnChange;
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar4 = pMVar2;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields)._._.OnChange = pMVar4;
      pMVar4 = pMVar2;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar1->fields)._._.OnChange >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    this_00 = (vehicleBase->fields)._._._._.gameObject;
    if (((this_00 != (GameObject *)0x0) &&
        (pOVar11 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_00,
                              VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                             ), pOVar11 != (Object__Class *)0x0)) &&
       (pOVar12 = (Object__Class *)(pOVar11->_0).image,
       (*(code *)pOVar12[1].interfaceOffsets)
                 (pOVar11,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                  (vehicleBase->fields).shield,0,pOVar12[1].static_fields),
       motor != (SimpleVehicleMotorBase *)0x0)) {
      iStack_13 = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption;
      uStack_14._0_1_ =
           (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
      uStack_14._1_3_ =
           *(undefined3 *)
            &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
      uStack_14._4_4_ =
           (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage;
      (*(motor->klass->vtable).Init.methodPtr)
                (motor,smoothController,pOVar11,&uStack_14,(motor->klass->vtable).Init.method);
      pAVar15 = (this->fields)._.onEnter;
      pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar16,(Object *)motor,(motor->klass->vtable).OnLocalVehicleEnter.method,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (this->fields)._.onEnter = (Action *)0x0;
      }
      else {
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields)._.onEnter = (Action *)pMVar4;
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields)._.onEnter >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pAVar15 = (this->fields)._.onLeave;
      pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar16,(Object *)motor,(motor->klass->vtable).OnLocalVehicleLeave.method,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (this->fields)._.onLeave = (Action *)0x0;
      }
      else {
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields)._.onLeave = (Action *)pMVar4;
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields)._.onLeave >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (this_00,
                           VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                          );
      iVar18 = iRam_?;
      pMVar19 = (vehicleBase->fields).CurrentItem;
      if (pOVar17 != (Object *)0x0) {
        pOVar17[3].klass = pOVar11;
        if (iVar18 != 0) {
          uVar6 = (uint)((ulonglong)(pOVar17 + 3) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar18 = iRam_?;
          } while (!bVar10);
        }
        pOVar17[3].monitor = (MonitorData *)pMVar19;
        if (iVar18 != 0) {
          uVar6 = (uint)((ulonglong)&pOVar17[3].monitor >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        this_01 = (vehicleBase->fields)._._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          pVVar20 = (VehiclePickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (this_01,
                               VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                              );
          bVar10 = iRam_? != 0;
          (this->fields).pickupOwner = pVVar20;
          if (bVar10) {
            uVar6 = (uint)((ulonglong)&(this->fields).pickupOwner >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pVVar20 = (this->fields).pickupOwner;
          if (pVVar20 != (VehiclePickupOwner *)0x0) {
            (pVVar20->fields)._._IsLocal_k__BackingField = 1;
            pAVar15 = (this->fields)._.onDestroy;
            pVVar20 = (this->fields).pickupOwner;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)pVVar20,
                       MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,(MethodInfo *)0x0);
            pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
            if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (this->fields)._.onDestroy = (Action *)0x0;
            }
            else {
              pMVar4 = pMVar2;
              if (pMVar3->klass ==
                  (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                pMVar4 = pMVar3;
              }
              if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              (this->fields)._.onDestroy = (Action *)pMVar4;
              pMVar4 = pMVar2;
              if (pMVar3->klass ==
                  (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                pMVar4 = pMVar3;
              }
              if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            pPVar21 = (PickupGUI *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (this_00,
                                 PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                );
            bVar10 = iRam_? != 0;
            (this->fields).pickupGUI = pPVar21;
            if (bVar10) {
              uVar6 = (uint)((ulonglong)&(this->fields).pickupGUI >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            pPVar21 = (this->fields).pickupGUI;
            if (pPVar21 != (PickupGUI *)0x0) {
              PickupGUI::PickupGUI_Initialize
                        (pPVar21,(vehicleBase->fields)._._._._._.id,
                         (MVPickupOwner *)(this->fields).pickupOwner,(MethodInfo *)0x0);
              pAVar15 = (this->fields)._.onEnter;
              pPVar21 = (this->fields).pickupGUI;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)pPVar21,MethodInfo__PickupGUI__Enter__,(MethodInfo *)0x0)
              ;
              pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (this->fields)._.onEnter = (Action *)0x0;
              }
              else {
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (this->fields)._.onEnter = (Action *)pMVar4;
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(this->fields)._.onEnter >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pAVar15 = (this->fields)._.onLeave;
              pPVar21 = (this->fields).pickupGUI;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)pPVar21,MethodInfo__PickupGUI__Leave__,(MethodInfo *)0x0)
              ;
              pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (this->fields)._.onLeave = (Action *)0x0;
              }
              else {
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar3);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (this->fields)._.onLeave = (Action *)pMVar4;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar2 = pMVar3;
                }
                if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar3);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(this->fields)._.onLeave >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pMVar22 = (MVTriggerHandler *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (this_00,
                                   MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                  );
              bVar10 = iRam_? != 0;
              (this->fields).triggerHandler = pMVar22;
              if (bVar10) {
                uVar6 = (uint)((ulonglong)&(this->fields).triggerHandler >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pLVar23 = (this->fields)._.localComponents;
              if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                FUN_?(pLVar23,pOVar11);
                pLVar23 = (this->fields)._.localComponents;
                if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                  FUN_?(pLVar23,smoothController);
                  pLVar23 = (this->fields)._.localComponents;
                  if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                    FUN_?(pLVar23,motor);
                    pLVar23 = (this->fields)._.localComponents;
                    if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                      FUN_?(pLVar23,pOVar17);
                      pLVar23 = (this->fields)._.localComponents;
                      if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                        FUN_?(pLVar23,(this->fields).triggerHandler);
                        iVar18 = iRam_?;
                        (this->fields).vehicleMotor = motor;
                        if (iVar18 != 0) {
                          uVar6 = (uint)((ulonglong)&(this->fields).vehicleMotor >> 0xc);
                          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                            LOCK();
                            bVar10 = uVar8 == *puVar9;
                            if (bVar10) {
                              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                            iVar18 = iRam_?;
                          } while (!bVar10);
                        }
                        (this->fields).owner = vehicleBase;
                        if (iVar18 != 0) {
                          uVar6 = (uint)((ulonglong)&(this->fields).owner >> 0xc);
                          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                            LOCK();
                            bVar10 = uVar8 == *puVar9;
                            if (bVar10) {
                              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar10);
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
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 get_Id() */

int32_t Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
        MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_get_Id
                  (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVSimpleOneSeatVehicle *)0x0) {
    return (pMVar1->fields)._._._._._.id;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

