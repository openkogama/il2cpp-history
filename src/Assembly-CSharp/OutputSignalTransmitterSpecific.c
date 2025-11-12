
/* Void Send(Int32) */

void Assembly-CSharp.dll::OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
               (OutputSignalTransmitterSpecific *this,int32_t hotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,(this->fields).woId,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      lVar4 = 0x20;
      while( true ) {
        pMVar1 = (MVWorldObjectClientManager *)0x0;
        pLVar5 = (pMVar2->fields)._.outputLinkRefs;
        if (pLVar5 == (List_1_MV_WorldObject_Link_ *)0x0) break;
        if ((pLVar5->fields)._size <= (int)uVar3) {
          return;
        }
        bVar6 = uVar3 == hotIndex;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar7 == (MVGameControllerBase *)0x0) ||
           (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) break;
        if ((pMVar8->fields).worldNetwork != (WorldNetwork *)0x0) {
          pMVar1 = (MVWorldObjectClientManager *)
                   (((pMVar8->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        pLVar5 = (pMVar2->fields)._.outputLinkRefs;
        if (pLVar5 == (List_1_MV_WorldObject_Link_ *)0x0) break;
        if ((uint)(pLVar5->fields)._size <= uVar3) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pLVar10 = (pLVar5->fields)._items;
        if (pLVar10 == (Link__Array *)0x0) break;
        if ((uint)pLVar10->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar11 = *(longlong *)((longlong)pLVar10->vector + lVar4 + -0x20);
        if (((lVar11 == 0) || (pMVar1 == (MVWorldObjectClientManager *)0x0)) ||
           (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar1,*(int32_t *)(lVar11 + 0x18),(MethodInfo *)0x0),
           pIVar13 = TypeInfo__ILogicWorldObject, pMVar12 == (MVWorldObjectClient *)0x0)) break;
        lVar11 = FUN_?(pMVar12,TypeInfo__ILogicWorldObject);
        pIVar14 = TypeInfo__ILogicWorldObject;
        if (lVar11 == 0) {
          FUN_?(pMVar12,pIVar13);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar15 = (longlong *)FUN_?(pMVar12,TypeInfo__ILogicWorldObject);
        if (plVar15 == (longlong *)0x0) {
          FUN_?(pMVar12,pIVar14);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar11 = *plVar15;
        uVar16 = 0;
        if (*(ushort *)(lVar11 + 0x12e) != 0) {
          uVar17 = uVar16;
          do {
            if (*(ILogicWorldObject__Class **)
                 (*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                TypeInfo__ILogicWorldObject) {
              puVar18 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10) *
                         0x10 + 0x138 + lVar11);
              goto code_?;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ushort *)(lVar11 + 0x12e));
        }
        puVar18 = (undefined8 *)FUN_?(plVar15,TypeInfo__ILogicWorldObject,0);
code_?:
        plVar15 = (longlong *)(*(code *)*puVar18)(plVar15,puVar18[1]);
        if (plVar15 == (longlong *)0x0) break;
        lVar11 = *plVar15;
        if (*(ushort *)(lVar11 + 0x12e) != 0) {
          do {
            if (*(IInputSignalReceiver__Class **)
                 (*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                TypeInfo__IInputSignalReceiver) {
              puVar18 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                         0x10 + 0x138 + lVar11);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ushort *)(lVar11 + 0x12e));
        }
        puVar18 = (undefined8 *)FUN_?(plVar15,TypeInfo__IInputSignalReceiver,0);
code_?:
        (*(code *)*puVar18)(plVar15,bVar6);
        pLVar5 = (pMVar2->fields)._.outputLinkRefs;
        if (pLVar5 == (List_1_MV_WorldObject_Link_ *)0x0) break;
        if ((uint)(pLVar5->fields)._size <= uVar3) goto code_?;
        pLVar10 = (pLVar5->fields)._items;
        if (pLVar10 == (Link__Array *)0x0) break;
        if ((uint)pLVar10->max_length <= uVar3) goto code_?;
        lVar11 = *(longlong *)((longlong)pLVar10->vector + lVar4 + -0x20);
        if (lVar11 == 0) break;
        uVar3 = uVar3 + 1;
        *(bool *)(lVar11 + 0x1c) = bVar6;
        lVar4 = lVar4 + 8;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

