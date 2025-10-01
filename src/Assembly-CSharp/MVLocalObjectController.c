
/* Boolean AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
               (MVLocalObjectController *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalObjectController__AttachState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AttachWorldObjectToSeat_is_alrea);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_AttachWorldObjectToSeat_is_alrea;
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    this_00 = (MVLocalObjectController_AttachState *)
              func_?(TypeInfo__MVLocalObjectController__AttachState);
    MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
              (this_00,worldObjectID,(MethodInfo *)0x0);
    (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
    func_?(&(this->fields).attachState,this_00);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
                (this_01,seatOwnerWoID,worldObjectID,seatBase,(MethodInfo *)0x0);
      return 1;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = (this->fields).attachState;
  if (pMVar4 == (MVLocalObjectController_IAttachInterface *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (**(code **)&pMVar4->klass[1]._0.this_arg.attrs)
                     (pMVar4,pMVar4->klass[1]._0.element_class);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)pSVar1,(MethodInfo *)0x0);
  return 0;
}


/* IInputToPlayerMovement CreateInputToPlayerMovement(MVGameMode) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_CreateInputToPlayerMovement
          (MVGameMode__Enum gameMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InputToPlayerMovementAndroid);
    func_?(&TypeInfo__InputToPlayerMovementAvatarEdit);
    func_?(&TypeInfo__InputToPlayerMovement);
    cRam_? = '\x01';
  }
  if (gameMode == MVGameMode__Enum_CharacterEditor) {
    pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
             func_?(TypeInfo__InputToPlayerMovementAvatarEdit);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
    return (IInputToPlayerMovement *)pUVar1;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pUVar1 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
             func_?(TypeInfo__InputToPlayerMovement);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar1,(MethodInfo *)0x0);
    return (IInputToPlayerMovement *)pUVar1;
  }
  this = (InputToPlayerMovementAndroid *)func_?(TypeInfo__InputToPlayerMovementAndroid);
  InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor(this,(MethodInfo *)0x0);
  return (IInputToPlayerMovement *)this;
}


/* Boolean DetachWorldObjectFromVehicle(Int32, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_DetachWorldObjectFromVehicle
               (MVLocalObjectController *this,int32_t worldObjectID,int32_t *vehicleID,
               bool leaveBecauseOfServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVLocalObjectController__DetachState);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                   );
    func_?(&TypeInfo__MVLocalObjectController__DismountedPlayerControlledObject);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    func_?(&StringLiteral_Trying_to_detach_but_nothing_in_);
    func_?(&StringLiteral_EnterDetachState_is_already_pend);
    cRam_? = '\x01';
  }
  if ((this->fields).attachState != (MVLocalObjectController_IAttachInterface *)0x0) {
    pMVar1 = ((this->fields).attachState)->klass;
    if (((TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment <=
         (pMVar1->_1).naturalAligment) &&
       ((pMVar1->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_EnterDetachState_is_already_pend,(MethodInfo *)0x0);
      return 0;
    }
  }
  pLVar2 = (this->fields).localControlledStack;
  if (pLVar2 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_detach_but_nothing_in_,(MethodInfo *)0x0);
      return 0;
    }
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).localControlledStack,(pLVar2->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    pLVar2 = (this->fields).localControlledStack;
    if (pLVar2 != (List_1_ILocalObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)(this->fields).localControlledStack,
                 (pLVar2->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
      if (leaveBecauseOfServer == 0) {
        pDVar4 = (this->fields).dismountedLocalControlledObjects;
        if (RVar3 != (RegexCharClass_SingleRange)0x0) {
          iVar5 = func_?(0,TypeInfo__ILocalObject);
          if (pDVar4 != (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                         *)0x0) {
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,iVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                              );
            if (bVar6 == 0) {
              pDVar4 = (this->fields).dismountedLocalControlledObjects;
              method_01 = (MethodInfo *)func_?(0);
              pOVar7 = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOVar7,ExceptionArgument__Enum_obj,method_01);
              pOVar7[1].monitor = (MonitorData *)RVar3;
              func_?(&pOVar7[1].monitor,RVar3);
              pOVar8 = (Object__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
              pOVar7[1].klass = pOVar8;
              if (pDVar4 == (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                             *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(int32_t)method_01,
                         pOVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                        );
            }
            method_00 = TypeInfo__MVLocalObjectController__DetachState;
            pOVar7 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)pOVar7;
            func_?(&(this->fields).attachState);
            this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_DetachWorldObjectFromVehicle
                        (this_00,worldObjectID,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      else if (RVar3 != (RegexCharClass_SingleRange)0x0) {
code_?:
        iVar5 = func_?(0,TypeInfo__ILocalObject);
        *vehicleID = iVar5;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar6 = (*pcVar9)();
  return bVar6;
}


/* Void FixedUpdateDismountedPlayerControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateDismountedPlayerControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                   );
    func_?(&TypeInfo__ILocalObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                       );
    pDStack_9 = &DStack_6;
    uStack_10 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
code_?:
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (DStack_6._current.value == (Object *)0x0) break;
      pMVar12 = DStack_6._current.value[1].monitor;
      pMStack_13 = pMVar12;
      if (pMVar12 == (MonitorData *)0x0) break;
      iStack_14 = *(int *)pMVar12;
      uVar15 = 0;
      uVar16 = *(ushort *)(iStack_14 + 0xb6);
      uStack_17 = (uint)uVar16;
      if (uVar16 != 0) {
        do {
          if (*(ILocalObject__Class **)(*(int *)(iStack_14 + 0x58) + (uint)uVar15 * 8) ==
              TypeInfo__ILocalObject) {
            iVar18 = *(int *)pMVar12;
            iVar19 = *(int *)(*(int *)(iVar18 + 0x58) + 4 + (uint)uVar15 * 8) + 0x1a;
            (**(code **)(iVar18 + iVar19 * 8))(pMVar12,0,*(undefined4 *)(iVar18 + 4 + iVar19 * 8));
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar16);
      }
      puVar20 = (undefined4 *)func_?(pMVar12,TypeInfo__ILocalObject,2);
      (*(code *)*puVar20)(pMVar12,0,puVar20[1]);
    } while( true );
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void FixedUpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputToPlayerMovement);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    pIVar2 = (this->fields).movementMap;
    if (pIVar2 != (IInputToPlayerMovement *)0x0) {
      func_?(2,TypeInfo__IInputToPlayerMovement,pIVar2,0);
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).localControlledStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__)
        ;
        uStack_4 = 0;
        if (pMVar3 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          pMVar5 = pMVar3->vector;
          while( true ) {
            if ((int)pMVar3->max_length <= (int)uStack_4) {
              return;
            }
            if (pMVar3->max_length <= uStack_4) break;
            piVar6 = (int *)pMVar5->index;
            pIVar2 = (this->fields).movementMap;
            if (piVar6 == (int *)0x0) goto code_?;
            uVar7 = 0;
            uVar8 = *(ushort *)(*piVar6 + 0xb6);
            if (uVar8 != 0) {
              do {
                if (*(ILocalObject__Class **)(*(int *)(*piVar6 + 0x58) + (uint)uVar7 * 8) ==
                    TypeInfo__ILocalObject) {
                  puVar9 = (undefined4 *)
                           (*piVar6 +
                           (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar7 * 8) + 0x1a) * 8);
                  goto code_?;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            puVar9 = (undefined4 *)func_?(piVar6,TypeInfo__ILocalObject,2);
code_?:
            (*(code *)*puVar9)(piVar6,pIVar2,puVar9[1]);
            uStack_4 = uStack_4 + 1;
            pMVar5 = (MultiColumnCollectionHeader_ViewState_ColumnState *)&pMVar5->name;
            pMVar3 = unaff_EBX;
          }
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean HandleAttachFailed() */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_HandleAttachFailed
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalObjectController__AttachState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVLocalObjectController__DetachState);
    func_?(&StringLiteral_AttachState_is_detachState);
    func_?(&StringLiteral_trying_to_leave_attachState__but);
    cRam_? = '\x01';
  }
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return 0;
  }
  pMVar1 = ((this->fields).attachState)->klass;
  if (((TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment <=
       (pMVar1->_1).naturalAligment) &&
     ((pMVar1->_1).typeHierarchy
      [(TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar2 = (this->fields).attachState;
  if (pMVar2 != (MVLocalObjectController_IAttachInterface *)0x0) {
    if (((pMVar2->klass->_1).naturalAligment <
         (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment) ||
       ((pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      func_?(pMVar2,TypeInfo__MVLocalObjectController__AttachState);
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVNetworkReporter);
        cRam_? = '\x01';
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pTVar4 = (pMVar3->fields).transformNetworkManager,
         pTVar4 != (TransformNetworkManager *)0x0)) {
        pMVar5 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar4,(int32_t)pMVar2[1].monitor,(MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkObject *)0x0) || (*(char *)&pMVar2[1].klass == '\0')) {
code_?:
          (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
          func_?(&(this->fields).attachState,0);
          return 1;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pTVar4 = (pMVar3->fields).transformNetworkManager;
          this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_00 != (MVWorldObjectClientManager *)0x0) {
            owner = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_00,(int32_t)pMVar2[1].monitor,(MethodInfo *)0x0);
            this_01 = (MVNetworkReporter *)func_?();
            MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
            if (pTVar4 != (TransformNetworkManager *)0x0) {
              TransformNetworkManager::TransformNetworkManager_AddReporter
                        (pTVar4,(int32_t)this_00,this_01,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void HandleAttachWorldObjectToSeat(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleAttachWorldObjectToSeat
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (success != 0) {
    (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
    func_?(&(this->fields).attachState,0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalObjectController__AttachState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVLocalObjectController__DetachState);
    func_?(&StringLiteral_AttachState_is_detachState);
    func_?(&StringLiteral_trying_to_leave_attachState__but);
    cRam_? = '\x01';
  }
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = ((this->fields).attachState)->klass;
  if (((TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment <=
       (pMVar1->_1).naturalAligment) &&
     ((pMVar1->_1).typeHierarchy
      [(TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar2 = (this->fields).attachState;
  if (pMVar2 != (MVLocalObjectController_IAttachInterface *)0x0) {
    if (((pMVar2->klass->_1).naturalAligment <
         (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment) ||
       ((pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      func_?(pMVar2,TypeInfo__MVLocalObjectController__AttachState);
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVNetworkReporter);
        cRam_? = '\x01';
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pTVar4 = (pMVar3->fields).transformNetworkManager,
         pTVar4 != (TransformNetworkManager *)0x0)) {
        pMVar5 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar4,(int32_t)pMVar2[1].monitor,(MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkObject *)0x0) || (*(char *)&pMVar2[1].klass == '\0')) {
code_?:
          (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
          func_?(&(this->fields).attachState,0);
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar3 != (MVNetworkGame *)0x0) {
          pTVar4 = (pMVar3->fields).transformNetworkManager;
          this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_00 != (MVWorldObjectClientManager *)0x0) {
            owner = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_00,(int32_t)pMVar2[1].monitor,(MethodInfo *)0x0);
            this_01 = (MVNetworkReporter *)func_?();
            MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
            if (pTVar4 != (TransformNetworkManager *)0x0) {
              TransformNetworkManager::TransformNetworkManager_AddReporter
                        (pTVar4,(int32_t)this_00,this_01,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleDetachWorldObjectFromVehicle(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleDetachWorldObjectFromVehicle
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_HandleDetachWorldObjectFromVehic);
    cRam_? = '\x01';
  }
  (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
  func_?(&(this->fields).attachState,0);
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_HandleDetachWorldObjectFromVehic,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IsInsideVehicle(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_IsInsideVehicle
               (MVLocalObjectController *this,MVWorldObjectClient *worldObjectClient,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&TypeInfo__MVVehicleBase);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 == (List_1_ILocalObject_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pLVar1->fields)._size == 0) {
    return 0;
  }
  if ((worldObjectClient == (MVWorldObjectClient *)0x0) &&
     (worldObjectClient = MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0),
     worldObjectClient == (MVWorldObjectClient *)0x0)) {
    return 0;
  }
  if (((TypeInfo__MVVehicleBase->_1).naturalAligment <=
       (worldObjectClient->klass->_1).naturalAligment) &&
     ((MVVehicleBase__Class *)
      (worldObjectClient->klass->_1).typeHierarchy
      [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] == TypeInfo__MVVehicleBase)) {
    return worldObjectClient != (MVWorldObjectClient *)0x0;
  }
  return 0;
}


/* Boolean IsInsideVehicleUsingEnergy(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_IsInsideVehicleUsingEnergy
               (MVLocalObjectController *this,MVWorldObjectClient *worldObjectClient,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&TypeInfo__MVVehicleBase);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 == (List_1_ILocalObject_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pLVar1->fields)._size != 0) {
    if ((worldObjectClient == (MVWorldObjectClient *)0x0) &&
       (worldObjectClient = MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0),
       (MVVehicleBase *)worldObjectClient == (MVVehicleBase *)0x0)) {
      return 0;
    }
    if (((((MVVehicleBase *)worldObjectClient)->klass->_1).naturalAligment <
         (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
       ((MVVehicleBase__Class *)
        (((MVVehicleBase *)worldObjectClient)->klass->_1).typeHierarchy
        [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_00 = (MVVehicleBase *)0x0;
    if (bVar4) {
      this_00 = (MVVehicleBase *)worldObjectClient;
    }
    if (this_00 != (MVVehicleBase *)0x0) {
      bVar3 = MVVehicleBase::MVVehicleBase_UsesEnergy(this_00,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


/* Void OnAttachWorldObjectToSeat(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
               (MVLocalObjectController *this,int32_t instigatorActorNr,int32_t seatOwnerWoID,
               int32_t worldObjectID,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).dismountedLocalControlledObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,seatOwnerWoID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
      pDVar1 = (this->fields).dismountedLocalControlledObjects;
      if (pDVar1 == (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,seatOwnerWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                );
    }
    this_00 = (this->fields).worldObjectClientManagerNetwork;
    if (this_00 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
                (this_00,0,seatOwnerWoID,worldObjectID,seatID,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OverrideRemoveTimeForDismountedWorldObject(Int32, Single) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
               (MVLocalObjectController *this,int32_t woID,float timeBeforeUnregister,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                   );
    func_?(&StringLiteral_Dismounted_object_not_found);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).dismountedLocalControlledObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Dismounted_object_not_found,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).dismountedLocalControlledObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                   *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pOVar3[1].klass = (Object__Class *)(fVar4 - (_UNK_? - 0.0));
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Push(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_Push
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).localControlledStack;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)localObject,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveAvatarLocalObject() */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_RemoveAvatarLocalObject
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).localControlledStack;
  method_00 = TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__set_Item
              (this_00,0,value,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAvatarLocalObject(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).localControlledStack;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__set_Item
              (this_00,0,(Object *)localObject,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean SpawnVehicleWithDriver(Int32, Int32, VehicleSeatBase) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_SpawnVehicleWithDriver
               (MVLocalObjectController *this,int32_t worldObjectSpawnerVehicleID,
               int32_t worldObjectID,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalObjectController__AttachState);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&StringLiteral_Can_t_have_more_active_Client_Co);
    func_?(&StringLiteral__max_is_);
    func_?(&StringLiteral_SpawnVehicleWithDriver_is_alread);
    cRam_? = '\x01';
  }
  pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if ((pHVar1->fields)._count < 4) {
      if ((this->fields).attachState != (MVLocalObjectController_IAttachInterface *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_SpawnVehicleWithDriver_is_alread,(MethodInfo *)0x0);
        return 0;
      }
      this_00 = (MVLocalObjectController_AttachState *)
                func_?(TypeInfo__MVLocalObjectController__AttachState);
      MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
                (this_00,worldObjectID,(MethodInfo *)0x0);
      (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
      func_?(&(this->fields).attachState,this_00);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
                  (this_01,worldObjectSpawnerVehicleID,worldObjectID,seatBase,(MethodInfo *)0x0);
        return 1;
      }
    }
    else {
      pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        str3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Can_t_have_more_active_Client_Co,pSVar2,
                            StringLiteral__max_is_,str3,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar2,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateControllerFixedUpdate
               (MVLocalObjectController *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 == MVJoinState__Enum_Playing) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__IInputToPlayerMovement);
      func_?(&TypeInfo__ILocalObject);
      func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
      func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
      cRam_? = '\x01';
    }
    pLVar2 = (this->fields).localControlledStack;
    if (pLVar2 == (List_1_ILocalObject_ *)0x0) goto code_?;
    if ((pLVar2->fields)._size != 0) {
      pIVar3 = (this->fields).movementMap;
      if (pIVar3 == (IInputToPlayerMovement *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_?(2,TypeInfo__IInputToPlayerMovement,pIVar3,0);
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).localControlledStack;
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) goto code_?;
      pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
      uStack_6 = 0;
      if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      pMVar7 = pMVar5->vector;
      for (; (int)uStack_6 < (int)pMVar5->max_length; uStack_6 = uStack_6 + 1) {
        if (pMVar5->max_length <= uStack_6) goto code_?;
        piVar8 = (int *)pMVar7->index;
        pIVar3 = (this->fields).movementMap;
        if (piVar8 == (int *)0x0) goto code_?;
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar8 + 0xb6);
        if (uVar10 != 0) {
          do {
            if (*(ILocalObject__Class **)(*(int *)(*piVar8 + 0x58) + (uint)uVar9 * 8) ==
                TypeInfo__ILocalObject) {
              puVar11 = (undefined4 *)
                       (*piVar8 +
                       (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar9 * 8) + 0x1a) * 8);
              pMVar5 = unaff_EDI;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        puVar11 = (undefined4 *)func_?(piVar8,TypeInfo__ILocalObject,2);
        pMVar5 = unaff_EDI;
code_?:
        (*(code *)*puVar11)(piVar8,pIVar3,puVar11[1]);
        pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState *)&pMVar7->name;
        unaff_EDI = pMVar5;
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
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputToPlayerMovement);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).movementMap;
  if (pIVar2 != (IInputToPlayerMovement *)0x0) {
    func_?(2,TypeInfo__IInputToPlayerMovement,pIVar2,1);
    pIVar3 = (this->fields).interactionInput;
    if (pIVar3 != (InputToInGameAction *)0x0) {
      InputToInGameAction::InputToInGameAction_HandleInputState(pIVar3,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).localControlledStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        if ((this_00->fields)._size != 0) {
          pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_5 = 0;
          if (pMVar4 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          ppIVar6 = &(this->fields).interactionInput;
          pMVar7 = pMVar4->vector;
          for (; (int)uStack_5 < (int)pMVar4->max_length; uStack_5 = uStack_5 + 1) {
            if (pMVar4->max_length <= uStack_5) goto code_?;
            piVar8 = (int *)pMVar7->index;
            pIVar3 = *ppIVar6;
            if (piVar8 == (int *)0x0) goto code_?;
            uVar9 = 0;
            uVar10 = *(ushort *)(*piVar8 + 0xb6);
            if (uVar10 != 0) {
              do {
                if (*(ILocalObject__Class **)(*(int *)(*piVar8 + 0x58) + (uint)uVar9 * 8) ==
                    TypeInfo__ILocalObject) {
                  puVar11 = (undefined4 *)
                           (*piVar8 +
                           (*(int *)(*(int *)(*piVar8 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
                  pMVar4 = unaff_ESI;
                  goto code_?;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            puVar11 = (undefined4 *)func_?(piVar8,TypeInfo__ILocalObject,1);
            pMVar4 = unaff_ESI;
code_?:
            pIVar3 = (InputToInGameAction *)(*(code *)*puVar11)(piVar8,pIVar3,puVar11[1]);
            *ppIVar6 = pIVar3;
            func_?(ppIVar6,pIVar3);
            pMVar7 = (MultiColumnCollectionHeader_ViewState_ColumnState *)&pMVar7->name;
            unaff_ESI = pMVar4;
          }
        }
        MVLocalObjectController_UpdateDismountedPlayerControlledObjects(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__ILocalObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffbc,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                       );
    uVar6 = *(ulonglong *)&(pDVar5->_current).value;
    uStack_1 = 1;
code_?:
    do {
      bVar7 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff94,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                        );
      method_00 = (MethodInfo *)uVar6;
      if (bVar7 == 0) goto code_?;
      if (method_00 == (MethodInfo *)0x0) break;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar8 - (float)method_00->invoker_method <= _UNK_?) {
        uVar6 = 0;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar9 == (MVNetworkGame *)0x0) ||
           (pMVar10 = (pMVar9->fields)._NetworkGameStateListener_k__BackingField,
           pMVar10 == (MVNetworkGameStateListener *)0x0)) break;
        if ((pMVar10->fields).currentGameState != 2) {
          if ((method_00 == (MethodInfo *)0x0) || (method_00->name == (char *)0x0)) break;
          uVar6 = ZEXT48(method_00->name);
          func_?();
          goto code_?;
        }
      }
      if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      in_stack_11 = (MethodInfo *)&UNK_?;
      func_?();
    } while( true );
  }
  goto code_?;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffff94,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
             ,method_00);
  uStack_1 = 0xffffffff;
  if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffc4,this_02,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    uStack_1 = 4;
    worldObjectId = pLVar12->_current;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&pOStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar7 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_03 = (RegexCharClass_SingleRange)
                MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 == (RegexCharClass_SingleRange)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                ((MVWorldObjectClientManager *)this_03,(int32_t)worldObjectId,(MethodInfo *)0x0);
      this_01 = (this->fields).dismountedLocalControlledObjects;
      if (this_01 ==
          (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0
         ) break;
      in_stack_11 = (MethodInfo *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)worldObjectId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                );
      worldObjectId = this_03;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputToPlayerMovement);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).movementMap;
  if (pIVar1 != (IInputToPlayerMovement *)0x0) {
    func_?(2,TypeInfo__IInputToPlayerMovement,pIVar1,1);
    pIVar2 = (this->fields).interactionInput;
    if (pIVar2 != (InputToInGameAction *)0x0) {
      InputToInGameAction::InputToInGameAction_HandleInputState(pIVar2,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)(this->fields).localControlledStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        if ((this_00->fields)._size != 0) {
          pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                   List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_4 = 0;
          if (pMVar3 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
          goto code_?;
          ppIVar5 = &(this->fields).interactionInput;
          pMVar6 = pMVar3->vector;
          for (; (int)uStack_4 < (int)pMVar3->max_length; uStack_4 = uStack_4 + 1) {
            if (pMVar3->max_length <= uStack_4) {
              func_?();
              goto code_?;
            }
            piVar7 = (int *)pMVar6->index;
            pIVar2 = *ppIVar5;
            if (piVar7 == (int *)0x0) goto code_?;
            uVar8 = 0;
            uVar9 = *(ushort *)(*piVar7 + 0xb6);
            if (uVar9 != 0) {
              do {
                if (*(ILocalObject__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar8 * 8) ==
                    TypeInfo__ILocalObject) {
                  puVar10 = (undefined4 *)
                           (*piVar7 +
                           (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
                  goto code_?;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar9);
            }
            puVar10 = (undefined4 *)func_?(piVar7,TypeInfo__ILocalObject,1);
code_?:
            pIVar2 = (InputToInGameAction *)(*(code *)*puVar10)(piVar7,pIVar2,puVar10[1]);
            *ppIVar5 = pIVar2;
            func_?(ppIVar5,pIVar2);
            pMVar6 = (MultiColumnCollectionHeader_ViewState_ColumnState *)&pMVar6->name;
            pMVar3 = unaff_EBX;
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean VehicleEnergyUseRequest(Int32, Int32) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseRequest
               (MVLocalObjectController *this,int32_t worldObjectSpawnerVehicleEnergyID,
               int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    cRam_? = '\x01';
  }
  this_01 = (MVVehicleBase *)MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&TypeInfo__MVVehicleBase);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 == (List_1_ILocalObject_ *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    pMVar3 = this_01;
    if (this_01 == (MVVehicleBase *)0x0) {
      pMVar3 = (MVVehicleBase *)
               MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
    }
    if (pMVar3 == (MVVehicleBase *)0x0) {
      pMVar4 = (MVVehicleBase *)0x0;
    }
    else {
      if (((pMVar3->klass->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
         ((MVVehicleBase__Class *)
          (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] !=
          TypeInfo__MVVehicleBase)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar4 = (MVVehicleBase *)0x0;
      if (bVar5) {
        pMVar4 = pMVar3;
      }
    }
    if (pMVar4 == (MVVehicleBase *)0x0) {
      return 0;
    }
    this_00 = (MVWorldObjectClientManager *)(this->fields).worldObjectClientManagerNetwork;
    if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
       (this = (MVLocalObjectController *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,worldObjectSpawnerVehicleEnergyID,(MethodInfo *)0x0),
       (MVVehicleBase__Class *)this == (MVVehicleBase__Class *)0x0)) goto code_?;
    pIVar6 = (((MVVehicleBase__Class *)this)->_0).image;
    pMVar7 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
    if ((*(byte *)&pIVar6[4].assembly <
         (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
         naturalAligment) ||
       (*(MVWorldObjectSpawnerVehicleEnergy__Class **)
         ((pIVar6[2].typeCount - 4) +
         (uint)(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
               naturalAligment * 4) !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
    goto code_?;
    pVVar8 = WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
             MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
                       ((VehicleEnergyRefill *)&stack0xffffffe8,
                        (MVWorldObjectSpawnerVehicleEnergy *)this,1,(MethodInfo *)0x0);
    vehicleEnergyRefill = *pVVar8;
    takeTime = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
    MVWorldObjectSpawner::MVWorldObjectSpawner_TakePrediction
              ((MVWorldObjectSpawner *)this,takeTime,(MethodInfo *)0x0);
    if (this_01 == (MVVehicleBase *)0x0) goto code_?;
    this = (MVLocalObjectController *)this_01->klass;
    pMVar2 = TypeInfo__MVVehicleBase;
    if (((TypeInfo__MVVehicleBase->_1).naturalAligment <=
         (((MVVehicleBase__Class *)this)->_1).naturalAligment) &&
       ((MVVehicleBase__Class *)
        (((MVVehicleBase__Class *)this)->_1).typeHierarchy
        [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] == TypeInfo__MVVehicleBase)) {
      MVVehicleBase::MVVehicleBase_RefillEnergy(this_01,vehicleEnergyRefill,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_VehicleEnergyUse
                  (this_02,worldObjectSpawnerVehicleEnergyID,(this_01->fields)._._._._.id,
                   (MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
  }
  func_?(this_01,pMVar2);
  pMVar7 = extraout_EDX_00;
code_?:
  func_?(this,pMVar7);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void VehicleEnergyUseResponse(Boolean, Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
               (MVLocalObjectController *this,bool success,
               Dictionary_2_System_Byte_System_Object_ *returnValues,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__ContainsKey
                      (returnValues,0x16,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar1 == 0) {
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?();
      id = *piVar4;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        pMVar6 = (MVWorldObjectSpawnerVehicleEnergy *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar5,id,(MethodInfo *)0x0);
        if (pMVar6 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
          this_00 = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
        }
        else {
          if (((pMVar6->klass->_1).naturalAligment <
               (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
               naturalAligment) ||
             ((MVWorldObjectSpawnerVehicleEnergy__Class *)
              (pMVar6->klass->_1).typeHierarchy
              [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
               naturalAligment - 1] !=
              TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          this_00 = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
          if (bVar7) {
            this_00 = pMVar6;
          }
        }
        pMVar8 = (MVVehicleBase *)0x0;
        bVar7 = false;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                          (returnValues,0xbf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                          );
        if (bVar1 == 0) {
code_?:
          if (success == 0) {
            if (this_00 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
              MVWorldObjectSpawner::MVWorldObjectSpawner_RollbackPrediction
                        ((MVWorldObjectSpawner *)this_00,(MethodInfo *)0x0);
            }
            if (!bVar7) {
              return;
            }
            if (pMVar8 != (MVVehicleBase *)0x0) {
              MVVehicleBase::MVVehicleBase_RollbackRefillEnergyPrediction
                        (pMVar8,id,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (this_00 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
              return;
            }
            pMVar8 = (MVVehicleBase *)
                      MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
            if (pMVar8 == (MVVehicleBase *)0x0) {
              return;
            }
            if (((pMVar8->klass->_1).naturalAligment <
                 (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
               ((MVVehicleBase__Class *)
                (pMVar8->klass->_1).typeHierarchy
                [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pMVar9 = (MVVehicleBase *)0x0;
            if (bVar7) {
              pMVar9 = pMVar8;
            }
            if (pMVar9 == (MVVehicleBase *)0x0) {
              return;
            }
            if (this_00 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
              pVVar10 = WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
                        MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
                                  ((VehicleEnergyRefill *)&stack0xffffffec,this_00,0,
                                   (MethodInfo *)0x0);
              MVVehicleBase::MVVehicleBase_RefillEnergy(pMVar9,*pVVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (returnValues,0xbf,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?(pOVar2);
            id_00 = *piVar4;
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
              pMVar9 = (MVVehicleBase *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar5,id_00,(MethodInfo *)0x0);
              if (pMVar9 != (MVVehicleBase *)0x0) {
                if (((pMVar9->klass->_1).naturalAligment <
                     (TypeInfo__MVVehicleBase->_1).naturalAligment) ||
                   ((MVVehicleBase__Class *)
                    (pMVar9->klass->_1).typeHierarchy
                    [(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] != TypeInfo__MVVehicleBase))
                {
                  bVar11 = false;
                }
                else {
                  bVar11 = true;
                }
                pMVar12 = (MVVehicleBase *)0x0;
                if (bVar11) {
                  pMVar12 = pMVar9;
                }
                if (pMVar12 != (MVVehicleBase *)0x0) {
                  bVar7 = true;
                  pMVar8 = pMVar12;
                }
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
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
    func_?(&TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
                   );
    func_?(&TypeInfo__InputToInGameAction);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ILocalObject>);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  this_00 = (InputToInGameAction *)func_?(TypeInfo__InputToInGameAction);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  (this->fields).interactionInput = this_00;
  func_?(&(this->fields).interactionInput,this_00);
  this_01 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ILocalObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
  method_00 = TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (this_01 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_01,value,
               MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
    (this->fields).localControlledStack = (List_1_ILocalObject_ *)this_01;
    func_?();
    this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
              );
    method_01 = (MethodInfo *)&(this->fields).dismountedLocalControlledObjects;
    (this->fields).dismountedLocalControlledObjects =
         (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
         this_02;
    func_?(method_01,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_01);
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,
               (MethodInfo *)0x0);
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,(MethodInfo *)0x0);
    (this->fields).worldObjectClientManagerNetwork = worldObjectClientManagerNetwork;
    func_?();
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppMStack2 = (MVGameControllerBase__Class **)&TypeInfo__InputToPlayerMovementAndroid;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      ppMStack2 = (MVGameControllerBase__Class **)TypeInfo__InputToPlayerMovementAvatarEdit;
      this_03 = (InputToPlayerMovementAndroid *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_03,(MethodInfo *)0x0);
    }
    else {
      if (cRam_? == '\0') {
        ppMStack2 = &TypeInfo__MVGameControllerBase;
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
        ppMStack2 = (MVGameControllerBase__Class **)TypeInfo__InputToPlayerMovement;
        this_03 = (InputToPlayerMovementAndroid *)func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor
                  ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_03,(MethodInfo *)0x0)
        ;
      }
      else {
        ppMStack2 = (MVGameControllerBase__Class **)TypeInfo__InputToPlayerMovementAndroid;
        this_03 = (InputToPlayerMovementAndroid *)func_?();
        InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor(this_03,(MethodInfo *)0x0);
      }
    }
    (this->fields).movementMap = (IInputToPlayerMovement *)this_03;
    pMStack3 = &this->fields;
    pIStack4 = this_03;
    func_?();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectClient get_CurrentWorldObject() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
          (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    func_?(&StringLiteral_wo_does_not_exist);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).localControlledStack,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      id = func_?(0,TypeInfo__ILocalObject);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,id,(MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClient *)0x0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_wo_does_not_exist,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)0x0;
        }
        return pMVar3;
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
    func_?(&TypeInfo__MVLocalObjectController__AttachState);
    cRam_? = '\x01';
  }
  if ((this->fields).attachState != (MVLocalObjectController_IAttachInterface *)0x0) {
    pMVar1 = (this->fields).attachState;
    pMVar2 = pMVar1->klass;
    if (((TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment <=
         (pMVar2->_1).naturalAligment) &&
       ((pMVar2->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      return pMVar1 != (MVLocalObjectController_IAttachInterface *)0x0;
    }
    return 0;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__ILocalObject);
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).dismountedLocalControlledObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                           );
    pHVar6 = (HashSet_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    pHStack_7 = pHVar6;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor_1
              (pHVar6,(IEnumerable_1_System_Int32_ *)collection,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
              );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).localControlledStack;
    pHStack_8 = pHVar6;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_10,this_01,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__GetEnumerator__
                         );
      LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffb8;
      method_00 = (MethodInfo *)pLVar9->_version;
      RVar11 = pLVar9->_current;
      LStack_10._version = 0;
      uStack_1 = 1;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return pHVar6;
        }
        RStack_13 = RVar11;
        if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
        iStack_14 = *(int *)RVar11;
        uVar15 = 0;
        if (*(short *)(iStack_14 + 0xb6) != 0) {
          do {
            if (*(ILocalObject__Class **)(*(int *)(iStack_14 + 0x58) + (uint)uVar15 * 8) ==
                TypeInfo__ILocalObject) {
              puVar16 = (undefined4 *)
                       (*(int *)RVar11 +
                       (*(int *)(*(int *)(*(int *)RVar11 + 0x58) + 4 + (uint)uVar15 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(*(int *)RVar11 + 0xb6));
        }
        puVar16 = (undefined4 *)func_?();
code_?:
        item = (*(code *)*puVar16)(RVar11,puVar16[1]);
        pHVar6 = pHStack_7;
        if (pHStack_7 == (HashSet_1_System_Int32_ *)0x0) break;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                  (pHStack_7,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_)
        ;
      }
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  pHVar6 = (HashSet_1_System_Int32_ *)(*pcVar18)();
  return pHVar6;
}

