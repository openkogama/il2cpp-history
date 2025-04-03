
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
  pLVar3 = (this->fields).timeNotifications;
  if (pLVar3 != (List_1_System_Int32_ *)0x0) {
    item = (int)((float)timeLeft / _UNK_?) + 1;
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (pLVar3,item,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar4 == 0) {
      return;
    }
    pLVar3 = (pGVar2->fields).timeNotifications;
    if (pLVar3 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__Remove
                (pLVar3,item,MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (GameMeterRoundTime *)CONCAT13(0x11,this._0_3_);
      pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        iStack_6 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (this_01,(MethodInfo *)0x0);
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
        if (this_00 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar5,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          timeLeft = CONCAT13(4,(undefined3)timeLeft);
          pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&timeLeft + 3);
          iStack_8 = iVar1;
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar5,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          WinningConditionNotificationManager::WinningConditionNotificationManager_SendNotification
                    (NotificationType__Enum_HurryUp,
                     (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
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
  this_00 = (Delegate *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  ppLVar1 = &(this->fields).timeNotifications;
  *ppLVar1 = (List_1_System_Int32_ *)this_00;
  func_?(ppLVar1,this_00);
  GameMeterRoundTime_ResetTimeNotifications(this,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    ppAVar4 = &(pMVar2->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,(MethodInfo *)0x0)
    ;
    this_00 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (this_00 == (Delegate *)0x0) {
      *ppAVar4 = (Action_1_IWinningCondition_ *)0x0;
      pDStack5 = (Delegate *)ppAVar4;
      pAStack6 = (Action_1_IWinningCondition___Class *)this_00;
      func_?();
      return;
    }
    pAStack6 = TypeInfo__System__Action<IWinningCondition>;
    pDStack5 = this_00;
    pAVar3 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar3 != (Action_1_IWinningCondition_ *)0x0) {
      *ppAVar4 = pAVar3;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack6 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = this_00;
      pAStack6 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack6 != (Action_1_IWinningCondition___Class *)0x0) {
        pDStack5 = (Delegate *)ppAVar4;
        func_?();
        return;
      }
    }
  }
  pDStack5 = this_00;
  pAStack6 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if ((bVar1 != 0) &&
     (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?();
    }
    else {
      pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
      ppAVar4 = &(pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,unaff_EBX,
                 MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_ESI == (Delegate *)0x0) {
        *ppAVar4 = (Action_1_IWinningCondition_ *)0x0;
        pDStack5 = (Delegate *)ppAVar4;
        pAStack6 = (Action_1_IWinningCondition___Class *)unaff_ESI;
        func_?();
        return;
      }
      pAStack6 = TypeInfo__System__Action<IWinningCondition>;
      pDStack5 = unaff_ESI;
      pAVar3 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar3 != (Action_1_IWinningCondition_ *)0x0) {
        *ppAVar4 = pAVar3;
        unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
        pAStack6 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAStack6 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack6 != (Action_1_IWinningCondition___Class *)0x0) {
          pDStack5 = (Delegate *)ppAVar4;
          func_?();
          return;
        }
      }
    }
    pDStack5 = unaff_ESI;
    pAStack6 = unaff_EDI;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
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
  pLVar1 = (this->fields).timeNotifications;
  if (pLVar1 == (List_1_System_Int32_ *)0x0) {
    return;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Contains
                    (pLVar1,10,MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar2 == 0) {
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
    func_?(pLVar1,10);
  }
  pLVar1 = (this->fields).timeNotifications;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (pLVar1,0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar2 == 0) {
      if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
      func_?();
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Contains
                        (pLVar1,0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar2 == 0) {
        if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
        func_?();
      }
      pLVar1 = (this->fields).timeNotifications;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__Contains
                          (pLVar1,300,
                           MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        if (bVar2 == 0) {
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    ppMVar2 = &(this->fields).roundCube;
    *ppMVar2 = pMVar1;
    func_?(ppMVar2,pMVar1);
    pGVar3 = (this->fields).mainGameObject;
    if (*ppMVar2 == (MVRoundCube *)0x0) {
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pTVar4 = (this->fields).roundTime;
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_text.method)
                    (pTVar4,::StringLiteral__,
                     (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
    else if (pGVar3 != (GameObject *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pGVar3 = (this->fields).mainGameObject;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
      }
      if (*ppMVar2 != (MVRoundCube *)0x0) {
        iVar6 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(*ppMVar2,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          iVar8 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (pMVar7,(MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar7 != (MVNetworkGame *)0x0) &&
             (pMVar9 = (pMVar7->fields)._NetworkGameStateListener_k__BackingField,
             pMVar9 != (MVNetworkGameStateListener *)0x0)) {
            iVar10 = ((pMVar9->fields).startTime - iVar8) + iVar6;
            iVar11 = 0;
            if (-1 < iVar10) {
              iVar11 = iVar10;
            }
            if (0 < iVar11) {
              arg0 = (Object *)func_?();
              pIVar12 = TypeInfo__System__Int32;
              arg1 = (Object *)func_?();
              pSVar13 = mscorlib.dll::System::String::String_Format_1
                                  (StringLiteral__0_00___1_00_,arg0,arg1,(MethodInfo *)0x0);
              if (pIVar12 == (Int32__Class *)0x0) goto code_?;
              pIVar14 = (pIVar12->_0).image;
              (*(code *)pIVar14[0x12].name)(pIVar12,pSVar13,pIVar14[0x12].nameNoExt);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  this_00 = (this->fields).roundCube;
  if (this_00 == (MVRoundCube *)0x0) {
    this_01 = (this->fields).mainGameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    iVar1 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(this_00,(MethodInfo *)0x0);
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
            pTVar7 = (this->fields).roundTime;
            puVar6 = (undefined *)0x0;
            pOVar8 = (Object *)func_?();
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral__0_00___1_00_,pOVar8,pOVar9,(MethodInfo *)0x0);
            if (pTVar7 == (Text *)0x0) goto code_?;
            (*(code *)(pTVar7->klass->vtable).set_text.method)();
          }
          else if (0 < (int)puVar6) {
            pOVar8 = (Object *)func_?();
            piVar10 = (int *)&stack0xfffffff4;
            pOVar9 = (Object *)func_?();
            mscorlib.dll::System::String::String_Format_1
                      (StringLiteral__0_00___1_00_,pOVar8,pOVar9,(MethodInfo *)0x0);
            if (piVar10 == (int *)0x0) goto code_?;
            puVar6 = &UNK_?;
            (**(code **)(*piVar10 + 0x318))();
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
          pLVar11 = (this->fields).timeNotifications;
          if (pLVar11 != (List_1_System_Int32_ *)0x0) {
            item = (int)((float)(int)puVar6 / _UNK_?) + 1;
            bVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__Contains
                              (pLVar11,item,
                               MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
            if (bVar12 == 0) {
              return;
            }
            pLVar11 = (this->fields).timeNotifications;
            if (pLVar11 != (List_1_System_Int32_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Remove
                        (pLVar11,item,
                         MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
              this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                        (this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              pOVar8 = (Object *)func_?();
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar2 != (MVNetworkGame *)0x0) {
                MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
                pOVar9 = (Object *)func_?();
                if (this_02 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar8,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  pOVar8 = (Object *)func_?();
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar8,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  WinningConditionNotificationManager::
                  WinningConditionNotificationManager_SendNotification
                            (NotificationType__Enum_HurryUp,
                             (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0)
                  ;
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

