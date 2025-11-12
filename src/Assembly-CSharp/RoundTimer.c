
/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_HandleTimeNotifications
               (RoundTimer *this,int32_t timeLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).timeNotifications;
  fVar2 = (float)timeLeft / _UNK_?;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar1->fields)._size == 0) ||
       (iVar3 = FUN_?(pLVar1,(int)fVar2,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar3 == -1)) {
      return;
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      FUN_?(pLVar1,(int)fVar2,
                    MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      if ((this->fields).OnTimeNotificationSend ==
          (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
           *)0x0) {
        return;
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x11);
      pOVar4 = (Object *)FUN_?();
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        aiStackX_10[0] =
             MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
        pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (this_00 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar4,pOVar5,
                     (InsertionBehavior__Enum)uVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,4);
          pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_10);
          aiStackX_10[0] = timeLeft;
          pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar4,pOVar5,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pAVar7 = (this->fields).OnTimeNotificationSend;
          if (pAVar7 != (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,0x17,this_00,(pAVar7->fields)._._.method);
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


/* Void Initialize(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Initialize
               (RoundTimer *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).roundCube = roundCube;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).roundCube >> 0xc);
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
  pLVar6 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).timeNotifications = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).timeNotifications >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  pLVar6 = (this->fields).timeNotifications;
  if (((pLVar6->fields)._size == 0) ||
     (iVar7 = FUN_?(pLVar6,10,
                            MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                            klass->rgctx_data[0x17].rgctxDataDummy), iVar7 == -1)) {
    pLVar6 = (this->fields).timeNotifications;
    if (pLVar6 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar6,10,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar6 = (this->fields).timeNotifications;
  if (pLVar6 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar6->fields)._size == 0) ||
       (iVar7 = FUN_?(pLVar6,0x1e,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar7 == -1)) {
      pLVar6 = (this->fields).timeNotifications;
      if (pLVar6 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar6,0x1e,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar6 = (this->fields).timeNotifications;
    if (pLVar6 != (List_1_System_Int32_ *)0x0) {
      if (((pLVar6->fields)._size == 0) ||
         (iVar7 = FUN_?(pLVar6,0x3c,
                                MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                                klass->rgctx_data[0x17].rgctxDataDummy), iVar7 == -1)) {
        pLVar6 = (this->fields).timeNotifications;
        if (pLVar6 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar6,0x3c,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar6 = (this->fields).timeNotifications;
      if (pLVar6 != (List_1_System_Int32_ *)0x0) {
        if (((pLVar6->fields)._size != 0) &&
           (iVar7 = FUN_?(pLVar6,300,
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ->klass->rgctx_data[0x17].rgctxDataDummy), iVar7 != -1)) {
          return;
        }
        pMVar8 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pLVar6 = (this->fields).timeNotifications;
        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
          piVar9 = &(pLVar6->fields)._version;
          *piVar9 = *piVar9 + 1;
          pIVar10 = (pLVar6->fields)._items;
          if (pIVar10 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar2 = (pLVar6->fields)._size;
          if (uVar2 < (uint)pIVar10->max_length) {
            (pLVar6->fields)._size = uVar2 + 1;
            if (uVar2 < (uint)pIVar10->max_length) {
              pIVar10->vector[(int)uVar2] = 300;
              return;
            }
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar12 = (pLVar6->fields)._size;
          FUN_?(pLVar6,uVar12 + 1,
                        (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,(longlong)(int)uVar2,unaff_RDI);
          pIVar10 = (pLVar6->fields)._items;
          (pLVar6->fields)._size = uVar12 + 1;
          if (pIVar10 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (uVar12 < (uint)pIVar10->max_length) {
            pIVar10->vector[(int)uVar12] = 300;
            return;
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetOnRoundEnd() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetOnRoundEnd
               (RoundTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  pLVar1 = (this->fields).timeNotifications;
  if (((pLVar1->fields)._size == 0) ||
     (iVar2 = FUN_?(pLVar1,10,
                            MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                            klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar1,10,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar1 = (this->fields).timeNotifications;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar1->fields)._size == 0) ||
       (iVar2 = FUN_?(pLVar1,0x1e,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
      pLVar1 = (this->fields).timeNotifications;
      if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar1,0x1e,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      if (((pLVar1->fields)._size == 0) ||
         (iVar2 = FUN_?(pLVar1,0x3c,
                                MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                                klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
        pLVar1 = (this->fields).timeNotifications;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar1,0x3c,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar1 = (this->fields).timeNotifications;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        if (((pLVar1->fields)._size != 0) &&
           (iVar2 = FUN_?(pLVar1,300,
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ->klass->rgctx_data[0x17].rgctxDataDummy), iVar2 != -1)) {
          return;
        }
        pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pLVar1 = (this->fields).timeNotifications;
        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
          piVar4 = &(pLVar1->fields)._version;
          *piVar4 = *piVar4 + 1;
          pIVar5 = (pLVar1->fields)._items;
          if (pIVar5 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar7 = (pLVar1->fields)._size;
          if (uVar7 < (uint)pIVar5->max_length) {
            (pLVar1->fields)._size = uVar7 + 1;
            if ((uint)pIVar5->max_length <= uVar7) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pIVar5->vector[(int)uVar7] = 300;
            return;
          }
          uVar7 = (pLVar1->fields)._size;
          FUN_?(pLVar1,uVar7 + 1,
                        (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy);
          pIVar5 = (pLVar1->fields)._items;
          (pLVar1->fields)._size = uVar7 + 1;
          if (pIVar5 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uint)pIVar5->max_length <= uVar7) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pIVar5->vector[(int)uVar7] = 300;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetTimeNotifications() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetTimeNotifications
               (RoundTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  pLVar1 = (this->fields).timeNotifications;
  if (((pLVar1->fields)._size == 0) ||
     (iVar2 = FUN_?(pLVar1,10,
                            MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                            klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
    FUN_?(pLVar1,10,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar1 = (this->fields).timeNotifications;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    if (((pLVar1->fields)._size == 0) ||
       (iVar2 = FUN_?(pLVar1,0x1e,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
      pLVar1 = (this->fields).timeNotifications;
      if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(pLVar1,0x1e,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      if (((pLVar1->fields)._size == 0) ||
         (iVar2 = FUN_?(pLVar1,0x3c,
                                MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                                klass->rgctx_data[0x17].rgctxDataDummy), iVar2 == -1)) {
        pLVar1 = (this->fields).timeNotifications;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar1,0x3c,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar1 = (this->fields).timeNotifications;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        if (((pLVar1->fields)._size != 0) &&
           (iVar2 = FUN_?(pLVar1,300,
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ->klass->rgctx_data[0x17].rgctxDataDummy), iVar2 != -1)) {
          return;
        }
        pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        pLVar1 = (this->fields).timeNotifications;
        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
          piVar4 = &(pLVar1->fields)._version;
          *piVar4 = *piVar4 + 1;
          pIVar5 = (pLVar1->fields)._items;
          if (pIVar5 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar7 = (pLVar1->fields)._size;
          if (uVar7 < (uint)pIVar5->max_length) {
            (pLVar1->fields)._size = uVar7 + 1;
            if ((uint)pIVar5->max_length <= uVar7) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pIVar5->vector[(int)uVar7] = 300;
            return;
          }
          uVar7 = (pLVar1->fields)._size;
          FUN_?(pLVar1,uVar7 + 1,
                        (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy);
          pIVar5 = (pLVar1->fields)._items;
          (pLVar1->fields)._size = uVar7 + 1;
          if (pIVar5 == (Int32__Array *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uint)pIVar5->max_length <= uVar7) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pIVar5->vector[(int)uVar7] = 300;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Update(RoundTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
  pWVar2 = (this->fields).roundCube;
  if ((pWVar2 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 != (MVWorldObjectClientManager *)0x0)) {
    pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (pMVar3,(pWVar2->fields).woId,pMVar1->klass->rgctx_data[1].method);
    pMVar1 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
    if (pOVar4 == (Object *)0x0) {
      return;
    }
    pWVar2 = (this->fields).roundCube;
    if (((pWVar2 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
        (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar5 = (MVRoundCube *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (pMVar3,(pWVar2->fields).woId,pMVar1->klass->rgctx_data[1].method),
       pMVar5 != (MVRoundCube *)0x0)) {
      time = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar5,(MethodInfo *)0x0);
      pMVar1 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
      pWVar2 = (this->fields).roundCube;
      pTVar6 = (this->fields).timeLeftText;
      if (((pWVar2 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
          (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
         ((pMVar5 = (MVRoundCube *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                              (pMVar3,(pWVar2->fields).woId,pMVar1->klass->rgctx_data[1].method),
          pMVar5 != (MVRoundCube *)0x0 &&
          (pSVar7 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar5,time,(MethodInfo *)0x0),
          pTVar6 != (Text *)0x0)))) {
        (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6,pSVar7);
        RoundTimer_HandleTimeNotifications(this,time,(MethodInfo *)0x0);
        pMVar1 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
        pWVar2 = (this->fields).roundCube;
        pPVar8 = (this->fields).progressBar;
        if (((pWVar2 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
            (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar3 != (MVWorldObjectClientManager *)0x0)) &&
           ((pMVar5 = (MVRoundCube *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                                (pMVar3,(pWVar2->fields).woId,pMVar1->klass->rgctx_data[1].method),
            pMVar5 != (MVRoundCube *)0x0 &&
            (iVar9 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar5,(MethodInfo *)0x0),
            pPVar8 != (ProgressBar *)0x0)))) {
          value = (float)time / (float)iVar9;
          if (value < 0.0) {
            value = 0.0;
          }
          else if (_UNK_? < value) {
            value = _UNK_?;
          }
          this_00 = (pPVar8->fields).progressBar;
          (pPVar8->fields).progress = value;
          if (this_00 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

