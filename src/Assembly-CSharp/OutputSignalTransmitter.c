
/* Void Send(Boolean) */

void Assembly-CSharp.dll::OutputSignalTransmitter::OutputSignalTransmitter_Send
               (OutputSignalTransmitter *this,bool isHot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,(this->fields).woId,(MethodInfo *)0x0),
      pMVar2 == (MVWorldObjectClient *)0x0)) ||
     (LStack_3._list = (List_1_System_Object_ *)(pMVar2->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)LStack_3._list == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MV_WorldObject_Link_ *)LStack_3._list)->fields)._version
               << 0x20);
  uStack_11 = 0;
  LStack_3._8_8_ = pLStack_10;
  LStack_3._current = (Object *)0x0;
  uStack_6 = 0;
  pLStack_10 = &LStack_3;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       (&LStack_3,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar13 = LStack_3._current;
    if (bVar12 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar14 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar15 = (pMVar14->fields).game;
    if (pMVar15 == (MVNetworkGame *)0x0) break;
    pMVar1 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar15->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar1 = (MVWorldObjectClientManager *)
                (((pMVar15->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar13 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar1,*(int32_t *)&pOVar13[1].monitor,(MethodInfo *)0x0);
    pIVar16 = TypeInfo__ILogicWorldObject;
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar17 = FUN_?(pMVar2,unaff_RSI);
code_?:
      FUN_?(uVar17,pIVar16);
      goto code_?;
    }
    lVar18 = FUN_?(pMVar2,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar17 = extraout_XMM0_Da;
    if (lVar18 == 0) goto code_?;
    pIVar16 = (ILogicWorldObject__Class *)FUN_?(pMVar2,TypeInfo__ILogicWorldObject);
    if (pIVar16 == (ILogicWorldObject__Class *)0x0) goto code_?;
    pIVar19 = (pIVar16->_0).image;
    uVar20 = 0;
    uVar21 = *(ushort *)((longlong)&pIVar19[4].nameNoExt + 6);
    if (uVar21 != 0) {
      uVar22 = uVar20;
      do {
        if (*(ILogicWorldObject__Class **)
             (*(longlong *)&pIVar19[2].customAttributeCount + (ulonglong)uVar22 * 0x10) ==
            TypeInfo__ILogicWorldObject) {
          puVar23 = &pIVar19[4].typeCount +
                    (longlong)
                    *(int *)(*(longlong *)&pIVar19[2].customAttributeCount + 8 +
                            (ulonglong)uVar22 * 0x10) * 4;
          goto code_?;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar21);
    }
    puVar23 = (uint32_t *)FUN_?(pIVar16,TypeInfo__ILogicWorldObject,0);
code_?:
    plVar24 = (longlong *)(**(code **)puVar23)(pIVar16,*(undefined8 *)(puVar23 + 2));
    pMVar2 = (MVWorldObjectClient *)0x0;
    if (plVar24 == (longlong *)0x0) goto code_?;
    lVar18 = *plVar24;
    if (*(ushort *)(lVar18 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar25 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10)
                     * 0x10 + 0x138 + lVar18);
          goto code_?;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(ushort *)(lVar18 + 0x12e));
    }
    puVar25 = (undefined8 *)FUN_?(plVar24,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar25)(plVar24,isHot);
    *(bool *)((longlong)&pOVar13[1].monitor + 4) = isHot;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

