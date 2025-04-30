
/* Void Clear() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Clear
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).captureCamera;
    if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pCVar4 = (this->fields).group;
  if (pCVar4 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar4,0.0,(MethodInfo *)0x0);
    pCVar4 = (this->fields).group;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar4,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      ppDVar5 = &(this->fields).debriefing;
      x = *ppDVar5;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*ppDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)*ppDVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        *ppDVar5 = (DebriefingWinnerGUI *)0x0;
        func_?();
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* String FormatCount(GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_FormatCount
                   (GameStatCounterType__Enum statType,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral__0_00___1_00_);
    cRam_? = '\x01';
  }
  milliseconds = count;
  TStack_1._ticks = 0;
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&count,(MethodInfo *)0x0);
    return pSVar2;
  default:
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__TimeSpan);
    }
    mscorlib.dll::System::TimeSpan::TimeSpan__ctor_3
              (&TStack_1,0,0,0,0,milliseconds,(MethodInfo *)0x0);
    statType = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&TStack_1,(MethodInfo *)0x0);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&statType);
    iStack_3 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Seconds(&TStack_1,(MethodInfo *)0x0);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_00___1_00_,arg0,arg1,(MethodInfo *)0x0);
    return pSVar2;
  }
}


/* Void GenerateDebriefing(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_GenerateDebriefing
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IWinningConditionBriefing);
    cRam_? = '\x01';
  }
  iVar1 = func_?(winningCondition,TypeInfo__IWinningConditionBriefing);
  pIVar2 = TypeInfo__IWinningConditionBriefing;
  if (iVar1 == 0) {
    return;
  }
  if (winningCondition != (IWinningCondition *)0x0) {
    iVar1 = func_?(winningCondition,TypeInfo__IWinningConditionBriefing);
    pIVar3 = TypeInfo__IWinningConditionBriefing;
    if (iVar1 != 0) {
      piVar4 = (int *)func_?(winningCondition,TypeInfo__IWinningConditionBriefing);
      unaff_EBX = pIVar3;
      if (piVar4 != (int *)0x0) {
        uVar5 = 0;
        uVar6 = *(ushort *)(*piVar4 + 0xb6);
        if (uVar6 != 0) {
          iVar1 = *(int *)(*piVar4 + 0x58);
          do {
            if (*(IWinningConditionBriefing__Class **)(iVar1 + (uint)uVar5 * 8) ==
                TypeInfo__IWinningConditionBriefing) {
              iVar1 = *(int *)(iVar1 + 4 + (uint)uVar5 * 8) + 0x19;
              (**(code **)(*piVar4 + iVar1 * 8))
                        (piVar4,this,*(undefined4 *)(*piVar4 + 4 + iVar1 * 8));
              return;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        puVar7 = (undefined4 *)func_?(piVar4,TypeInfo__IWinningConditionBriefing,1);
        (*(code *)*puVar7)(piVar4,this,puVar7[1]);
        return;
      }
      goto code_?;
    }
    func_?(winningCondition,pIVar2);
  }
  func_?();
code_?:
  func_?(winningCondition,unaff_EBX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* List`1[ScoreActorEntry] GetWinningActorsFromScoreActorEntries(List`1[ScoreActorEntry],
   GameStatCounterType) */

List_1_ScoreActorEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
          (WinningConditionDebriefing *this,List_1_ScoreActorEntry_ *scoreActorEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  index = 0;
  if (scoreActorEntries == (List_1_ScoreActorEntry_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_ScoreActorEntry_ *)(*pcVar1)();
    return pLVar2;
  }
code_?:
  do {
    if ((scoreActorEntries->fields)._size <= index) {
      return (List_1_ScoreActorEntry_ *)this_00;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if ((this_00->fields)._size < 1) {
code_?:
      in_stack_3 =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      scoreActorEntries,(int32_t)in_stack_3,in_stack_4);
      in_stack_4 =
           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)in_stack_3,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                );
    }
    else {
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         scoreActorEntries,index,
                         MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                        );
      if ((RVar5 == (RegexCharClass_SingleRange)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      bVar6 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (0,*(int32_t *)((int)RVar5 + 0xc),GameStatCounterType__Enum_None,
                         (MethodInfo *)0x0);
      if (bVar6 != 0) {
        func_?();
        RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreActorEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RVar5,
                   MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                  );
        index = index + 1;
        goto code_?;
      }
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                        );
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar7 = *(int *)((int)RVar5 + 0xc);
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         scoreActorEntries,index,
                         MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                        );
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (iVar7 == *(int *)((int)RVar5 + 0xc)) goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* List`1[ScoreTeamEntry] GetWinningTeamsFromScoreTeamEntries(List`1[ScoreTeamEntry],
   GameStatCounterType) */

