
/* Void Initialize() */

void Assembly-CSharp.dll::MVNegate::MVNegate_Initialize(MVNegate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNegate__SignalCallback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,TypeRef__System__Activator__T._0_4_
             ,(MethodInfo *)0x0);
  signalCallback =
       (Action_3_Boolean_Boolean_LogicObjectManager_ *)
       FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  FUN_?(signalCallback,this,
                MethodInfo__MVNegate__SignalCallback_bool__bool__LogicObjectManager_);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,0,signalCallback,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = (this->fields)._._._.id;
  pOVar8 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
  bVar2 = iRam_? != 0;
  (pOVar8->fields).woId = iVar7;
  (this->fields).outputSignalTransmitter = pOVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
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


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVNegate::MVNegate_SignalCallback
               (MVNegate *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  pOVar1 = (this->fields).outputSignalTransmitter;
  if (pOVar1 == (OutputSignalTransmitter *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
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
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar4,(pOVar1->fields).woId,(MethodInfo *)0x0),
      pMVar5 == (MVWorldObjectClient *)0x0)) ||
     (auStack_2._0_8_ = (pMVar5->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)auStack_2._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
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
  puStack_11 = (undefined1 *)
               ((ulonglong)
                (uint)(((List_1_MV_WorldObject_Link_ *)auStack_2._0_8_)->fields)._version << 0x20);
  uStack_12 = 0;
  auStack_2._8_8_ = puStack_11;
  pOStack_13 = (Object *)0x0;
  uStack_7 = 0;
  puStack_11 = auStack_2;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar15 = pOStack_13;
    if (bVar14 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar16 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar17 = (pMVar16->fields).game;
    if (pMVar17 == (MVNetworkGame *)0x0) break;
    pMVar4 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar17->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar4 = (MVWorldObjectClientManager *)
                (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar15 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar4,*(int32_t *)&pOVar15[1].monitor,(MethodInfo *)0x0);
    pIVar18 = TypeInfo__ILogicWorldObject;
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar19 = FUN_?(pMVar5,unaff_RSI);
code_?:
      FUN_?(uVar19,pIVar18);
      goto code_?;
    }
    lVar20 = FUN_?(pMVar5,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar19 = extraout_XMM0_Da;
    if (lVar20 == 0) goto code_?;
    pIVar18 = (ILogicWorldObject__Class *)FUN_?(pMVar5,TypeInfo__ILogicWorldObject);
    if (pIVar18 == (ILogicWorldObject__Class *)0x0) goto code_?;
    pIVar21 = (pIVar18->_0).image;
    uVar22 = 0;
    uVar23 = *(ushort *)((longlong)&pIVar21[4].nameNoExt + 6);
    if (uVar23 != 0) {
      uVar24 = uVar22;
      do {
        if (*(ILogicWorldObject__Class **)
             (*(longlong *)&pIVar21[2].customAttributeCount + (ulonglong)uVar24 * 0x10) ==
            TypeInfo__ILogicWorldObject) {
          puVar25 = &pIVar21[4].typeCount +
                    (longlong)
                    *(int *)(*(longlong *)&pIVar21[2].customAttributeCount + 8 +
                            (ulonglong)uVar24 * 0x10) * 4;
          goto code_?;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar23);
    }
    puVar25 = (uint32_t *)FUN_?(pIVar18,TypeInfo__ILogicWorldObject,0);
code_?:
    plVar26 = (longlong *)(**(code **)puVar25)(pIVar18,*(undefined8 *)(puVar25 + 2));
    pMVar5 = (MVWorldObjectClient *)0x0;
    if (plVar26 == (longlong *)0x0) goto code_?;
    lVar20 = *plVar26;
    if (*(ushort *)(lVar20 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar20 + 0xb0) + (ulonglong)uVar22 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar27 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar20 + 0xb0) + 8 + (ulonglong)uVar22 * 0x10)
                     * 0x10 + 0x138 + lVar20);
          goto code_?;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(ushort *)(lVar20 + 0x12e));
    }
    puVar27 = (undefined8 *)FUN_?(plVar26,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar27)(plVar26,b ^ 1);
    *(bool *)((longlong)&pOVar15[1].monitor + 4) = b ^ 1;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVNegate(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVNegate::MVNegate__ctor
               (MVNegate *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvNegatePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x10000;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVNegate::MVNegate_get_DocumentationType(MVNegate *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Negate;
}

