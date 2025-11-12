
/* Boolean CanStartEmote(AvatarLimbManager+EmoteData) */

bool Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_EmoteData *emoteData,
               MethodInfo *method)

{
  if ((this->fields).isActive == 0) {
    return 0;
  }
  if ((this->fields).currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
    return 1;
  }
  pAVar1 = (this->fields).currentRunningEmoteData;
  if (emoteData != (AvatarLimbManager_EmoteData *)0x0) {
    if ((emoteData->fields).priority <= (pAVar1->fields).priority) {
      return 0;
    }
    pAVar2 = (pAVar1->fields).emote;
    if (pAVar2 != (AvatarLimbManager_AvatarEmote *)0x0) {
      (*(pAVar2->klass->vtable).StopEmote.methodPtr)
                (pAVar2,(pAVar2->klass->vtable).StopEmote.method);
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* AvatarLimbManager+EmoteData CreateEmoteData(AvatarLimbManager+AvatarEmote,
   AvatarLimbManager+LimbRotator, Single, Int16) */

AvatarLimbManager_EmoteData *
Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
          (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_AvatarEmote *emote,
          AvatarLimbManager_LimbRotator *limbRotator,float lifeTime,int16_t priority,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EmoteTypes>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEmoteEnd_EmoteTypes_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__EmoteData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (emote != (AvatarLimbManager_AvatarEmote *)0x0) {
    (*(emote->klass->vtable).Initialize.methodPtr)(emote,limbRotator,lifeTime);
    pAVar1 = (emote->fields).OnEmoteEnd;
    this_00 = (UnityAction_1_System_ByteEnum_ *)FUN_?(TypeInfo__System__Action<EmoteTypes>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEmoteEnd_EmoteTypes_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EmoteTypes>;
    if (pDVar2 == (Delegate *)0x0) {
      (emote->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
    }
    else {
      pAVar1 = (Action_1_EmoteTypes_ *)FUN_?(pDVar2,TypeInfo__System__Action<EmoteTypes>);
      if (pAVar1 == (Action_1_EmoteTypes_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar4 = (code *)swi(3);
        pAVar5 = (AvatarLimbManager_EmoteData *)(*pcVar4)();
        return pAVar5;
      }
      (emote->fields).OnEmoteEnd = pAVar1;
      pAVar3 = TypeInfo__System__Action<EmoteTypes>;
      lVar6 = FUN_?(pDVar2,TypeInfo__System__Action<EmoteTypes>);
      if (lVar6 == 0) {
        FUN_?(pDVar2,pAVar3);
        pcVar4 = (code *)swi(3);
        pAVar5 = (AvatarLimbManager_EmoteData *)(*pcVar4)();
        return pAVar5;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&emote->fields >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pAVar5 = (AvatarLimbManager_EmoteData *)FUN_?(TypeInfo__AvatarLimbManager__EmoteData);
    if (pAVar5 != (AvatarLimbManager_EmoteData *)0x0) {
      bVar11 = iRam_? != 0;
      (pAVar5->fields).emote = emote;
      if (bVar11) {
        uVar7 = (uint)((ulonglong)&pAVar5->fields >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      (pAVar5->fields).priority = priority;
      return pAVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AvatarLimbManager_EmoteData *)(*pcVar4)();
  return pAVar5;
}


/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EmoteTypes>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__AvatarNodEmote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__AvatarShakeEmote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__AvatarWaveEmote);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLimbManager_AvatarEmote *)
            FUN_?(TypeInfo__AvatarLimbManager__AvatarShakeEmote);
  pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                      (this,pAVar1,limbRotator,TypeRef__System__Activator__T._0_4_,1,
                       (MethodInfo *)0x0);
  if (pAVar1 != (AvatarLimbManager_AvatarEmote *)0x0) {
    pAVar3 = (pAVar1->fields).OnEmoteEnd;
    pUVar4 = (UnityAction_1_System_ByteEnum_ *)FUN_?(TypeInfo__System__Action<EmoteTypes>);
    uVar5 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (pUVar4,(Object *)headRotationHandler,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar7 = TypeInfo__System__Action<EmoteTypes>;
    if (pDVar6 == (Delegate *)0x0) {
      (pAVar1->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_EmoteTypes_ *)FUN_?(pDVar6,TypeInfo__System__Action<EmoteTypes>);
      if (pAVar3 == (Action_1_EmoteTypes_ *)0x0) {
        FUN_?(pDVar6,pAVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pAVar1->fields).OnEmoteEnd = pAVar3;
      pAVar7 = TypeInfo__System__Action<EmoteTypes>;
      lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<EmoteTypes>);
      if (lVar9 == 0) {
        FUN_?(pDVar6,pAVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    pDVar15 = (this->fields).emoteDatas;
    if (pDVar15 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pMVar16 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
               ->klass->rgctx_data[0x22].method;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,
                 (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar16 >> 8),1),(Object *)pAVar2,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),pMVar16);
      pAVar1 = (AvatarLimbManager_AvatarEmote *)
                FUN_?(TypeInfo__AvatarLimbManager__AvatarNodEmote);
      pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                          (this,pAVar1,limbRotator,TypeRef__System__Activator__T._0_4_,1,
                           (MethodInfo *)0x0);
      if (pAVar1 != (AvatarLimbManager_AvatarEmote *)0x0) {
        pAVar3 = (pAVar1->fields).OnEmoteEnd;
        pUVar4 = (UnityAction_1_System_ByteEnum_ *)
                  FUN_?(TypeInfo__System__Action<EmoteTypes>);
        uVar5 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  (pUVar4,(Object *)headRotationHandler,
                   MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                   ,(MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pAVar7 = TypeInfo__System__Action<EmoteTypes>;
        if (pDVar6 == (Delegate *)0x0) {
          (pAVar1->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
        }
        else {
          pAVar3 = (Action_1_EmoteTypes_ *)
                    FUN_?(pDVar6,TypeInfo__System__Action<EmoteTypes>);
          if (pAVar3 == (Action_1_EmoteTypes_ *)0x0) {
            FUN_?(pDVar6,pAVar7);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pAVar1->fields).OnEmoteEnd = pAVar3;
          pAVar7 = TypeInfo__System__Action<EmoteTypes>;
          lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<EmoteTypes>);
          if (lVar9 == 0) {
            FUN_?(pDVar6,pAVar7);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        pDVar15 = (this->fields).emoteDatas;
        if (pDVar15 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,2,(Object *)pAVar2,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                     ->klass->rgctx_data[0x22].method);
          pAVar1 = (AvatarLimbManager_AvatarEmote *)
                    FUN_?(TypeInfo__AvatarLimbManager__AvatarWaveEmote);
          pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                              (this,pAVar1,limbRotator,_UNK_?,2,(MethodInfo *)0x0);
          pDVar15 = (this->fields).emoteDatas;
          if (pDVar15 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
            pMVar16 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                     ->klass->rgctx_data[0x22].method;
            uVar10 = 3;
            piVar17 = &(pDVar15->fields)._version;
            *piVar17 = *piVar17 + 1;
            if ((pDVar15->fields)._buckets == (Int32__Array *)0x0) {
              FUN_?(pDVar15,0);
            }
            pIVar18 = (IEqualityComparer_1_System_ByteEnum_ *)(pDVar15->fields)._comparer;
            pDVar19 = (pDVar15->fields)._entries;
            if (pIVar18 != (IEqualityComparer_1_System_ByteEnum_ *)0x0) {
              pvVar20 = pMVar16->klass->rgctx_data[1].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar20 + 0x135) & 1) == 0) {
                FUN_?(pvVar20);
              }
              uVar10 = FUN_?();
            }
            pIVar21 = (pDVar15->fields)._buckets;
            iVar22 = 0;
            uVar10 = uVar10 & 0x7fffffff;
            if (pIVar21 != (Int32__Array *)0x0) {
              uVar23 = (int)uVar10 % (int)pIVar21->max_length;
              if ((uint)pIVar21->max_length <= uVar23) {
code_?:
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              piVar17 = pIVar21->vector + (int)uVar23;
              uVar23 = pIVar21->vector[(int)uVar23] - 1;
              if (pDVar19 !=
                  (Dictionary_2_TKey_TValue_Entry_EmoteTypes_AvatarLimbManager_EmoteData___Array *)
                  0x0) {
                if (pIVar18 == (IEqualityComparer_1_System_ByteEnum_ *)0x0) {
                  while (uVar23 < (uint)pDVar19->max_length) {
                    if (pDVar19->vector[(int)uVar23].hashCode == uVar10) {
                      pEVar24 = mscorlib.dll::System::Collections::Generic::
                                EqualityComparer`1[System::ByteEnum]::
                                EqualityComparer_1_System_ByteEnum__get_Default
                                          (pMVar16->klass->rgctx_data[3].method);
                      if ((uint)pDVar19->max_length <= uVar23) goto code_?;
                      if (pEVar24 == (EqualityComparer_1_System_ByteEnum_ *)0x0)
                      goto code_?;
                      cVar25 = (*(pEVar24->klass->vtable).__unknown.methodPtr)
                                         (pEVar24,(ulonglong)pDVar19->vector[(int)uVar23].key,3,
                                          (pEVar24->klass->vtable).__unknown.method);
                      if (cVar25 != '\0') {
                        uVar5 = func_?(pMVar16->klass->rgctx_data,0xe);
                        pOVar26 = (Object *)func_?(uVar5);
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowAddingDuplicateWithKeyArgumentException
                                  (pOVar26,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                    if ((uint)pDVar19->max_length <= uVar23) goto code_?;
                    uVar23 = pDVar19->vector[(int)uVar23].next;
                    if ((int)pDVar19->max_length <= iVar22) {
code_?:
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowInvalidOperationException_ConcurrentOperationsNotSupported
                                ((MethodInfo *)0x0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar22 = iVar22 + 1;
                  }
                }
                else {
                  while (uVar23 < (uint)pDVar19->max_length) {
                    if (pDVar19->vector[(int)uVar23].hashCode == uVar10) {
                      bVar27 = pDVar19->vector[(int)uVar23].key;
                      pIVar28 = pMVar16->klass->rgctx_data[1].rgctxDataDummy;
                      if ((pIVar28->field_0x135 & 1) == 0) {
                        pIVar28 = (Il2CppClass *)FUN_?(pIVar28);
                      }
                      pIVar29 = pIVar18->klass;
                      uVar30 = 0;
                      uVar31._0_1_ = (pIVar29->_1).rank;
                      uVar31._1_1_ = (pIVar29->_1).minimumAlignment;
                      if (uVar31 != 0) {
                        do {
                          if (pIVar29->interfaceOffsets[uVar30].interfaceType == pIVar28) {
                            pVVar32 = &(pIVar29->vtable).Equals +
                                      pIVar29->interfaceOffsets[uVar30].offset;
                            goto code_?;
                          }
                          uVar30 = uVar30 + 1;
                        } while (uVar30 < uVar31);
                      }
                      pVVar32 = (VirtualInvokeData *)FUN_?(pIVar18,pIVar28,0);
code_?:
                      cVar25 = (*pVVar32->methodPtr)(pIVar18,(ulonglong)bVar27,3,pVVar32->method);
                      if (cVar25 != '\0') {
                        uVar5 = func_?(pMVar16->klass->rgctx_data,0xe);
                        pOVar26 = (Object *)func_?(uVar5);
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowAddingDuplicateWithKeyArgumentException
                                  (pOVar26,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                    if ((uint)pDVar19->max_length <= uVar23) goto code_?;
                    uVar23 = pDVar19->vector[(int)uVar23].next;
                    if ((int)pDVar19->max_length <= iVar22) goto code_?;
                    iVar22 = iVar22 + 1;
                  }
                }
                bVar14 = false;
                bVar33 = false;
                if ((pDVar15->fields)._freeCount < 1) {
                  uVar23 = (pDVar15->fields)._count;
                  if (uVar23 == (uint)pDVar19->max_length) {
                    pMVar16 = pMVar16->klass->rgctx_data[0x36].method;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Collections__HashHelpers);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar34 = (pDVar15->fields)._count;
                    if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    iVar34 = mscorlib.dll::System::Collections::HashHelpers::
                             HashHelpers_1_ExpandPrime(iVar34,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__Resize_1
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,iVar34,0,
                               pMVar16->klass->rgctx_data[0x38].method);
                    bVar14 = true;
                  }
                  pDVar19 = (pDVar15->fields)._entries;
                  (pDVar15->fields)._count = uVar23 + 1;
                  if (bVar14) {
                    pIVar21 = (pDVar15->fields)._buckets;
                    if (pIVar21 == (Int32__Array *)0x0) goto code_?;
                    uVar35 = (int)uVar10 % (int)pIVar21->max_length;
                    if ((uint)pIVar21->max_length <= uVar35) goto code_?;
                    piVar17 = pIVar21->vector + (int)uVar35;
                  }
                }
                else {
                  uVar23 = (pDVar15->fields)._freeList;
                  bVar33 = true;
                  piVar36 = &(pDVar15->fields)._freeCount;
                  *piVar36 = *piVar36 + -1;
                }
                if (pDVar19 !=
                    (Dictionary_2_TKey_TValue_Entry_EmoteTypes_AvatarLimbManager_EmoteData___Array *
                    )0x0) {
                  if (uVar23 < (uint)pDVar19->max_length) {
                    if (bVar33) {
                      (pDVar15->fields)._freeList = pDVar19->vector[(int)uVar23].next;
                    }
                    pDVar19->vector[(int)uVar23].hashCode = uVar10;
                    iVar22 = *piVar17;
                    pDVar19->vector[(int)uVar23].key = 3;
                    bVar14 = iRam_? != 0;
                    pDVar19->vector[(int)uVar23].next = iVar22 + -1;
                    pDVar19->vector[(int)uVar23].value = pAVar2;
                    if (bVar14) {
                      uVar10 = (uint)((ulonglong)&pDVar19->vector[(int)uVar23].value >> 0xc);
                      puVar13 = (ulonglong *)
                               ((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar12 = *puVar13;
                        LOCK();
                        uVar11 = *puVar13;
                        if (uVar12 == uVar11) {
                          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar12 != uVar11);
                    }
                    *piVar17 = uVar23 + 1;
                    return;
                  }
                  goto code_?;
                }
              }
            }
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_Initialize
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).limbManager = limbManager;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (*(this->klass->vtable).CreateLimbEvents.methodPtr)
            (this,limbManager,lookDirectionHandler,pointingHandler,headRotationHandler,limbRotator,
             (this->klass->vtable).CreateLimbEvents.method);
  if (enableChangeHandler == (AvatarEnabledChangeHandler *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (enableChangeHandler->fields).OnEnabled;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__,
             (MethodInfo *)0x0);
  pAVar9 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
  pAVar7 = (Action *)0x0;
  if (pAVar9 == (Action *)0x0) {
    (enableChangeHandler->fields).OnEnabled = (Action *)0x0;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar9;
    }
    if (pAVar10 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (enableChangeHandler->fields).OnEnabled = pAVar10;
    pAVar10 = pAVar7;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar9;
    }
    if (pAVar10 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(enableChangeHandler->fields).OnEnabled >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar9 = (enableChangeHandler->fields).OnDisabled;
  pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar8,(Object *)this,MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__,
             (MethodInfo *)0x0);
  pAVar9 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar9,(Delegate *)pNVar8,(MethodInfo *)0x0);
  if (pAVar9 == (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = (Action *)0x0;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar10 = pAVar9;
    }
    if (pAVar10 == (Action *)0x0) {
      FUN_?(pAVar9);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (enableChangeHandler->fields).OnDisabled = pAVar10;
    if (pAVar9->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar9;
    }
    if (pAVar7 == (Action *)0x0) {
      FUN_?(pAVar9);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(enableChangeHandler->fields).OnDisabled >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
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


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnDisable
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).emoteDatas;
  if (pDStack_1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
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
  DStack_11._current._1_7_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::ByteEnum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    pOVar13 = DStack_11._current.value[1].klass;
    if (pOVar13 == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    pIVar14 = (pOVar13->_0).image;
    (**(code **)&pIVar14[5].token)(pOVar13,pIVar14[6].name);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEmoteEnd(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnEmoteEnd
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).emoteDatas;
  pAVar1 = (this->fields).currentRunningEmoteData;
  if (this_00 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (AvatarLimbManager_EmoteData *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,emoteType & 0xff,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if (pAVar1 == pAVar3) {
    bVar4 = iRam_? != 0;
    (this->fields).currentRunningEmoteData = (AvatarLimbManager_EmoteData *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).currentRunningEmoteData >> 0xc);
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
    if ((this->fields).OnEmoteUpdate != (Action_1_Int32_ *)0x0) {
      pAVar9 = (this->fields).OnEmoteUpdate;
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,0,(pAVar9->fields)._._.method);
    }
  }
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmoteTypes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).emoteDatas;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
             WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
             Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                       (this_00,emoteType & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                        ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar2 = (this->fields).emoteDatas;
    if (((pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
        (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType & 0xff
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar3 != (Object *)0x0)) &&
       (pOVar4 = pOVar3[1].klass, pOVar4 != (Object__Class *)0x0)) {
      pIVar5 = (pOVar4->_0).image;
      (**(code **)&pIVar5[5].customAttributeCount)(pOVar4,pIVar5[5].metadataHandle);
      pDVar2 = (this->fields).emoteDatas;
      if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        pAVar6 = (AvatarLimbManager_EmoteData *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                            );
        bVar7 = iRam_? != 0;
        (this->fields).currentRunningEmoteData = pAVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).currentRunningEmoteData >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        if ((this->fields).OnEmoteStart != (Action_1_String_ *)0x0) {
          pAVar12 = (this->fields).OnEmoteStart;
          EStack_13.klass = (Enum__Class *)TypeInfo__EmoteTypes;
          EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
          uStack_14 = (char)emoteType;
          pSVar15 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
          if (pAVar12 == (Action_1_String_ *)0x0) goto code_?;
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,pSVar15,(pAVar12->fields)._._.method);
        }
        if ((this->fields).OnEmoteUpdate == (Action_1_Int32_ *)0x0) {
          return;
        }
        pAVar16 = (this->fields).OnEmoteUpdate;
        (*(pAVar16->fields)._._.invoke_impl)
                  ((pAVar16->fields)._._.method_code,emoteType & 0xff,(pAVar16->fields)._._.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void StopAllEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StopAllEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).emoteDatas;
  if (pDStack_1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
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
  DStack_11._current._1_7_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::ByteEnum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    pOVar13 = DStack_11._current.value[1].klass;
    if (pOVar13 == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    pIVar14 = (pOVar13->_0).image;
    (**(code **)&pIVar14[5].token)(pOVar13,pIVar14[6].name);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryStartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_TryStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)emoteType != '\0') {
    this_00 = (this->fields).emoteDatas;
    if (this_00 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,emoteType & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields).isActive == 0) {
      return;
    }
    if ((this->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar2 = (this->fields).currentRunningEmoteData;
      if (pOVar1 == (Object *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(short *)&pOVar1[1].monitor <= (pAVar2->fields).priority) {
        return;
      }
      pAVar4 = (pAVar2->fields).emote;
      if (pAVar4 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      (*(pAVar4->klass->vtable).StopEmote.methodPtr)
                (pAVar4,(pAVar4->klass->vtable).StopEmote.method);
    }
    AvatarLimbManager_AvatarEmoteHandler_StartEmote(this,emoteType & 0xff,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).emoteDatas;
  if (pDStack_1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
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
  DStack_11._current._1_7_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::ByteEnum,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    pOVar13 = DStack_11._current.value[1].klass;
    if (pOVar13 == (Object__Class *)0x0) {
      FUN_?();
      break;
    }
    pIVar14 = (pOVar13->_0).image;
    (*(code *)pIVar14[5].nameToClassHashTable)(pOVar13,pIVar14[5].codeGenModule);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarLimbManager+AvatarEmoteHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler__ctor
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).emoteDatas = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).emoteDatas >> 0xc);
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
  (this->fields).isActive = 1;
  return;
}

