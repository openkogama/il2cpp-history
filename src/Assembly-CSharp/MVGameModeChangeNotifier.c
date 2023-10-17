
/* Void AddUpdateObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGameStateControllerSubscriber);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).UpdateList;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)obj,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
              );
    MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
    if (obj != (IGameStateControllerSubscriber *)0x0) {
      func_?(0,TypeInfo__IGameStateControllerSubscriber);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* UpdateCondition GetPresentState() */

UpdateCondition__Enum
Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
          (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      uVar3 = func_?(&stack0xfffffffc);
      func_?(uVar3);
      pcVar4 = (code *)swi(3);
      UVar5 = (*pcVar4)();
      return UVar5;
    }
    bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
    if (bVar6 != 0) {
      return UpdateCondition__Enum_EDITOR_PLAYMODE;
    }
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    return UpdateCondition__Enum_INGAME - (MVar1 != MVGameMode__Enum_Play);
  }
  return UpdateCondition__Enum_EDITOR;
}


/* Void RemoveObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                   );
    func_?(&TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    func_?(&
                    MethodInfo__MVGameModeChangeNotifier____c__DisplayClass4_0___RemoveObject_b__0_IGameStateControllerSubscriber_
                   );
    func_?(&TypeInfo__MVGameModeChangeNotifier____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVGameModeChangeNotifier____c__DisplayClass4_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)obj;
    func_?(value + 1,obj);
    this_00 = (List_1_System_Object_ *)(this->fields).UpdateList;
    this_01 = (Predicate_1_Object_ *)
              func_?(TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    if (this_01 != (Predicate_1_Object_ *)0x0) {
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_01,value,
                 MethodInfo__MVGameModeChangeNotifier____c__DisplayClass4_0___RemoveObject_b__0_IGameStateControllerSubscriber_
                 ,(MethodInfo *)0x0);
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAll
                  (this_00,this_01,
                   MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_UpdateControllerUpdate
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__get_Current__
                   );
    func_?(&TypeInfo__IGameStateControllerSubscriber);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                   );
    func_?(&TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    func_?(&
                    MethodInfo__MVGameModeChangeNotifier____c___UpdateControllerUpdate_b__6_0_IGameStateControllerSubscriber_
                   );
    func_?(&TypeInfo__MVGameModeChangeNotifier____c);
    cRam_? = '\x01';
  }
  UVar4 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
  this_00 = (List_1_System_Object_ *)(this->fields).UpdateList;
  if ((TypeInfo__MVGameModeChangeNotifier____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_02 = TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9__6_0;
  if (this_02 == (Predicate_1_IGameStateControllerSubscriber_ *)0x0) {
    if ((TypeInfo__MVGameModeChangeNotifier____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9;
    this_02 = (Predicate_1_IGameStateControllerSubscriber_ *)func_?();
    if (this_02 == (Predicate_1_IGameStateControllerSubscriber_ *)0x0) goto code_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_02,(Object *)object,
               MethodInfo__MVGameModeChangeNotifier____c___UpdateControllerUpdate_b__6_0_IGameStateControllerSubscriber_
               ,(MethodInfo *)0x0);
    TypeInfo__MVGameModeChangeNotifier____c->static_fields->__9__6_0 = this_02;
    func_?();
  }
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAll
              (this_00,(Predicate_1_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
              );
    if (UVar4 != (this->fields)._currentState) {
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).UpdateList;
      if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffd8,this_01,
                 MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        this_03 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0;
        bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (this_03,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__MoveNext__
                          );
        if (bVar5 == 0) break;
        if (this_03 != (List_1_T_Enumerator_System_Object_ *)0x0) {
          func_?();
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffc0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__Dispose__
                 ,in_stack_6);
      (this->fields)._currentState = UVar4;
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVGameModeChangeNotifier() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier__ctor
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (this->fields)._currentState = 1;
  this_00 = (List_1_IGameStateControllerSubscriber_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>
                           );
  if (this_00 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
              );
    method_00 = (MethodInfo *)&(this->fields).UpdateList;
    (this->fields).UpdateList = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    UVar1 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
    (this->fields)._currentState = UVar1;
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

