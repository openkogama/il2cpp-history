
/* Int32 GetTimeLeft(MVRoundCube) */

int32_t Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_GetTimeLeft
                  (GameMeterRoundTime *this,MVRoundCube *roundCube,MethodInfo *method)

{
  if (roundCube != (MVRoundCube *)0x0) {
    iVar1 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(roundCube,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    this = (GameMeterRoundTime *)TypeInfo__MVGameControllerBase;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, this = (GameMeterRoundTime *)0x0,
       pMVar3 != (MVNetworkGame *)0x0)) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      this = (GameMeterRoundTime *)TypeInfo__MVGameControllerBase;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
         pMVar5 != (MVNetworkGameStateListener *)0x0)) {
        iVar6 = ((pMVar5->fields).startTime - iVar4) + iVar1;
        iVar1 = 0;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        return iVar1;
      }
    }
  }
  FUN_?(this);
  pcVar7 = (code *)swi(3);
  iVar1 = (*pcVar7)();
  return iVar1;
}


/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_HandleTimeNotifications
               (GameMeterRoundTime *this,int32_t timeLeft,MethodInfo *method)

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
       (iVar3 = FUN_?(pLVar1,(int)fVar2 + 1,
                              MethodInfo__System__Collections__Generic__List<int>__Contains_int_->
                              klass->rgctx_data[0x17].rgctxDataDummy), iVar3 == -1)) {
      return;
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      FUN_?(pLVar1,(int)fVar2 + 1,
                    MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x11);
      pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar5 != (MVGameControllerBase *)0x0) &&
         (this_00 = (pMVar5->fields).game, this_00 != (MVNetworkGame *)0x0)) {
        aiStackX_10[0] =
             MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
        pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar7 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar6,
                     (InsertionBehavior__Enum)uVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,4);
          pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_10);
          aiStackX_10[0] = timeLeft;
          pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,pOVar6,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_HurryUp,
                     (Dictionary_2_System_Object_System_Object_ *)this_01,
                     NotificationLifetime__Enum_High,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Initialize
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_);
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
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1);
  bVar2 = iRam_? != 0;
  (this->fields).timeNotifications = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).timeNotifications >> 0xc);
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
  GameMeterRoundTime_ResetTimeNotifications(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 == (MVGameControllerBase *)0x0) ||
     (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pAVar10 = (pMVar8->fields).OnWinningConditionFulfilled;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<IWinningCondition>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar12 = TypeInfo__System__Action<IWinningCondition>;
  if (pDVar11 == (Delegate *)0x0) {
    (pMVar8->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
  }
  else {
    pAVar10 = (Action_1_IWinningCondition_ *)
             FUN_?(pDVar11,TypeInfo__System__Action<IWinningCondition>);
    if (pAVar10 == (Action_1_IWinningCondition_ *)0x0) {
      FUN_?(pDVar11,pAVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pMVar8->fields).OnWinningConditionFulfilled = pAVar10;
    pAVar12 = TypeInfo__System__Action<IWinningCondition>;
    lVar4 = FUN_?(pDVar11,TypeInfo__System__Action<IWinningCondition>);
    if (lVar4 == 0) {
      FUN_?(pDVar11,pAVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar8->fields).OnWinningConditionFulfilled >> 0xc);
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_OnDestroy
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) goto DAT_?;
      pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar7 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar4->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar5 = (Action_1_IWinningCondition_ *)
                  FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
        pAVar7 = TypeInfo__System__Action<IWinningCondition>;
        lVar8 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
        if (lVar8 == 0) {
          FUN_?(pDVar6,pAVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).OnWinningConditionFulfilled >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
    }
  }
  return;
}


/* Void ResetOnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_ResetOnRoundEnd
               (GameMeterRoundTime *this,IWinningCondition *winningCondition,MethodInfo *method)

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

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_ResetTimeNotifications
               (GameMeterRoundTime *this,MethodInfo *method)

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


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_SetGameMeterVisibility
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVRoundCube_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVRoundCube>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_00___1_00_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVRoundCube *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_01,
                        MVRoundCube_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVRoundCube>__
                       );
    bVar2 = iRam_? != 0;
    (this->fields).roundCube = pMVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).roundCube >> 0xc);
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
    this_00 = (this->fields).mainGameObject;
    if (this_00 != (GameObject *)0x0) {
      if ((this->fields).roundCube != (MVRoundCube *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        iVar7 = GameMeterRoundTime_GetTimeLeft(this,(this->fields).roundCube,(MethodInfo *)0x0);
        if (0 < iVar7) {
          pTVar8 = (this->fields).roundTime;
          iVar9 = (int)((float)iVar7 / _UNK_?) + 1;
          aiStackX_18[0] = iVar9 / 0x3c;
          arg0 = (Object *)FUN_?(uRam_?,aiStackX_18);
          aiStackX_18[0] = iVar9 % 0x3c;
          arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
          pSVar10 = StringLiteral__0_00___1_00_;
          PStack_11._arg0 = (Object *)0x0;
          PStack_11._arg1 = (Object *)0x0;
          PStack_11._arg2 = (Object *)0x0;
          PStack_11._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                    (&PStack_11,arg0,arg1,(MethodInfo *)0x0);
          PStack_12._arg0 = PStack_11._arg0;
          PStack_12._arg1 = PStack_11._arg1;
          PStack_12._arg2 = PStack_11._arg2;
          PStack_12._args = PStack_11._args;
          pSVar10 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar10,&PStack_12,(MethodInfo *)0x0);
          if (pTVar8 == (Text *)0x0) goto code_?;
          (*(pTVar8->klass->vtable).set_text.methodPtr)
                    (pTVar8,pSVar10,(pTVar8->klass->vtable).set_text.method);
        }
        return 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pTVar8 = (this->fields).roundTime;
      if (pTVar8 != (Text *)0x0) {
        (*(pTVar8->klass->vtable).set_text.methodPtr)
                  (pTVar8,::StringLiteral__,(pTVar8->klass->vtable).set_text.method);
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void Show() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Show
               (GameMeterRoundTime *this,MethodInfo *method)

{
  obj = (this->fields).mainGameObject;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Update
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0_00___1_00_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).roundCube == (MVRoundCube *)0x0) {
    this_00 = (this->fields).mainGameObject;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return;
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  timeLeft = GameMeterRoundTime_GetTimeLeft(this,(this->fields).roundCube,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = lRam_?;
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 == (MVGameControllerBase *)0x0) ||
      (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
     (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
     pMVar5 == (MVNetworkGameStateListener *)0x0)) goto code_?;
  if ((pMVar5->fields).currentGameState == 2) {
    pOVar6 = (Object *)0x0;
    timeLeft = 0;
    pTVar7 = (this->fields).roundTime;
    iStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar8 = pOVar6, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar8 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar8 + 1,&iStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
    }
    else {
      pOVar8 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    lVar2 = lRam_?;
    iStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&iStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
    }
    else {
      pOVar6 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    pSVar14 = StringLiteral__0_00___1_00_;
    PStack_15._arg0 = (Object *)0x0;
    PStack_15._arg1 = (Object *)0x0;
    PStack_15._arg2 = (Object *)0x0;
    PStack_15._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_15,pOVar8,pOVar6,(MethodInfo *)0x0);
    PStack_16._arg0 = PStack_15._arg0;
    PStack_16._arg1 = PStack_15._arg1;
    PStack_16._arg2 = PStack_15._arg2;
    PStack_16._args = PStack_15._args;
    pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar14,&PStack_16,(MethodInfo *)0x0);
    if (pTVar7 == (Text *)0x0) goto code_?;
    pTVar17 = pTVar7->klass;
  }
  else {
    if (timeLeft < 1) goto code_?;
    pTVar7 = (this->fields).roundTime;
    iVar18 = (int)((float)timeLeft / _UNK_?) + 1;
    iStackX_8 = iVar18 / 0x3c;
    pOVar6 = (Object *)FUN_?(lRam_?,&iStackX_8);
    iStackX_8 = iVar18 % 0x3c;
    pOVar8 = (Object *)FUN_?(lRam_?,&iStackX_8);
    pSVar14 = StringLiteral__0_00___1_00_;
    PStack_15._arg0 = (Object *)0x0;
    PStack_15._arg1 = (Object *)0x0;
    PStack_15._arg2 = (Object *)0x0;
    PStack_15._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_15,pOVar6,pOVar8,(MethodInfo *)0x0);
    PStack_16._arg0 = PStack_15._arg0;
    PStack_16._arg1 = PStack_15._arg1;
    PStack_16._arg2 = PStack_15._arg2;
    PStack_16._args = PStack_15._args;
    pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar14,&PStack_16,(MethodInfo *)0x0);
    if (pTVar7 == (Text *)0x0) goto code_?;
    pTVar17 = pTVar7->klass;
  }
  (*(pTVar17->vtable).set_text.methodPtr)(pTVar7,pSVar14);
code_?:
  GameMeterRoundTime_HandleTimeNotifications(this,timeLeft,(MethodInfo *)0x0);
  return;
}

