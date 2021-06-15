
/* Boolean AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
               (MVLocalObjectController *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (Object *)(this->fields).attachState;
  if (arg1 != (Object *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_AttachWorldObjectToSeat_is_alrea,arg1,
                         (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
    return 0;
  }
  this_00 = (MVLocalObjectController_AttachState *)
            func_?(TypeInfo__MVLocalObjectController__AttachState);
  MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
            (this_00,worldObjectID,(MethodInfo *)0x0);
  (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
              (this_01,seatOwnerWoID,worldObjectID,seatBase,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* IInputToPlayerMovement CreateInputToPlayerMovement(MVGameMode) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_CreateInputToPlayerMovement
          (MVGameMode__Enum gameMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (gameMode != MVGameMode__Enum_CharacterEditor) {
    pWVar1 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
             func_?(TypeInfo__InputToPlayerMovement);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar1,(MethodInfo *)0x0);
    return (IInputToPlayerMovement *)pWVar1;
  }
  pWVar1 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
           func_?(TypeInfo__InputToPlayerMovementAvatarEdit);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar1,(MethodInfo *)0x0);
  return (IInputToPlayerMovement *)pWVar1;
}


/* Boolean DetachWorldObjectFromVehicle(Int32, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_DetachWorldObjectFromVehicle
               (MVLocalObjectController *this,int32_t worldObjectID,int32_t *vehicleID,
               bool leaveBecauseOfServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).attachState;
  if (pMVar1 != (MVLocalObjectController_IAttachInterface *)0x0) {
    bVar2 = (TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVLocalObjectController_IAttachInterface *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVLocalObjectController_IAttachInterface *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_EnterDetachState_is_already_pend,(MethodInfo *)0x0);
      return 0;
    }
  }
  this_00 = (this->fields).localControlledStack;
  if (this_00 != (List_1_ILocalObject_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    if (pOVar5 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_detach_but_nothing_in_,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
              (this->fields).localControlledStack;
    if (this_01 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__)
      ;
      playerControlledObject =
           (ILocalObject *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     (this_01,(int32_t)((int)&pOVar5[-1].monitor + 3),
                      MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
      this_02 = (List_1_MVPlayer_ *)(this->fields).localControlledStack;
      if (this_02 != (List_1_MVPlayer_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__
                           );
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_02,(int32_t)((int)&pOVar5[-1].monitor + 3),
                   MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
        if (leaveBecauseOfServer == 0) {
          pDVar6 = (this->fields).dismountedLocalControlledObjects;
          if (playerControlledObject == (ILocalObject *)0x0) goto code_?;
          vehicleID = (int32_t *)&UNK_?;
          iVar7 = func_?();
          if (pDVar6 == (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                         *)0x0) goto code_?;
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                            );
          if (bVar8 == 0) {
            pDVar6 = (this->fields).dismountedLocalControlledObjects;
            iVar7 = func_?(0);
            this_03 = (MVLocalObjectController_DismountedPlayerControlledObject *)func_?();
            MVLocalObjectController+DismountedPlayerControlledObject::
            MVLocalObjectController_DismountedPlayerControlledObject__ctor
                      (this_03,playerControlledObject,(MethodInfo *)0x0);
            if (pDVar6 == (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                           *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar7,(Object *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                      );
          }
          this_04 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
          WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
          WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_04,(MethodInfo *)0x0);
          (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_04;
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Detaching_from_vehicle,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_05 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_DetachWorldObjectFromVehicle
                    (this_05,worldObjectID,(MethodInfo *)0x0);
        }
        if (playerControlledObject != (ILocalObject *)0x0) {
          iVar7 = func_?(0,TypeInfo__ILocalObject,playerControlledObject);
          *vehicleID = iVar7;
          return 1;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void FixedUpdateDismountedPlayerControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateDismountedPlayerControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).dismountedLocalControlledObjects;
  pLStack_8 = (Link__Array *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (this_00 ==
      (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pLStack_8 = (Link__Array *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                     );
  auStack_6._0_4_ = pDVar10->dictionary;
  auStack_6._4_4_ = pDVar10->next;
  auStack_6._8_4_ = pDVar10->stamp;
  auStack_6._12_4_ = (pDVar10->current).key;
  auStack_6._16_4_ = (pDVar10->current).value;
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
code_?:
  do {
    cVar12 = func_?();
    if (cVar12 == '\0') {
      pLStack_8->klass = (Link__Array__Class *)0x4b;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
      func_?();
      *unaff_FS_OFFSET = iStack_3;
      return;
    }
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                          );
    DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
    DStack_11.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
    ;
    this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
    if ((this_01 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
       (pWVar13 = (WinningConditionType__Enum__Array *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (this_01,(MethodInfo *)0x0), pWStack_14 = pWVar13,
       pWVar13 == (WinningConditionType__Enum__Array *)0x0)) goto code_?;
    pOStack_15 = (Object__Class *)pWVar13->klass;
    uVar16 = 0;
    uVar17._0_1_ = (pOStack_15->_1).rank;
    uVar17._1_1_ = (pOStack_15->_1).minimumAlignment;
    pOStack_18 = (Object__Array *)(uint)uVar17;
    if (uVar17 != 0) {
      do {
        if (pOStack_15->interfaceOffsets[uVar16].interfaceType ==
            (Il2CppClass *)TypeInfo__ILocalObject) {
          (*(code *)(&(((Object__Class *)pWVar13->klass)->vtable).GetHashCode)
                    [((Object__Class *)pWVar13->klass)->interfaceOffsets[uVar16].offset].method)
                    (pWVar13);
          goto code_?;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
    puVar19 = (undefined4 *)func_?(pWVar13);
    (*(code *)*puVar19)(pWVar13);
  } while( true );
}


/* Void FixedUpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).localControlledStack;
  if (this_00 != (List_1_ILocalObject_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    pIVar2 = (this->fields).movementMap;
    if (pIVar2 != (IInputToPlayerMovement *)0x0) {
      func_?(2,TypeInfo__IInputToPlayerMovement,pIVar2,0);
      this_01 = (List_1_VoxelHit_ *)(this->fields).localControlledStack;
      if (this_01 != (List_1_VoxelHit_ *)0x0) {
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__ToArray
                           (this_01,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__)
        ;
        uStack_4 = 0;
        if (pVVar3 != (VoxelHit__Array *)0x0) {
          pVVar5 = pVVar3->vector;
          while( true ) {
            if ((int)pVVar3->max_length <= (int)uStack_4) {
              return;
            }
            if (pVVar3->max_length <= uStack_4) break;
            piVar6 = (int *)(pVVar5->point).x;
            pIVar2 = (this->fields).movementMap;
            if (piVar6 == (int *)0x0) goto code_?;
            uVar7 = 0;
            uVar8 = *(ushort *)(*piVar6 + 0xb6);
            if (uVar8 != 0) {
              iVar9 = *(int *)(*piVar6 + 0x58);
              do {
                if (*(ILocalObject__Class **)(iVar9 + (uint)uVar7 * 8) == TypeInfo__ILocalObject) {
                  puVar10 = (undefined4 *)
                           (*piVar6 + (*(int *)(iVar9 + 4 + (uint)uVar7 * 8) + 0x1a) * 8);
                  goto code_?;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            puVar10 = (undefined4 *)func_?(piVar6,TypeInfo__ILocalObject,2,pIVar2,0);
code_?:
            pVVar3 = (VoxelHit__Array *)puVar10[1];
            (*(code *)*puVar10)(piVar6,pIVar2);
            uStack_4 = uStack_4 + 1;
            pVVar5 = (VoxelHit *)&(pVVar5->point).y;
          }
          uVar11 = func_?(0,0);
          func_?(uVar11);
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean HandleAttachFailed() */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_HandleAttachFailed
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).attachState;
  if (pMVar1 == (MVLocalObjectController_IAttachInterface *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return 0;
  }
  bVar2 = (TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment;
  if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
     ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pMVar4 = (MVLocalObjectController_IAttachInterface *)0x0;
  if (bVar3) {
    pMVar4 = pMVar1;
  }
  if (pMVar4 != (MVLocalObjectController_IAttachInterface *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields).attachState;
  if (pMVar1 != (MVLocalObjectController_IAttachInterface *)0x0) {
    pMVar5 = pMVar1->klass;
    bVar2 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
    if (((pMVar5->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (pMVar5->_1).typeHierarchy[bVar2 - 1] !=
       (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      bVar3 = false;
    }
    pMVar4 = (MVLocalObjectController_IAttachInterface *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVLocalObjectController_IAttachInterface *)0x0) {
      if (((pMVar5->_1).naturalAligment < bVar2) ||
         ((pMVar5->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pMVar4 = (MVLocalObjectController_IAttachInterface *)0x0;
      if (bVar3) {
        pMVar4 = pMVar1;
      }
      if (pMVar4 != (MVLocalObjectController_IAttachInterface *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkGame *)0x0) {
          pTVar7 = (TransformNetworkManager *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar6,
                              (MethodInfo *)0x0);
          if (pTVar7 != (TransformNetworkManager *)0x0) {
            pMVar8 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                (pTVar7,(int32_t)pMVar4[1].monitor,(MethodInfo *)0x0);
            if ((pMVar8 != (MVNetworkObject *)0x0) || (*(char *)&pMVar4[1].klass == '\0')) {
code_?:
              (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
              return 1;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar6 != (MVNetworkGame *)0x0) {
              pTVar7 = (TransformNetworkManager *)
                       UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                       TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar6,
                                  (MethodInfo *)0x0);
              woID = pMVar4[1].monitor;
              this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_00 != (MVWorldObjectClientManager *)0x0) {
                owner = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_00,(int32_t)pMVar4[1].monitor,(MethodInfo *)0x0);
                this_01 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
                MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
                if (pTVar7 != (TransformNetworkManager *)0x0) {
                  TransformNetworkManager::TransformNetworkManager_AddReporter
                            (pTVar7,(int32_t)woID,this_01,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    func_?(pMVar1,TypeInfo__MVLocalObjectController__AttachState);
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void HandleAttachWorldObjectToSeat(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleAttachWorldObjectToSeat
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (success == 0) {
    MVLocalObjectController_HandleAttachFailed(this,(MethodInfo *)0x0);
    return;
  }
  (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
  return;
}


/* Void HandleDetachWorldObjectFromVehicle(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleDetachWorldObjectFromVehicle
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_HandleDetachWorldObjectFromVehic,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnAttachWorldObjectToSeat(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
               (MVLocalObjectController *this,int32_t instigatorActorNr,int32_t seatOwnerWoID,
               int32_t worldObjectID,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).dismountedLocalControlledObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,seatOwnerWoID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Removing_dismountedPlayerObject_,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).dismountedLocalControlledObjects;
      if (this_01 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (this_01,seatOwnerWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                );
    }
    this_02 = (this->fields).worldObjectClientManagerNetwork;
    if (this_02 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
                (this_02,instigatorActorNr,seatOwnerWoID,worldObjectID,seatID,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OverrideRemoveTimeForDismountedWorldObject(Int32, Single) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
               (MVLocalObjectController *this,int32_t woID,float timeBeforeUnregister,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).dismountedLocalControlledObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Dismounted_object_not_found,(MethodInfo *)0x0);
      return;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).dismountedLocalControlledObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,woID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        MVLocalObjectController+DismountedPlayerControlledObject::
        MVLocalObjectController_DismountedPlayerControlledObject_SetTimeBeforeUnregister
                  ((MVLocalObjectController_DismountedPlayerControlledObject *)this_02,
                   timeBeforeUnregister,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Push(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_Push
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).localControlledStack;
  if (this_00 != (List_1_ILocalObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)localObject,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveAvatarLocalObject() */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_RemoveAvatarLocalObject
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
            (this->fields).localControlledStack;
  method_00 = TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_00 != (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
    List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
              (this_00,0,(WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)this_01,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAvatarLocalObject(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
            (this->fields).localControlledStack;
  if (this_00 != (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
    List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
              (this_00,0,
               (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)localObject,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean SpawnVehicleWithDriver(Int32, Int32, VehicleSeatBase) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_SpawnVehicleWithDriver
               (MVLocalObjectController *this,int32_t worldObjectSpawnerVehicleID,
               int32_t worldObjectID,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
  if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
code_?:
    uVar2 = func_?();
    func_?(uVar2);
  }
  else {
    JVar3 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                      );
    if ((int)JVar3 < 4) {
      if ((this->fields).attachState != (MVLocalObjectController_IAttachInterface *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_SpawnVehicleWithDriver_is_alread,(MethodInfo *)0x0);
        return 0;
      }
      this_00 = (MVLocalObjectController_AttachState *)func_?();
      MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
                (this_00,worldObjectID,(MethodInfo *)0x0);
      (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
                  (this_01,worldObjectSpawnerVehicleID,worldObjectID,seatBase,(MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Can_t_have_more_active_Client_Co != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Can_t_have_more_active_Client_Co,
                                (args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Can_t_have_more_active_Client_Co;
    pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
    if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
    System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json
    ::Schema::JsonSchemaType]::
    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                *)pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if ((pOVar5 != (Object *)0x0) && (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    if ((StringLiteral__max_is_ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__max_is_;
    pOVar5 = (Object *)func_?();
    if ((pOVar5 == (Object *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        return 0;
      }
      goto code_?;
    }
  }
  uVar2 = func_?();
  func_?(uVar2);
code_?:
  uVar2 = func_?();
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateControllerFixedUpdate
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields).localControlledStack;
    if (this_00 == (List_1_ILocalObject_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    if (pOVar2 != (Object *)0x0) {
      pIVar3 = (this->fields).movementMap;
      if (pIVar3 == (IInputToPlayerMovement *)0x0) {
code_?:
        func_?(0);
code_?:
        uVar4 = func_?(0,0);
        func_?(uVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      func_?(2,TypeInfo__IInputToPlayerMovement,pIVar3,0);
      this_01 = (List_1_VoxelHit_ *)(this->fields).localControlledStack;
      if (this_01 == (List_1_VoxelHit_ *)0x0) goto code_?;
      pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         (this_01,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
      uVar7 = 0;
      if (pVVar6 == (VoxelHit__Array *)0x0) goto code_?;
      pVVar8 = pVVar6->vector;
      while ((int)uVar7 < (int)pVVar6->max_length) {
        if (pVVar6->max_length <= uVar7) goto code_?;
        piVar9 = (int *)(pVVar8->point).x;
        if (piVar9 == (int *)0x0) goto code_?;
        uVar10 = 0;
        uVar11 = *(ushort *)(*piVar9 + 0xb6);
        if (uVar11 != 0) {
          iVar12 = *(int *)(*piVar9 + 0x58);
          do {
            if (*(ILocalObject__Class **)(iVar12 + (uint)uVar10 * 8) == TypeInfo__ILocalObject) {
              puVar13 = (undefined4 *)(*piVar9 + (*(int *)(iVar12 + 4 + (uint)uVar10 * 8) + 0x1a) * 8)
              ;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        puVar13 = (undefined4 *)func_?(piVar9,TypeInfo__ILocalObject,2);
code_?:
        pVVar6 = (VoxelHit__Array *)puVar13[1];
        (*(code *)*puVar13)(piVar9);
        pVVar8 = (VoxelHit *)&(pVVar8->point).y;
        uVar7 = unaff_ESI + 1;
        unaff_ESI = uVar7;
      }
    }
    MVLocalObjectController_FixedUpdateDismountedPlayerControlledObjects(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_UpdateControllerUpdate
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).movementMap;
  if (pIVar2 != (IInputToPlayerMovement *)0x0) {
    func_?(2,TypeInfo__IInputToPlayerMovement,pIVar2,1);
    pIVar3 = (this->fields).interactionInput;
    if (pIVar3 != (InputToInGameAction *)0x0) {
      InputToInGameAction::InputToInGameAction_HandleInputState(pIVar3,(MethodInfo *)0x0);
      this_00 = (this->fields).localControlledStack;
      if (this_00 != (List_1_ILocalObject_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__
                           );
        if (pOVar4 == (Object *)0x0) {
code_?:
          MVLocalObjectController_UpdateDismountedPlayerControlledObjects(this,(MethodInfo *)0x0);
          return;
        }
        this_01 = (List_1_VoxelHit_ *)(this->fields).localControlledStack;
        if (this_01 != (List_1_VoxelHit_ *)0x0) {
          pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this_01,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_6 = 0;
          if (pVVar5 != (VoxelHit__Array *)0x0) {
            pVVar7 = pVVar5->vector;
            while ((int)uStack_6 < (int)pVVar5->max_length) {
              if (pVVar5->max_length <= uStack_6) goto code_?;
              piVar8 = (int *)(pVVar7->point).x;
              pIVar3 = (this->fields).interactionInput;
              if (piVar8 == (int *)0x0) goto code_?;
              uVar9 = 0;
              uVar10 = *(ushort *)(*piVar8 + 0xb6);
              if (uVar10 != 0) {
                iVar11 = *(int *)(*piVar8 + 0x58);
                do {
                  if (*(ILocalObject__Class **)(iVar11 + (uint)uVar9 * 8) == TypeInfo__ILocalObject)
                  {
                    puVar12 = (undefined4 *)
                              (*piVar8 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x19) * 8);
                    pVVar5 = unaff_EDI;
                    goto code_?;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
              }
              puVar12 = (undefined4 *)func_?(piVar8,TypeInfo__ILocalObject,1);
              pVVar5 = unaff_EDI;
code_?:
              pIVar3 = (InputToInGameAction *)(*(code *)*puVar12)(piVar8,pIVar3,puVar12[1]);
              uStack_6 = uStack_6 + 1;
              (this->fields).interactionInput = pIVar3;
              pVVar7 = (VoxelHit *)&(pVVar7->point).y;
              unaff_EDI = pVVar5;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar13 = func_?(0,0);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateDismountedPlayerControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateDismountedPlayerControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLStack_6 = (List_1_UnityEngine_Vector4_ *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff88;
  puStack_4 = &stack0xffffff88;
  this_02 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<int>__List__);
  this_00 = (this->fields).dismountedLocalControlledObjects;
  pLStack_11 = this_02;
  if (this_00 !=
      (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0) {
    pMVar12 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_13
               ,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
              );
    uStack_1 = 0;
code_?:
    do {
      cVar14 = func_?();
      if (cVar14 == '\0') goto code_?;
      method_00 = (MethodInfo *)&stack0xffffff94;
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)method_00,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                            );
      this_03 = (MVLocalObjectController_DismountedPlayerControlledObject *)func_?();
      if (this_03 == (MVLocalObjectController_DismountedPlayerControlledObject *)0x0) break;
      bVar15 = MVLocalObjectController+DismountedPlayerControlledObject::
              MVLocalObjectController_DismountedPlayerControlledObject_ReadyToUnRegister
                        (this_03,pMVar12);
      if (bVar15 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_04 == (MVNetworkGame *)0x0) break;
        pMVar12 = (MethodInfo *)&UNK_?;
        this_05 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                               ((InventoryItemPreviewer *)this_04,(MethodInfo *)0x0);
        if (this_05 ==
            (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)0x0) break;
        pOVar16 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (this_05,method_00);
        if (pOVar16 != (Object *)0x2) {
          this_06 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
          if ((this_06 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) ||
             (pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 (this_06,pMVar12), pOVar16 == (Object *)0x0)) break;
          pMVar12 = (MethodInfo *)0x1;
          func_?(1,TypeInfo__ILocalObject);
          goto code_?;
        }
      }
      item = func_?();
      if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      pMVar12 = (MethodInfo *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,item,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    } while( true );
  }
code_?:
  pLVar17 = (List_1_UnityEngine_Vector4_ *)func_?();
code_?:
  func_?(pLVar17);
code_?:
  func_?(this_02,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
code_?:
  iVar19 = 0;
  *piStack_10 = 0x89;
  uStack_1 = 0xffffffff;
  func_?();
  pLVar17 = pLStack_6;
  if (pLStack_6 == (List_1_UnityEngine_Vector4_ *)0x0) {
    if (*piStack_10 == 0x89) {
      iVar19 = -1;
    }
    if (this_02 != (List_1_UnityEngine_Vector4_ *)0x0) {
      pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_13 + 4),
                          (List_1_UnityEngine_Color32_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar20->l
      ;
      CStack_8.monitor = (MonitorData *)pLVar20->next;
      CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar20->ver;
      CStack_8.fields.syncRoot = (Object *)(pLVar20->current).rgba;
      uStack_1 = 2;
      while (cVar14 = func_?(), this_02 = pLStack_6, cVar14 != '\0') {
        this_02 = (List_1_UnityEngine_Vector4_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                            );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_07 == (MVWorldObjectClientManager *)0x0) goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_07,(int32_t)this_02,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).dismountedLocalControlledObjects;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_01,(int32_t)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                  );
      }
      piStack_10[iVar19 + 1] = 0xd6;
      uStack_1 = 0xffffffff;
      func_?(&CStack_8,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     );
      if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) {
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    goto code_?;
  }
  goto code_?;
}


/* Void UpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).movementMap;
  if (pIVar1 != (IInputToPlayerMovement *)0x0) {
    func_?(2,TypeInfo__IInputToPlayerMovement,pIVar1,1);
    pIVar2 = (this->fields).interactionInput;
    if (pIVar2 != (InputToInGameAction *)0x0) {
      InputToInGameAction::InputToInGameAction_HandleInputState(pIVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).localControlledStack;
      if (this_00 != (List_1_ILocalObject_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__
                           );
        if (pOVar3 == (Object *)0x0) {
          return;
        }
        this_01 = (List_1_VoxelHit_ *)(this->fields).localControlledStack;
        if (this_01 != (List_1_VoxelHit_ *)0x0) {
          pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                   List_1_VoxelHit__ToArray
                             (this_01,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_5 = 0;
          if (pVVar4 != (VoxelHit__Array *)0x0) {
            pVVar6 = pVVar4->vector;
            while( true ) {
              if ((int)pVVar4->max_length <= (int)uStack_5) {
                return;
              }
              if (pVVar4->max_length <= uStack_5) break;
              piVar7 = (int *)(pVVar6->point).x;
              pIVar2 = (this->fields).interactionInput;
              if (piVar7 == (int *)0x0) goto code_?;
              uVar8 = 0;
              uVar9 = *(ushort *)(*piVar7 + 0xb6);
              if (uVar9 != 0) {
                iVar10 = *(int *)(*piVar7 + 0x58);
                do {
                  if (*(ILocalObject__Class **)(iVar10 + (uint)uVar8 * 8) == TypeInfo__ILocalObject)
                  {
                    puVar11 = (undefined4 *)
                             (*piVar7 + (*(int *)(iVar10 + 4 + (uint)uVar8 * 8) + 0x19) * 8);
                    goto code_?;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar9);
              }
              puVar11 = (undefined4 *)func_?(piVar7,TypeInfo__ILocalObject,1);
code_?:
              pIVar2 = (InputToInGameAction *)(*(code *)*puVar11)(piVar7,pIVar2,puVar11[1]);
              uStack_5 = uStack_5 + 1;
              (this->fields).interactionInput = pIVar2;
              pVVar6 = (VoxelHit *)&(pVVar6->point).y;
              pVVar4 = unaff_ESI;
            }
            uVar12 = func_?(0,0);
            func_?(uVar12);
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVLocalObjectController(MVWorldObjectClientManagerNetwork) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController__ctor
               (MVLocalObjectController *this,
               MVWorldObjectClientManagerNetwork *worldObjectClientManagerNetwork,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
           func_?(TypeInfo__InputToInGameAction);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar1,(MethodInfo *)0x0);
  (this->fields).interactionInput = (InputToInGameAction *)pWVar1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ILocalObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
  method_01 = TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
  if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_01,
             MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
  (this->fields).localControlledStack = (List_1_ILocalObject_ *)this_00;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
  ;
  this_02 = (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
            func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
            );
  (this->fields).dismountedLocalControlledObjects = this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,
             (MethodInfo *)0x0);
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_10
             ,1,(MethodInfo *)0x0);
  (this->fields).worldObjectClientManagerNetwork = worldObjectClientManagerNetwork;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    pIStack4 = (InputToPlayerMovement__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if (MVar3 != MVGameMode__Enum_CharacterEditor) {
    pIStack4 = TypeInfo__InputToPlayerMovement;
    pWVar1 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar1,(MethodInfo *)0x0);
    (this->fields).movementMap = (IInputToPlayerMovement *)pWVar1;
    return;
  }
  pIStack4 = (InputToPlayerMovement__Class *)TypeInfo__InputToPlayerMovementAvatarEdit;
  pWVar1 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(pWVar1,(MethodInfo *)0x0);
  (this->fields).movementMap = (IInputToPlayerMovement *)pWVar1;
  return;
}


/* MVWorldObjectClient get_CurrentWorldObject() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
          (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).localControlledStack;
  if (this_00 != (List_1_ILocalObject_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    if (pOVar1 == (Object *)0x0) {
      return (MVWorldObjectClient *)0x0;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
              (this->fields).localControlledStack;
    if (this_01 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__)
      ;
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_01,(int32_t)((int)&pOVar1[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_
                         );
      if (pIVar2 != (IEventSystemHandler *)0x0) {
        id = func_?();
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          pMVar3 = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_02,id,(MethodInfo *)0x0);
          if (pMVar3 == (MVWorldObjectClient *)0x0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_wo_does_not_exist,(MethodInfo *)0x0);
          }
          return pMVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}


/* Boolean get_IsEnteringVehicle() */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).attachState;
  if (pMVar1 != (MVLocalObjectController_IAttachInterface *)0x0) {
    bVar2 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVLocalObjectController_IAttachInterface *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVLocalObjectController_IAttachInterface *)0x0) {
      return 1;
    }
  }
  return 0;
}


/* HashSet`1[System.Int32] get_LocalControlledWorldObjects() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVLocalObjectController::
MVLocalObjectController_get_LocalControlledWorldObjects
          (MVLocalObjectController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (this->fields).dismountedLocalControlledObjects;
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (this_00 !=
      (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                          );
    this_02 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    pHStack_8 = this_02;
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_02,(int32_t)unaff_ESI,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
              );
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).localControlledStack;
    pHStack_9 = this_02;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,this_01,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar10->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
      uStack_1 = 0;
      while( true ) {
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puStack_7 = 0x56;
          uStack_1 = 0xffffffff;
          func_?(&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return (HashSet_1_System_Int32_ *)this_02;
        }
        pDVar13 = (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__get_Current__
                           );
        if (pDVar13 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)
                      0x0) break;
        pDStack_14 = pDVar13->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pDStack_14->_1).rank;
        uVar16._1_1_ = (pDStack_14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pDStack_14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__ILocalObject) {
              ppMVar17 = &(&(pDStack_14->vtable).Equals)[pDStack_14->interfaceOffsets[uVar15].offset].
                         method;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        ppMVar17 = (MethodInfo **)func_?(pDVar13,TypeInfo__ILocalObject,0);
code_?:
        item = (UnityWebRequest *)(*(code *)*ppMVar17)(pDVar13,ppMVar17[1]);
        this_02 = pHStack_8;
        unaff_ESI = pDVar13;
        if (pHStack_8 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) break;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (pHStack_8,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_)
        ;
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  pHVar19 = (HashSet_1_System_Int32_ *)(*pcVar18)();
  return pHVar19;
}

