
/* String FormatXP(Single) */

String * Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_FormatXP
                   (PlayerStatusPopup *this,float amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_F0);
    func_?(&StringLiteral_K);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_M);
    cRam_? = '\x01';
  }
  if (_UNK_? <= amount) {
    if (_UNK_? <= amount) {
      SStack_1.m_value = amount / _UNK_?;
      pSVar2 = mscorlib.dll::System::Single::Single_ToString_2
                         (&SStack_1,StringLiteral_F0,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,StringLiteral_M,(MethodInfo *)0x0);
      return pSVar2;
    }
    SStack_3.m_value = amount / _UNK_?;
    pSVar2 = mscorlib.dll::System::Single::Single_ToString_2
                       (&SStack_3,StringLiteral_F0,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,StringLiteral_K,(MethodInfo *)0x0)
    ;
    return pSVar2;
  }
  SStack_4.m_value = amount;
  pSVar5 = mscorlib.dll::System::Single::Single_ToString(&SStack_4,(MethodInfo *)0x0);
  pSVar2 = ::StringLiteral__;
  if (pSVar5 != (String *)0x0) {
    pSVar2 = pSVar5;
  }
  return pSVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_Initialize
               (PlayerStatusPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_XP___0_____1_);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this_03 = (SparselyPopulatedArrayFragment_1_System_Object_ *)
                DayNightCycle::DayNightCycle_get__skyParamsList
                          ((DayNightCycle *)this_02,(MethodInfo *)0x0);
      if (this_03 != (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0) {
        iVar1 = (this_03->fields)._freeCount;
        pTVar2 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                 WebCompletionSource_1_System_Object__get_Task
                           ((WebCompletionSource_1_System_Object_ *)this_03,(MethodInfo *)0x0);
        iVar1 = iVar1 - (int)pTVar2;
        iVar3 = mscorlib.dll::System::Threading::SparselyPopulatedArrayFragment`1[System::Object]::
                SparselyPopulatedArrayFragment_1_System_Object__get_Length
                          (this_03,(MethodInfo *)0x0);
        pTVar2 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                 WebCompletionSource_1_System_Object__get_Task
                           ((WebCompletionSource_1_System_Object_ *)this_03,(MethodInfo *)0x0);
        fVar4 = (float)(iVar3 - (int)pTVar2);
        arg0 = PlayerStatusPopup_FormatXP(this,(float)iVar1,(MethodInfo *)0x0);
        arg1 = PlayerStatusPopup_FormatXP(this,fVar4,(MethodInfo *)0x0);
        pTVar5 = (this->fields).xpProgress;
        mscorlib.dll::System::String::String_Format_1
                  (StringLiteral_XP___0_____1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          pPVar6 = (this->fields).progressBar;
          if (pPVar6 != (ProgressBarAndroid *)0x0) {
            fVar4 = (float)iVar1 / fVar4;
            if (fVar4 < 0.0) {
              fVar4 = 0.0;
            }
            else if (_UNK_? < fVar4) {
              fVar4 = _UNK_?;
            }
            (pPVar6->fields).progress = fVar4;
            this_00 = (pPVar6->fields).ProgressBar;
            if (this_00 != (Scrollbar *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                        (this_00,fVar4,(MethodInfo *)0x0);
              return;
            }
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


/* Void Update() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_Update
               (PlayerStatusPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PlayerStatusPopup____c___Update_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerStatusPopup____c);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  (this->fields).currentTime = fVar2;
  if ((this->fields).duration <= fVar2) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__PlayerStatusPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerStatusPopup____c);
    }
    callbackFunction = TypeInfo__PlayerStatusPopup____c->static_fields->__9__5_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__PlayerStatusPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PlayerStatusPopup____c);
      }
      object = TypeInfo__PlayerStatusPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__PlayerStatusPopup____c___Update_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerStatusPopup____c->static_fields->__9__5_0 = callbackFunction;
      func_?(&TypeInfo__PlayerStatusPopup____c->static_fields->__9__5_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* PlayerStatusPopup() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup__ctor
               (PlayerStatusPopup *this,MethodInfo *method)

{
  (this->fields).duration = 2.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

