
/* Void Destroy() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Destroy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if ((pMVar1 != (MVSimpleOneSeatVehicle *)0x0) &&
     (pMVar2 = (pMVar1->fields).Health, pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar3 = (pMVar2->fields)._._.OnChange;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_00 != (UnityAction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        ppMStack5 = &(pMVar2->fields)._._.OnChange;
        pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        func_?();
        return;
      }
      pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar7 = pMVar3;
      }
      if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar2->fields)._._.OnChange = pMVar7;
        uVar4 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar3);
        pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMStack6 = pMVar3;
        }
        if (pMStack6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          ppMStack5 = &(pMVar2->fields)._._.OnChange;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  _ppMStack00000014 = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Enter
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  pMVar1 = this;
  stack0xfffffff0 = (int32_t)this;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  this_01 = (pMVar1->fields).triggerHandler;
  if (this_01 != (MVTriggerHandler *)0x0) {
    stack0xfffffff0 = (int32_t)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_01,1,(MethodInfo *)0x0);
    if ((pMVar1->fields).triggerHandler != (MVTriggerHandler *)0x0) {
      uStack2 = 0xffffffff;
      method = (MethodInfo *)&DAT_?;
      this = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &this;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
                       );
        cRam_? = '\x01';
      }
      OStack_3.klass = (Object__Class *)0x0;
      OStack_3.monitor = (MonitorData *)0x0;
      iStack_4 = 0;
      pOStack_5 = (Object *)0x0;
      pTStack_6 = (TriggerBoxEvents *)0x0;
      stack0xfffffff0 = 0;
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                (in_stack_7->fields).triggerBoxEvents;
      (in_stack_7->fields).wasResetThisFrame = 1;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           (&DStack_9,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                           );
        OStack_3.klass = (Object__Class *)pDVar8->_dictionary;
        OStack_3.monitor = (MonitorData *)pDVar8->_version;
        iStack_4 = pDVar8->_index;
        pOStack_5 = (pDVar8->_current).key;
        _pTStack_14 = *(undefined8 *)&(pDVar8->_current).value;
        uStack2 = 1;
        while( true ) {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                             &OStack_3,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__MoveNext__
                            );
          if (bVar10 == 0) break;
          this_02 = pTStack_6;
          method_00 = (MethodInfo *)
                      MVTriggerHandler::MVTriggerHandler_get_TriggingCollider
                                (in_stack_7,(MethodInfo *)0x0);
          if (this_02 == (TriggerBoxEvents *)0x0) goto code_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                    (this_02,(Collider *)method_00,(MethodInfo *)0x0);
        }
        uStack2 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (&OStack_3,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                   ,method_00);
        uStack2 = 0xffffffff;
        pDVar11 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)(in_stack_7->fields).newTriggerBoxEvents;
        if (pDVar11 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                    (pDVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                    );
          pDVar11 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)(in_stack_7->fields).triggerBoxEvents;
          if (pDVar11 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                      (pDVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            *unaff_FS_OFFSET = this;
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(&TypeInfo__IInputToPlayerMovement);
    cRam_? = '\x01';
  }
  pSStack_1 = (this->fields).vehicleMotor;
  if (movementMap == (IInputToPlayerMovement *)0x0) {
    if (pSStack_1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSStack_1->fields).HandleInput = 0;
  }
  else {
    pIStack_2 = movementMap->klass;
    uVar3 = 0;
    uVar4 = (pIStack_2->_1).interface_offsets_count;
    uStack_5 = 0;
    if (uVar4 != 0) {
      do {
        if (pIStack_2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
          pVVar6 = &(movementMap->klass->vtable).get_Direction +
                   movementMap->klass->interfaceOffsets[uVar3].offset;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar6 = (VirtualInvokeData *)func_?(movementMap,TypeInfo__IInputToPlayerMovement,0);
code_?:
    puVar7 = (undefined8 *)(*pVVar6->methodPtr)(auStack_8,movementMap,pVVar6->method);
    uVar9 = *puVar7;
    fVar10 = *(float *)(puVar7 + 1);
    if (pSStack_1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSStack_1->fields).DirectInputMoveMap.x = (float)(int)uVar9;
    (pSStack_1->fields).DirectInputMoveMap.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    (pSStack_1->fields).DirectInputMoveMap.z = fVar10;
    pSVar11 = (this->fields).vehicleMotor;
    bVar12 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
    if (pSVar11 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar11->fields).Jump = bVar12;
    pSVar11 = (this->fields).vehicleMotor;
    if (pSVar11 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar11->fields).HandleInput = 1;
  }
  pSVar11 = (this->fields).vehicleMotor;
  if (pSVar11 != (SimpleVehicleMotorBase *)0x0) {
    (*(pSVar11->klass->vtable).__unknown_3.methodPtr)
              (pSVar11,(pSVar11->klass->vtable).__unknown_3.method);
    return movementMap;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pIVar14 = (IInputToPlayerMovement *)(*pcVar13)();
  return pIVar14;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar2 = (pMVar1->fields).owner;
  if (pMVar2 != (MVSimpleOneSeatVehicle *)0x0) {
    this_00 = (pMVar2->fields).IsFiring;
    this = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)((uint)this & 0xffffff);
    value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      this_01 = (pMVar1->fields).triggerHandler;
      if (this_01 != (MVTriggerHandler *)0x0) {
        MVTriggerHandler::MVTriggerHandler_Reset(this_01,(MethodInfo *)0x0);
        pVVar3 = (pMVar1->fields).pickupOwner;
        if (pVVar3 != (VehiclePickupOwner *)0x0) {
          pPVar4 = (pVVar3->fields)._.currentItem;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pPVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pVVar3 = (pMVar1->fields).pickupOwner;
            if ((pVVar3 == (VehiclePickupOwner *)0x0) ||
               (pPVar4 = (pVVar3->fields)._.currentItem, pPVar4 == (PickupItem *)0x0))
            goto code_?;
            (*(pPVar4->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable).OnLeaveVehicleWithWeapon.method);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_RefillEnergy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,
               VehicleEnergyRefill vehicleEnergyRefill,MethodInfo *method)

{
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (this_00 = (pSVar1->fields).vehicleEnergyContainer, this_00 != (VehicleEnergyContainer *)0x0))
  {
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,vehicleEnergyRefill,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
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
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (pVVar2 = (pSVar1->fields).vehicleEnergyContainer, pVVar2 != (VehicleEnergyContainer *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = 0.0;
    pDVar4 = (pVVar2->fields).predictions;
    if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar4,spawnerId,(VehicleEnergyRefillPrediction *)&stack0xffffffe0,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar5 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar3 = (pVVar2->fields).energyStorage - fVar3 * (pVVar2->fields).originalEnergyStorage;
        (pVVar2->fields).energyStorage = fVar3;
        if (fVar3 < 0.0) {
          (pVVar2->fields).energyStorage = 0.0;
        }
        pDVar4 = (pVVar2->fields).predictions;
        if (pDVar4 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar4,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
      }
      return;
    }
  }
code_?:
  uVar6 = func_?(&stack0xffffffdc);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Vehicle_is_stuck);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (this_00 = (pSVar1->fields).smoothController, this_00 != (SmoothCharacterController *)0x0)) {
    SmoothCharacterController::SmoothCharacterController_SmoothMove(this_00,(MethodInfo *)0x0);
    if (interactionInput == (InputToInGameAction *)0x0) {
      return (InputToInGameAction *)0x0;
    }
    pVVar2 = (this->fields).pickupOwner;
    if (pVVar2 != (VehiclePickupOwner *)0x0) {
      MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pVVar2,(MethodInfo *)0x0);
      pMVar3 = (this->fields).owner;
      if ((pMVar3 != (MVSimpleOneSeatVehicle *)0x0) &&
         (pVVar2 = (this->fields).pickupOwner, pVVar2 != (VehiclePickupOwner *)0x0)) {
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pVVar2,(interactionInput->fields).fire,(pMVar3->fields).IsFiring
                   ,(MethodInfo *)0x0);
        pVVar2 = (this->fields).pickupOwner;
        if (pVVar2 != (VehiclePickupOwner *)0x0) {
          pPVar4 = (pVVar2->fields)._.currentItem;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pPVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pVVar2 = (this->fields).pickupOwner;
            if ((pVVar2 == (VehiclePickupOwner *)0x0) ||
               (pPVar4 = (pVVar2->fields)._.currentItem, pPVar4 == (PickupItem *)0x0))
            goto code_?;
            if ((pPVar4->fields)._IsHolstered_k__BackingField == 0) {
              (interactionInput->fields).fire = 0;
            }
          }
          if ((interactionInput->fields).drop != 0) {
            pMVar3 = (this->fields).owner;
            if ((pMVar3 == (MVSimpleOneSeatVehicle *)0x0) ||
               (this_01 = (pMVar3->fields)._._._._.gameObject, this_01 == (GameObject *)0x0))
            goto code_?;
            pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (this_01,
                                MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            pOVar7 = pOVar6->klass;
            uVar8._0_2_ = pOVar7[1]._0.byval_arg.attrs;
            uVar8._2_1_ = pOVar7[1]._0.byval_arg.type;
            uVar8._3_1_ = pOVar7[1]._0.byval_arg.field_0x7;
            (*(code *)pOVar7[1]._0.byval_arg.data)(pOVar6,uVar8);
          }
          pSVar1 = (this->fields).vehicleMotor;
          if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
             (this_02 = (pSVar1->fields).stuckEvaluator,
             this_02 != (MVRigidBody_StuckEvaluator *)0x0)) {
            bVar5 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                              (this_02,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
            }
            FirstTimeElementActivator::FirstTimeElementActivator_RequestEvaluateActivatableElements
                      ((FirstTimeElementActivator *)interactionInput,(MethodInfo *)0x1);
            return interactionInput;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pIVar10 = (InputToInGameAction *)(*pcVar9)();
  return pIVar10;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_UsesEnergy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).vehicleMotor;
  if ((pSVar2 != (SimpleVehicleMotorBase *)0x0) &&
     (pVVar3 = (pSVar2->fields).vehicleEnergyContainer, pVVar3 != (VehicleEnergyContainer *)0x0)) {
    return (pVVar3->fields)._UsingEnergy_k__BackingField;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
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
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?();
    func_?(&
                    VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    in_stack_1 =
         &VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                   );
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&MethodInfo__PickupGUI__Enter__);
    func_?(&MethodInfo__PickupGUI__Leave__);
    func_?(&MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields)._.timeBeforeUnregisterAfterDeath = 3.0;
  pLVar2 = (List_1_UnityEngine_Component_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
    (this->fields)._.localComponents = pLVar2;
    func_?(&(this->fields)._.localComponents,pLVar2);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    if ((vehicleBase != (MVSimpleOneSeatVehicle *)0x0) &&
       (pMVar3 = (vehicleBase->fields).Health, pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0))
    {
      pMVar4 = (pMVar3->fields)._._.OnChange;
      this_02 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      if (this_02 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar4,(Delegate *)this_02,(MethodInfo *)0x0);
        uVar6 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar5);
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar3->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar4 = pMVar5;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
          (pMVar3->fields)._._.OnChange = pMVar4;
          uVar6 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar5);
          pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar4 = pMVar5;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        }
        func_?(&(pMVar3->fields)._._.OnChange,pMVar4);
        this_00 = (vehicleBase->fields)._._._._.gameObject;
        if (this_00 != (GameObject *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (this_00,
                            VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                           );
          if (item != (Object *)0x0) {
            (*(code *)item->klass[1]._0.properties)
                      (item,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                       (vehicleBase->fields).shield,0,item->klass[1]._0.methods);
            if (motor != (SimpleVehicleMotorBase *)0x0) {
              uVar6._0_1_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                             usingEnergy;
              uVar6._1_3_ = *(undefined3 *)
                              &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField
                               .field_0x1;
              uVar6._4_4_ = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                             storage;
              (*(motor->klass->vtable).Init.methodPtr)
                        (motor,smoothController,item,uVar6,
                         (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.
                         consumption,(motor->klass->vtable).Init.method);
              pAVar7 = (this->fields)._.onEnter;
              pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
              if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)motor,(motor->klass->vtable).OnLocalVehicleEnter.method,
                           (MethodInfo *)0x0);
                pAVar9 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                pAVar7 = (Action *)0x0;
                if (pAVar9 == (Action *)0x0) {
                  (this->fields)._.onEnter = (Action *)0x0;
                }
                else {
                  if (pAVar9->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar9;
                  }
                  if (pAVar7 == (Action *)0x0) goto code_?;
                  (this->fields)._.onEnter = pAVar7;
                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                  pAVar7 = (Action *)0x0;
                  if (pAVar9->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar9;
                  }
                  if (pAVar7 == (Action *)0x0) goto code_?;
                }
                func_?(&(this->fields)._.onEnter,pAVar7);
                pAVar7 = (this->fields)._.onLeave;
                pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar8,(Object *)motor,
                             (motor->klass->vtable).OnLocalVehicleLeave.method,(MethodInfo *)0x0);
                  pAVar9 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                  pAVar7 = (Action *)0x0;
                  if (pAVar9 == (Action *)0x0) {
                    (this->fields)._.onLeave = (Action *)0x0;
                  }
                  else {
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar7 = pAVar9;
                    }
                    if (pAVar7 == (Action *)0x0) goto code_?;
                    (this->fields)._.onLeave = pAVar7;
                    uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                    pAVar7 = (Action *)0x0;
                    if (pAVar9->klass == TypeInfo__System__Action) {
                      pAVar7 = pAVar9;
                    }
                    if (pAVar7 == (Action *)0x0) goto code_?;
                  }
                  func_?(&(this->fields)._.onLeave,pAVar7);
                  pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_AddComponent_1
                                     (this_00,
                                      VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                                     );
                  pOVar11 = (Object__Class *)(vehicleBase->fields).CurrentItem;
                  if (pOVar10 != (Object *)0x0) {
                    pOVar10[2].monitor = (MonitorData *)item;
                    func_?(&pOVar10[2].monitor,item);
                    pOVar10[3].klass = pOVar11;
                    func_?(pOVar10 + 3);
                    this_01 = (vehicleBase->fields)._._._._.gameObject;
                    if (this_01 != (GameObject *)0x0) {
                      pVVar12 = (VehiclePickupOwner *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponent_1
                                         (this_01,
                                          VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                         );
                      (this->fields).pickupOwner = pVVar12;
                      func_?(&(this->fields).pickupOwner,pVVar12);
                      pVVar12 = (this->fields).pickupOwner;
                      if (pVVar12 != (VehiclePickupOwner *)0x0) {
                        (pVVar12->fields)._._IsLocal_k__BackingField = 1;
                        pAVar7 = (this->fields)._.onDestroy;
                        pVVar12 = (this->fields).pickupOwner;
                        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                 func_?(TypeInfo__System__Action);
                        if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (pNVar8,(Object *)pVVar12,
                                     MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                                     (MethodInfo *)0x0);
                          pAVar9 = (Action *)
                                   mscorlib.dll::System::Delegate::Delegate_Combine
                                             ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                              (MethodInfo *)0x0);
                          uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                          pAVar7 = (Action *)0x0;
                          if (pAVar9 == (Action *)0x0) {
                            (this->fields)._.onDestroy = (Action *)0x0;
                          }
                          else {
                            if (pAVar9->klass == TypeInfo__System__Action) {
                              pAVar7 = pAVar9;
                            }
                            if (pAVar7 == (Action *)0x0) goto code_?;
                            (this->fields)._.onDestroy = pAVar7;
                            uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                            pAVar7 = (Action *)0x0;
                            if (pAVar9->klass == TypeInfo__System__Action) {
                              pAVar7 = pAVar9;
                            }
                            if (pAVar7 == (Action *)0x0) goto code_?;
                          }
                          func_?(&this->fields,pAVar7);
                          pPVar13 = (PickupGUI *)
                                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_AddComponent_1
                                             (this_00,
                                              PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                             );
                          (this->fields).pickupGUI = pPVar13;
                          func_?(&(this->fields).pickupGUI,pPVar13);
                          pPVar13 = (this->fields).pickupGUI;
                          if (pPVar13 != (PickupGUI *)0x0) {
                            PickupGUI::PickupGUI_Initialize
                                      (pPVar13,(vehicleBase->fields)._._._._._.id,
                                       (MVPickupOwner *)(this->fields).pickupOwner,(MethodInfo *)0x0
                                      );
                            pAVar7 = (this->fields)._.onEnter;
                            pPVar13 = (this->fields).pickupGUI;
                            pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                     func_?(TypeInfo__System__Action);
                            if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate
                              ::NavMesh_OnNavMeshPreUpdate__ctor
                                        (pNVar8,(Object *)pPVar13,MethodInfo__PickupGUI__Enter__,
                                         (MethodInfo *)0x0);
                              pAVar9 = (Action *)
                                       mscorlib.dll::System::Delegate::Delegate_Combine
                                                 ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                                  (MethodInfo *)0x0);
                              uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                              pAVar7 = (Action *)0x0;
                              if (pAVar9 == (Action *)0x0) {
                                (this->fields)._.onEnter = (Action *)0x0;
                              }
                              else {
                                if (pAVar9->klass == TypeInfo__System__Action) {
                                  pAVar7 = pAVar9;
                                }
                                if (pAVar7 == (Action *)0x0) goto code_?;
                                (this->fields)._.onEnter = pAVar7;
                                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                pAVar7 = (Action *)0x0;
                                if (pAVar9->klass == TypeInfo__System__Action) {
                                  pAVar7 = pAVar9;
                                }
                                if (pAVar7 == (Action *)0x0) goto code_?;
                              }
                              func_?(&(this->fields)._.onEnter,pAVar7);
                              pAVar7 = (this->fields)._.onLeave;
                              pOVar10 = (Object *)&UNK_?;
                              pNVar8 = (NavMesh_OnNavMeshPreUpdate *)
                                       func_?(TypeInfo__System__Action);
                              if (pNVar8 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                UnityEngine.AIModule.dll::UnityEngine::AI::
                                NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor
                                          (pNVar8,pOVar10,MethodInfo__PickupGUI__Leave__,
                                           (MethodInfo *)0x0);
                                pAVar9 = (Action *)
                                         mscorlib.dll::System::Delegate::Delegate_Combine
                                                   ((Delegate *)pAVar7,(Delegate *)pNVar8,
                                                    (MethodInfo *)0x0);
                                uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                pAVar7 = (Action *)0x0;
                                if (pAVar9 == (Action *)0x0) {
                                  (this->fields)._.onLeave = (Action *)0x0;
                                }
                                else {
                                  if (pAVar9->klass == TypeInfo__System__Action) {
                                    pAVar7 = pAVar9;
                                  }
                                  if (pAVar7 == (Action *)0x0) goto code_?;
                                  (this->fields)._.onLeave = pAVar7;
                                  uVar6 = CONCAT44(TypeInfo__System__Action,pAVar9);
                                  pAVar7 = (Action *)0x0;
                                  if (pAVar9->klass == TypeInfo__System__Action) {
                                    pAVar7 = pAVar9;
                                  }
                                  if (pAVar7 == (Action *)0x0) goto code_?;
                                }
                                func_?(&(this->fields)._.onLeave);
                                pMVar14 = (MVTriggerHandler *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_AddComponent_1
                                                    (this_00,
                                                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                                  );
                                (this->fields).triggerHandler = pMVar14;
                                func_?(&(this->fields).triggerHandler,pMVar14);
                                pLVar2 = (this->fields)._.localComponents;
                                if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]
                                  ::List_1_System_Object__Add
                                            ((List_1_System_Object_ *)pLVar2,item,
                                             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                            );
                                  pLVar2 = (this->fields)._.localComponents;
                                  if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Object]::List_1_System_Object__Add
                                              ((List_1_System_Object_ *)pLVar2,
                                               (Object *)smoothController,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                              );
                                    pLVar2 = (this->fields)._.localComponents;
                                    if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Object]::List_1_System_Object__Add
                                                ((List_1_System_Object_ *)pLVar2,(Object *)motor,
                                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                );
                                      pLVar2 = (this->fields)._.localComponents;
                                      if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Object]::List_1_System_Object__Add
                                                  ((List_1_System_Object_ *)pLVar2,(Object *)pAVar7
                                                   ,
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                        pLVar2 = (this->fields)._.localComponents;
                                        if (pLVar2 != (List_1_UnityEngine_Component_ *)0x0) {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Object]::List_1_System_Object__Add
                                                    ((List_1_System_Object_ *)pLVar2,
                                                     (Object *)(this->fields).triggerHandler,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                          (this->fields).vehicleMotor = motor;
                                          func_?(&(this->fields).vehicleMotor,motor);
                                          (this->fields).owner = vehicleBase;
                                          func_?(&(this->fields).owner,vehicleBase);
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
    }
  }
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Int32 get_Id() */

int32_t Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
        MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_get_Id
                  (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).owner;
  if (pMVar2 != (MVSimpleOneSeatVehicle *)0x0) {
    return (pMVar2->fields)._._._._._.id;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

