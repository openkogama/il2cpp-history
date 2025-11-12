
/* Void GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly(Object,
   OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::
     WinningCondition_GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly
               (WinningCondition *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method
               )

{
  if (e == (OnCounterTypeChangedArgs *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((e->fields).counterType == (this->fields).gameStatCounterType) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).GameCountersQuery_OnCounterTypeChanged.methodPtr)();
    return;
  }
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningCondition::WinningCondition_Reset
               (WinningCondition *this,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).forfilled = 0;
  (this->fields).instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).instigatorCounterTypeChangedEvent >> 0xc);
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


/* Void SendWinningConditionChangedEvent(EventArgs, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SendWinningConditionChangedEvent
               (WinningCondition *this,EventArgs *eventArgs,
               OnCounterTypeChangedArgs *instigatorCounterTypeChangedEvent,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).forfilled = 1;
  (this->fields).instigatorCounterTypeChangedEvent = instigatorCounterTypeChangedEvent;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).instigatorCounterTypeChangedEvent >> 0xc);
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
  if ((this->fields).OnWinningConditionChanged == (EventHandler_1_EventArgs_ *)0x0) {
    return;
  }
  pEVar6 = (this->fields).OnWinningConditionChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pEVar6->fields)._._.invoke_impl)
            ((pEVar6->fields)._._.method_code,this,eventArgs,(pEVar6->fields)._._.method);
  return;
}


/* Void SetLimit(Int32) */

void MVWorldObject.dll::WinningCondition::WinningCondition_SetLimit
               (WinningCondition *this,int32_t limit,MethodInfo *method)

{
  (this->fields).limit = limit;
  if ((this->fields).OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,0,(pEVar1->fields)._._.method);
    return;
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningCondition::WinningCondition_ToString
                   (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WinningConditionType___0___Forfi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  lVar1 = FUN_?(&(this->klass->_0).byval_arg);
  if (args != (Object__Array *)0x0) {
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,0,lVar1);
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).forfilled);
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,1,lVar1);
    aiStackX_8[0] = (this->fields).limit;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,2,lVar1);
    pOVar6 = (this->fields).instigatorCounterTypeChangedEvent;
    if (pOVar6 != (OnCounterTypeChangedArgs *)0x0) {
      lVar1 = FUN_?(pOVar6,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,3);
    pSVar5 = StringLiteral_WinningConditionType___0___Forfi;
    PStack_7._arg0 = (Object *)0x0;
    PStack_7._arg1 = (Object *)0x0;
    PStack_7._arg2 = (Object *)0x0;
    PStack_7._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_7,args,(MethodInfo *)0x0);
    PStack_8._arg0 = PStack_7._arg0;
    PStack_8._arg1 = PStack_7._arg1;
    PStack_8._arg2 = PStack_7._arg2;
    PStack_8._args = PStack_7._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar5,&PStack_8,(MethodInfo *)0x0);
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningCondition::WinningCondition_Traverse
               (WinningCondition *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(callBack->fields)._._.invoke_impl)
                      ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* WinningCondition(WinningCondition, Int32, GameStatCounterManager, Int32, Boolean,
   GameStatCounterType, WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningCondition::WinningCondition__ctor
               (WinningCondition *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t limit,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).gameCounterManager = gameCounterManager;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameCounterManager >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).id = id;
  (this->fields)._Parent_k__BackingField = (IWinningCondition *)parent;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Parent_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar7 = (this->fields).gameCounterManager;
  (this->fields).limit = limit;
  (this->fields)._IsBriefingNode_k__BackingField = isBriefingNode;
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
             ,(MethodInfo *)0x0);
  if (pGVar7 == (GameStatCounterManager *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar9 = &(pGVar7->fields).OnCounterTypeChanged;
  a = (pGVar7->fields).OnCounterTypeChanged;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar11 = TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>;
    if (pDVar10 == (Delegate *)0x0) {
      pEVar12 = (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0;
    }
    else {
      pEVar12 = (EventHandler_1_OnCounterTypeChangedArgs_ *)
                FUN_?(pDVar10,TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
      if (pEVar12 == (EventHandler_1_OnCounterTypeChangedArgs_ *)0x0) {
        FUN_?(pDVar10,pEVar11);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    LOCK();
    pEVar13 = *ppEVar9;
    bVar6 = a == pEVar13;
    if (bVar6) {
      *ppEVar9 = pEVar12;
      pEVar13 = a;
    }
    UNLOCK();
    pEVar12 = a;
    if (!bVar6) {
      pEVar12 = pEVar13;
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)ppEVar9 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar14 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar14 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar14 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    bVar6 = pEVar12 != a;
    a = pEVar12;
  } while (bVar6);
  return;
}


/* Void add_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_add_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  a = (this->fields).OnWinningConditionChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::WinningCondition::WinningCondition_get_HighScores
          (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  bVar1 = (this->fields).gameStatCounterType;
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                       (this_00,(MethodInfo *)0x0);
    if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (this_00,(uint)bVar1,1 < (pHVar2->fields)._count,
                          CONCAT31((int3)((uint)in_R9D >> 8),2),0,(MethodInfo *)0x0);
      return pHVar3;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pHVar3 = (HighScores *)(*pcVar4)();
  return pHVar3;
}


/* Boolean get_IsTeamMode() */

bool MVWorldObject.dll::WinningCondition::WinningCondition_get_IsTeamMode
               (WinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameCounterManager;
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                       (this_00,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
      return 1 < (pHVar1->fields)._count;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void remove_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningCondition::WinningCondition_remove_OnWinningConditionChanged
               (WinningCondition *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionChanged;
  source = (this->fields).OnWinningConditionChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