List_1_ScoreTeamEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
          (WinningConditionDebriefing *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  index = 0;
  if (scoreTeamEntries == (List_1_ScoreTeamEntry_ *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_ScoreTeamEntry_ *)(*pcVar1)();
    return pLVar2;
  }
code_?:
  do {
    if ((scoreTeamEntries->fields)._size <= index) {
      return (List_1_ScoreTeamEntry_ *)this_00;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if ((this_00->fields)._size < 1) {
code_?:
      in_stack_3 =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      scoreTeamEntries,(int32_t)in_stack_3,in_stack_4);
      in_stack_4 =
           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)in_stack_3,
                 MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                );
    }
    else {
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         scoreTeamEntries,index,
                         MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                        );
      if ((RVar5 == (RegexCharClass_SingleRange)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      bVar6 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (0,*(int32_t *)((int)RVar5 + 0xc),GameStatCounterType__Enum_None,
                         (MethodInfo *)0x0);
      if (bVar6 != 0) {
        func_?();
        RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreTeamEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RVar5,
                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                  );
        index = index + 1;
        goto code_?;
      }
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                        );
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      iVar7 = *(int *)((int)RVar5 + 0xc);
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         scoreTeamEntries,index,
                         MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                        );
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (iVar7 == *(int *)((int)RVar5 + 0xc)) goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_OnDisable
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).captureCamera;
    if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pCVar4 = (this->fields).group;
  if (pCVar4 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar4,0.0,(MethodInfo *)0x0);
    pCVar4 = (this->fields).group;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar4,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      ppDVar5 = &(this->fields).debriefing;
      x = *ppDVar5;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*ppDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)*ppDVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        *ppDVar5 = (DebriefingWinnerGUI *)0x0;
        func_?();
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnWinningConditionReceived(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_OnWinningConditionReceived
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__WinningConditionDebriefing____c___OnWinningConditionReceived_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__WinningConditionDebriefing____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__WinningConditionDebriefing____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WinningConditionDebriefing____c);
  }
  callbackFunction = TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__WinningConditionDebriefing____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WinningConditionDebriefing____c);
    }
    object = TypeInfo__WinningConditionDebriefing____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__WinningConditionDebriefing____c___OnWinningConditionReceived_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0 = callbackFunction;
    func_?(&TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    winningCondition = (IWinningCondition *)&UNK_?;
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Play) {
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 != MVGameMode__Enum_Edit) {
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
      pIVar4 = pIVar3->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI
             ) {
            ppMVar7 = &(&(pIVar3->klass->vtable).get_IsInPlayInEditMode)
                       [pIVar4->interfaceOffsets[uVar5].offset].method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      winningCondition = (IWinningCondition *)&UNK_?;
      ppMVar7 = (MethodInfo **)func_?();
code_?:
      cVar8 = (*(code *)*ppMVar7)();
      if (cVar8 == '\0') {
        return;
      }
    }
    bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if (bVar1 != 0) {
      pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (((pSVar9 == (SpawnRoleDataMediator *)0x0) ||
          (winningCondition = (IWinningCondition *)(pSVar9->fields).reviveState,
          (WebCompletionSource_1_System_Object_ *)winningCondition ==
          (WebCompletionSource_1_System_Object_ *)0x0)) ||
         (this_00 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                    WebCompletionSource_1_System_Object__get_Task
                              ((WebCompletionSource_1_System_Object_ *)winningCondition,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                              ), this_00 == (Task *)0x0)) goto code_?;
      ReviveState::ReviveState_ResetSafePostions((ReviveState *)this_00,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar10 = func_?();
    if (iVar10 != 0) {
      if (winningCondition != (IWinningCondition *)0x0) {
        iVar10 = func_?();
        if ((iVar10 != 0) && (piVar11 = (int *)func_?(), piVar11 != (int *)0x0)) {
          uVar5 = 0;
          uVar6 = *(ushort *)(*piVar11 + 0xb6);
          if (uVar6 != 0) {
            iVar10 = *(int *)(*piVar11 + 0x58);
            do {
              if (*(IWinningConditionBriefing__Class **)(iVar10 + (uint)uVar5 * 8) ==
                  TypeInfo__IWinningConditionBriefing) {
                (**(code **)(*piVar11 + (*(int *)(iVar10 + 4 + (uint)uVar5 * 8) + 0x19) * 8))();
                return;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
          puVar12 = (undefined4 *)func_?();
          (*(code *)*puVar12)();
          return;
        }
        func_?();
      }
code_?:
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  return;
}


/* Void RenderPlayerToRenderTexture(List`1[System.Int32]) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_RenderPlayerToRenderTexture
               (WinningConditionDebriefing *this,List_1_System_Int32_ *actorNrs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    func_?(&
                    AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Styles);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Winning_player_can_t_be_found__P);
    func_?(&StringLiteral__and_);
    func_?(&StringLiteral__between_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_It_s_a_tie);
    cRam_? = '\x01';
  }
  this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  iVar1 = 0;
  if (actorNrs != (List_1_System_Int32_ *)0x0) {
    for (; iVar1 < (actorNrs->fields)._size; iVar1 = iVar1 + 1) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
      pMVar3 = (pMVar2->fields).playerContainer;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         actorNrs,iVar1,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
      bVar5 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        (pMVar3,(int32_t)RVar4,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = (pMVar2->fields).playerContainer;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           actorNrs,iVar1,
                           MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
        this = (WinningConditionDebriefing *)&UNK_?;
        item = MVPlayerContainer::MVPlayerContainer_get_Item
                         (pMVar3,(int32_t)RVar4,(MethodInfo *)0x0);
        if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_03,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
      }
    }
    iVar1 = 0;
    if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      for (; iVar1 < (this_03->fields)._size; iVar1 = iVar1 + 1) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,iVar1,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        if (RVar4 == (RegexCharClass_SingleRange)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_03,iVar1,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
          iVar1 = iVar1 + -1;
        }
      }
      iVar1 = (this_03->fields)._size;
      if (iVar1 < 1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Winning_player_can_t_be_found__P,(MethodInfo *)0x0);
        return;
      }
      if (iVar1 == 1) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,0,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0x3c) == 0))
        goto code_?;
        pSVar6 = *(String **)(*(int *)((int)RVar4 + 0x3c) + 0xc);
      }
      else {
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (::StringLiteral__,StringLiteral_It_s_a_tie,(MethodInfo *)0x0);
        if ((this_03->fields)._size < 3) {
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar6,StringLiteral__between_,(MethodInfo *)0x0);
          for (iVar1 = 0; iVar1 < (this_03->fields)._size; iVar1 = iVar1 + 1) {
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_03,iVar1,
                               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                              );
            if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0x3c) == 0))
            goto code_?;
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (pSVar6,*(String **)(*(int *)((int)RVar4 + 0x3c) + 0xc),
                                (MethodInfo *)0x0);
            if (iVar1 < (this_03->fields)._size + -1) {
              this = (WinningConditionDebriefing *)StringLiteral__and_;
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (pSVar6,StringLiteral__and_,(MethodInfo *)0x0);
            }
          }
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar6,::StringLiteral__,(MethodInfo *)0x0);
      }
      pDVar7 = (this->fields).debriefing;
      if ((pDVar7 != (DebriefingWinnerGUI *)0x0) &&
         (pTVar8 = (pDVar7->fields).winnerName, pTVar8 != (Text *)0x0)) {
        (*(code *)(pTVar8->klass->vtable).set_text.method)
                  (pTVar8,pSVar6,(pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        pAVar9 = (this->fields).captureCamera;
        ppAVar10 = &(this->fields).captureCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pAVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          if (*ppAVar10 == (AvatarCapture *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)*ppAVar10,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        pAVar9 = (this->fields).captureCameraPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pAVar9 = (AvatarCapture *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pAVar9,
                             AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                            );
        *ppAVar10 = pAVar9;
        func_?(ppAVar10,pAVar9);
        if (*ppAVar10 != (AvatarCapture *)0x0) {
          AvatarCapture::AvatarCapture_CapturePlayer
                    (*ppAVar10,(List_1_MVPlayer_ *)this_03,(MethodInfo *)0x0);
          pDVar7 = (this->fields).debriefing;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pCVar11 = Styles::Styles_GetTeamColor
                              ((Color *)&stack0xffffffec,MVTeam__Enum_Blue,0,(MethodInfo *)0x0);
          fVar12 = pCVar11->r;
          fVar13 = pCVar11->g;
          fVar14 = pCVar11->b;
          fVar15 = pCVar11->a;
          if ((*ppAVar10 != (AvatarCapture *)0x0) &&
             (this_00 = ((*ppAVar10)->fields).renderCam, this_00 != (Camera *)0x0)) {
            value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              (this_00,(MethodInfo *)0x0);
            if (pDVar7 != (DebriefingWinnerGUI *)0x0) {
              this_01 = (pDVar7->fields).backgroundImage;
              if (this_01 != (ImageAnimator *)0x0) {
                start.g = fVar13;
                start.r = fVar12;
                start.b = fVar14;
                start.a = fVar15;
                end.g = fVar13 * _UNK_?;
                end.r = fVar12 * _UNK_?;
                end.b = fVar14 * _UNK_?;
                end.a = 1.0;
                ImageAnimator::ImageAnimator_SetColor(this_01,start,end,(MethodInfo *)0x0);
                this_02 = (pDVar7->fields).winnerImage;
                if (this_02 != (RawImage *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_02,(Texture *)value,(MethodInfo *)0x0);
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ResetScoreWhenDone() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ResetScoreWhenDone
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
              (this_00,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupDebriefing(WinningConditionType, HighScores, Boolean) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefing
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               HighScores *highScores,bool teamMode,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 == (GameObject *)0x0) goto code_?;
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    (this_02,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (highScores == (HighScores *)0x0) goto code_?;
    if (teamMode == 0) {
      scoreActorEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateActorScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingPlayer
                (this,winType,scoreActorEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    else {
      scoreTeamEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingTeam
                (this,winType,scoreTeamEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    this_00 = (this->fields).group;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
              (this_00,1,(MethodInfo *)0x0);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_01 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_01 != (WinningConditionManager *)0x0)) {
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
              (this_01,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupDebriefingNoWinner() */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingNoWinner
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                   );
    func_?(&
                    DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Styles);
    func_?(&StringLiteral_Time_s_Up_);
    cRam_? = '\x01';
  }
  WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
  ppAVar1 = &(this->fields).captureCamera;
  pAVar2 = *ppAVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*ppAVar1 == (AvatarCapture *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)*ppAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pAVar2 = (this->fields).captureCameraPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar2 = (AvatarCapture *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar2,
                      AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                     );
  *ppAVar1 = pAVar2;
  func_?();
  if (*ppAVar1 != (AvatarCapture *)0x0) {
    AvatarCapture::AvatarCapture_CaptureAllPlayersInGame(*ppAVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).group;
    pDVar5 = (this->fields).noWinnerPrefab;
    if (this_00 != (CanvasGroup *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar4,(MethodInfo *)0x0);
        pDVar5 = (DebriefingWinnerGUI *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pDVar5,parent,0,
                            DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                           );
        ppDVar6 = &(this->fields).debriefing;
        *ppDVar6 = pDVar5;
        func_?();
        pDVar5 = *ppDVar6;
        TM::TM__(StringLiteral_Time_s_Up_,(MethodInfo *)0x0);
        if ((pDVar5 != (DebriefingWinnerGUI *)0x0) &&
           (pTVar7 = (pDVar5->fields).winnerName, pTVar7 != (Text *)0x0)) {
          (*(code *)(pTVar7->klass->vtable).set_text.method)(pTVar7);
          pDVar5 = *ppDVar6;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pCVar8 = Styles::Styles_GetColor
                             ((Color *)&stack0xffffffe8,ColorStyle__Enum_DarkNavyBlue,
                              (MethodInfo *)0x0);
          fVar9 = pCVar8->r;
          fVar10 = pCVar8->g;
          fVar11 = pCVar8->b;
          fVar12 = pCVar8->a;
          if ((*ppAVar1 != (AvatarCapture *)0x0) &&
             (this_01 = ((*ppAVar1)->fields).renderCam, this_01 != (Camera *)0x0)) {
            value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              (this_01,(MethodInfo *)0x0);
            if (pDVar5 != (DebriefingWinnerGUI *)0x0) {
              this_02 = (pDVar5->fields).backgroundImage;
              if (this_02 != (ImageAnimator *)0x0) {
                start.g = fVar10;
                start.r = fVar9;
                start.b = fVar11;
                start.a = fVar12;
                end.g = fVar10 * _UNK_?;
                end.r = fVar9 * _UNK_?;
                end.b = fVar11 * _UNK_?;
                end.a = 1.0;
                ImageAnimator::ImageAnimator_SetColor(this_02,start,end,(MethodInfo *)0x0);
                this_03 = (pDVar5->fields).winnerImage;
                if (this_03 != (RawImage *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_03,(Texture *)value,(MethodInfo *)0x0);
                  if (*ppDVar6 != (DebriefingWinnerGUI *)0x0) {
                    DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                              (*ppDVar6,WinningConditionType__Enum_None,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    method_00 = TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16
                    ;
                    value_00 = (Object *)func_?();
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                    value_00[1].klass = (Object__Class *)0x0;
                    value_00[2].klass = (Object__Class *)this;
                    func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this,(IEnumerator *)value_00,(MethodInfo *)0x0);
                    return;
                  }
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


/* Void SetupDebriefingPlayer(WinningConditionType, List`1[ScoreActorEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingPlayer
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreActorEntry_ *scoreActorEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    in_stack_6 = &MethodInfo__System__Collections__Generic__List<int>__List__;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&
                    DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentValue = (Object *)0x0;
  if (scoreActorEntries != (List_1_ScoreActorEntry_ *)0x0) {
    if ((scoreActorEntries->fields)._size == 0) {
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pDStack_8 = (this->fields).playerWinPrefab;
    this_00 = (this->fields).group;
    if ((this_00 != (CanvasGroup *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0))
    {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_02,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar9 = (DebriefingWinnerGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pDStack_8,parent,0,
                           DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                          );
      (this->fields).debriefing = pDVar9;
      func_?();
      this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
                          (this,scoreActorEntries,counterType,(MethodInfo *)0x0);
      actorNrs = (List_1_System_Int32_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)actorNrs,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      iVar10 = 0;
      if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        while (iVar10 < (this_03->fields)._size) {
          RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_03,iVar10,
                              MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                             );
          pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if ((RVar11 == (RegexCharClass_SingleRange)0x0) ||
             (pDStack_8 = *(DebriefingWinnerGUI **)((int)RVar11 + 8),
             actorNrs == (List_1_System_Int32_ *)0x0)) goto code_?;
          piVar13 = &(actorNrs->fields)._version;
          *piVar13 = *piVar13 + 1;
          pIVar14 = (actorNrs->fields)._items;
          uVar15 = (actorNrs->fields)._size;
          if (pIVar14 == (Int32__Array *)0x0) goto code_?;
          if (uVar15 < pIVar14->max_length) {
            (actorNrs->fields)._size = uVar15 + 1;
            if (pIVar14->max_length <= uVar15) {
              func_?();
              goto code_?;
            }
            iVar10 = iVar10 + 1;
            pIVar14->vector[uVar15] = (int32_t)pDStack_8;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__AddWithResize
                      (actorNrs,(int32_t)pDStack_8,pMVar12->klass->rgctx_data[0xe].method);
            iVar10 = iVar10 + 1;
          }
        }
        WinningConditionDebriefing_RenderPlayerToRenderTexture(this,actorNrs,(MethodInfo *)0x0);
        RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_03,0,
                            MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                           );
        if (RVar11 != (RegexCharClass_SingleRange)0x0) {
          pDVar9 = *(DebriefingWinnerGUI **)((int)RVar11 + 0xc);
          pDStack_8 = pDVar9;
          if (pDVar9 == (DebriefingWinnerGUI *)0x0) {
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar16 == (MVNetworkGame *)0x0) ||
                (this_01 = (pMVar16->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
               || (this_04 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                              *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                          (this_01,(MethodInfo *)0x0),
                  this_04 ==
                  (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0)) goto code_?;
            pDVar17 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)(auStack_18 + 4),this_04,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                );
            DStack_7._dictionary =
                 (Dictionary_2_System_UInt32_System_Object_ *)pDVar17->_dictionary;
            DStack_7._index = pDVar17->_index;
            DStack_7._version = pDVar17->_version;
            DStack_7._currentValue = pDVar17->_currentValue;
            uStack_1 = 1;
            pSStack_19 = (String *)0x0;
            pDStack_20 = &DStack_7;
            while (bVar21 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                           ::UInt32,System::Object]::
                           Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                     (&DStack_7,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                     ), bVar21 != 0) {
              pMStack_22 = (MVPlayer *)DStack_7._currentValue;
              if ((MVPlayer *)DStack_7._currentValue == (MVPlayer *)0x0) goto code_?;
              iStack_23 = ((MVPlayer__Fields *)((int)DStack_7._currentValue + 8))->
                          _ActorNr_k__BackingField;
              RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (this_03,0,
                                  MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                                 );
              if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
              if ((iStack_23 == *(int *)((int)RVar11 + 8)) &&
                 (in_stack_6 = (MethodInfo **)pMStack_22,
                 pDVar24 = (DebriefingWinnerGUI *)
                           MVPlayer::MVPlayer_GetGameStat(pMStack_22,counterType,(MethodInfo *)0x0),
                 (int)pDVar9 < (int)pDVar24)) {
                pDVar9 = pDVar24;
                pDStack_8 = pDVar24;
              }
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                       ,(MethodInfo *)in_stack_6);
            uStack_1 = 0xffffffff;
          }
          a = ::StringLiteral__;
          pSVar25 = WinningConditionDebriefing_FormatCount
                              (counterType,(int32_t)pDVar9,(MethodInfo *)0x0);
          pDVar9 = (this->fields).debriefing;
          if ((pDVar9 != (DebriefingWinnerGUI *)0x0) &&
             (pTVar26 = (pDVar9->fields).winValue, pTVar26 != (Text *)0x0)) {
            (*(code *)(pTVar26->klass->vtable).set_text.method)
                      (pTVar26,pSVar25,
                       (pTVar26->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pDVar9 = (this->fields).debriefing;
            if (pDVar9 != (DebriefingWinnerGUI *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                               );
                func_?(&
                                MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                               );
                func_?(&::StringLiteral__);
                cRam_? = '\x01';
              }
              bVar21 = mscorlib.dll::System::String::String_op_Equality
                                (a,::StringLiteral__,(MethodInfo *)0x0);
              if (bVar21 == 0) {
                iVar10 = 0;
                pLVar27 = (pDVar9->fields).winConImages;
                while (pLVar27 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
                  if ((pLVar27->fields)._size <= iVar10) goto code_?;
                  if (pLVar27 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                  pIVar28 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::
                            Expressions::Interpreter::InstructionList+DebugView+InstructionView]::
                            List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                                      ((InstructionList_DebugView_InstructionView *)auStack_18,
                                       (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                                        *)pLVar27,iVar10,
                                       MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                                      );
                  pDStack_20 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)pIVar28->_instruction;
                  if (pIVar28->_index == winType) {
                    if ((pDVar9->fields).winConImages ==
                        (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                    iVar29 = func_?();
                    if (*(GameObject **)(iVar29 + 0x10) == (GameObject *)0x0) break;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (*(GameObject **)(iVar29 + 0x10),1,(MethodInfo *)0x0);
                    pLVar27 = (pDVar9->fields).winConImages;
                    if (pLVar27 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                    iVar29 = func_?(&stack0xffffff90,pLVar27,iVar10,
                                             MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                                            );
                    if (*(int *)(iVar29 + 0xc) == 0) break;
                    func_?(0x4b,*(int *)(iVar29 + 0xc),a);
                  }
                  iVar10 = iVar10 + 1;
                  pLVar27 = (pDVar9->fields).winConImages;
                }
              }
              else {
code_?:
                pDVar9 = (this->fields).debriefing;
                if (pDVar9 != (DebriefingWinnerGUI *)0x0) {
                  DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                            (pDVar9,winType,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  method_00 = TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16;
                  value = (Object *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                  value[1].klass = (Object__Class *)0x0;
                  value[2].klass = (Object__Class *)this;
                  func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_Auto
                            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
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
  uVar30 = func_?();
  func_?(uVar30);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void SetupDebriefingTeam(WinningConditionType, List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefingTeam
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreTeamEntry_ *scoreTeamEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    in_stack_6 = &MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
    ;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    func_?(&
                    AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                   );
    func_?(&
                    DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__Styles);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__and_);
    func_?(&StringLiteral__between_);
    func_?(&StringLiteral_Winner__);
    func_?(&StringLiteral_It_s_a_tie);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar7 = DStack_8._dictionary;
  fVar9 = (float)DStack_8._index;
  fVar10 = (float)DStack_8._version;
  if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
    if ((scoreTeamEntries->fields)._size == 0) {
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pMStack_11 = (MVPlayer *)(this->fields).teamWinPrefab;
    this_00 = (this->fields).group;
    pDVar7 = DStack_8._dictionary;
    fVar9 = (float)DStack_8._index;
    fVar10 = (float)DStack_8._version;
    if (this_00 != (CanvasGroup *)0x0) {
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      pDVar7 = DStack_8._dictionary;
      fVar9 = (float)DStack_8._index;
      fVar10 = (float)DStack_8._version;
      if (pGVar12 != (GameObject *)0x0) {
        parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar12,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pDVar13 = (DebriefingWinnerGUI *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pMStack_11,parent,0,
                             DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                            );
        pMStack_11 = (MVPlayer *)&(this->fields).debriefing;
        *(DebriefingWinnerGUI **)pMStack_11 = pDVar13;
        func_?();
        this_06 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
                            (this,scoreTeamEntries,counterType,(MethodInfo *)0x0);
        pDVar7 = DStack_8._dictionary;
        fVar9 = (float)DStack_8._index;
        fVar10 = (float)DStack_8._version;
        if (this_06 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          iVar14 = (this_06->fields)._size;
          if (iVar14 == 1) {
            pOStack_15 = (Object__Class *)pMStack_11->klass;
            pDStack_16 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                         TM::TM__(StringLiteral_Winner__,(MethodInfo *)0x0);
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if ((pMVar17 == (MVNetworkGame *)0x0) ||
               (pMVar18 = (pMVar17->fields).teamManager, pMVar18 == (MVTeamManager *)0x0))
            goto code_?;
            this_01 = (pMVar18->fields).teamNames;
            RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_06,0,
                                MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                               );
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if ((RVar19 == (RegexCharClass_SingleRange)0x0) ||
               (this_01 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0))
            goto code_?;
            pSVar20 = (String *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                 *(Int32Enum__Enum *)((int)RVar19 + 8),
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                );
            pSVar20 = mscorlib.dll::System::String::String_Concat_3
                                ((String *)pDStack_16,pSVar20,(MethodInfo *)0x0);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if (pOStack_15 == (Object__Class *)0x0) goto code_?;
            pIVar21 = (pOStack_15->_0).byval_arg.data.array;
          }
          else {
            pOVar22 = (Object__Class *)StringLiteral_It_s_a_tie;
            if (iVar14 < 3) {
              pOStack_15 = (Object__Class *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_It_s_a_tie,StringLiteral__between_,
                                      (MethodInfo *)0x0);
              for (iVar14 = 0; pOVar22 = pOStack_15, iVar14 < (this_06->fields)._size;
                  iVar14 = iVar14 + 1) {
                pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if ((pMVar17 == (MVNetworkGame *)0x0) ||
                   (pMVar18 = (pMVar17->fields).teamManager, pMVar18 == (MVTeamManager *)0x0))
                goto code_?;
                pDStack_16 = (pMVar18->fields).teamNames;
                RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_06,0,
                                    MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                   );
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if (RVar19 == (RegexCharClass_SingleRange)0x0) goto code_?;
                if (pDStack_16 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
                goto code_?;
                pSVar20 = (String *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_16,
                                     *(Int32Enum__Enum *)((int)RVar19 + 8),
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                pOStack_15 = (Object__Class *)
                             mscorlib.dll::System::String::String_Concat_3
                                       ((String *)pOStack_15,pSVar20,(MethodInfo *)0x0);
                if (iVar14 < (this_06->fields)._size + -1) {
                  pOStack_15 = (Object__Class *)
                               mscorlib.dll::System::String::String_Concat_3
                                         ((String *)pOStack_15,StringLiteral__and_,(MethodInfo *)0x0
                                         );
                }
              }
            }
            pSVar20 = mscorlib.dll::System::String::String_Concat_3
                                ((String *)pOVar22,::StringLiteral__,(MethodInfo *)0x0);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if ((Object__Class *)pMStack_11->klass == (Object__Class *)0x0) goto code_?;
            pIVar21 = (((Object__Class *)pMStack_11->klass)->_0).byval_arg.data.array;
          }
          pDVar7 = DStack_8._dictionary;
          fVar9 = (float)DStack_8._index;
          fVar10 = (float)DStack_8._version;
          if (pIVar21 != (Il2CppArrayType *)0x0) {
            pIVar23 = pIVar21->etype;
            uVar24._0_2_ = pIVar23[99].attrs;
            uVar24._2_1_ = pIVar23[99].type;
            uVar24._3_1_ = pIVar23[99].field_0x7;
            (*(code *)pIVar23[99].data)(pIVar21,pSVar20,uVar24);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if ((Object__Class *)pMStack_11->klass != (Object__Class *)0x0) {
              DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                        ((DebriefingWinnerGUI *)pMStack_11->klass,winType,(MethodInfo *)0x0);
              RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (this_06,0,
                                  MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                 );
              pDVar7 = DStack_8._dictionary;
              fVar9 = (float)DStack_8._index;
              fVar10 = (float)DStack_8._version;
              if (RVar19 != (RegexCharClass_SingleRange)0x0) {
                pOStack_15 = *(Object__Class **)((int)RVar19 + 0xc);
                if (pOStack_15 == (Object__Class *)0x0) {
                  pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if ((pMVar17 == (MVNetworkGame *)0x0) ||
                     (this_02 = (pMVar17->fields).playerContainer,
                     this_02 == (MVPlayerContainer *)0x0)) goto code_?;
                  this_07 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                         (this_02,(MethodInfo *)0x0);
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if (this_07 ==
                      (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) goto code_?;
                  pDVar25 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                      (&DStack_8,this_07,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                      );
                  pMVar26 = (MVPlayer *)pDVar25->_currentValue;
                  DStack_8._version = 0;
                  uStack_1 = 1;
                  DStack_8._currentValue = (Object *)&stack0xffffffbc;
                  while( true ) {
                    bVar27 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                            ::UInt32,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                        *)&stack0xffffffbc,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                      );
                    if (bVar27 == 0) break;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    pMStack_11 = pMVar26;
                    if (pMVar26 == (MVPlayer *)0x0) goto code_?;
                    pDStack_16 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                 (pMVar26->fields)._Team_k__BackingField;
                    RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (this_06,0,
                                        MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                       );
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if (RVar19 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    if (pDStack_16 ==
                        *(Dictionary_2_MV_WorldObject_MVTeam_System_String_ **)((int)RVar19 + 8)) {
                      in_stack_6 = (MethodInfo **)pMStack_11;
                      pOVar22 = (Object__Class *)
                                MVPlayer::MVPlayer_GetGameStat
                                          (pMStack_11,counterType,(MethodInfo *)0x0);
                      if ((int)pOStack_15 < (int)pOVar22) {
                        pOStack_15 = pOVar22;
                      }
                    }
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffbc,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                             ,(MethodInfo *)in_stack_6);
                  uStack_1 = 0xffffffff;
                }
                pSVar20 = WinningConditionDebriefing_FormatCount
                                    (counterType,(int32_t)pOStack_15,(MethodInfo *)0x0);
                pDVar13 = (this->fields).debriefing;
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if ((pDVar13 != (DebriefingWinnerGUI *)0x0) &&
                   (pTVar28 = (pDVar13->fields).winValue, pTVar28 != (Text *)0x0)) {
                  (*(code *)(pTVar28->klass->vtable).set_text.method)
                            (pTVar28,pSVar20,
                             (pTVar28->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pAVar29 = (this->fields).captureCamera;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar27 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)pAVar29,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar27 != 0) {
                    pAVar29 = (this->fields).captureCamera;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if (pAVar29 == (AvatarCapture *)0x0) goto code_?;
                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pAVar29,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                              ((Object_1 *)pGVar12,(MethodInfo *)0x0);
                  }
                  pAVar29 = (this->fields).captureCameraPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pAVar29 = (AvatarCapture *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)pAVar29,
                                       AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                                      );
                  ppAVar30 = &(this->fields).captureCamera;
                  *ppAVar30 = pAVar29;
                  func_?(ppAVar30,pAVar29);
                  pAVar29 = (this->fields).captureCamera;
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if (pAVar29 != (AvatarCapture *)0x0) {
                    AvatarCapture::AvatarCapture_CapturePlayersInTeam
                              (pAVar29,(List_1_ScoreTeamEntry_ *)this_06,counterType,
                               (MethodInfo *)0x0);
                    scoreTeamEntries = (List_1_ScoreTeamEntry_ *)0x5;
                    if ((this_06->fields)._size == 1) {
                      RVar19 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (this_06,0,
                                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                         );
                      pDVar7 = DStack_8._dictionary;
                      fVar9 = (float)DStack_8._index;
                      fVar10 = (float)DStack_8._version;
                      if (RVar19 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      scoreTeamEntries = *(List_1_ScoreTeamEntry_ **)((int)RVar19 + 8);
                    }
                    pDVar13 = (this->fields).debriefing;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar31 = Styles::Styles_GetTeamColor
                                        ((Color *)&DStack_8,(MVTeam__Enum)scoreTeamEntries,0,
                                         (MethodInfo *)0x0);
                    DStack_8._dictionary =
                         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)pCVar31->r;
                    DStack_8._index = (int32_t)pCVar31->g;
                    DStack_8._version = (int32_t)pCVar31->b;
                    DStack_8._currentValue = (Object *)pCVar31->a;
                    pAVar29 = (this->fields).captureCamera;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if ((pAVar29 != (AvatarCapture *)0x0) &&
                       (this_03 = (pAVar29->fields).renderCam, this_03 != (Camera *)0x0)) {
                      value = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_get_targetTexture(this_03,(MethodInfo *)0x0);
                      pOVar32 = DStack_8._currentValue;
                      pDVar7 = DStack_8._dictionary;
                      fVar9 = (float)DStack_8._index;
                      fVar10 = (float)DStack_8._version;
                      if (pDVar13 != (DebriefingWinnerGUI *)0x0) {
                        pDVar7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                   *)((float)DStack_8._dictionary * _UNK_?);
                        fVar9 = (float)DStack_8._index * _UNK_?;
                        fVar10 = (float)DStack_8._version * _UNK_?;
                        this_04 = (pDVar13->fields).backgroundImage;
                        DStack_8._currentValue = (Object *)0x3f800000;
                        if (this_04 != (ImageAnimator *)0x0) {
                          start.g = (float)DStack_8._index;
                          start.r = (float)DStack_8._dictionary;
                          start.b = (float)DStack_8._version;
                          start.a = (float)pOVar32;
                          end.g = fVar9;
                          end.r = (float)pDVar7;
                          end.b = fVar10;
                          end.a = 1.0;
                          DStack_8._dictionary = pDVar7;
                          DStack_8._index = (int32_t)fVar9;
                          DStack_8._version = (int32_t)fVar10;
                          ImageAnimator::ImageAnimator_SetColor(this_04,start,end,(MethodInfo *)0x0)
                          ;
                          this_05 = (pDVar13->fields).winnerImage;
                          pDVar7 = DStack_8._dictionary;
                          fVar9 = (float)DStack_8._index;
                          fVar10 = (float)DStack_8._version;
                          if (this_05 != (RawImage *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                      (this_05,(Texture *)value,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            method_00 = 
                            TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16;
                            pOVar32 = (Object *)func_?();
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                      (pOVar32,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                            pOVar32[1].klass = (Object__Class *)0x0;
                            pOVar32[2].klass = (Object__Class *)this;
                            func_?();
                            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                            MonoBehaviour_StartCoroutine_Auto
                                      ((MonoBehaviour *)this,(IEnumerator *)pOVar32,
                                       (MethodInfo *)0x0);
                            *unaff_FS_OFFSET = uStack_3;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  DStack_8._version = (int32_t)fVar10;
  DStack_8._index = (int32_t)fVar9;
  DStack_8._dictionary = pDVar7;
  uVar24 = func_?();
  func_?(uVar24);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* IEnumerator ShowDebriefingCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ShowDebriefingCoroutine
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Start
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&
                    MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    ppAVar3 = &(pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_
               ,(MethodInfo *)0x0);
    pAStack4 =
         (Action_1_IWinningCondition___Class *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (pAStack4 == (Action_1_IWinningCondition___Class *)0x0) {
      *ppAVar3 = (Action_1_IWinningCondition_ *)0x0;
      func_?();
      return;
    }
    pAStack4 = TypeInfo__System__Action<IWinningCondition>;
    pAVar2 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
      *ppAVar3 = pAVar2;
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
      if (pAStack4 != (Action_1_IWinningCondition___Class *)0x0) {
        func_?();
        return;
      }
    }
  }
  pAStack4 = unaff_EDI;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Update
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).debriefing;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
    MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator WaitForFadeOut() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_WaitForFadeOut
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void <ShowDebriefingCoroutine>b__16_0(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing__ShowDebriefingCoroutine_b__16_0
               (WinningConditionDebriefing *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).group;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <ShowDebriefingCoroutine>b__16_1(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing__ShowDebriefingCoroutine_b__16_1
               (WinningConditionDebriefing *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).group;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == _UNK_?) {
      WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

