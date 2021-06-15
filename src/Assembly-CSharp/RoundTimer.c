
/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_HandleTimeNotifications
               (RoundTimer *this,int32_t timeLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
  if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
    fVar2 = (float)timeLeft / _UNK_?;
    item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
    item.rgba = (int)fVar2;
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Contains(pLVar1,item,unaff_EDI);
    if (bVar3 == 0) {
      return;
    }
    pLVar1 = (List_1_UnityEngine_Color32_ *)(this->fields).timeNotifications;
    if (pLVar1 != (List_1_UnityEngine_Color32_ *)0x0) {
      item_00._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
      item_00.rgba = (int)fVar2;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove(pLVar1,item_00,in_stack_4);
      if ((this->fields).OnTimeNotificationSend ==
          (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
           *)0x0) {
        return;
      }
      this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                 *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar5 = (String *)func_?();
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_02,(MethodInfo *)0x0);
        pCVar6 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32)
        ;
        if (this_01 !=
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (this_01,pSVar5,pCVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar5 = (String *)func_?(TypeInfo__System__Byte);
          pCVar6 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32,&stack0xfffffff0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (this_01,pSVar5,pCVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_00 = (Action_2_Int32_Object_ *)(this->fields).OnTimeNotificationSend;
          if (this_00 != (Action_2_Int32_Object_ *)0x0) {
            System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                      (this_00,0x17,(Object *)this_01,
                       MethodInfo__System__Action<MV::Common::NotificationType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Initialize
               (RoundTimer *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).roundCube = roundCube;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).timeNotifications = (List_1_System_Int32_ *)this_00;
  RoundTimer_ResetTimeNotifications(this,(MethodInfo *)0x0);
  return;
}


/* Void ResetOnRoundEnd() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetOnRoundEnd
               (RoundTimer *this,MethodInfo *method)

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


/* Void ResetTimeNotifications() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetTimeNotifications
               (RoundTimer *this,MethodInfo *method)

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


/* Void Update() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Update(RoundTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).roundCube;
  if (pWVar1 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) {
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       (pWVar1,
                        MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    if (pMVar2 == (MVRoundCube *)0x0) {
      return;
    }
    pWVar1 = (this->fields).roundCube;
    if ((pWVar1 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
       (pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           (pWVar1,
                            MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__),
       pMVar2 != (MVRoundCube *)0x0)) {
      time = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar2,(MethodInfo *)0x0);
      pTVar3 = (this->fields).timeLeftText;
      pWVar1 = (this->fields).roundCube;
      if ((pWVar1 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
         ((pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                    WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                              (pWVar1,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              ), pMVar2 != (MVRoundCube *)0x0 &&
          (MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar2,time,(MethodInfo *)0x0),
          pTVar3 != (Text *)0x0)))) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)();
        RoundTimer_HandleTimeNotifications(this,time,(MethodInfo *)0x0);
        pWVar1 = (this->fields).roundCube;
        pPVar4 = (this->fields).progressBar;
        if ((pWVar1 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
           ((pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                      WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                (pWVar1,
                                 MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                                ), pMVar2 != (MVRoundCube *)0x0 &&
            (iVar5 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar2,(MethodInfo *)0x0),
            pPVar4 != (ProgressBar *)0x0)))) {
          this = (RoundTimer *)((float)time / (float)iVar5);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            this = (RoundTimer *)&UNK_?;
            func_?();
          }
          value = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                            ((float)this,(MethodInfo *)0x0);
          this_00 = (pPVar4->fields).progressBar;
          (pPVar4->fields).progress = value;
          if (this_00 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

