
/* Boolean AttachWorldObjectToSeat(Int32, Int32, VehicleSeatBase) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
               (MVLocalObjectController *this,int32_t seatOwnerWoID,int32_t worldObjectID,
               VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttachWorldObjectToSeat_is_alrea);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_AttachWorldObjectToSeat_is_alrea;
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    this_00 = (MVLocalObjectController_AttachState *)
              FUN_?(TypeInfo__MVLocalObjectController__AttachState);
    MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
              (this_00,worldObjectID,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AttachWorldObjectToSeat
              (this_01,seatOwnerWoID,worldObjectID,seatBase,(MethodInfo *)0x0);
    bVar8 = 1;
  }
  else {
    pMVar9 = (this->fields).attachState;
    if (pMVar9 == (MVLocalObjectController_IAttachInterface *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      pMVar10 = pMVar9->klass;
      uVar11._0_2_ = pMVar10[1]._0.this_arg.attrs;
      uVar11._2_1_ = pMVar10[1]._0.this_arg.type;
      uVar11._3_5_ = *(undefined5 *)&pMVar10[1]._0.this_arg.field_0xb;
      str1 = (String *)(*(code *)pMVar10[1]._0.this_arg.data)(pMVar9,uVar11);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    bVar8 = 0;
  }
  return bVar8;
}


/* IInputToPlayerMovement CreateInputToPlayerMovement(MVGameMode) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_CreateInputToPlayerMovement
          (MVGameMode__Enum gameMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InputToPlayerMovementAndroid);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputToPlayerMovementAvatarEdit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputToPlayerMovement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Il2CppClass *)TypeInfo__InputToPlayerMovementAvatarEdit;
  if (gameMode != MVGameMode__Enum_CharacterEditor) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = (Il2CppClass *)TypeInfo__InputToPlayerMovement;
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      pIVar2 = (IInputToPlayerMovement *)FUN_?(TypeInfo__InputToPlayerMovementAndroid);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      *(undefined8 *)((longlong)&pIVar2[1].klass + 4) =
           *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      *(float *)((longlong)&pIVar2[1].monitor + 4) = fVar3;
      return pIVar2;
    }
  }
  FUN_?();
  if ((pIVar1->generic_class != (Il2CppGenericClass *)0x0) && ((pIVar1->field_0x135 & 8) != 0)) {
    pIVar1 = pIVar1->element_class;
  }
  uVar4 = pIVar1->instance_size;
  if ((pIVar1->field_0x135 & 0x20) == 0) {
    pIVar2 = (IInputToPlayerMovement *)FUN_?(uVar4);
    pIVar2->klass = (IInputToPlayerMovement__Class *)pIVar1;
    pIVar5 = pIVar2 + 1;
    pIVar2->monitor = (MonitorData *)0x0;
    if (pIVar1->instance_size < 0x80) {
      pIVar6 = (IInputToPlayerMovement *)
               ((longlong)&pIVar2->klass + (ulonglong)pIVar1->instance_size);
      uVar7 = (ulonglong)((longlong)pIVar6 + (7 - (longlong)pIVar5)) >> 3;
      if (pIVar6 < pIVar5) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        FUN_?(pIVar5,0,uVar7 << 3);
      }
    }
    else {
      FUN_?(pIVar5,0,(ulonglong)pIVar1->instance_size - 0x10);
    }
  }
  else {
    if (pIVar1->gc_desc != (void *)0x0) {
      pIVar2 = (IInputToPlayerMovement *)FUN_?(uVar4,pIVar1);
      goto code_?;
    }
    pIVar2 = (IInputToPlayerMovement *)FUN_?(uVar4,1);
    pIVar2->klass = (IInputToPlayerMovement__Class *)pIVar1;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar1->field_0x136 & 2) != 0) {
    FUN_?(pIVar2,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(pIVar2,pIVar1);
  }
  FUN_?(pIVar1);
  return pIVar2;
}


/* Boolean DetachWorldObjectFromVehicle(Int32, Int32 ByRef, Boolean) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_DetachWorldObjectFromVehicle
               (MVLocalObjectController *this,int32_t worldObjectID,int32_t *vehicleID,
               bool leaveBecauseOfServer,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,leaveBecauseOfServer);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalObjectController__DetachState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalObjectController__DismountedPlayerControlledObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_detach_but_nothing_in_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EnterDetachState_is_already_pend);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).attachState != (MVLocalObjectController_IAttachInterface *)0x0) {
    pMVar2 = ((this->fields).attachState)->klass;
    bVar3 = (TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
       ((pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_EnterDetachState_is_already_pend,(MethodInfo *)0x0);
      return 0;
    }
  }
  pLVar4 = (this->fields).localControlledStack;
  if (pLVar4 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar4->fields)._size == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_detach_but_nothing_in_,(MethodInfo *)0x0);
      return 0;
    }
    iVar5 = (pLVar4->fields)._size;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pIVar8 = (pLVar4->fields)._items;
    if (pIVar8 != (ILocalObject__Array *)0x0) {
      if ((uint)pIVar8->max_length <= iVar5 - 1U) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      pLVar4 = (this->fields).localControlledStack;
      pIVar9 = pIVar8->vector[(longlong)iVar5 + -1];
      if (pLVar4 != (List_1_ILocalObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)(this->fields).localControlledStack,
                   (pLVar4->fields)._size + -1,
                   MethodInfo__System__Collections__Generic__List<ILocalObject>__RemoveAt_int_);
        if (leaveBecauseOfServer == 0) {
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    (this->fields).dismountedLocalControlledObjects;
          if ((pIVar9 != (ILocalObject *)0x0) &&
             (iVar10 = FUN_?(0,TypeInfo__ILocalObject,pIVar9),
             this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
            iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (this_00,iVar10,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar10 < 0) {
              this_01 = (this->fields).dismountedLocalControlledObjects;
              iVar10 = FUN_?(0,TypeInfo__ILocalObject,pIVar9);
              pOVar11 = (Object *)
                        FUN_?(
                                     TypeInfo__MVLocalObjectController__DismountedPlayerControlledObject
                                     );
              bVar12 = iRam_? != 0;
              pOVar11[1].monitor = (MonitorData *)pIVar9;
              if (bVar12) {
                uVar13 = (uint)((ulonglong)&pOVar11[1].monitor >> 0xc);
                uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
                do {
                  uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                  puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                  LOCK();
                  bVar12 = uVar15 == *puVar16;
                  if (bVar12) {
                    *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar1 = func_?(&UNK_?);
                FUN_?(uVar1,0);
                pcVar6 = (code *)swi(3);
                bVar7 = (*pcVar6)();
                return bVar7;
              }
              pcRam_? = pcVar6;
              uVar17 = (*pcRam_?)();
              *(undefined4 *)&pOVar11[1].klass = uVar17;
              if (this_01 ==
                  (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_
                   *)0x0) goto code_?;
              uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar10,pOVar11,
                         (InsertionBehavior__Enum)uVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Add_int__MVLocalObjectController__DismountedPlayerControlledObject_
                         ->klass->rgctx_data[0x22].method);
            }
            pMVar18 = (MVLocalObjectController_IAttachInterface *)FUN_?();
            bVar12 = iRam_? != 0;
            (this->fields).attachState = pMVar18;
            if (bVar12) {
              uVar13 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
              uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                LOCK();
                bVar12 = uVar15 == *puVar16;
                if (bVar12) {
                  *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (pMVar19 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              aiStackX_8[0] = worldObjectID;
              pOVar11 = (Object *)FUN_?(uRam_?,aiStackX_8);
              if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                uVar20 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this_02,0x16,pOVar11,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                           method_00);
                pPVar21 = (pMVar19->fields).peer;
                if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0)
                {
                  FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                if (pPVar21 != (PhotonPeer *)0x0) {
                  (*(pPVar21->klass->vtable).SendOperation.methodPtr)
                            (pPVar21,CONCAT71((int7)((ulonglong)uVar20 >> 8),0x30),this_02,
                             TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                             SendReliable,(pPVar21->klass->vtable).SendOperation.method);
                  goto code_?;
                }
              }
            }
          }
        }
        else if (pIVar9 != (ILocalObject *)0x0) {
code_?:
          iVar10 = FUN_?(0,TypeInfo__ILocalObject,pIVar9);
          *vehicleID = iVar10;
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void FixedUpdateDismountedPlayerControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateDismountedPlayerControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)
               (this->fields).dismountedLocalControlledObjects;
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = 0;
  DStack_11._current._4_4_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    pMVar13 = DStack_11._current.value[1].monitor;
    if (pMVar13 == (MonitorData *)0x0) {
      FUN_?();
      break;
    }
    lVar14 = *(longlong *)pMVar13;
    uVar15 = 0;
    if (*(ushort *)(lVar14 + 0x12e) != 0) {
      do {
        if (*(ILocalObject__Class **)(*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
            TypeInfo__ILocalObject) {
          puVar16 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10) + 2) * 0x10
                    + 0x138 + lVar14);
          goto code_?;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
    }
    puVar16 = (undefined8 *)FUN_?(pMVar13,TypeInfo__ILocalObject,2);
code_?:
    (*(code *)*puVar16)(pMVar13,0,puVar16[1]);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FixedUpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_FixedUpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    pIVar2 = (this->fields).movementMap;
    if (pIVar2 != (IInputToPlayerMovement *)0x0) {
      FUN_?(2,TypeInfo__IInputToPlayerMovement,pIVar2,0);
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)(this->fields).localControlledStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        pRVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                 RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                 List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__)
        ;
        uVar4 = 0;
        if (pRVar3 != (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0) {
          pRVar5 = pRVar3->vector;
          while( true ) {
            if ((int)pRVar3->max_length <= (int)uVar4) {
              return;
            }
            if ((uint)pRVar3->max_length <= uVar4) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pRVar7 = pRVar5->renderData;
            pIVar2 = (this->fields).movementMap;
            if (pRVar7 == (RenderData *)0x0) break;
            pRVar8 = pRVar7->klass;
            uVar9 = 0;
            uVar10._0_1_ = (pRVar8->_1).rank;
            uVar10._1_1_ = (pRVar8->_1).minimumAlignment;
            if (uVar10 != 0) {
              do {
                if (pRVar8->interfaceOffsets[uVar9].interfaceType ==
                    (Il2CppClass *)TypeInfo__ILocalObject) {
                  pVVar11 = &(pRVar8->vtable).Equals + (pRVar8->interfaceOffsets[uVar9].offset + 2);
                  goto code_?;
                }
                uVar12 = (short)uVar9 + 1;
                uVar9 = (ulonglong)uVar12;
              } while (uVar12 < uVar10);
            }
            pVVar11 = (VirtualInvokeData *)FUN_?(pRVar7,TypeInfo__ILocalObject,2);
code_?:
            (*pVVar11->methodPtr)(pRVar7,pIVar2,pVVar11->method);
            uVar4 = uVar4 + 1;
            pRVar5 = (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo *)&pRVar5->type
            ;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean HandleAttachFailed() */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_HandleAttachFailed
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalObjectController__DetachState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttachState_is_detachState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_trying_to_leave_attachState__but);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return 0;
  }
  pMVar1 = ((this->fields).attachState)->klass;
  bVar2 = (TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment;
  if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
     ((pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar3 = (this->fields).attachState;
  if (pMVar3 != (MVLocalObjectController_IAttachInterface *)0x0) {
    bVar2 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar2) ||
       ((pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      FUN_?(pMVar3);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVNetworkReporter);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 != (MVGameControllerBase *)0x0) &&
        (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
       (pTVar8 = (pMVar7->fields).transformNetworkManager, pTVar8 != (TransformNetworkManager *)0x0
       )) {
      pMVar9 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                          (pTVar8,*(int32_t *)((longlong)&pMVar3[1].klass + 4),(MethodInfo *)0x0);
      if ((pMVar9 != (MVNetworkObject *)0x0) || (*(char *)&pMVar3[1].klass == '\0')) {
code_?:
        bVar10 = iRam_? != 0;
        (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar12;
            LOCK();
            uVar14 = *puVar12;
            if (uVar13 == uVar14) {
              *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar14);
        }
        return 1;
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar7 != (MVNetworkGame *)0x0) {
        pTVar8 = (pMVar7->fields).transformNetworkManager;
        woID = *(int32_t *)((longlong)&pMVar3[1].klass + 4);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          owner = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_00,*(int32_t *)((longlong)&pMVar3[1].klass + 4),(MethodInfo *)0x0)
          ;
          this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
          MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
          if (pTVar8 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar8,woID,this_01,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void HandleAttachWorldObjectToSeat(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleAttachWorldObjectToSeat
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (success != 0) {
    bVar1 = iRam_? != 0;
    (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
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
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalObjectController__DetachState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttachState_is_detachState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_trying_to_leave_attachState__but);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_trying_to_leave_attachState__but,(MethodInfo *)0x0);
    return;
  }
  pMVar6 = ((this->fields).attachState)->klass;
  bVar7 = (TypeInfo__MVLocalObjectController__DetachState->_1).naturalAligment;
  if ((bVar7 <= (pMVar6->_1).naturalAligment) &&
     ((pMVar6->_1).typeHierarchy[(ulonglong)bVar7 - 1] ==
      (Il2CppClass *)TypeInfo__MVLocalObjectController__DetachState)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_AttachState_is_detachState,(MethodInfo *)0x0);
  }
  pMVar8 = (this->fields).attachState;
  if (pMVar8 != (MVLocalObjectController_IAttachInterface *)0x0) {
    bVar7 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar7) ||
       ((pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
      FUN_?(pMVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVNetworkReporter);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar10 != (MVGameControllerBase *)0x0) &&
        (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
       (pTVar12 = (pMVar11->fields).transformNetworkManager, pTVar12 != (TransformNetworkManager *)0x0
       )) {
      pMVar13 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                          (pTVar12,*(int32_t *)((longlong)&pMVar8[1].klass + 4),(MethodInfo *)0x0);
      if ((pMVar13 != (MVNetworkObject *)0x0) || (*(char *)&pMVar8[1].klass == '\0')) {
code_?:
        bVar1 = iRam_? != 0;
        (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
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
        return;
      }
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar11 != (MVNetworkGame *)0x0) {
        pTVar12 = (pMVar11->fields).transformNetworkManager;
        woID = *(int32_t *)((longlong)&pMVar8[1].klass + 4);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          owner = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_00,*(int32_t *)((longlong)&pMVar8[1].klass + 4),(MethodInfo *)0x0)
          ;
          this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
          MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
          if (pTVar12 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar12,woID,this_01,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleDetachWorldObjectFromVehicle(Boolean) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_HandleDetachWorldObjectFromVehicle
               (MVLocalObjectController *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HandleDetachWorldObjectFromVehic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
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
  if (success == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    if (worldObjectClient == (MVWorldObjectClient *)0x0) {
      worldObjectClient = MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
      if (worldObjectClient == (MVWorldObjectClient *)0x0) {
        return 0;
      }
    }
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if (((worldObjectClient->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVVehicleBase__Class *)(worldObjectClient->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVVehicleBase)) {
      bVar3 = false;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = worldObjectClient;
    }
    return pMVar4 != (MVWorldObjectClient *)0x0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsInsideVehicleUsingEnergy(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_IsInsideVehicleUsingEnergy
               (MVLocalObjectController *this,MVWorldObjectClient *worldObjectClient,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 == (List_1_ILocalObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pLVar1->fields)._size != 0) {
    if ((worldObjectClient == (MVWorldObjectClient *)0x0) &&
       (worldObjectClient = MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0),
       worldObjectClient == (MVWorldObjectClient *)0x0)) {
      return 0;
    }
    bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if ((((bVar4 <= (worldObjectClient->klass->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(worldObjectClient->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1]
          == TypeInfo__MVVehicleBase)) && (worldObjectClient != (MVWorldObjectClient *)0x0)) &&
       (lVar5._0_4_ = worldObjectClient[1].fields._.ownerActorNr,
       lVar5._4_4_ = worldObjectClient[1].fields._.previewOwnerProfileId, lVar5 != 0)) {
      plVar6 = *(longlong **)&worldObjectClient[1].fields._.ownerActorNr;
      lVar5 = *plVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar3 = (**(code **)(lVar5 + 0x228))(plVar6,*(undefined8 *)(lVar5 + 0x230));
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,seatOwnerWoID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
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
    pMVar2 = (this->fields).worldObjectClientManagerNetwork;
    if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,instigatorActorNr);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVAvatar);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVVehicleBase);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_worldObjectClient_not_found);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SeatOwnerWorldObject_Not_found);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = (pMVar2->fields)._.worldObjects;
      apOStack_4[0] = (Object *)0x0;
      if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,seatOwnerWoID,
                         (Object **)&stack0x00000008,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
      if (bVar6 == 0) {
        message = StringLiteral_SeatOwnerWorldObject_Not_found;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          message = StringLiteral_SeatOwnerWorldObject_Not_found;
        }
      }
      else {
        pDVar3 = (pMVar2->fields)._.worldObjects;
        if ((pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) ||
           (bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,worldObjectID,
                               apOStack_4,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                              ), bVar6 != 0)) goto code_?;
        message = StringLiteral_worldObjectClient_not_found;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          message = StringLiteral_worldObjectClient_not_found;
        }
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OverrideRemoveTimeForDismountedWorldObject(Int32, Single) */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_OverrideRemoveTimeForDismountedWorldObject
               (MVLocalObjectController *this,int32_t woID,float timeBeforeUnregister,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dismounted_object_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            (this->fields).dismountedLocalControlledObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Dismounted_object_not_found;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    this_01 = (this->fields).dismountedLocalControlledObjects;
    if ((this_01 !=
         (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)0x0)
       && (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,woID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Item_int_
                              ), pOVar5 != (Object *)0x0)) {
      fVar6 = _UNK_? - timeBeforeUnregister;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar8 = (float)(*pcRam_?)();
      *(float *)&pOVar5[1].klass = fVar8 - fVar6;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Push(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_Push
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_;
  pLVar2 = (this->fields).localControlledStack;
  if (pLVar2 == (List_1_ILocalObject_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (pLVar2->fields)._items;
  piVar5 = &(pLVar2->fields)._version;
  *piVar5 = *piVar5 + 1;
  if (pIVar4 == (ILocalObject__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (pLVar2->fields)._size;
  if (uVar6 < (uint)pIVar4->max_length) {
    (pLVar2->fields)._size = uVar6 + 1;
  }
  else {
    uVar6 = (pLVar2->fields)._size;
    FUN_?(pLVar2,uVar6 + 1,
                  (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,
                  pIVar4,unaff_RDI);
    pIVar4 = (pLVar2->fields)._items;
    (pLVar2->fields)._size = uVar6 + 1;
    if (pIVar4 == (ILocalObject__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)pIVar4->max_length <= uVar6) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pIVar4->vector[(int)uVar6] = localObject;
  if (bVar7) {
    uVar6 = (uint)((ulonglong)(pIVar4->vector + (int)uVar6) >> 0xc);
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
  return;
}


/* Void RemoveAvatarLocalObject() */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_RemoveAvatarLocalObject
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ILocalObject>__set_Item_int__ILocalObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  uVar2 = FUN_?();
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar4 = (pLVar1->fields)._items;
    if (pIVar4 != (ILocalObject__Array *)0x0) {
      FUN_?(pIVar4,0,uVar2);
      piVar5 = &(pLVar1->fields)._version;
      *piVar5 = *piVar5 + 1;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAvatarLocalObject(ILocalObject) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_SetAvatarLocalObject
               (MVLocalObjectController *this,ILocalObject *localObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = (pLVar1->fields)._items;
    if (pIVar3 != (ILocalObject__Array *)0x0) {
      FUN_?(pIVar3,0,localObject);
      piVar4 = &(pLVar1->fields)._version;
      *piVar4 = *piVar4 + 1;
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_t_have_more_active_Client_Co);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__max_is_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnVehicleWithDriver_is_alread);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if ((pHVar1->fields)._count < 4) {
      if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
        this_00 = (MVLocalObjectController_AttachState *)
                  FUN_?(TypeInfo__MVLocalObjectController__AttachState);
        MVLocalObjectController+AttachState::MVLocalObjectController_AttachState__ctor
                  (this_00,worldObjectID,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).attachState = (MVLocalObjectController_IAttachInterface *)this_00;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).attachState >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SpawnVehicleWithDriver
                    (this_01,worldObjectSpawnerVehicleID,worldObjectID,seatBase,(MethodInfo *)0x0);
          return 1;
        }
        goto code_?;
      }
      pSVar7 = StringLiteral_SpawnVehicleWithDriver_is_alread;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar7 = StringLiteral_SpawnVehicleWithDriver_is_alread;
      }
    }
    else {
      pHVar1 = MVLocalObjectController_get_LocalControlledWorldObjects(this,(MethodInfo *)0x0);
      if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
      value = (pHVar1->fields)._count;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._pointer._value = (void *)0x0;
      aRStack_8[0]._length = 0;
      aRStack_8[0]._12_4_ = 0;
      pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._pointer._value = (void *)0x0;
      aRStack_8[0]._length = 0;
      aRStack_8[0]._12_4_ = 0;
      str3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (4,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_6
                         (StringLiteral_Can_t_have_more_active_Client_Co,pSVar7,
                          StringLiteral__max_is_,str3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateControllerFixedUpdate
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 == (MVGameControllerBase *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pMVar2->fields)._joinState != 3) {
    return;
  }
  auStack_1._8_8_ = &UNK_?;
  MVLocalObjectController_FixedUpdateLocalControlledObjects(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_4 = (Dictionary_2_System_UInt32_System_Object_ *)
               (this->fields).dismountedLocalControlledObjects;
  if (pDStack_4 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_5 = 0;
  uStack_6 = 0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_4 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  uStack_11 = (ulonglong)(uint)(pDStack_4->fields)._version;
  uStack_12 = 2;
  auStack_1._8_8_ = uStack_11;
  KStack_13.key = 0;
  KStack_13._4_4_ = 0;
  KStack_13.value = (Object *)0x0;
  uStack_14._0_4_ = 2;
  uStack_14._4_4_ = 0;
  auStack_1._0_8_ = pDStack_4;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                       auStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                      );
    if (bVar15 == 0) {
      return;
    }
    if (KStack_13.value == (Object *)0x0) break;
    pMVar16 = KStack_13.value[1].monitor;
    if (pMVar16 == (MonitorData *)0x0) {
      FUN_?();
      break;
    }
    lVar17 = *(longlong *)pMVar16;
    uVar18 = 0;
    if (*(ushort *)(lVar17 + 0x12e) != 0) {
      do {
        if (*(ILocalObject__Class **)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
            TypeInfo__ILocalObject) {
          puVar19 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10) + 2) *
                    0x10 + 0x138 + lVar17);
          goto code_?;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ushort *)(lVar17 + 0x12e));
    }
    puVar19 = (undefined8 *)FUN_?(pMVar16,TypeInfo__ILocalObject,2);
code_?:
    (*(code *)*puVar19)(pMVar16,0,puVar19[1]);
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_UpdateControllerUpdate
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pMVar1->fields)._joinState != 3) {
    return;
  }
  MVLocalObjectController_UpdateLocalControlledObjects(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
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
    cRam_? = '\x01';
  }
  lStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  lVar6 = FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(lVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)
           (this->fields).dismountedLocalControlledObjects;
  if (pDVar7 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
      uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    fVar14 = _UNK_?;
    puStack_15 = (undefined1 *)(ulonglong)(uint)(pDVar7->fields)._version;
    uStack_16 = 2;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = (ulonglong)puStack_15;
    uStack_20 = 0;
    pOStack_21 = (Object *)0x0;
    uStack_22._0_4_ = 2;
    uStack_22._4_4_ = 0;
    uStack_9 = 0;
    puStack_15 = (undefined1 *)&pDStack_23;
    pDStack_23 = pDVar7;
    while (bVar24 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &pDStack_23,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                             ), pOVar25 = pOStack_21, uVar10 = uStack_20, bVar24 != 0) {
      if (pOStack_21 == (Object *)0x0) {
code_?:
        FUN_?();
        FUN_?();
        goto code_?;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
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
        goto code_?;
      }
      pcRam_? = pcVar2;
      fVar27 = (float)(*pcRam_?)();
      if (fVar27 - *(float *)&pOVar25[1].klass <= fVar14) {
        pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar28 == (MVNetworkGame *)0x0) goto code_?;
        pMVar29 = (pMVar28->fields)._NetworkGameStateListener_k__BackingField;
        if (pMVar29 == (MVNetworkGameStateListener *)0x0) goto code_?;
        if ((pMVar29->fields).currentGameState == 2) goto code_?;
        if (pOVar25 == (Object *)0x0) goto code_?;
        if (pOVar25[1].monitor == (MonitorData *)0x0) goto code_?;
        FUN_?();
      }
      else {
code_?:
        if (lVar6 == 0) goto code_?;
        FUN_?(lVar6,uVar10 & 0xffffffff,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    if (lVar6 != 0) {
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&uStack_9 >> 0xc);
        uVar10 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      puStack_15 = (undefined1 *)((ulonglong)*(uint *)(lVar6 + 0x1c) << 0x20);
      uStack_17 = 0;
      uStack_4 = (longlong)puStack_15;
      uStack_5 = 0;
      uStack_9 = 0;
      puStack_15 = (undefined1 *)&lStack_3;
      lStack_3 = lVar6;
      while (lStack_3 != 0) {
        if (uStack_4._4_4_ != *(int *)(lStack_3 + 0x1c)) {
code_?:
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
               klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (lStack_3 == 0) goto code_?;
          if (uStack_4._4_4_ == *(int *)(lStack_3 + 0x1c)) {
            return;
          }
          goto code_?;
        }
        if (*(uint *)(lStack_3 + 0x18) <= (uint)uStack_4) goto code_?;
        lVar6 = *(longlong *)(lStack_3 + 0x10);
        if (lVar6 == 0) goto code_?;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uStack_4) goto code_?;
        worldObjectId = *(int32_t *)(lVar6 + 0x20 + (longlong)(int)(uint)uStack_4 * 4);
        uStack_5 = CONCAT44(uStack_5._4_4_,worldObjectId);
        uStack_4 = CONCAT44(uStack_4._4_4_,(uint)uStack_4 + 1);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
        pMVar28 = (pMVar1->fields).game;
        if (pMVar28 == (MVNetworkGame *)0x0) goto code_?;
        if (((pMVar28->fields).worldNetwork == (WorldNetwork *)0x0) ||
           (this_00 = (MVWorldObjectClientManager *)
                      (((pMVar28->fields).worldNetwork)->fields)._.worldObjectClientManager,
           this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_00,worldObjectId,(MethodInfo *)0x0);
        this_01 = (this->fields).dismountedLocalControlledObjects;
        if (this_01 ==
            (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,worldObjectId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                  );
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
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
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateDismountedPlayerControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateDismountedPlayerControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Value__
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
    cRam_? = '\x01';
  }
  lStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  lVar4 = FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(lVar4,MethodInfo__System__Collections__Generic__List<int>__List__);
  pDVar5 = (Dictionary_2_System_UInt32_System_Object_ *)
           (this->fields).dismountedLocalControlledObjects;
  if (pDVar5 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    fVar12 = _UNK_?;
    puStack_13 = (undefined1 *)(ulonglong)(uint)(pDVar5->fields)._version;
    uStack_14 = 2;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = (ulonglong)puStack_13;
    uStack_18 = 0;
    pOStack_19 = (Object *)0x0;
    uStack_20._0_4_ = 2;
    uStack_20._4_4_ = 0;
    uStack_7 = 0;
    puStack_13 = (undefined1 *)&pDStack_21;
    pDStack_21 = pDVar5;
    while (bVar22 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &pDStack_21,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVLocalObjectController::DismountedPlayerControlledObject>__MoveNext__
                             ), pOVar23 = pOStack_19, uVar8 = uStack_18, bVar22 != 0) {
      if (pOStack_19 == (Object *)0x0) {
code_?:
        FUN_?();
        FUN_?();
        goto code_?;
      }
      pcVar24 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar24 = (code *)FUN_?(), pcVar24 == (code *)0x0)) {
        uVar25 = func_?(&UNK_?);
        FUN_?(uVar25,0);
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
        goto code_?;
      }
      pcRam_? = pcVar24;
      fVar26 = (float)(*pcRam_?)();
      if (fVar26 - *(float *)&pOVar23[1].klass <= fVar12) {
        pMVar27 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
        pMVar28 = (pMVar27->fields)._NetworkGameStateListener_k__BackingField;
        if (pMVar28 == (MVNetworkGameStateListener *)0x0) goto code_?;
        if ((pMVar28->fields).currentGameState == 2) goto code_?;
        if (pOVar23 == (Object *)0x0) goto code_?;
        if (pOVar23[1].monitor == (MonitorData *)0x0) goto code_?;
        FUN_?();
      }
      else {
code_?:
        if (lVar4 == 0) goto code_?;
        FUN_?(lVar4,uVar8 & 0xffffffff,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    if (lVar4 != 0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      puStack_13 = (undefined1 *)((ulonglong)*(uint *)(lVar4 + 0x1c) << 0x20);
      uStack_15 = 0;
      uStack_2 = (longlong)puStack_13;
      uStack_3 = 0;
      uStack_7 = 0;
      puStack_13 = (undefined1 *)&lStack_1;
      lStack_1 = lVar4;
      while (lStack_1 != 0) {
        if (uStack_2._4_4_ != *(int *)(lStack_1 + 0x1c)) {
code_?:
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
               klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (lStack_1 == 0) goto code_?;
          if (uStack_2._4_4_ == *(int *)(lStack_1 + 0x1c)) {
            return;
          }
          goto code_?;
        }
        if (*(uint *)(lStack_1 + 0x18) <= (uint)uStack_2) goto code_?;
        lVar4 = *(longlong *)(lStack_1 + 0x10);
        if (lVar4 == 0) goto code_?;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uStack_2) goto code_?;
        worldObjectId = *(int32_t *)(lVar4 + 0x20 + (longlong)(int)(uint)uStack_2 * 4);
        uStack_3 = CONCAT44(uStack_3._4_4_,worldObjectId);
        uStack_2 = CONCAT44(uStack_2._4_4_,(uint)uStack_2 + 1);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar29 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar29 == (MVGameControllerBase *)0x0) goto code_?;
        pMVar27 = (pMVar29->fields).game;
        if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
        if (((pMVar27->fields).worldNetwork == (WorldNetwork *)0x0) ||
           (this_00 = (MVWorldObjectClientManager *)
                      (((pMVar27->fields).worldNetwork)->fields)._.worldObjectClientManager,
           this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_00,worldObjectId,(MethodInfo *)0x0);
        this_01 = (this->fields).dismountedLocalControlledObjects;
        if (this_01 ==
            (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
            0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,worldObjectId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Remove_int_
                  );
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
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
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void UpdateLocalControlledObjects() */

void Assembly-CSharp.dll::MVLocalObjectController::
     MVLocalObjectController_UpdateLocalControlledObjects
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).movementMap;
  if (pIVar1 != (IInputToPlayerMovement *)0x0) {
    FUN_?(2,TypeInfo__IInputToPlayerMovement,pIVar1,1);
    pIVar2 = (this->fields).interactionInput;
    if (pIVar2 != (InputToInGameAction *)0x0) {
      InputToInGameAction::InputToInGameAction_HandleInputState(pIVar2,(MethodInfo *)0x0);
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)(this->fields).localControlledStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        if ((this_00->fields)._size != 0) {
          pRVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                   RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                   List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<ILocalObject>__ToArray__
                             );
          uVar4 = 0;
          if (pRVar3 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
          goto code_?;
          ppIVar5 = &(this->fields).interactionInput;
          pRVar6 = pRVar3->vector;
          for (; (int)uVar4 < (int)pRVar3->max_length; uVar4 = uVar4 + 1) {
            if ((uint)pRVar3->max_length <= uVar4) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pRVar8 = pRVar6->renderData;
            pIVar2 = *ppIVar5;
            if (pRVar8 == (RenderData *)0x0) goto code_?;
            pRVar9 = pRVar8->klass;
            uVar10 = 0;
            uVar11._0_1_ = (pRVar9->_1).rank;
            uVar11._1_1_ = (pRVar9->_1).minimumAlignment;
            if (uVar11 != 0) {
              do {
                if (pRVar9->interfaceOffsets[uVar10].interfaceType ==
                    (Il2CppClass *)TypeInfo__ILocalObject) {
                  pVVar12 = &(pRVar9->vtable).Equals + (pRVar9->interfaceOffsets[uVar10].offset + 1)
                  ;
                  goto code_?;
                }
                uVar13 = (short)uVar10 + 1;
                uVar10 = (ulonglong)uVar13;
              } while (uVar13 < uVar11);
            }
            pVVar12 = (VirtualInvokeData *)FUN_?(pRVar8,TypeInfo__ILocalObject,1);
code_?:
            pIVar2 = (InputToInGameAction *)(*pVVar12->methodPtr)(pRVar8,pIVar2,pVVar12->method);
            bVar14 = iRam_? != 0;
            *ppIVar5 = pIVar2;
            if (bVar14) {
              uVar15 = (uint)((ulonglong)ppIVar5 >> 0xc);
              puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar17 = *puVar16;
                LOCK();
                uVar10 = *puVar16;
                if (uVar17 == uVar10) {
                  *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (uVar17 != uVar10);
            }
            pRVar6 = (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo *)&pRVar6->type
            ;
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean VehicleEnergyUseRequest(Int32, Int32) */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseRequest
               (MVLocalObjectController *this,int32_t worldObjectSpawnerVehicleEnergyID,
               int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (MVVehicleBase *)MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0);
  bVar1 = MVLocalObjectController_IsInsideVehicle
                    (this,(MVWorldObjectClient *)this_01,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = (MVWorldObjectClientManager *)(this->fields).worldObjectClientManagerNetwork;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,worldObjectSpawnerVehicleEnergyID,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1).
              naturalAligment;
      if (bVar3 <= (pMVar2->klass->_1).naturalAligment) {
        if ((MVWorldObjectSpawnerVehicleEnergy__Class *)
            (pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
            TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy) {
          iVar4 = (pMVar2->fields)._.id;
          aVStack_5[0].spawnerId = 0;
          aVStack_5[0].prediction = 0;
          aVStack_5[0]._5_3_ = 0;
          aVStack_5[0].amount = 0.0;
          lVar6 = *(longlong *)&pMVar2[1].fields._.timestamp;
          if (lVar6 != 0) {
            iStack_7 = (int)*(undefined8 *)(lVar6 + 0x188);
            fVar8 = (float)iStack_7 / _UNK_?;
            fVar9 = (float)FUN_?();
            pLVar10 = pMVar2[1].fields._.objectLinkRefs;
            pMVar2[1].fields._.position.z = fVar9;
            if (pLVar10 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
              (pLVar10->fields)._size = (int32_t)fVar9;
              if (this_01 != (MVVehicleBase *)0x0) {
                pMVar11 = this_01->klass;
                bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
                if (((pMVar11->_1).naturalAligment < bVar3) ||
                   ((MVVehicleBase__Class *)(pMVar11->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__MVVehicleBase)) {
                  FUN_?(this_01);
                  pcVar12 = (code *)swi(3);
                  bVar1 = (*pcVar12)();
                  return bVar1;
                }
                bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
                aVStack_5[0].prediction = 1;
                aVStack_5[0].spawnerId = iVar4;
                aVStack_5[0].amount = fVar8;
                if (((pMVar11->_1).naturalAligment < bVar3) ||
                   ((MVVehicleBase__Class *)(pMVar11->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__MVVehicleBase)) {
                  FUN_?(this_01);
                  pcVar12 = (code *)swi(3);
                  bVar1 = (*pcVar12)();
                  return bVar1;
                }
                MVVehicleBase::MVVehicleBase_RefillEnergy(this_01,aVStack_5,(MethodInfo *)0x0);
                this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_VehicleEnergyUse
                            (this_02,worldObjectSpawnerVehicleEnergyID,(this_01->fields)._._._._.id,
                             (MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
          goto code_?;
        }
      }
      FUN_?(pMVar2,
                    TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
      pcVar12 = (code *)swi(3);
      bVar1 = (*pcVar12)();
      return bVar1;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar1 = (*pcVar12)();
  return bVar1;
}


/* Void VehicleEnergyUseResponse(Boolean, Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
               (MVLocalObjectController *this,bool success,
               Dictionary_2_System_Byte_System_Object_ *returnValues,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__FindEntry
                      (returnValues,0x16,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    plVar2 = (longlong *)FUN_?(returnValues,CONCAT71(in_register_00000011,0x16));
    if (plVar2 != (longlong *)0x0) {
      if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      id = *(uint *)(plVar2 + 2);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
        pMVar5 = (MVWorldObjectSpawnerVehicleEnergy__Class *)(ulonglong)id;
        pMVar6 = (MVWorldObjectSpawner *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar4,id,(MethodInfo *)0x0);
        pMVar7 = (MVWorldObjectSpawner *)0x0;
        this_01 = pMVar7;
        if (pMVar6 != (MVWorldObjectSpawner *)0x0) {
          bVar8 = (TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy->_1)
                  .naturalAligment;
          if (((pMVar6->klass->_1).naturalAligment < bVar8) ||
             (bVar9 = true,
             (MVWorldObjectSpawnerVehicleEnergy__Class *)
             (pMVar6->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
             TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy)) {
            bVar9 = false;
          }
          pMVar5 = TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy;
          this_01 = (MVWorldObjectSpawner *)0x0;
          if (bVar9) {
            this_01 = pMVar6;
          }
        }
        uVar10 = (undefined7)((ulonglong)pMVar5 >> 8);
        bVar9 = false;
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__FindEntry
                          (returnValues,0xbf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar1) {
          plVar2 = (longlong *)FUN_?(returnValues,CONCAT71(uVar10,0xbf));
          if (plVar2 == (longlong *)0x0) goto code_?;
          if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar2,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar11 = plVar2[2];
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar6 = (MVWorldObjectSpawner *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar4,(int32_t)lVar11,(MethodInfo *)0x0);
          if (pMVar6 != (MVWorldObjectSpawner *)0x0) {
            bVar8 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
            if ((bVar8 <= (pMVar6->klass->_1).naturalAligment) &&
               (pMVar7 = (MVWorldObjectSpawner *)0x0,
               (MVVehicleBase__Class *)(pMVar6->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
               TypeInfo__MVVehicleBase)) {
              bVar9 = true;
              pMVar7 = pMVar6;
            }
          }
        }
        if (success == 0) {
          if (this_01 != (MVWorldObjectSpawner *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Extensions);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_UseTime);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (-1 < (this_01->fields).predictTakeTime) {
              pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
                        (*(this_01->klass->vtable).get_RunTimeData.methodPtr)
                                  (this_01,(this_01->klass->vtable).get_RunTimeData.method);
              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar13 = Extensions::Extensions_ContainsObscuredKey
                                (pDVar12,StringLiteral_UseTime,(MethodInfo *)0x0);
              if (bVar13 != 0) {
                pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
                          (*(this_01->klass->vtable).get_RunTimeData.methodPtr)
                                    (this_01,(this_01->klass->vtable).get_RunTimeData.method);
                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar14 = Extensions::Extensions_GetObscuredType
                                    (pDVar12,StringLiteral_UseTime,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (pOVar14 == (Object *)0x0) goto code_?;
                if ((pOVar14->klass->_0).element_class !=
                    (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
                {
                  FUN_?(pOVar14,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                aOStack_15[0]._0_8_ = pOVar14[1].klass;
                aOStack_15[0].fakeValue = *(int32_t *)&pOVar14[1].monitor;
                aOStack_15[0]._12_4_ = *(undefined4 *)((longlong)&pOVar14[1].monitor + 4);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_InternalDecrypt(aOStack_15,(MethodInfo *)0x0);
                MVWorldObjectSpawner::MVWorldObjectSpawner_Take(this_01,iVar1,(MethodInfo *)0x0);
              }
            }
          }
          if (bVar9) {
            if (pMVar7 == (MVWorldObjectSpawner *)0x0) goto code_?;
            if (*(longlong *)&(pMVar7->fields).spawnWorldObjectID != 0) {
              plVar2 = *(longlong **)&(pMVar7->fields).spawnWorldObjectID;
              lVar11 = *plVar2;
              (**(code **)(lVar11 + 0x238))(plVar2,id,*(undefined8 *)(lVar11 + 0x240));
            }
          }
        }
        else if ((this_01 != (MVWorldObjectSpawner *)0x0) &&
                (this_00 = (MVVehicleBase *)
                           MVLocalObjectController_get_CurrentWorldObject(this,(MethodInfo *)0x0),
                this_00 != (MVVehicleBase *)0x0)) {
          bVar8 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
          if ((bVar8 <= (this_00->klass->_1).naturalAligment) &&
             ((MVVehicleBase__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
              TypeInfo__MVVehicleBase)) {
            if (this_01 != (MVWorldObjectSpawner *)0x0) {
              aOStack_15[0].fakeValue = 0;
              pLVar16 = this_01[1].fields._._._._.objectLinkRefs;
              aOStack_15[0].hiddenValue = 0;
              aOStack_15[0].currentCryptoKey = (this_01->fields)._._._._.id;
              if (pLVar16 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
                pOStack_17 = pLVar16[9].fields._syncRoot;
                aOStack_15[0].fakeValue = (int32_t)((float)(int)pOStack_17 / _UNK_?);
                MVVehicleBase::MVVehicleBase_RefillEnergy
                          (this_00,(VehicleEnergyRefill *)aOStack_15,(MethodInfo *)0x0);
                return;
              }
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVLocalObjectController(MVWorldObjectClientManagerNetwork) */

void Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController__ctor
               (MVLocalObjectController *this,
               MVWorldObjectClientManagerNetwork *worldObjectClientManagerNetwork,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputToInGameAction);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__Add_ILocalObject_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ILocalObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (InputToInGameAction *)FUN_?(TypeInfo__InputToInGameAction);
  bVar2 = iRam_? != 0;
  (this->fields).interactionInput = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).interactionInput >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (List_1_ILocalObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ILocalObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ILocalObject>__List__);
  uVar7 = FUN_?(TypeInfo__MVLocalObjectController__AvatarLocalObjectPlaceHolder);
  if (this_00 == (List_1_ILocalObject_ *)0x0) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?(this_00,uVar7);
  bVar2 = iRam_? != 0;
  (this->fields).localControlledStack = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).localControlledStack >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).dismountedLocalControlledObjects =
       (Dictionary_2_System_Int32_MVLocalObjectController_DismountedPlayerControlledObject_ *)
       this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).dismountedLocalControlledObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_10,1,
             (MethodInfo *)0x0);
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_10
             ,1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).worldObjectClientManagerNetwork = worldObjectClientManagerNetwork;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldObjectClientManagerNetwork >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar9 == (GameSessionData *)0x0) goto code_?;
  iVar10 = (pGVar9->fields).gameMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InputToPlayerMovementAndroid);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputToPlayerMovementAvatarEdit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InputToPlayerMovement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar11 = (InputToPlayerMovement__Class *)TypeInfo__InputToPlayerMovementAvatarEdit;
  if (iVar10 != 2) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar11 = TypeInfo__InputToPlayerMovement;
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      pIVar12 = (IInputToPlayerMovement *)FUN_?(TypeInfo__InputToPlayerMovementAndroid);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      *(undefined8 *)((longlong)&pIVar12[1].klass + 4) =
           *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      *(float *)((longlong)&pIVar12[1].monitor + 4) = fVar13;
      goto code_?;
    }
  }
  pIVar12 = (IInputToPlayerMovement *)FUN_?(pIVar11);
code_?:
  bVar2 = iRam_? != 0;
  (this->fields).movementMap = pIVar12;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* MVWorldObjectClient get_CurrentWorldObject() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
          (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_wo_does_not_exist);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).localControlledStack;
  if (pLVar1 != (List_1_ILocalObject_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
      return pMVar4;
    }
    pIVar5 = (pLVar1->fields)._items;
    if (pIVar5 != (ILocalObject__Array *)0x0) {
      if ((uint)pIVar5->max_length <= iVar2 - 1U) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
        return pMVar4;
      }
      if (pIVar5->vector[(longlong)iVar2 + -1] != (ILocalObject *)0x0) {
        id = FUN_?(0,TypeInfo__ILocalObject);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_00,id,(MethodInfo *)0x0);
          if (pMVar4 == (MVWorldObjectClient *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_wo_does_not_exist,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          }
          return pMVar4;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar4;
}


/* Boolean get_IsEnteringVehicle() */

bool Assembly-CSharp.dll::MVLocalObjectController::MVLocalObjectController_get_IsEnteringVehicle
               (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalObjectController__AttachState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).attachState == (MVLocalObjectController_IAttachInterface *)0x0) {
    return 0;
  }
  pMVar1 = (this->fields).attachState;
  pMVar2 = pMVar1->klass;
  bVar3 = (TypeInfo__MVLocalObjectController__AttachState->_1).naturalAligment;
  if (((pMVar2->_1).naturalAligment < bVar3) ||
     (bVar4 = true,
     (pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
     (Il2CppClass *)TypeInfo__MVLocalObjectController__AttachState)) {
    bVar4 = false;
  }
  pMVar5 = (MVLocalObjectController_IAttachInterface *)0x0;
  if (bVar4) {
    pMVar5 = pMVar1;
  }
  return pMVar5 != (MVLocalObjectController_IAttachInterface *)0x0;
}


/* HashSet`1[System.Int32] get_LocalControlledWorldObjects() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVLocalObjectController::
MVLocalObjectController_get_LocalControlledWorldObjects
          (MVLocalObjectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILocalObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ILocalObject>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).dismountedLocalControlledObjects;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVLocalObjectController::DismountedPlayerControlledObject>__get_Keys__
                           );
    pHVar1 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
    ;
    comparer = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
               EqualityComparer_1_System_Int32__get_Default
                         (MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                          ->klass->rgctx_data->method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor_4
              (pHVar1,(IEnumerable_1_System_Int32_ *)collection,
               (IEqualityComparer_1_System_Int32_ *)comparer,pMVar2->klass->rgctx_data[8].method);
    pLVar3 = (List_1_System_Object_ *)(this->fields).localControlledStack;
    if (pLVar3 != (List_1_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_5 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = pLVar3;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_11,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ILocalObject>__MoveNext__
                           );
        pOVar13 = LStack_11._current;
        if (bVar12 == 0) {
          return pHVar1;
        }
        if (LStack_11._current == (Object *)0x0) break;
        pOVar14 = (LStack_11._current)->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pOVar14->_1).rank;
        uVar16._1_1_ = (pOVar14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pOVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__ILocalObject) {
              pVVar17 = &(pOVar14->vtable).Equals + pOVar14->interfaceOffsets[uVar15].offset;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        pVVar17 = (VirtualInvokeData *)FUN_?(LStack_11._current,TypeInfo__ILocalObject,0);
code_?:
        value = (*pVVar17->methodPtr)(pOVar13,pVVar17->method);
        if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__AddIfNotPresent
                  (pHVar1,value,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                   rgctx_data[0x15].method);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar18)();
  return pHVar1;
}

