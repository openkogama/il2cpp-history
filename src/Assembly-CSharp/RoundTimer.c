
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
  pLVar1 = (this->fields).timeNotifications;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    fVar2 = (float)timeLeft / _UNK_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (pLVar1,(int)fVar2,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar3 == 0) {
      return;
    }
    pLVar1 = (this->fields).timeNotifications;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__Remove
                (pLVar1,(int)fVar2,MethodInfo__System__Collections__Generic__List<int>__Remove_int_)
      ;
      if ((this->fields).OnTimeNotificationSend ==
          (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
           *)0x0) {
        return;
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar4 = (Object *)func_?();
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
        if (this_00 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar4,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar4 = (Object *)func_?(TypeInfo__System__Byte);
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar4,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pAVar6 = (this->fields).OnTimeNotificationSend;
          if (pAVar6 != (Action_2_MV_Common_NotificationType_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) {
            (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,0x17,this_00);
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
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  (this->fields).roundCube = roundCube;
  func_?(&(this->fields).roundCube,roundCube);
  this_00 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).timeNotifications = this_00;
  func_?(&(this->fields).timeNotifications,this_00);
  RoundTimer_ResetTimeNotifications(this,(MethodInfo *)0x0);
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
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Contains
                    ((this->fields).timeNotifications,10,
                     MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).timeNotifications;
    if (pLVar2 == (List_1_System_Int32_ *)0x0) goto code_?;
    func_?(pLVar2,10);
  }
  pLVar2 = (this->fields).timeNotifications;
  if (pLVar2 != (List_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (pLVar2,0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar1 == 0) {
      if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
      func_?();
    }
    pLVar2 = (this->fields).timeNotifications;
    if (pLVar2 != (List_1_System_Int32_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Contains
                        (pLVar2,0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar1 == 0) {
        if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
        func_?();
      }
      pLVar2 = (this->fields).timeNotifications;
      if (pLVar2 != (List_1_System_Int32_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__Contains
                          (pLVar2,300,
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Contains
                    ((this->fields).timeNotifications,10,
                     MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).timeNotifications;
    if (pLVar2 == (List_1_System_Int32_ *)0x0) goto code_?;
    func_?(pLVar2,10);
  }
  pLVar2 = (this->fields).timeNotifications;
  if (pLVar2 != (List_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Contains
                      (pLVar2,0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar1 == 0) {
      if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
      func_?();
    }
    pLVar2 = (this->fields).timeNotifications;
    if (pLVar2 != (List_1_System_Int32_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Contains
                        (pLVar2,0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar1 == 0) {
        if ((this->fields).timeNotifications == (List_1_System_Int32_ *)0x0) goto code_?;
        func_?();
      }
      pLVar2 = (this->fields).timeNotifications;
      if (pLVar2 != (List_1_System_Int32_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__Contains
                          (pLVar2,300,
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
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

