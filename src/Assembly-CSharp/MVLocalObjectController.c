
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
    if (this_00 != (MVLocalObjectController_AttachState *)0x0) {
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
    pMVar5 = pMVar4->klass;
    uVar6._0_2_ = pMVar5[1]._0.this_arg.attrs;
    uVar6._2_1_ = pMVar5[1]._0.this_arg.type;
    uVar6._3_1_ = pMVar5[1]._0.this_arg.field_0x7;
    str1 = (String *)(*(code *)pMVar5[1]._0.this_arg.data)(pMVar4,uVar6);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
    pTVar1 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__InputToPlayerMovementAvatarEdit)
    ;
    if (pTVar1 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(pTVar1,(MethodInfo *)0x0);
      return (IInputToPlayerMovement *)pTVar1;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pTVar1 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__InputToPlayerMovement);
      if (pTVar1 != (TweenRunner_1_FloatTween_ *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor(pTVar1,(MethodInfo *)0x0);
        return (IInputToPlayerMovement *)pTVar1;
      }
    }
    else {
      this = (InputToPlayerMovementAndroid *)func_?(TypeInfo__InputToPlayerMovementAndroid)
      ;
      if (this != (InputToPlayerMovementAndroid *)0x0) {
        InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor(this,(MethodInfo *)0x0);
        return (IInputToPlayerMovement *)this;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IInputToPlayerMovement *)(*pcVar2)();
  return pIVar3;
}


