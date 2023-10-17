
/* Int32 GetTimeLeft(MVRoundCube) */

int32_t Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_GetTimeLeft
                  (GameMeterRoundTime *this,MVRoundCube *roundCube,MethodInfo *method)

{
  if (roundCube != (MVRoundCube *)0x0) {
    iVar1 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(roundCube,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar4 != (MVNetworkGameStateListener *)0x0)) {
        iVar5 = ((pMVar4->fields).startTime - iVar3) + iVar1;
        iVar1 = 0;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        return iVar1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_HandleTimeNotifications
               (GameMeterRoundTime *this,int32_t timeLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    cRam_? = '\x01';
  }
  iVar1 = timeLeft;
  pGVar2 = this;
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).timeNotifications;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    item = (RegexCharClass_SingleRange)((int)((float)timeLeft / _UNK_?) + 1);
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar3,item,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar4 == 0) {
      return;
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (pGVar2->fields).timeNotifications;
    if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (pLVar3,item,MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      this_00 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        this = (GameMeterRoundTime *)CONCAT13(0x11,this._0_3_);
        pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          iStack_6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (this_01,(MethodInfo *)0x0);
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,pOVar5,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          timeLeft = CONCAT13(4,(undefined3)timeLeft);
          pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&timeLeft + 3);
          iStack_8 = iVar1;
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,pOVar5,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          method = (MethodInfo *)&UNK_?;
          WinningConditionNotificationManager::WinningConditionNotificationManager_SendNotification
                    (NotificationType__Enum_HurryUp,this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Hide
               (GameMeterRoundTime *this,MethodInfo *method)

{
  this_00 = (this->fields).mainGameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Initialize
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).timeNotifications = this_00;
    func_?(&(this->fields).timeNotifications,this_00);
    GameMeterRoundTime_ResetTimeNotifications(this,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
      this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
          func_?();
          return;
        }
        pAVar2 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
          (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
          iVar4 = func_?();
          if (iVar4 != 0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_OnDestroy
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_1_IWinningCondition___Class *)(pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    unaff_EDI = (Delegate *)0x0;
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_EDI == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
        pDStack4 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<IWinningCondition>;
      pDStack4 = unaff_EDI;
      pAVar5 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar5;
        unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = TypeInfo__System__Action<IWinningCondition>;
        pDStack4 = unaff_EDI;
        pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pDStack4 = unaff_EDI;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetOnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_ResetOnRoundEnd
               (GameMeterRoundTime *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  GameMeterRoundTime_ResetTimeNotifications(this,(MethodInfo *)0x0);
  return;
}


/* Void ResetTimeNotifications() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_ResetTimeNotifications
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    cRam_? = '\x01';
  }
  if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) {
    return;
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).timeNotifications,(RegexCharClass_SingleRange)0xa,
                     MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).timeNotifications;
    if (pLVar2 == (List_1_System_Int32_ *)0x0) goto code_?;
    func_?(pLVar2,10);
  }
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).timeNotifications;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar3,(RegexCharClass_SingleRange)0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar1 == 0) {
      if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
      func_?();
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).timeNotifications;
    if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (pLVar3,(RegexCharClass_SingleRange)0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar1 == 0) {
        if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
        func_?();
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).timeNotifications;
      if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                          (pLVar3,(RegexCharClass_SingleRange)0x12c,
                           MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        if (bVar1 == 0) {
          if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0)
          goto code_?;
          func_?();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_SetGameMeterVisibility
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MVRoundCube_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVRoundCube>__
                   );
    func_?(&StringLiteral__0_00___1_00_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVRoundCube *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_00,
                        MVRoundCube_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVRoundCube>__
                       );
    (this->fields).roundCube = pMVar1;
    func_?(&(this->fields).roundCube,pMVar1);
    pGVar2 = (this->fields).mainGameObject;
    if ((this->fields).roundCube == (MVRoundCube *)0x0) {
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pTVar3 = (this->fields).roundTime;
        if (pTVar3 != (Text *)0x0) {
          (*(pTVar3->klass->vtable).set_text.methodPtr)
                    (pTVar3,::StringLiteral__,(pTVar3->klass->vtable).set_text.method);
          return;
        }
      }
    }
    else if (pGVar2 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pGVar2 = (this->fields).mainGameObject;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).roundCube;
      if (pMVar1 != (MVRoundCube *)0x0) {
        iVar5 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar1,(MethodInfo *)0x0);
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkGame *)0x0) {
          iVar7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (pMVar6,(MethodInfo *)0x0);
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar6 != (MVNetworkGame *)0x0) &&
             (pMVar8 = (pMVar6->fields)._NetworkGameStateListener_k__BackingField,
             pMVar8 != (MVNetworkGameStateListener *)0x0)) {
            iVar9 = ((pMVar8->fields).startTime - iVar7) + iVar5;
            iVar10 = 0;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            if (0 < iVar10) {
              pTVar3 = (this->fields).roundTime;
              arg0 = (Object *)func_?();
              arg1 = (Object *)func_?();
              pSVar11 = mscorlib.dll::System::String::String_Format_1
                                  (StringLiteral__0_00___1_00_,arg0,arg1,(MethodInfo *)0x0);
              if (pTVar3 == (Text *)0x0) goto code_?;
              (*(pTVar3->klass->vtable).set_text.methodPtr)
                        (pTVar3,pSVar11,(pTVar3->klass->vtable).set_text.method);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Show
               (GameMeterRoundTime *this,MethodInfo *method)

{
  this_00 = (this->fields).mainGameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Update
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__0_00___1_00_);
    cRam_? = '\x01';
  }
  if ((this->fields).roundCube == (MVRoundCube *)0x0) {
    this_00 = (this->fields).mainGameObject;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    iVar1 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                      ((this->fields).roundCube,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar4 != (MVNetworkGameStateListener *)0x0)) {
        puVar5 = (undefined *)(((pMVar4->fields).startTime - iVar3) + iVar1);
        puVar6 = (undefined *)0x0;
        if (-1 < (int)puVar5) {
          puVar6 = puVar5;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar4 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
           pMVar4 != (MVNetworkGameStateListener *)0x0)) {
          if ((pMVar4->fields).currentGameState == 2) {
            puVar6 = (undefined *)0x0;
            pOVar7 = (Object *)func_?();
            piVar8 = (int *)&stack0xfffffff4;
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral__0_00___1_00_,pOVar7,pOVar9,(MethodInfo *)0x0);
            if (piVar8 == (int *)0x0) goto code_?;
            (**(code **)(*piVar8 + 0x314))();
          }
          else if (0 < (int)puVar6) {
            pIVar10 = TypeInfo__System__Int32;
            pOVar7 = (Object *)func_?();
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral__0_00___1_00_,pOVar7,pOVar9,(MethodInfo *)0x0);
            if (pIVar10 == (Int32__Class *)0x0) goto code_?;
            puVar6 = &UNK_?;
            (**(code **)&(pIVar10->_0).image[0x11].dynamic)();
          }
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?(&TypeInfo__System__Int32);
            func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
            cRam_? = '\x01';
          }
          pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).timeNotifications;
          if (pLVar11 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            item = (RegexCharClass_SingleRange)((int)((float)(int)puVar6 / _UNK_?) + 1);
            bVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                              (pLVar11,item,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            if (bVar12 == 0) {
              return;
            }
            pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).timeNotifications;
            if (pLVar11 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                        (pLVar11,item,
                         MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
              this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
              if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          ((ParameterOverride_1_System_Object_ *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                pOVar7 = (Object *)func_?();
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar2 != (MVNetworkGame *)0x0) {
                  MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                            (pMVar2,(MethodInfo *)0x0);
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_01,pOVar7,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pOVar7 = (Object *)func_?();
                  pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_01,pOVar7,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  WinningConditionNotificationManager::
                  WinningConditionNotificationManager_SendNotification
                            (NotificationType__Enum_HurryUp,this_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

