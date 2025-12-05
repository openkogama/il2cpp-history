
/* Void Update() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo_Update
               (JoinStatusInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JoinStatusInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JoinUIUpdater);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVEventCodes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CreateGameSnapshot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Connection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000Au000A);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      iVar3 = (pMVar2->fields).connState;
      if (iVar3 == (this->fields).prevConnState) goto code_?;
      (this->fields).prevConnState = iVar3;
      pSVar4 = TM::TM__(StringLiteral_Connection,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__LocalizedEnums__MVConnStateLS);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__LocalizedEnums__MVConnStateLS->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__LocalizedEnums__MVConnStateLS);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__LocalizedEnums__MVConnStateLS->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = TypeInfo__LocalizedEnums__MVConnStateLS->static_fields->enumLocalizeBookkeeping;
      if (this_00 != (EnumLocalizeBookkeeping *)0x0) {
        pSVar5 = Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_GetLocalizedString
                            (this_00,iVar3,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                            (pSVar4,::StringLiteral___,pSVar5,(MethodInfo *)0x0);
        do {
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_JoinFlowStatus,pSVar4,(MethodInfo *)0x0);
code_?:
          do {
            if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
              FUN_?();
            }
            pQVar6 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
            if (pQVar6 == (Queue_1_MV_Common_MVEventCodes_ *)0x0) goto code_?;
            if ((pQVar6->fields)._size < 1) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (pMVar1 != (MVGameControllerBase *)0x0) {
                if ((pMVar1->fields)._joinState != 3) {
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral__3_2_10_0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar4 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral_u000Au000A,StringLiteral__3_2_10_0,
                                     StringLiteral_u000Au000A,(MethodInfo *)0x0);
                MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                          (MVGameMsgType__Enum_JoinFlowStatus,pSVar4,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__HackingToolDetector);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__HackingToolDetector);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pHVar7 = TypeInfo__HackingToolDetector->static_fields->instance;
                if ((pHVar7 != (HackingToolDetector *)0x0) &&
                   (this_02 = (pHVar7->fields).alreadyReported, this_02 != (BitArray *)0x0)) {
                  bVar8 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                                    (this_02,1,(MethodInfo *)0x0);
                  if (bVar8 != 0) {
                    if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__HackingToolDetector);
                    }
                    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                              (MVGameMsgType__Enum_Warning,
                               TypeInfo__HackingToolDetector->static_fields->CheatWarning,
                               (MethodInfo *)0x0);
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
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                            ((Object_1 *)this,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
              goto code_?;
            }
            if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
              FUN_?();
            }
            pQVar6 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
            if (pQVar6 == (Queue_1_MV_Common_MVEventCodes_ *)0x0) goto code_?;
            if ((pQVar6->fields)._size == 0) {
              uVar9 = func_?(MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Dequeue__
                                           ->klass->rgctx_data,0xb);
              FUN_?(pQVar6,uVar9);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pMVar11 = (pQVar6->fields)._array;
            if (pMVar11 == (MVEventCodes__Enum__Array *)0x0) goto code_?;
            uVar12 = (pQVar6->fields)._head;
            if ((uint)pMVar11->max_length <= uVar12) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar13 = *(byte *)((longlong)pMVar11->vector + (longlong)(int)uVar12);
            iVar3 = (pQVar6->fields)._head + 1;
            iVar14 = 0;
            if (iVar3 != (int)pMVar11->max_length) {
              iVar14 = iVar3;
            }
            (pQVar6->fields)._head = iVar14;
            piVar15 = &(pQVar6->fields)._size;
            *piVar15 = *piVar15 + -1;
            piVar15 = &(pQVar6->fields)._version;
            *piVar15 = *piVar15 + 1;
            if (*(int *)&(TypeInfo__JoinStatusInfo->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__JoinStatusInfo);
            }
            this_01 = (HashSet_1_System_ByteEnum_ *)
                      TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents;
            if (this_01 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
            bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                    HashSet_1_System_ByteEnum__Contains
                              (this_01,(uint)bVar13,
                               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                              );
            if (bVar8 != 0) {
              if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              StatHatWrapper::StatHatWrapper_Count
                        (StringLiteral_CreateGameSnapshot,1,(MethodInfo *)0x0);
            }
          } while (bVar13 == (this->fields).prevGameState);
          pSVar4 = TM::TM__(StringLiteral_Game,(MethodInfo *)0x0);
          pSVar5 = LocalizedEnums::LocalizedEnums___1((uint)bVar13,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_5
                              (pSVar4,::StringLiteral___,pSVar5,(MethodInfo *)0x0);
          EStack_16.klass = (Enum__Class *)TypeInfo__MV__Common__MVEventCodes;
          EStack_16.monitor = (MonitorData *)0xffffffffffffffff;
          bStack_17 = bVar13;
          pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_16,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          StatHatWrapper::StatHatWrapper_Count(pSVar5,1,(MethodInfo *)0x0);
          (this->fields).prevGameState = bVar13;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JoinStatusInfo() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JoinStatusInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (HashSet_1_System_ByteEnum_ *)
         FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this == (HashSet_1_System_ByteEnum_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)
                          MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                          ->klass >> 8),0x65);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum__AddIfNotPresent
            (this,(ByteEnum__Enum)uVar2,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
             ->klass->rgctx_data[0x15].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),0x66);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum__AddIfNotPresent
            (this,(ByteEnum__Enum)uVar2,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
             ->klass->rgctx_data[0x15].method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum__AddIfNotPresent
            (this,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),0x3d),
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
             ->klass->rgctx_data[0x15].method);
  TypeInfo__JoinStatusInfo->static_fields->createGameSnapshotEvents =
       (HashSet_1_MV_Common_MVEventCodes_ *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__JoinStatusInfo->static_fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* JoinStatusInfo() */

void Assembly-CSharp.dll::JoinStatusInfo::JoinStatusInfo__ctor
               (JoinStatusInfo *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).prevGameState = 0x24;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

