
/* Void HandleTimeNotifications(Int32) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_HandleTimeNotifications
               (RoundTimer *this,int32_t timeLeft,MethodInfo *method)

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
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).timeNotifications;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    fVar2 = (float)timeLeft / _UNK_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (pLVar1,(RegexCharClass_SingleRange)(int)fVar2,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar3 == 0) {
      return;
    }
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (pLVar1,(RegexCharClass_SingleRange)(int)fVar2,
                 MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
      if ((this->fields).OnTimeNotificationSend ==
          (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
           *)0x0) {
        return;
      }
      uStack_4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pOVar5 = (Object *)func_?(TypeInfo__System__Byte);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
          pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,pOVar5,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_4 = (Dictionary_2_System_Object_System_Object___Class *)
                     CONCAT13(4,(undefined3)uStack_4);
          pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_4 + 3);
          pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,pOVar5,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pAVar7 = (this->fields).OnTimeNotificationSend;
          if (pAVar7 != (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code,0x17,this_00);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Initialize
               (RoundTimer *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  (this->fields).roundCube = roundCube;
  func_?(&(this->fields).roundCube,roundCube);
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (this_00 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).timeNotifications = this_00;
    func_?(&(this->fields).timeNotifications,this_00);
    RoundTimer_ResetTimeNotifications(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetOnRoundEnd() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetOnRoundEnd
               (RoundTimer *this,MethodInfo *method)

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


/* Void ResetTimeNotifications() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_ResetTimeNotifications
               (RoundTimer *this,MethodInfo *method)

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


/* Void Update() */

void Assembly-CSharp.dll::RoundTimer::RoundTimer_Update(RoundTimer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).roundCube;
  if (pWVar1 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       (pWVar1,
                        MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pWVar1 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).roundCube;
    if ((pWVar1 != (WorldObjectClientRef_1_System_Object_ *)0x0) &&
       (pMVar3 = (MVRoundCube *)
                 WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           (pWVar1,
                            MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__),
       pMVar3 != (MVRoundCube *)0x0)) {
      time = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar3,(MethodInfo *)0x0);
      pTVar4 = (this->fields).timeLeftText;
      pWVar1 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).roundCube;
      if ((pWVar1 != (WorldObjectClientRef_1_System_Object_ *)0x0) &&
         ((pMVar3 = (MVRoundCube *)
                    WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (pWVar1,
                               MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                              ), pMVar3 != (MVRoundCube *)0x0 &&
          (MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar3,time,(MethodInfo *)0x0),
          pTVar4 != (Text *)0x0)))) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)();
        RoundTimer_HandleTimeNotifications(this,time,(MethodInfo *)0x0);
        pWVar1 = (WorldObjectClientRef_1_System_Object_ *)(this->fields).roundCube;
        this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
        if ((pWVar1 != (WorldObjectClientRef_1_System_Object_ *)0x0) &&
           ((pMVar3 = (MVRoundCube *)
                      WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                (pWVar1,
                                 MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__
                                ), pMVar3 != (MVRoundCube *)0x0 &&
            (iVar5 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar3,(MethodInfo *)0x0),
            this_00 != (ProgressBarAndroid *)0x0)))) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (this_00,(float)time / (float)iVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

