
/* Void Destroy() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Destroy
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if ((pMVar1 != (MVSimpleOneSeatVehicle *)0x0) &&
     (pMVar2 = (pMVar1->fields).Health, pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar3 = (pMVar2->fields)._._.OnChange;
    value = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    pMVar4 = MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_;
    (value->fields).method_ptr =
         MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_->methodPointer;
    (value->fields).method = pMVar4;
    (value->fields).m_target = (Object *)this;
    pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar3,value,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar3 = pMVar5;
      }
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    }
    (pMVar2->fields)._._.OnChange = pMVar3;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Enter
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  pMVar1 = this;
  stack0xffffffec = (KeyValuePair_2_System_Int32_System_Int32_)CONCAT44(this,&UNK_?);
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  this_00 = (pMVar1->fields).triggerHandler;
  if (this_00 != (MVTriggerHandler *)0x0) {
    stack0xffffffec =
         (KeyValuePair_2_System_Int32_System_Int32_)
         CONCAT44(&UNK_?,LStack_2.fields.OnRewardsReturned);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    if ((pMVar1->fields).triggerHandler != (MVTriggerHandler *)0x0) {
      uStack3 = 0xffffffff;
      method = (MethodInfo *)&DAT_?;
      this = (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &this;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      LStack_2.fields._NextReward_k__BackingField.value = 0;
      LStack_2.fields.OnRewardsReturned = (Action *)0x0;
      iVar4 = 0;
      LStack_2.klass = (LevelRewardsManager__Class *)0x0;
      LStack_2.monitor = (MonitorData *)0x0;
      LStack_2.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
      LStack_2.fields._NextReward_k__BackingField.key = 0;
      puVar5 = (undefined4 *)&stack0xffffffb8;
      func_?();
      this_01 = in_stack_6[1].klass;
      *(undefined1 *)((int)&in_stack_6[2].klass + 1) = 1;
      if (this_01 != (Component_1__Class *)0x0) {
        pDVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_8,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                           );
        LStack_2.klass = (LevelRewardsManager__Class *)pDVar7->dictionary;
        LStack_2.monitor = (MonitorData *)pDVar7->next;
        LStack_2.fields.unseenLevelRewards =
             (Dictionary_2_System_Int32_System_Int32_ *)pDVar7->stamp;
        LStack_2.fields._NextReward_k__BackingField.key = (pDVar7->current).key;
        LStack_2.fields._NextReward_k__BackingField.value = (int32_t)(pDVar7->current).value;
        uStack3 = 0;
        while (cVar9 = func_?(), cVar9 != '\0') {
          join_0x00000008_0x00000000_ =
               LevelRewardsManager::LevelRewardsManager_get_NextReward
                         (&LStack_2,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                         );
          DStack_8.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)
               &LStack_2.fields.OnRewardsReturned;
          DStack_8.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
          ;
          this_02 = (TriggerBoxEvents *)func_?();
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          x = in_stack_6[1].fields._.m_CachedPtr;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                               (in_stack_6,
                                UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                               );
            in_stack_6[1].fields._.m_CachedPtr = pMVar11;
          }
          unaff_EDI = 0;
          if (this_02 == (TriggerBoxEvents *)0x0) goto code_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                    (this_02,in_stack_6[1].fields._.m_CachedPtr,(MethodInfo *)0x0);
        }
        unaff_EDI = 0;
        *puVar5 = 0x51;
        uStack3 = 0xffffffff;
        func_?();
        if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)in_stack_6[1].monitor !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)in_stack_6[1].monitor,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                    );
          if (in_stack_6[1].klass != (Component_1__Class *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                      ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)in_stack_6[1].klass,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            *unaff_FS_OFFSET = this;
            return;
          }
        }
      }
code_?:
      func_?(0);
      func_?(unaff_EDI,0,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (this->fields).vehicleMotor;
  if (movementMap == (IInputToPlayerMovement *)0x0) {
    if (pSStack_1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSStack_1->fields).HandleInput = 0;
  }
  else {
    pIVar2 = movementMap->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
          ppMVar5 = &(&(movementMap->klass->vtable).get_Direction)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(movementMap,TypeInfo__IInputToPlayerMovement,0);
code_?:
    puVar6 = (undefined8 *)(*(code *)*ppMVar5)(auStack_7,movementMap,ppMVar5[1]);
    uVar8 = *puVar6;
    fVar9 = *(float *)(puVar6 + 1);
    if (pSStack_1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSStack_1->fields).DirectInputMoveMap.x = (float)(int)uVar8;
    (pSStack_1->fields).DirectInputMoveMap.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    (pSStack_1->fields).DirectInputMoveMap.z = fVar9;
    pSVar10 = (this->fields).vehicleMotor;
    bVar11 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
    if (pSVar10 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar10->fields).Jump = bVar11;
    pSVar10 = (this->fields).vehicleMotor;
    if (pSVar10 == (SimpleVehicleMotorBase *)0x0) goto code_?;
    (pSVar10->fields).HandleInput = 1;
  }
  pSVar10 = (this->fields).vehicleMotor;
  if (pSVar10 != (SimpleVehicleMotorBase *)0x0) {
    (*(code *)(pSVar10->klass->vtable).__unknown_5.method)(pSVar10,pSVar10->klass[1]._0.image);
    return movementMap;
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  pIVar13 = (IInputToPlayerMovement *)(*pcVar12)();
  return pIVar13;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
     MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
               (MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).vehicleMotor;
  if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
    SimpleVehicleMotorBase::SimpleVehicleMotorBase_UpdateFunction(pSVar1,(MethodInfo *)0x0);
    if (interactionInput == (InputToInGameAction *)0x0) {
      return (InputToInGameAction *)0x0;
    }
    pVVar2 = (this->fields).pickupOwner;
    if (pVVar2 != (VehiclePickupOwner *)0x0) {
      MVPickupOwner::MVPickupOwner_SetLineOfFireLocal((MVPickupOwner *)pVVar2,(MethodInfo *)0x0);
      pVVar2 = (this->fields).pickupOwner;
      GoldRewardManager::GoldRewardManager_get_IsCountingDownGoldReward
                ((GoldRewardManager *)interactionInput,(MethodInfo *)0x0);
      pMVar3 = (this->fields).owner;
      if ((pMVar3 != (MVSimpleOneSeatVehicle *)0x0) && (pVVar2 != (VehiclePickupOwner *)0x0)) {
        MVPickupOwner::MVPickupOwner_HandleFire
                  ((MVPickupOwner *)pVVar2,0,(pMVar3->fields).IsFiring,(MethodInfo *)0x0);
        pVVar2 = (this->fields).pickupOwner;
        if (pVVar2 != (VehiclePickupOwner *)0x0) {
          x = (pVVar2->fields)._.currentItem;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pVVar2 = (this->fields).pickupOwner;
            if ((pVVar2 == (VehiclePickupOwner *)0x0) ||
               (this_00 = (MvCharacterController *)(pVVar2->fields)._.currentItem,
               this_00 == (MvCharacterController *)0x0)) goto code_?;
            bVar4 = MvCharacterController::MvCharacterController_get_IsGrounded
                              (this_00,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              InputToInGameAction::InputToInGameAction_set_Fire
                        (interactionInput,0,(MethodInfo *)0x0);
            }
          }
          bVar4 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                            ((GoldRewardManager *)interactionInput,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            pMVar3 = (this->fields).owner;
            if (pMVar3 == (MVSimpleOneSeatVehicle *)0x0) goto code_?;
            this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
            if (this_01 == (CelestialParam *)0x0) goto code_?;
            pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                               ((GameObject *)this_01,
                                MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                               );
            if (pUVar5 == (UseInteractorHandler *)0x0) goto code_?;
            (*(code *)pUVar5->klass[1]._0.namespaze)
                      (pUVar5,pUVar5->klass[1]._0.byval_arg.data.dummy);
          }
          pSVar1 = (this->fields).vehicleMotor;
          if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
            bVar4 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_IsStuck(pSVar1,(MethodInfo *)0x0)
            ;
            if (bVar4 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  pIVar7 = (InputToInGameAction *)(*pcVar6)();
  return pIVar7;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if (vehicleBase != (MVSimpleOneSeatVehicle *)0x0) {
    pMVar1 = (vehicleBase->fields).Health;
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      a = (pMVar1->fields)._._.OnChange;
      b = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      pMVar2 = MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_;
      (b->fields).method_ptr =
           MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_->
           methodPointer;
      (b->fields).method = pMVar2;
      (b->fields).m_target = (Object *)this;
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
      pAVar4 = (Action *)0x0;
      if (pAVar3 != (Action *)0x0) {
        if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pAVar3->klass ==
            TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pAVar4 = pAVar3;
        }
        pAVar5 = (Action__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pAVar4 == (Action *)0x0) goto code_?;
      }
      (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pAVar4;
      this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)vehicleBase,(MethodInfo *)0x0);
      if (this_00 != (CelestialParam *)0x0) {
        interactableLocal =
             (MVInteractableBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       ((GameObject *)this_00,
                        VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                       );
        if (interactableLocal != (MVInteractableBase *)0x0) {
          (*interactableLocal->klass[1]._0.gc_desc)
                    (interactableLocal,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,
                     0,(vehicleBase->fields).shield,0,interactableLocal->klass[1]._0.name);
          if (motor != (SimpleVehicleMotorBase *)0x0) {
            (*(code *)(motor->klass->vtable).Init.method)
                      (motor,smoothController,interactableLocal,
                       (motor->klass->vtable).OnLocalVehicleLeave.methodPtr);
            pAVar4 = (this->fields)._.onLeave;
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)motor,(motor->klass->vtable).__unknown_5.methodPtr,
                       (MethodInfo *)0x0);
            pAVar3 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
            pAVar4 = (Action *)0x0;
            if (pAVar3 != (Action *)0x0) {
              if (pAVar3->klass == TypeInfo__System__Action) {
                pAVar4 = pAVar3;
              }
              pAVar5 = TypeInfo__System__Action;
              if (pAVar4 == (Action *)0x0) goto code_?;
            }
            (this->fields)._.onLeave = pAVar4;
            this_01 = (VehicleEquipable *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                ((GameObject *)this_00,
                                 VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                                );
            if (this_01 != (VehicleEquipable *)0x0) {
              VehicleEquipable::VehicleEquipable_Init
                        (this_01,interactableLocal,(vehicleBase->fields).CurrentItem,
                         (MethodInfo *)0x0);
              this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)vehicleBase,(MethodInfo *)0x0);
              if (this_02 != (CelestialParam *)0x0) {
                pVVar7 = (VehiclePickupOwner *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_47
                                   ((GameObject *)this_02,
                                    VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                                   );
                (this->fields).pickupOwner = pVVar7;
                if (pVVar7 != (VehiclePickupOwner *)0x0) {
                  (pVVar7->fields)._._IsLocal_k__BackingField = 1;
                  pAVar4 = (this->fields)._.onDestroy;
                  pVVar7 = (this->fields).pickupOwner;
                  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Action);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar6,(Object *)pVVar7,
                             MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,
                             (MethodInfo *)0x0);
                  pAVar3 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
                  pAVar4 = (Action *)0x0;
                  if (pAVar3 != (Action *)0x0) {
                    if (pAVar3->klass == TypeInfo__System__Action) {
                      pAVar4 = pAVar3;
                    }
                    pAVar5 = TypeInfo__System__Action;
                    if (pAVar4 == (Action *)0x0) goto code_?;
                  }
                  (this->fields)._.onDestroy = pAVar4;
                  pPVar8 = (PickupGUI *)
                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_AddComponent_85
                                     ((GameObject *)this_00,
                                      PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                     );
                  (this->fields).pickupGUI = pPVar8;
                  worldObjectId =
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)vehicleBase,(MethodInfo *)0x0);
                  if (pPVar8 != (PickupGUI *)0x0) {
                    PickupGUI::PickupGUI_Initialize
                              (pPVar8,(int32_t)worldObjectId,
                               (MVPickupOwner *)(this->fields).pickupOwner,(MethodInfo *)0x0);
                    pAVar4 = (this->fields)._.onEnter;
                    pPVar8 = (this->fields).pickupGUI;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)pPVar8,MethodInfo__PickupGUI__Enter__,
                               (MethodInfo *)0x0);
                    pAVar3 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar4,(Delegate *)pUVar6,(MethodInfo *)0x0);
                    pAVar4 = (Action *)0x0;
                    if (pAVar3 != (Action *)0x0) {
                      if (pAVar3->klass == TypeInfo__System__Action) {
                        pAVar4 = pAVar3;
                      }
                      pAVar5 = TypeInfo__System__Action;
                      if (pAVar4 == (Action *)0x0) goto code_?;
                    }
                    pAVar3 = (this->fields)._.onLeave;
                    (this->fields)._.onEnter = pAVar4;
                    pPVar8 = (this->fields).pickupGUI;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)pPVar8,MethodInfo__PickupGUI__Leave__,
                               (MethodInfo *)0x0);
                    pAVar3 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pAVar3,(Delegate *)pUVar6,(MethodInfo *)0x0);
                    pAVar4 = (Action *)0x0;
                    if (pAVar3 != (Action *)0x0) {
                      if (pAVar3->klass == TypeInfo__System__Action) {
                        pAVar4 = pAVar3;
                      }
                      pAVar5 = TypeInfo__System__Action;
                      if (pAVar4 == (Action *)0x0) goto code_?;
                    }
                    (this->fields)._.onLeave = pAVar4;
                    pMVar9 = (MVTriggerHandler *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_85
                                        ((GameObject *)this_00,
                                         MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                        );
                    (this->fields).triggerHandler = pMVar9;
                    pLVar10 = (this->fields)._.localComponents;
                    if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                      List_1_UIPushOption__Add
                                ((List_1_UIPushOption_ *)pLVar10,
                                 (UIPushOption__Enum)interactableLocal,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                );
                      pLVar10 = (this->fields)._.localComponents;
                      if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                        List_1_UIPushOption__Add
                                  ((List_1_UIPushOption_ *)pLVar10,
                                   (UIPushOption__Enum)smoothController,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        pLVar10 = (this->fields)._.localComponents;
                        if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                          List_1_UIPushOption__Add
                                    ((List_1_UIPushOption_ *)pLVar10,(UIPushOption__Enum)motor,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                    );
                          pLVar10 = (this->fields)._.localComponents;
                          if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                            List_1_UIPushOption__Add
                                      ((List_1_UIPushOption_ *)pLVar10,(UIPushOption__Enum)this_01,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      );
                            pLVar10 = (this->fields)._.localComponents;
                            if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                              List_1_UIPushOption__Add
                                        ((List_1_UIPushOption_ *)pLVar10,
                                         (UIPushOption__Enum)(this->fields).triggerHandler,
                                         MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                        );
                              (this->fields).vehicleMotor = motor;
                              (this->fields).owner = vehicleBase;
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
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar5);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

