
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
  if ((pMVar1 == (MVSimpleOneSeatVehicle *)0x0) ||
     (pMVar2 = (pMVar1->fields).Health, pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0)) {
    uVar3 = func_?();
  }
  else {
    pMVar4 = (pMVar2->fields)._._.OnChange;
    this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_00,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar4);
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      ppMStack5 = &(pMVar2->fields)._._.OnChange;
      pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      func_?();
      return;
    }
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar4;
    }
    if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = pMVar7;
      uVar3 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar4);
      pMStack6 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMStack6 = pMVar4;
      }
      if (pMStack6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        ppMStack5 = &(pMVar2->fields)._._.OnChange;
        func_?();
        return;
      }
    }
  }
  _ppMStack00000014 = uVar3;
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
      uStack_5 = 0;
      pTStack_6 = (TriggerBoxEvents *)0x0;
      stack0xfffffff0 = 0;
      this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
                (in_stack_7->fields).triggerBoxEvents;
      (in_stack_7->fields).wasResetThisFrame = 1;
      if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           (&DStack_9,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                           );
        OStack_3.klass = (Object__Class *)pDVar8->_dictionary;
        OStack_3.monitor = (MonitorData *)pDVar8->_version;
        iStack_4 = pDVar8->_index;
        uStack_5 = (pDVar8->_current).key;
        _pTStack_14 = *(undefined8 *)&(pDVar8->_current).value;
        uStack2 = 1;
        while( true ) {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (&OStack_3,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__Dispose__
                   ,method_00);
        uStack2 = 0xffffffff;
        pDVar11 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(in_stack_7->fields).newTriggerBoxEvents;
        if (pDVar11 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    (pDVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                    );
          pDVar11 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(in_stack_7->fields).triggerBoxEvents;
          if (pDVar11 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
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
    uVar4._0_1_ = (pIStack_2->_1).rank;
    uVar4._1_1_ = (pIStack_2->_1).minimumAlignment;
    uStack_5 = 0;
    if (uVar4 != 0) {
      do {
        if (pIStack_2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
          ppMVar6 = &(&(movementMap->klass->vtable).get_Direction)
                     [movementMap->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar6 = (MethodInfo **)func_?(movementMap,TypeInfo__IInputToPlayerMovement,0);
code_?:
    puVar7 = (undefined8 *)(*(code *)*ppMVar6)(auStack_8,movementMap,ppMVar6[1]);
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
    (*(code *)(pSVar11->klass->vtable).__unknown_3.method)(pSVar11,pSVar11->klass[1]._0.image);
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
            (*(code *)(pPVar4->klass->vtable).OnLeaveVehicleWithWeapon.method)
                      (pPVar4,(pPVar4->klass->vtable).OnEnterVehicleWithWeapon.methodPtr);
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
    this_01 = (this->fields).pickupGUI;
    if (this_01 != (PickupGUI *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)this_01,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pVVar3 = (this->fields).pickupOwner;
        if (pVVar3 == (VehiclePickupOwner *)0x0) goto code_?;
        MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pVVar3,(MethodInfo *)0x0);
        pMVar4 = (this->fields).owner;
        if ((pMVar4 == (MVSimpleOneSeatVehicle *)0x0) ||
           (pVVar3 = (this->fields).pickupOwner, pVVar3 == (VehiclePickupOwner *)0x0))
        goto code_?;
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pVVar3,(interactionInput->fields).fire,(pMVar4->fields).IsFiring
                   ,(MethodInfo *)0x0);
      }
      pVVar3 = (this->fields).pickupOwner;
      if (pVVar3 != (VehiclePickupOwner *)0x0) {
        pPVar5 = (pVVar3->fields)._.currentItem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pPVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pVVar3 = (this->fields).pickupOwner;
          if ((pVVar3 == (VehiclePickupOwner *)0x0) ||
             (pPVar5 = (pVVar3->fields)._.currentItem, pPVar5 == (PickupItem *)0x0))
          goto code_?;
          if ((pPVar5->fields)._IsHolstered_k__BackingField == 0) {
            (interactionInput->fields).fire = 0;
          }
        }
        if ((interactionInput->fields).drop != 0) {
          pMVar4 = (this->fields).owner;
          if ((pMVar4 == (MVSimpleOneSeatVehicle *)0x0) ||
             (this_02 = (pMVar4->fields)._._._._.gameObject, this_02 == (GameObject *)0x0))
          goto code_?;
          pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this_02,
                              MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          (**(code **)&pOVar6->klass[1]._0.byval_arg.attrs)
                    (pOVar6,pOVar6->klass[1]._0.this_arg.data.dummy);
        }
        pSVar1 = (this->fields).vehicleMotor;
        if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
           (this_03 = (pSVar1->fields).stuckEvaluator, this_03 != (MVRigidBody_StuckEvaluator *)0x0)
           ) {
          bVar2 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                            (this_03,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
          }
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Activate
                    ((AvatarLimbManagerLocal_AvatarEmoteRecogniser *)interactionInput,
                     (MethodInfo *)0x1);
          return interactionInput;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (InputToInGameAction *)(*pcVar7)();
  return pIVar8;
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
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    func_?(&
                    VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    func_?(&
                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                   );
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
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__,
                    uVar1);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
    cRam_? = '\x01';
  }
  (this->fields)._.timeBeforeUnregisterAfterDeath = 3.0;
  pLVar2 = (List_1_UnityEngine_Component_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields)._.localComponents;
  (this->fields)._.localComponents = pLVar2;
  func_?(method_00,pLVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (vehicleBase == (MVSimpleOneSeatVehicle *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar3 = (vehicleBase->fields).Health;
    if (pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar4 = (pMVar3->fields)._._.OnChange;
    this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar3->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      this_00 = pMVar4[2].fields._._.method_ptr;
      if (this_00 == (GameObject *)0x0) goto code_?;
      item = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                       );
      if (item == (Object__Class *)0x0) goto code_?;
      pOVar6 = (Object__Class *)(item->_0).image;
      (*(code *)pOVar6[1]._0.methods)
                (item,pMVar4[4].fields._._.extra_arg,pMVar4[4].fields._._.delegate_trampoline,0,
                 pMVar4[4].fields._._.interp_invoke_impl,0,pOVar6[1]._0.nestedTypes);
      if (motor == (SimpleVehicleMotorBase *)0x0) goto code_?;
      uVar1._0_4_ = pMVar4[4].fields._._.invoke_impl;
      uVar1._4_4_ = pMVar4[4].fields._._.m_target;
      (*(code *)(motor->klass->vtable).Init.method)
                (motor,smoothController,item,uVar1,pMVar4[4].fields._._.method,
                 (motor->klass->vtable).OnLocalVehicleLeave.methodPtr);
      pAVar7 = (this->fields)._.onEnter;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar8,(Object *)motor,(motor->klass->vtable).__unknown_3.methodPtr,
                 (MethodInfo *)0x0);
      pAVar7 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (this->fields)._.onEnter = (Action *)0x0;
code_?:
        func_?();
        pAVar7 = (this->fields)._.onLeave;
        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar8,(Object *)motor,(motor->klass->vtable).OnLocalVehicleEnter.methodPtr,
                   (MethodInfo *)0x0);
        pAVar9 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
        pAVar7 = (Action *)0x0;
        if (pAVar9 == (Action *)0x0) {
          (this->fields)._.onLeave = (Action *)0x0;
code_?:
          func_?();
          pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (this_00,
                               VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                              );
          pMVar11 = pAVar7[4].fields._._.method_code;
          if (pOVar10 != (Object *)0x0) {
            pOVar10[3].klass = item;
            func_?(pOVar10 + 3,item);
            pOVar10[3].monitor = (MonitorData *)pMVar11;
            func_?(&pOVar10[3].monitor);
            this_01 = pAVar7[2].fields._._.method_ptr;
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
                object = (this->fields).vehicleMotor;
                pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)object,
                           MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                           (MethodInfo *)0x0);
                pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
                pDVar14 = (Delegate *)0x0;
                if (pDVar13 != (Delegate *)0x0) {
                  if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
                    pDVar14 = pDVar13;
                  }
                  if (pDVar14 != (Delegate *)0x0) {
                    (this->fields)._.timeBeforeUnregisterAfterDeath = (float)pDVar14;
                    pDVar14 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar13->klass == TypeInfo__System__Action) {
                      pDVar14 = pDVar13;
                    }
                    if (pDVar14 != (Delegate *)0x0) goto code_?;
                  }
                  goto code_?;
                }
                (this->fields)._.timeBeforeUnregisterAfterDeath = 0.0;
code_?:
                func_?();
                pMVar15 = (MVSimpleOneSeatVehicle *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (this_00,
                                     PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                    );
                (this->fields).owner = pMVar15;
                func_?(&(this->fields).owner);
                pMVar15 = (this->fields).owner;
                if (pMVar15 != (MVSimpleOneSeatVehicle *)0x0) {
                  PickupGUI::PickupGUI_Initialize
                            ((PickupGUI *)pMVar15,(int32_t)(pDVar14->fields).method_ptr,
                             (MVPickupOwner *)(this->fields).vehicleMotor,(MethodInfo *)0x0);
                  pVVar12 = (this->fields).pickupOwner;
                  pMVar15 = (this->fields).owner;
                  item_00 = TypeInfo__System__Action;
                  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar8,(Object *)pMVar15,MethodInfo__PickupGUI__Enter__,
                             (MethodInfo *)0x0);
                  pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pVVar12,(Delegate *)pNVar8,(MethodInfo *)0x0);
                  if (pDVar14 == (Delegate *)0x0) {
                    (this->fields).triggerHandler = (MVTriggerHandler *)0x0;
code_?:
                    func_?();
                    pDVar14 = (Delegate *)(this->fields).pickupGUI;
                    pOVar10 = (Object *)this[1].monitor;
                    pNVar8 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar8,pOVar10,MethodInfo__PickupGUI__Leave__,(MethodInfo *)0x0);
                    pMVar16 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar14,(Delegate *)pNVar8,(MethodInfo *)0x0);
                    pMVar17 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0;
                    if (pMVar16 == (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0) {
                      this[1].klass = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0
                      ;
code_?:
                      func_?();
                      pLVar2 = (List_1_UnityEngine_Component_ *)
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_AddComponent_1
                                         ((GameObject *)&UNK_?,
                                          MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                         );
                      this[1].fields._.localComponents = pLVar2;
                      func_?(&this[1].fields._.localComponents);
                      pAVar7 = this[1].fields._.onLeave;
                      if (pAVar7 != (Action *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pAVar7,(Object *)item,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pAVar7 = this[1].fields._.onLeave;
                        if (pAVar7 != (Action *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    ((List_1_System_Object_ *)pAVar7,(Object *)smoothController,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pAVar7 = this[1].fields._.onLeave;
                          if (pAVar7 != (Action *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__Add
                                      ((List_1_System_Object_ *)pAVar7,(Object *)motor,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pAVar7 = this[1].fields._.onLeave;
                            if (pAVar7 != (Action *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                              List_1_System_Object__Add
                                        ((List_1_System_Object_ *)pAVar7,(Object *)item_00,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              pAVar7 = this[1].fields._.onLeave;
                              if (pAVar7 != (Action *)0x0) {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          ((List_1_System_Object_ *)pAVar7,
                                           (Object *)this[1].fields._.localComponents,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                          );
                                this[1].fields.pickupOwner = (VehiclePickupOwner *)motor;
                                func_?(&this[1].fields.pickupOwner,motor);
                                this[1].fields.pickupGUI = (PickupGUI *)pMVar17;
                                func_?(&this[1].fields.pickupGUI,pMVar17);
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                    if ((Action__Class *)(pMVar16->_0).image == TypeInfo__System__Action) {
                      pMVar17 = pMVar16;
                    }
                    if (pMVar17 != (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0) {
                      this[1].klass = pMVar17;
                      pMVar17 = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0;
                      if ((Action__Class *)(pMVar16->_0).image == TypeInfo__System__Action) {
                        pMVar17 = pMVar16;
                      }
                      if (pMVar17 != (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle__Class *)0x0)
                      goto code_?;
                    }
                  }
                  else {
                    pDVar13 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
                      pDVar13 = pDVar14;
                    }
                    if (pDVar13 != (Delegate *)0x0) {
                      (this->fields).triggerHandler = (MVTriggerHandler *)pDVar13;
                      pDVar13 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
                        pDVar13 = pDVar14;
                      }
                      if (pDVar13 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          goto code_?;
        }
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar9;
        }
        if (pAVar7 != (Action *)0x0) {
          (this->fields)._.onLeave = pAVar7;
          pAVar7 = (Action *)0x0;
          if (pAVar9->klass == TypeInfo__System__Action) {
            pAVar7 = pAVar9;
          }
          if (pAVar7 != (Action *)0x0) goto code_?;
        }
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar7;
        }
        if (pAVar9 != (Action *)0x0) {
          (this->fields)._.onEnter = pAVar9;
          pAVar9 = (Action *)0x0;
          if (pAVar7->klass == TypeInfo__System__Action) {
            pAVar9 = pAVar7;
          }
          if (pAVar9 != (Action *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
    if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMVar5;
    }
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar3->fields)._._.OnChange = pMVar4;
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMVar5;
    }
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

