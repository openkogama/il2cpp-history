
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
  this_00 = (this->fields).vehicleMotor;
  if (this_00 != (SimpleVehicleMotorBase *)0x0) {
    SimpleVehicleMotorBase::SimpleVehicleMotorBase_RefillEnergy
              (this_00,vehicleEnergyRefill,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
    SimpleVehicleMotorBase::SimpleVehicleMotorBase_UpdateFunction(pSVar1,(MethodInfo *)0x0);
    if (interactionInput == (InputToInGameAction *)0x0) {
      return (InputToInGameAction *)0x0;
    }
    this_00 = (this->fields).pickupGUI;
    if (this_00 != (PickupGUI *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)this_00,(MethodInfo *)0x0);
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
             (this_01 = (pMVar4->fields)._._._._.gameObject, this_01 == (GameObject *)0x0))
          goto code_?;
          pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this_01,
                              MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          (**(code **)&pOVar6->klass[1]._0.byval_arg.attrs)
                    (pOVar6,pOVar6->klass[1]._0.this_arg.data.dummy);
        }
        pSVar1 = (this->fields).vehicleMotor;
        if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
          bVar2 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_IsStuck(pSVar1,(MethodInfo *)0x0);
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
  pSVar1 = (this->fields).vehicleMotor;
  if ((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
     (pVVar2 = (pSVar1->fields).vehicleEnergyContainer, pVVar2 != (VehicleEnergyContainer *)0x0)) {
    return (pVVar2->fields)._UsingEnergy_k__BackingField;
  }
  puStack_3 = &stack0xfffffffc;
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
  this_01 = (List_1_UnityEngine_Component_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Component>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__List__);
  method_00 = (MethodInfo *)&(this->fields)._.localComponents;
  (this->fields)._.localComponents = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (vehicleBase == (MVSimpleOneSeatVehicle *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar2 = (vehicleBase->fields).Health;
    if (pMVar2 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar3 = (pMVar2->fields)._._.OnChange;
    this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      this_00 = (GameObject *)pMVar2[3].fields._._.lastSendTime;
      if (this_00 == (GameObject *)0x0) goto code_?;
      value = (String *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_00,
                         VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                        );
      if (value == (String *)0x0) goto code_?;
      (*(code *)(value->klass->vtable).System_IConvertible_ToUInt16.method)
                (value,*(undefined4 *)&pMVar2[6].fields._._.writeThrough,
                 pMVar2[6].fields._._.lastSendTime,0,pMVar2[6].fields.min,0,
                 (value->klass->vtable).System_IConvertible_ToInt32.methodPtr);
      if (motor == (SimpleVehicleMotorBase *)0x0) goto code_?;
      uVar1._0_4_ = pMVar2[6].fields._._.value;
      uVar1._4_4_ = pMVar2[6].fields._._.sendValue;
      (*(code *)(motor->klass->vtable).Init.method)
                (motor,pMVar3,value,uVar1,pMVar2[6].fields._._.sendInterval,
                 (motor->klass->vtable).OnLocalVehicleLeave.methodPtr);
      pAVar5 = (this->fields)._.onEnter;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)motor,(motor->klass->vtable).__unknown_3.methodPtr,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (this->fields)._.onEnter = (Action *)0x0;
code_?:
        func_?();
        pAVar5 = (this->fields)._.onLeave;
        pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar6,(Object *)motor,(motor->klass->vtable).OnLocalVehicleEnter.methodPtr,
                   (MethodInfo *)0x0);
        pAVar5 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
        if (pAVar5 == (Action *)0x0) {
          (this->fields)._.onLeave = (Action *)0x0;
code_?:
          func_?();
          this_03 = (ValidatingReaderNodeData *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (this_00,
                               VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                              );
          if (this_03 != (ValidatingReaderNodeData *)0x0) {
            System.Xml.dll::System::Xml::ValidatingReaderNodeData::
            ValidatingReaderNodeData_SetItemData_2
                      (this_03,value,(String *)this[6].fields._.onLeave,(MethodInfo *)0x0);
            if ((GameObject *)this[3].monitor != (GameObject *)0x0) {
              pVVar7 = (VehiclePickupOwner *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 ((GameObject *)this[3].monitor,
                                  VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                 );
              (this->fields).pickupOwner = pVVar7;
              func_?(&(this->fields).pickupOwner,pVVar7);
              pVVar7 = (this->fields).pickupOwner;
              if (pVVar7 != (VehiclePickupOwner *)0x0) {
                (pVVar7->fields)._._IsLocal_k__BackingField = 1;
                object_00 = _UNK_?;
                pAVar5 = (this->fields)._.onDestroy;
                pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar6,(Object *)object_00,
                           MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                           (MethodInfo *)0x0);
                pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
                if (pDVar8 != (Delegate *)0x0) {
                  pDVar9 = (Delegate *)0x0;
                  if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                    pDVar9 = pDVar8;
                  }
                  if (pDVar9 != (Delegate *)0x0) {
                    pDVar10 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar10 = pDVar8;
                    }
                    _UNK_? = pDVar9;
                    if (pDVar10 != (Delegate *)0x0) goto code_?;
                  }
                  goto code_?;
                }
                _UNK_? = (Delegate *)0x0;
code_?:
                func_?();
                pPVar11 = (PickupGUI *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (this_00,
                                     PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                    );
                _UNK_? = pPVar11;
                func_?();
                if (_UNK_? != (PickupGUI *)0x0) {
                  PickupGUI::PickupGUI_Initialize
                            (_UNK_?,(int32_t)_UNK_?,_UNK_?,(MethodInfo *)0x0);
                  object_01 = _UNK_?;
                  pDVar8 = _UNK_?;
                  item = TypeInfo__System__Action;
                  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar6,(Object *)object_01,MethodInfo__PickupGUI__Enter__,
                             (MethodInfo *)0x0);
                  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      (pDVar8,(Delegate *)pNVar6,(MethodInfo *)0x0);
                  if (pDVar8 == (Delegate *)0x0) {
                    (pPVar11->fields).crossHair = (IGUICrossHair *)0x0;
code_?:
                    func_?();
                    pAVar12 = TypeInfo__System__Action;
                    pDVar8 = (Delegate *)(pPVar11->fields)._.m_CancellationTokenSource;
                    object = pPVar11[1].klass;
                    pNVar6 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar6,(Object *)object,MethodInfo__PickupGUI__Leave__,
                               (MethodInfo *)0x0);
                    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        (pDVar8,(Delegate *)pNVar6,(MethodInfo *)0x0);
                    pDVar8 = (Delegate *)0x0;
                    if (pDVar9 == (Delegate *)0x0) {
                      (pAVar12->_0).namespaze = (char *)0x0;
code_?:
                      ppcVar13 = &(pAVar12->_0).namespaze;
                      func_?();
                      pIVar14 = (Il2CppClass *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_AddComponent_1
                                          (this_00,
                                           MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                          );
                      (pAVar12->_0).castClass = pIVar14;
                      func_?();
                      pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                      if (pLVar15 != (List_1_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  (pLVar15,(Object *)value,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                        if (pLVar15 != (List_1_System_Object_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    (pLVar15,(Object *)pDVar8,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                          if (pLVar15 != (List_1_System_Object_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__Add
                                      (pLVar15,(Object *)motor,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pLVar15 = (List_1_System_Object_ *)(pAVar12->_0).this_arg.data.typeHandle;
                            if (pLVar15 != (List_1_System_Object_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                              List_1_System_Object__Add
                                        (pLVar15,(Object *)item,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              pLVar15 = (List_1_System_Object_ *)
                                       (pAVar12->_0).this_arg.data.typeHandle;
                              if (pLVar15 != (List_1_System_Object_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__Add
                                          (pLVar15,(Object *)(pAVar12->_0).castClass,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                          );
                                (pAVar12->_0).declaringType = (Il2CppClass *)motor;
                                func_?(&(pAVar12->_0).declaringType,motor);
                                (pAVar12->_0).parent = (Il2CppClass *)ppcVar13;
                                func_?(&(pAVar12->_0).parent,ppcVar13);
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                    if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                      pDVar8 = pDVar9;
                    }
                    if (pDVar8 != (Delegate *)0x0) {
                      (pAVar12->_0).namespaze = (char *)pDVar8;
                      pDVar8 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
                        pDVar8 = pDVar9;
                      }
                      if (pDVar8 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  else {
                    pDVar9 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar9 = pDVar8;
                    }
                    if (pDVar9 != (Delegate *)0x0) {
                      (pPVar11->fields).crossHair = (IGUICrossHair *)pDVar9;
                      pDVar9 = (Delegate *)0x0;
                      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                        pDVar9 = pDVar8;
                      }
                      if (pDVar9 != (Delegate *)0x0) goto code_?;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          goto code_?;
        }
        pAVar16 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar5;
        }
        if (pAVar16 != (Action *)0x0) {
          (this->fields)._.onLeave = pAVar16;
          pAVar16 = (Action *)0x0;
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar5;
          }
          if (pAVar16 != (Action *)0x0) goto code_?;
        }
      }
      else {
        pAVar16 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar16 = pAVar5;
        }
        if (pAVar16 != (Action *)0x0) {
          (this->fields)._.onEnter = pAVar16;
          pAVar16 = (Action *)0x0;
          if (pAVar5->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar5;
          }
          if (pAVar16 != (Action *)0x0) goto code_?;
        }
      }
      goto code_?;
    }
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar3 = pMVar4;
    }
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar2->fields)._._.OnChange = pMVar3;
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar3 = pMVar4;
    }
    if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

