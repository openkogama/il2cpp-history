
/* Void Clear() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_Clear
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar1 = (this->fields).roundTimer;
    if (pRVar1 == (RoundTimer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pRVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).roundTimer = (RoundTimer *)0x0;
    func_?();
  }
  return;
}


/* Void CreateRoundTimer(WorldObjectClientRef`1[MVRoundCube]) */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_CreateRoundTimer
               (NoWinningCondition *this,WorldObjectClientRef_1_MVRoundCube_ *roundCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).roundTimerPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pRVar3 = (RoundTimer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pRVar1,pTVar2,0,
                        RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                       );
    (this->fields).roundTimer = pRVar3;
    ppRVar4 = &(this->fields).roundTimer;
    puVar5 = &UNK_?;
    func_?(ppRVar4,pRVar3);
    pRVar1 = (this->fields).roundTimer;
    if (pRVar1 != (RoundTimer *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar2,(MethodInfo *)0x0);
        pRVar1 = (this->fields).roundTimer;
        if (pRVar1 != (RoundTimer *)0x0) {
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__List<int>__List__,pRVar3);
            func_?(&TypeInfo__System__Collections__Generic__List<int>);
            cRam_? = '\x01';
          }
          (pRVar1->fields).roundCube = roundCube;
          func_?(&(pRVar1->fields).roundCube,roundCube,puVar5,ppRVar4);
          this_00 = (List_1_System_Int32_ *)
                    func_?(TypeInfo__System__Collections__Generic__List<int>);
          if (this_00 != (List_1_System_Int32_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)this_00,
                       MethodInfo__System__Collections__Generic__List<int>__List__);
            (pRVar1->fields).timeNotifications = this_00;
            func_?(&(pRVar1->fields).timeNotifications,this_00,puVar5,ppRVar4);
            RoundTimer::RoundTimer_ResetTimeNotifications(pRVar1,(MethodInfo *)0x0);
            return;
          }
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
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


/* Void RoundEndReset() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_RoundEndReset
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).roundTimer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((this->fields).roundTimer == (RoundTimer *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (*(int *)(in_stack_3 + 0x18) == 0) {
    return;
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                    (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                      (in_stack_3 + 0x18),(RegexCharClass_SingleRange)0xa,
                     MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
  if (bVar1 == 0) {
    if (*(int *)(in_stack_3 + 0x18) == 0) goto code_?;
    func_?();
  }
  if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
       (in_stack_3 + 0x18) !=
      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                      (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                        (in_stack_3 + 0x18),(RegexCharClass_SingleRange)0x1e,
                       MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    if (bVar1 == 0) {
      if (*(int *)(in_stack_3 + 0x18) == 0) goto code_?;
      func_?();
    }
    if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
         (in_stack_3 + 0x18) !=
        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                          (in_stack_3 + 0x18),(RegexCharClass_SingleRange)0x3c,
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar1 == 0) {
        if (*(int *)(in_stack_3 + 0x18) == 0) goto code_?;
        func_?();
      }
      if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
           (in_stack_3 + 0x18) !=
          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                          (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                            (in_stack_3 + 0x18),(RegexCharClass_SingleRange)0x12c,
                           MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        if (bVar1 == 0) {
          if (*(int *)(in_stack_3 + 0x18) == 0) goto code_?;
          func_?();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryInitializeRoundCube() */

void Assembly-CSharp.dll::NoWinningCondition::NoWinningCondition_TryInitializeRoundCube
               (NoWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    roundCube = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                          (this_00,
                           WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                          );
    if (roundCube == (WorldObjectClientRef_1_System_Object_ *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).roundTimerPrefab;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar1 = (RoundTimer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pRVar1,pTVar2,0,
                          RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                         );
      (this->fields).roundTimer = pRVar1;
      func_?();
      pRVar1 = (this->fields).roundTimer;
      if ((pRVar1 != (RoundTimer *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pRVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  (pTVar2,(MethodInfo *)0x0);
        pRVar1 = (this->fields).roundTimer;
        if (pRVar1 != (RoundTimer *)0x0) {
          RoundTimer::RoundTimer_Initialize
                    (pRVar1,(WorldObjectClientRef_1_MVRoundCube_ *)roundCube,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