/* Boolean DetachWorldObjectFromVehicle(Int32, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_DetachWorldObjectFromVehicle
               (MVLocalObjectController *this,int32_t worldObjectID,int32_t *vehicleID,
               bool leaveBecauseOfServer,MethodInfo *method)

{
  pMVar1 = this;
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
    pMVar2 = ((this->fields).attachState)->klass;
    if (((TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth <=
         (pMVar2->_1).typeHierarchyDepth) &&
       ((pMVar2->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_EnterDetachState_is_already_pend,(MethodInfo *)0x0);
      return 0;
    }
  }
  pLVar3 = (this->fields).localControlledStack;
  if (pLVar3 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar3->fields)._size == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_detach_but_nothing_in_,(MethodInfo *)0x0);
      return 0;
    }
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).localControlledStack,(pLVar3->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    pLVar3 = (this->fields).localControlledStack;
    if (pLVar3 != (List_1_ILocalObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)(this->fields).localControlledStack,
                 (pLVar3->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
      if (leaveBecauseOfServer != 0) {
        if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
code_?:
        uVar5 = func_?();
        *(undefined4 *)RVar4 = uVar5;
        return 1;
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (this->fields).dismountedLocalControlledObjects;
      if (RVar4 != (RegexCharClass_SingleRange)0x0) {
        pOVar6 = (Object *)func_?(0,TypeInfo__ILocalObject);
        if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          this = (MVLocalObjectController *)
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
          ;
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_00,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                            );
          if (bVar7 == 0) {
            worldObjectID = 0;
            func_?();
            method_00 = TypeInfo__MVLocalObjectController__DismountedPlayerControlledObject;
            this = (MVLocalObjectController *)
                   TypeInfo__MVLocalObjectController__DismountedPlayerControlledObject;
            pOVar6 = (Object *)func_?();
            if (pOVar6 == (Object *)0x0) goto code_?;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            pOVar6[1].monitor = (MonitorData *)RVar4;
            key = (Object *)&UNK_?;
            func_?(&pOVar6[1].monitor);
            pOVar8 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            pOVar6[1].klass = pOVar8;
            if (method_00 == (MVLocalObjectController_DismountedPlayerControlledObject__Class *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)method_00,key,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                      );
          }
          pOVar6 = (Object *)func_?();
          if (pOVar6 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)this);
            (pMVar1->fields).attachState = (MVLocalObjectController_IAttachInterface *)pOVar6;
            func_?(&(pMVar1->fields).attachState);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_DetachWorldObjectFromVehicle
                        (this_01,worldObjectID,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                       );
    pDStack_9 = &DStack_6;
    uStack_10 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
code_?:
    do {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
      uVar16 = *(ushort *)(iStack_14 + 0xb2);
      uStack_17 = (uint)uVar16;
      if (uVar16 != 0) {
        do {
          if (*(ILocalObject__Class **)(*(int *)(iStack_14 + 0x58) + (uint)uVar15 * 8) ==
              TypeInfo__ILocalObject) {
            puVar18 = (undefined4 *)
                     (*(int *)(*(int *)(*(int *)pMVar12 + 0x58) + 4 + (uint)uVar15 * 8) * 8 + 0xcc +
                     *(int *)pMVar12);
            (*(code *)*puVar18)(pMVar12,0,puVar18[1]);
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar16);
      }
      puVar18 = (undefined4 *)func_?(pMVar12,TypeInfo__ILocalObject,2);
      (*(code *)*puVar18)(pMVar12,0,puVar18[1]);
    } while( true );
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this->fields).localControlledStack;
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                 UnitySynchronizationContext+WorkRequest]::
                 List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__)
        ;
        uStack_4 = 0;
        if (pUVar3 != (UnitySynchronizationContext_WorkRequest__Array *)0x0) {
          pUVar5 = pUVar3->vector;
          while( true ) {
            if ((int)pUVar3->max_length <= (int)uStack_4) {
              return;
            }
            if (pUVar3->max_length <= uStack_4) break;
            pSVar6 = pUVar5->m_DelagateCallback;
            pIVar2 = (this->fields).movementMap;
            if (pSVar6 == (SendOrPostCallback *)0x0) goto code_?;
            uVar7 = 0;
            uVar8 = (pSVar6->klass->_1).interface_offsets_count;
            if (uVar8 != 0) {
              do {
                if (pSVar6->klass->interfaceOffsets[uVar7].interfaceType ==
                    (Il2CppClass *)TypeInfo__ILocalObject) {
                  ppIVar9 = &(&(pSVar6->klass->vtable).GetHashCode)
                             [pSVar6->klass->interfaceOffsets[uVar7].offset].methodPtr;
                  goto code_?;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            ppIVar9 = (Il2CppMethodPointer *)func_?(pSVar6,TypeInfo__ILocalObject,2);
code_?:
            (**ppIVar9)(pSVar6,pIVar2,(MethodInfo *)ppIVar9[1]);
            uStack_4 = uStack_4 + 1;
            pUVar5 = (UnitySynchronizationContext_WorkRequest *)&pUVar5->m_DelagateState;
            pUVar3 = unaff_EBX;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return 0;
  }
  pMVar1 = ((this->fields).attachState)->klass;
  if (((TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth <=
       (pMVar1->_1).typeHierarchyDepth) &&
     ((pMVar1->_1).typeHierarchy
      [(TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar2 = (this->fields).attachState;
  if (pMVar2 != (MVLocalObjectController_IAttachInterface *)0x0) {
    if (((pMVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth) ||
       ((pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth - 1] !=
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
            if (this_01 != (MVNetworkReporter *)0x0) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = ((this->fields).attachState)->klass;
  if (((TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth <=
       (pMVar1->_1).typeHierarchyDepth) &&
     ((pMVar1->_1).typeHierarchy
      [(TypeInfo__MVLocalObjectController__DetachState->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar2 = (this->fields).attachState;
  if (pMVar2 != (MVLocalObjectController_IAttachInterface *)0x0) {
    if (((pMVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth) ||
       ((pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth - 1] !=
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
            if (this_01 != (MVNetworkReporter *)0x0) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  if (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <=
       (worldObjectClient->klass->_1).typeHierarchyDepth) &&
     ((MVVehicleBase__Class *)
      (worldObjectClient->klass->_1).typeHierarchy
      [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] == TypeInfo__MVVehicleBase)) {
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
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    if (worldObjectClient == (MVWorldObjectClient *)0x0) {
      worldObjectClient = MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
    }
    if ((MVVehicleBase *)worldObjectClient != (MVVehicleBase *)0x0) {
      if (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <=
           (((MVVehicleBase *)worldObjectClient)->klass->_1).typeHierarchyDepth) &&
         ((MVVehicleBase__Class *)
          (((MVVehicleBase *)worldObjectClient)->klass->_1).typeHierarchy
          [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] == TypeInfo__MVVehicleBase)) {
        bVar2 = MVVehicleBase::MVVehicleBase_UsesEnergy
                          ((MVVehicleBase *)worldObjectClient,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)seatOwnerWoID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).dismountedLocalControlledObjects;
      if (this_01 ==
          (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0
         ) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,seatOwnerWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                );
    }
    this_02 = (this->fields).worldObjectClientManagerNetwork;
    if (this_02 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
                (this_02,0,seatOwnerWoID,worldObjectID,seatID,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Dismounted_object_not_found,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields).dismountedLocalControlledObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0)
    {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pOVar2[1].klass = (Object__Class *)(fVar3 - (_UNK_? - 0.0));
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  value = (Object *)func_?(TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder)
  ;
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if (this_00 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__set_Item
                (this_00,0,value,
                 MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
                );
      return;
    }
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
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_SpawnVehicleWithDriver_is_alread,(MethodInfo *)0x0);
        return 0;
      }
      this_00 = (MVLocalObjectController_AttachState *)
                func_?(TypeInfo__MVLocalObjectController__AttachState);
      if (this_00 != (MVLocalObjectController_AttachState *)0x0) {
        MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
                  (this_00,worldObjectID,(MethodInfo *)0x0);
        (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
        func_?();
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
                    (this_01,worldObjectSpawnerVehicleID,worldObjectID,seatBase,(MethodInfo *)0x0);
          return 1;
        }
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this->fields).localControlledStack;
      if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
      goto code_?;
      pUVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
      uStack_6 = 0;
      if (pUVar5 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) goto code_?;
      pUVar7 = pUVar5->vector;
      for (; (int)uStack_6 < (int)pUVar5->max_length; uStack_6 = uStack_6 + 1) {
        if (pUVar5->max_length <= uStack_6) goto code_?;
        pSVar8 = pUVar7->m_DelagateCallback;
        pIVar3 = (this->fields).movementMap;
        if (pSVar8 == (SendOrPostCallback *)0x0) goto code_?;
        uVar9 = 0;
        uVar10 = (pSVar8->klass->_1).interface_offsets_count;
        if (uVar10 != 0) {
          do {
            if (pSVar8->klass->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo__ILocalObject) {
              ppIVar11 = &(&(pSVar8->klass->vtable).GetHashCode)
                         [pSVar8->klass->interfaceOffsets[uVar9].offset].methodPtr;
              pUVar5 = unaff_EDI;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppIVar11 = (Il2CppMethodPointer *)func_?(pSVar8,TypeInfo__ILocalObject,2);
        pUVar5 = unaff_EDI;
code_?:
        (**ppIVar11)(pSVar8,pIVar3,(MethodInfo *)ppIVar11[1]);
        pUVar7 = (UnitySynchronizationContext_WorkRequest *)&pUVar7->m_DelagateState;
        unaff_EDI = pUVar5;
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
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this->fields).localControlledStack;
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        if ((this_00->fields)._size != 0) {
          pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_5 = 0;
          if (pUVar4 == (UnitySynchronizationContext_WorkRequest__Array *)0x0)
          goto code_?;
          ppIVar6 = &(this->fields).interactionInput;
          pUVar7 = pUVar4->vector;
          for (; (int)uStack_5 < (int)pUVar4->max_length; uStack_5 = uStack_5 + 1) {
            if (pUVar4->max_length <= uStack_5) goto code_?;
            pSVar8 = pUVar7->m_DelagateCallback;
            pIVar3 = *ppIVar6;
            if (pSVar8 == (SendOrPostCallback *)0x0) goto code_?;
            uVar9 = 0;
            uVar10 = (pSVar8->klass->_1).interface_offsets_count;
            if (uVar10 != 0) {
              do {
                if (pSVar8->klass->interfaceOffsets[uVar9].interfaceType ==
                    (Il2CppClass *)TypeInfo__ILocalObject) {
                  ppIVar11 = &(&(pSVar8->klass->vtable).Finalize)
                             [pSVar8->klass->interfaceOffsets[uVar9].offset].methodPtr;
                  pUVar4 = unaff_ESI;
                  goto code_?;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            ppIVar11 = (Il2CppMethodPointer *)func_?(pSVar8,TypeInfo__ILocalObject,1);
            pUVar4 = unaff_ESI;
code_?:
            pIVar3 = (InputToInGameAction *)(**ppIVar11)(pSVar8,pIVar3,(MethodInfo *)ppIVar11[1]);
            *ppIVar6 = pIVar3;
            func_?(ppIVar6,pIVar3);
            pUVar7 = (UnitySynchronizationContext_WorkRequest *)&pUVar7->m_DelagateState;
            unaff_ESI = pUVar4;
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
  this_02 = (ILocalObject__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_02 != (ILocalObject__Class *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              (this->fields).dismountedLocalControlledObjects;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffbc,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                         );
      pIVar6 = (ILocalObject__Class *)(pDVar5->_current).key;
      uVar7 = *(ulonglong *)&(pDVar5->_current).value;
      uStack_1 = 1;
code_?:
      do {
        method_00 = (MethodInfo *)uVar7;
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                           &stack0xffffff94,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                          );
        if (bVar8 == 0) goto code_?;
        if (method_00 == (MethodInfo *)0x0) break;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar9 - (float)method_00->invoker_method <= _UNK_?) {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 == (MVNetworkGame *)0x0) ||
             (pMVar11 = (pMVar10->fields)._NetworkGameStateListener_k__BackingField,
             pMVar11 == (MVNetworkGameStateListener *)0x0)) break;
          if ((pMVar11->fields).currentGameState != 2) {
            if ((method_00 == (MethodInfo *)0x0) || (method_00->name == (char *)0x0)) break;
            uVar7 = ZEXT48(method_00->name);
            pIVar6 = TypeInfo__ILocalObject;
            func_?();
            goto code_?;
          }
        }
        uVar7 = CONCAT44(MethodInfo__System__Collections__Generic__List<int>__Add_int_,pIVar6);
        pIVar6 = this_02;
        func_?();
      } while( true );
    }
  }
  goto code_?;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffff94,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
             ,method_00);
  uStack_1 = 0xffffffff;
  pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                       *)&stack0xffffffc4,
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)this_02,
                      MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
  uStack_1 = 4;
  worldObjectId = pLVar12->_current;
  while( true ) {
    bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
            RegularExpressions::RegexCharClass+SingleRange]::
            List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                      ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                        *)&pOStack_4,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                      );
    if (bVar8 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&pOStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                 in_stack_13);
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
        (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0)
    break;
    in_stack_13 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)worldObjectId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
              );
    worldObjectId = this_03;
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
      this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this->fields).localControlledStack;
      if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        if ((this_00->fields)._size != 0) {
          pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uStack_4 = 0;
          if (pUVar3 == (UnitySynchronizationContext_WorkRequest__Array *)0x0)
          goto code_?;
          ppIVar5 = &(this->fields).interactionInput;
          pUVar6 = pUVar3->vector;
          for (; (int)uStack_4 < (int)pUVar3->max_length; uStack_4 = uStack_4 + 1) {
            if (pUVar3->max_length <= uStack_4) {
              func_?();
              goto code_?;
            }
            pSVar7 = pUVar6->m_DelagateCallback;
            pIVar2 = *ppIVar5;
            if (pSVar7 == (SendOrPostCallback *)0x0) goto code_?;
            uVar8 = 0;
            uVar9 = (pSVar7->klass->_1).interface_offsets_count;
            if (uVar9 != 0) {
              do {
                if (pSVar7->klass->interfaceOffsets[uVar8].interfaceType ==
                    (Il2CppClass *)TypeInfo__ILocalObject) {
                  ppIVar10 = &(&(pSVar7->klass->vtable).Finalize)
                             [pSVar7->klass->interfaceOffsets[uVar8].offset].methodPtr;
                  goto code_?;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar9);
            }
            ppIVar10 = (Il2CppMethodPointer *)func_?(pSVar7,TypeInfo__ILocalObject,1);
code_?:
            pIVar2 = (InputToInGameAction *)(**ppIVar10)(pSVar7,pIVar2,(MethodInfo *)ppIVar10[1]);
            *ppIVar5 = pIVar2;
            func_?(ppIVar5,pIVar2);
            pUVar6 = (UnitySynchronizationContext_WorkRequest *)&pUVar6->m_DelagateState;
            pUVar3 = unaff_EBX;
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
  this_01 = (MVWorldObjectSpawnerVehicleEnergy *)
            MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    func_?(&TypeInfo__MVVehicleBase);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  pMVar2 = this_01;
  if (pLVar1 == (List_1_ILocalObject_ *)0x0) {
code_?:
    func_?();
    pMVar3 = extraout_EDX;
  }
  else {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    if (this_01 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      pMVar2 = (MVWorldObjectSpawnerVehicleEnergy *)
               MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
    }
    if (pMVar2 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      pMVar4 = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
    }
    else {
      if (((((MVVehicleBase__Class *)pMVar2->klass)->_1).typeHierarchyDepth <
           (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth) ||
         ((MVVehicleBase__Class *)
          (((MVVehicleBase__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVVehicleBase)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar4 = (MVWorldObjectSpawnerVehicleEnergy *)0x0;
      if (bVar5) {
        pMVar4 = pMVar2;
      }
    }
    if (pMVar4 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
      return 0;
    }
    this_00 = (MVWorldObjectClientManager *)(this->fields).worldObjectClientManagerNetwork;
    if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar4 = (MVWorldObjectSpawnerVehicleEnergy *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,worldObjectSpawnerVehicleEnergyID,(MethodInfo *)0x0),
       pMVar2 = pMVar4, pMVar4 == (MVWorldObjectSpawnerVehicleEnergy *)0x0)) goto code_?;
    pMVar6 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
    if (((pMVar4->klass->_1).typeHierarchyDepth <
         (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
         typeHierarchyDepth) ||
       ((MVWorldObjectSpawnerVehicleEnergy__Class *)
        (pMVar4->klass->_1).typeHierarchy
        [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy))
    goto code_?;
    pVVar7 = WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
             MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
                       ((VehicleEnergyRefill *)&stack0xffffffe8,pMVar4,1,(MethodInfo *)0x0);
    pMVar2 = (MVWorldObjectSpawnerVehicleEnergy *)pVVar7->amount;
    vehicleEnergyRefill = *pVVar7;
    takeTime = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
    MVWorldObjectSpawner::MVWorldObjectSpawner_TakePrediction
              ((MVWorldObjectSpawner *)pMVar4,takeTime,(MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectSpawnerVehicleEnergy *)0x0) goto code_?;
    pMVar3 = TypeInfo__MVVehicleBase;
    if (((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <=
         (((MVVehicleBase__Class *)this_01->klass)->_1).typeHierarchyDepth) &&
       ((MVVehicleBase__Class *)
        (((MVVehicleBase__Class *)this_01->klass)->_1).typeHierarchy
        [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] == TypeInfo__MVVehicleBase)) {
      MVVehicleBase::MVVehicleBase_RefillEnergy
                ((MVVehicleBase *)this_01,vehicleEnergyRefill,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_VehicleEnergyUse
                  (this_02,0xADDR,(this_01->fields)._._._._._.id,(MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
  }
  func_?(this_01,pMVar3);
  pMVar6 = extraout_EDX_00;
code_?:
  func_?(pMVar2,pMVar6);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
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
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)returnValues,
                       (Object *)0x16,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar1 == 0) {
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
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
          if (((pMVar6->klass->_1).typeHierarchyDepth <
               (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
               typeHierarchyDepth) ||
             ((MVWorldObjectSpawnerVehicleEnergy__Class *)
              (pMVar6->klass->_1).typeHierarchy
              [(TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
               typeHierarchyDepth - 1] !=
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
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)returnValues,
                           (Object *)0xbf,
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
            if ((pMVar8->klass->_1).typeHierarchyDepth <
                (TypeInfo__MVVehicleBase->_1).typeHierarchyDepth) {
              return;
            }
            if ((MVVehicleBase__Class *)
                (pMVar8->klass->_1).typeHierarchy
                [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] != TypeInfo__MVVehicleBase) {
              return;
            }
            if (this_00 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
              pVVar9 = WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
                       MVWorldObjectSpawnerVehicleEnergy_CreateVehicleEnergyRefill
                                 ((VehicleEnergyRefill *)&stack0xffffffec,this_00,0,
                                  (MethodInfo *)0x0);
              MVVehicleBase::MVVehicleBase_RefillEnergy(pMVar8,*pVVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xbf,
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
              pMVar10 = (MVVehicleBase *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar5,id_00,(MethodInfo *)0x0);
              if (((pMVar10 != (MVVehicleBase *)0x0) &&
                  ((TypeInfo__MVVehicleBase->_1).typeHierarchyDepth <=
                   (pMVar10->klass->_1).typeHierarchyDepth)) &&
                 ((MVVehicleBase__Class *)
                  (pMVar10->klass->_1).typeHierarchy
                  [(TypeInfo__MVVehicleBase->_1).typeHierarchyDepth - 1] == TypeInfo__MVVehicleBase)
                 ) {
                bVar7 = true;
                pMVar8 = pMVar10;
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__InputToInGameAction);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this->fields).interactionInput = (InputToInGameAction *)this_00;
    func_?(&(this->fields).interactionInput,this_00);
    this_01 = (List_1_System_Object_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ILocalObject>);
    if (this_01 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
      value = (Object *)
              func_?(TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EDI);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_01,value,
                   MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
        (this->fields).localControlledStack = (List_1_ILocalObject_ *)this_01;
        func_?(&(this->fields).localControlledStack,this_01);
        this_02 = (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
                                    );
        if (this_02 !=
            (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
            0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
                    );
          method_00 = (MethodInfo *)&(this->fields).dismountedLocalControlledObjects;
          (this->fields).dismountedLocalControlledObjects = this_02;
          func_?(method_00,this_02);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,method_00);
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)this,
                     UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,(MethodInfo *)0x0);
          UpdateController::UpdateController_AddFixedUpdateObject
                    ((IUpdatecontrollerSubscriberFixedUpdate *)this,
                     UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,(MethodInfo *)0x0);
          (this->fields).worldObjectClientManagerNetwork = worldObjectClientManagerNetwork;
          func_?(&(this->fields).worldObjectClientManagerNetwork);
          MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (MVar1 != MVGameMode__Enum_CharacterEditor) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
            {
              this_03 = (InputToPlayerMovementAndroid *)func_?();
              if (this_03 == (InputToPlayerMovementAndroid *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
              TweenRunner_1_FloatTween___ctor
                        ((TweenRunner_1_FloatTween_ *)this_03,(MethodInfo *)0x0);
            }
            else {
              this_03 = (InputToPlayerMovementAndroid *)func_?();
              if (this_03 == (InputToPlayerMovementAndroid *)0x0) goto code_?;
              InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor
                        (this_03,(MethodInfo *)0x0);
            }
code_?:
            (this->fields).movementMap = (IInputToPlayerMovement *)this_03;
            func_?(&this->fields,this_03);
            return;
          }
          this_03 = (InputToPlayerMovementAndroid *)func_?();
          if (this_03 != (InputToPlayerMovementAndroid *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this_03,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_wo_does_not_exist,(MethodInfo *)0x0);
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
    if (((TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth <=
         (pMVar2->_1).typeHierarchyDepth) &&
       ((pMVar2->_1).typeHierarchy
        [(TypeInfo__MVLocalObjectController__AttachState->_1).typeHierarchyDepth - 1] ==
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                           );
    this_02 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    pHStack_7 = this_02;
    if (this_02 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor_1
                (this_02,(IEnumerable_1_UnityEngine_Vector3_ *)collection,
                 MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                );
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).localControlledStack;
      pHStack_8 = this_02;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_10,this_01,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__GetEnumerator__
                           );
        LStack_10._current = (RegexCharClass_SingleRange)&LStack_6;
        LStack_6._list = (List_1_System_Object_ *)pLVar9->_list;
        LStack_6._index = pLVar9->_index;
        LStack_6._version = pLVar9->_version;
        LStack_6._current = *(Object **)&pLVar9->_current;
        LStack_10._version = 0;
        uStack_1 = 1;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__MoveNext__
                            );
          pOVar12 = LStack_6._current;
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return (HashSet_1_System_Int32_ *)this_02;
          }
          RStack_13 = (RegexCharClass_SingleRange)LStack_6._current;
          if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
          break;
          iStack_14 = *(int *)LStack_6._current;
          uVar15 = 0;
          uVar16 = *(ushort *)(iStack_14 + 0xb2);
          uStack_17 = (uint)uVar16;
          if (uVar16 != 0) {
            do {
              if (*(ILocalObject__Class **)(*(int *)(iStack_14 + 0x58) + (uint)uVar15 * 8) ==
                  TypeInfo__ILocalObject) {
                puVar18 = (undefined4 *)
                         (*(int *)(*(int *)(*(int *)LStack_6._current + 0x58) + 4 +
                                  (uint)uVar15 * 8) * 8 + 0xbc + *(int *)LStack_6._current);
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          puVar18 = (undefined4 *)func_?(LStack_6._current,TypeInfo__ILocalObject,0);
code_?:
          pOVar12 = (Object *)(*(code *)*puVar18)(pOVar12,puVar18[1]);
          this_02 = pHStack_7;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    ((HashSet_1_System_Object_ *)pHStack_7,pOVar12,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
      }
    }
  }
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  pHVar21 = (HashSet_1_System_Int32_ *)(*pcVar20)();
  return pHVar21;
}

