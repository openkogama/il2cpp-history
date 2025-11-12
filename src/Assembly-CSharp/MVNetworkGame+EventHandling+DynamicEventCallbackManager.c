
/* Boolean IsDynamicEvent(MVEventCodes) */

bool Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_IsDynamicEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,MethodInfo *method)

{
  uVar1 = (undefined1)eventCode;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
  ;
  pHVar3 = (this->fields).eventsHandledByDynamicEventCallbackManager;
  if (pHVar3 == (HashSet_1_MV_Common_MVEventCodes_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((pHVar3->fields)._buckets != (Int32__Array *)0x0) {
    iVar6 = FUN_?(pHVar3,uVar1,
                           MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           ->klass->rgctx_data[0x16].rgctxDataDummy);
    pIVar7 = (pHVar3->fields)._buckets;
    pHVar8 = (pHVar3->fields)._slots;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    uVar9 = iVar6 % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar9) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    uVar9 = pIVar7->vector[(int)uVar9] - 1;
    if (-1 < (int)uVar9) {
      iVar10 = 0;
      if (pHVar8 == (HashSet_1_T_Slot_MV_Common_MVEventCodes___Array *)0x0)
      goto code_?;
      do {
        if ((uint)pHVar8->max_length <= uVar9) goto code_?;
        if (pHVar8->vector[(int)uVar9].hashCode == iVar6) {
          pIVar11 = (pHVar3->fields)._comparer;
          uVar12 = pHVar8->vector[(int)uVar9].value;
          if (pIVar11 == (IEqualityComparer_1_MV_Common_MVEventCodes_ *)0x0)
          goto code_?;
          pvVar13 = pMVar2->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
            pvVar13 = (void *)FUN_?(pvVar13);
          }
          cVar14 = FUN_?(uVar1,pvVar13,pIVar11,uVar12,uVar1);
          if (cVar14 != '\0') {
            return 1;
          }
        }
        if ((int)pHVar8->max_length <= iVar10) {
          uVar15 = func_?(&TypeInfo__System__InvalidOperationException);
          this_00 = (ProtocolViolationException *)func_?(uVar15);
          message = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar2);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        iVar10 = iVar10 + 1;
        if ((uint)pHVar8->max_length <= uVar9) goto code_?;
        uVar9 = pHVar8->vector[(int)uVar9].next;
      } while (-1 < (int)uVar9);
    }
  }
  return 0;
}


/* Void Notify(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_Notify
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).eventCallbacks;
  if (this_00 !=
      (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
       *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,eventCode & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                       );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_No_subscribers_to_event_data);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar1[1].klass == (Object__Class *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar2 = StringLiteral_No_subscribers_to_event_data;
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
        if (pIVar3 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
          return;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pOVar5 = pOVar1[1].klass;
      if (pOVar5 != (Object__Class *)0x0) {
        uVar6._0_2_ = (pOVar5->_0).byval_arg.attrs;
        uVar6._2_1_ = (pOVar5->_0).byval_arg.type;
        uVar6._3_5_ = *(undefined5 *)&(pOVar5->_0).byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pOVar5->_0).namespaze)((pOVar5->_0).element_class,eventData,uVar6);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_SubscribeToEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,Action_1_ExitGames_Client_Photon_EventData_ *callback,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  ,CONCAT44(in_register_00000014,eventCode),callback,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,eventCode & 0xff,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar2 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Event_not_handled_by_dynamic_eve);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager__SubscribeToEvent_MV__Common__MVEventCodes__System__Action<ExitGames::Client::Photon::EventData>_
                                  );
      FUN_?(this_02,uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)(this->fields).eventCallbacks;
    if (this_01 !=
        (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *
        )0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
              WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
              Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                        (this_01,eventCode & 0xff,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                         ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        pDVar6 = (this->fields).eventCallbacks;
        pOVar7 = (Object *)
                  FUN_?(
                               TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                               );
        if (pDVar6 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto DAT_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,eventCode & 0xff,pOVar7,
                   CONCAT31((int3)((uint)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar6 = (this->fields).eventCallbacks;
      if ((pDVar6 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                      *)0x0) &&
         (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                               eventCode & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                              ), pOVar7 != (Object *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar8 = pOVar7 + 1;
        a = pOVar7[1].klass;
        do {
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
          pAVar10 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          if (pDVar9 == (Delegate *)0x0) {
            pOVar11 = (Object__Class *)0x0;
          }
          else {
            pOVar11 = (Object__Class *)
                      FUN_?(pDVar9,
                                    TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
            if (pOVar11 == (Object__Class *)0x0) {
              FUN_?(pDVar9,pAVar10);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          LOCK();
          pOVar12 = pOVar8->klass;
          bVar13 = a == pOVar12;
          if (bVar13) {
            pOVar8->klass = pOVar11;
            pOVar12 = a;
          }
          UNLOCK();
          pOVar11 = a;
          if (!bVar13) {
            pOVar11 = pOVar12;
          }
          if (iRam_? != 0) {
            uVar14 = (uint)((ulonglong)pOVar8 >> 0xc);
            puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar16 = *puVar15;
              LOCK();
              uVar17 = *puVar15;
              if (uVar16 == uVar17) {
                *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar16 != uVar17);
          }
          bVar13 = pOVar11 != a;
          a = pOVar11;
        } while (bVar13);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager_UnSubscribeToEvent
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,
               MVEventCodes__Enum eventCode,Action_1_ExitGames_Client_Photon_EventData_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).eventCallbacks;
  if ((pDVar1 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                  *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,eventCode & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                         ), pOVar2 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    source = pOVar2[1].klass;
    do {
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
      pAVar4 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
      if (pDVar3 == (Delegate *)0x0) {
        pOVar5 = (Object__Class *)0x0;
      }
      else {
        pOVar5 = (Object__Class *)
                 FUN_?(pDVar3,TypeInfo__System__Action<ExitGames::Client::Photon::EventData>
                              );
        if (pOVar5 == (Object__Class *)0x0) {
          FUN_?(pDVar3,pAVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      pOVar7 = pOVar2[1].klass;
      bVar8 = source == pOVar7;
      if (bVar8) {
        pOVar2[1].klass = pOVar5;
        pOVar7 = source;
      }
      UNLOCK();
      pOVar5 = source;
      if (!bVar8) {
        pOVar5 = pOVar7;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pOVar5 != source;
      source = pOVar5;
    } while (bVar8);
    if (pOVar2[1].klass == (Object__Class *)0x0) {
      pDVar1 = (this->fields).eventCallbacks;
      if (pDVar1 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Remove
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,eventCode & 0xff,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVNetworkGame+EventHandling+DynamicEventCallbackManager() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling+DynamicEventCallbackManager::
     MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor
               (MVNetworkGame_EventHandling_DynamicEventCallbackManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                 );
    LOCK();
    UNLOCK();
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
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).eventCallbacks =
       (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
        *)this_00;
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
  this_01 = (HashSet_1_System_ByteEnum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_01 == (HashSet_1_System_ByteEnum_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum__AddIfNotPresent
            (this_01,(ByteEnum__Enum)
                     CONCAT71((int7)((ulonglong)
                                     MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                                     ->klass >> 8),0x6a),
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
             ->klass->rgctx_data[0x15].method);
  bVar1 = iRam_? != 0;
  (this->fields).eventsHandledByDynamicEventCallbackManager =
       (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).eventsHandledByDynamicEventCallbackManager >> 0xc);
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

