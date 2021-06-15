
/* Int32 GetTimeLeft(MVRoundCube) */

int32_t Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_GetTimeLeft
                  (GameMeterRoundTime *this,MVRoundCube *roundCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (roundCube != (MVRoundCube *)0x0) {
    iVar1 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(roundCube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_00 = (Collection_1_VoxelHit_ *)
                  InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                            ((InventoryItemPreviewer *)pMVar2,(MethodInfo *)0x0);
        if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
          iVar5 = (int)pIVar4 + (iVar1 - iVar3);
          iVar1 = 0;
          if (-1 < iVar5) {
            iVar1 = iVar5;
          }
          return iVar1;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_HandleTimeNotifications
               (GameMeterRoundTime *this,int32_t timeLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  pLVar2 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
  if (pLVar2 != (List_1_UnityEngine_Color32_ *)0x0) {
    iVar3 = 1 - (int)((float)timeLeft / _UNK_?);
    item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
    item.rgba = iVar3;
    bVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar2,item,unaff_EDI);
    if (bVar4 == 0) {
      return;
    }
    pLVar2 = (List_1_UnityEngine_Color32_ *)(pGVar1->fields).timeNotifications;
    if (pLVar2 != (List_1_UnityEngine_Color32_ *)0x0) {
      item_00._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
      item_00.rgba = iVar3;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(pLVar2,item_00,in_stack_5);
      data = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (GameMeterRoundTime *)CONCAT13(0x11,this._0_3_);
      pSVar6 = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        iStack_7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                             (this_00,(MethodInfo *)0x0);
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&iStack_7);
        if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,pSVar6,pCVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          timeLeft = CONCAT13(4,(undefined3)timeLeft);
          pSVar6 = (String *)func_?(TypeInfo__System__Byte,(int)&timeLeft + 3);
          pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32,&stack0xfffffff4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,pSVar6,pCVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          WinningConditionNotificationManager::WinningConditionNotificationManager_SendNotification
                    (NotificationType__Enum_HurryUp,data,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Initialize
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).timeNotifications = (List_1_System_Int32_ *)this_00;
  GameMeterRoundTime_ResetTimeNotifications(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,unaff_EDI,MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAStack3 =
         (Action_1_IWinningCondition_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = (Action_1_IWinningCondition_ *)0x0;
    if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
    return;
  }
  func_?();
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        pAStack3 = extraout_ECX;
        pAStack4 = extraout_EDX;
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__GameMeterRoundTime__ResetOnRoundEnd_IWinningCondition_,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAStack3 =
           (Action_1_IWinningCondition_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar6 = (Action_1_IWinningCondition_ *)0x0;
      if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar6 = pAStack3;
        }
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
  if (pLVar1 == (List_1_UnityEngine_Color32_ *)0x0) {
    return;
  }
  item_02._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
  item_02.rgba = 10;
  bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__Contains(pLVar1,item_02,unaff_ESI);
  if (bVar2 == 0) {
    pLVar3 = (List_1_UIPushOption_ *)(this->fields).timeNotifications;
    if (pLVar3 == (List_1_UIPushOption_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (pLVar3,UIPushOption__Enum_HideAllExceptStackBottom|UIPushOption__Enum_HideAll,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
  if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
    pMStack4 = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
    item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
    item.rgba = 0x1e;
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar1,item,in_stack_5);
    if (bVar2 == 0) {
      in_stack_5 = (MethodInfo *)(this->fields).timeNotifications;
      if (in_stack_5 == (MethodInfo *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)in_stack_5,
                 UIPushOption__Enum_SuppressInput|UIPushOption__Enum_HideAllExceptStackBottom|
                 UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_HideAll,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
    pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
    if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
      pMStack4 = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
      item_00._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
      item_00.rgba = 0x3c;
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(pLVar1,item_00,in_stack_5);
      if (bVar2 == 0) {
        in_stack_5 = (MethodInfo *)(this->fields).timeNotifications;
        if (in_stack_5 == (MethodInfo *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)in_stack_5,0x3c,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
      if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
        pMStack4 = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
        item_01._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
        item_01.rgba = 300;
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                List_1_UnityEngine_Color32__Contains(pLVar1,item_01,in_stack_5);
        if (bVar2 == 0) {
          pLVar3 = (List_1_UIPushOption_ *)(this->fields).timeNotifications;
          if (pLVar3 == (List_1_UIPushOption_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (pLVar3,300,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
        return;
      }
    }
  }
code_?:
  pMStack4 = (MethodInfo *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_SetGameMeterVisibility
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                       (this_00,
                        MVRoundCube_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVRoundCube>__
                       );
    (this->fields).roundCube = pMVar1;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pMVar1 == (MVRoundCube *)0x0) {
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pTVar3 = (this->fields).roundTime;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)();
          return;
        }
      }
    }
    else if (pGVar2 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
      iVar5 = GameMeterRoundTime_GetTimeLeft(this,(this->fields).roundCube,(MethodInfo *)0x0);
      if (iVar5 < 1) {
        return;
      }
      pTVar3 = (this->fields).roundTime;
      arg0 = (Object *)func_?();
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::String::String_Format_1
                (StringLiteral__0_00___1_00_,arg0,arg1,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterRoundTime::GameMeterRoundTime_Update
               (GameMeterRoundTime *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  roundCube = (this->fields).roundCube;
  if (roundCube == (MVRoundCube *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    timeLeft = (Il2CppCodeGenModule *)
               GameMeterRoundTime_GetTimeLeft(this,roundCube,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase,timeLeft);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                               ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0),
       this_01 !=
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x2) {
        pTVar2 = (this->fields).roundTime;
        timeLeft = (Il2CppCodeGenModule *)0x0;
        func_?();
        pIVar3 = TypeInfo__System__Int32;
        pOVar1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__0_00___1_00_,(Object *)pIVar3,pOVar1,(MethodInfo *)0x0);
        if (pTVar2 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pSVar4,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
      }
      else if (0 < (int)timeLeft) {
        pIVar3 = TypeInfo__System__Int32;
        func_?();
        pOVar1 = (Object *)&stack0xfffffff0;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__0_00___1_00_,pOVar1,arg1,(MethodInfo *)0x0);
        if (pIVar3 == (Int32__Class *)0x0) goto code_?;
        pIVar5 = (pIVar3->_0).image;
        timeLeft = pIVar5[0x11].codeGenModule;
        (*(code *)pIVar5[0x11].nameToClassHashTable)(pIVar3,pSVar4);
      }
      GameMeterRoundTime_HandleTimeNotifications(this,(int32_t)timeLeft,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

