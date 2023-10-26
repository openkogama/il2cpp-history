
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
      pDVar5 = (this->fields).debriefing;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pDVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pDVar5 = (this->fields).debriefing;
        if (pDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pDVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
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
    func_?(&StringLiteral__0_00___1_00_);
    cRam_? = '\x01';
  }
  TStack_1._ticks = 0;
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&count,(MethodInfo *)0x0);
    return pSVar2;
  default:
    mscorlib.dll::System::TimeSpan::TimeSpan__ctor_3(&TStack_1,0,0,0,0,count,(MethodInfo *)0x0);
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
        uVar6 = *(ushort *)(*piVar4 + 0xb2);
        if (uVar6 != 0) {
          do {
            if (*(IWinningConditionBriefing__Class **)(*(int *)(*piVar4 + 0x58) + (uint)uVar5 * 8)
                == TypeInfo__IWinningConditionBriefing) {
              puVar7 = (undefined4 *)
                       (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar5 * 8) * 8 + 0xc4 +
                       *piVar4);
              (*(code *)*puVar7)(piVar4,this,puVar7[1]);
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
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    index = 0;
    if (scoreActorEntries != (List_1_ScoreActorEntry_ *)0x0) {
      do {
        while( true ) {
          if ((scoreActorEntries->fields)._size <= index) {
            return (List_1_ScoreActorEntry_ *)this_00;
          }
          if (0 < (this_00->fields)._size) break;
code_?:
          in_stack_1 =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          scoreActorEntries,(int32_t)in_stack_1,in_stack_2);
          in_stack_2 =
               MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)in_stack_1,
                     MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                    );
code_?:
          index = index + 1;
        }
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreActorEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        index_00 = *(int32_t *)((int)RVar3 + 0xc);
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index_00,
                           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        bVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (index_00,*(int32_t *)((int)RVar3 + 0xc),counterType,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          counterType = (GameStatCounterType__Enum)&UNK_?;
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                            );
          if (RVar3 != (RegexCharClass_SingleRange)0x0) {
            iVar5 = *(int *)((int)RVar3 + 0xc);
            RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               scoreActorEntries,index,
                               MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                              );
            if (RVar3 != (RegexCharClass_SingleRange)0x0) {
              if (iVar5 == *(int *)((int)RVar3 + 0xc)) goto code_?;
              goto code_?;
            }
          }
          break;
        }
        func_?();
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreActorEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RVar3,
                   MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                  );
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_ScoreActorEntry_ *)(*pcVar6)();
  return pLVar7;
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
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    index = 0;
    if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
      do {
        while( true ) {
          if ((scoreTeamEntries->fields)._size <= index) {
            return (List_1_ScoreTeamEntry_ *)this_00;
          }
          if (0 < (this_00->fields)._size) break;
code_?:
          in_stack_1 =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          scoreTeamEntries,(int32_t)in_stack_1,in_stack_2);
          in_stack_2 =
               MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)in_stack_1,
                     MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                    );
code_?:
          index = index + 1;
        }
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreTeamEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        index_00 = *(int32_t *)((int)RVar3 + 0xc);
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index_00,
                           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                          );
        if (RVar3 == (RegexCharClass_SingleRange)0x0) break;
        bVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (index_00,*(int32_t *)((int)RVar3 + 0xc),counterType,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          counterType = (GameStatCounterType__Enum)&UNK_?;
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                            );
          if (RVar3 != (RegexCharClass_SingleRange)0x0) {
            iVar5 = *(int *)((int)RVar3 + 0xc);
            RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               scoreTeamEntries,index,
                               MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                              );
            if (RVar3 != (RegexCharClass_SingleRange)0x0) {
              if (iVar5 == *(int *)((int)RVar3 + 0xc)) goto code_?;
              goto code_?;
            }
          }
          break;
        }
        func_?();
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreTeamEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                          );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RVar3,
                   MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                  );
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_ScoreTeamEntry_ *)(*pcVar6)();
  return pLVar7;
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
      pDVar5 = (this->fields).debriefing;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pDVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pDVar5 = (this->fields).debriefing;
        if (pDVar5 == (DebriefingWinnerGUI *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pDVar5,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&StringLiteral_OnWinningConditionReceived);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnWinningConditionReceived,(MethodInfo *)0x0);
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar2 == MVGameMode__Enum_Play) {
code_?:
    bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if (bVar1 != 0) {
      pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
          (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).reviveState,
          this_00 == (SpawnRoleVariable_1_System_Object_ *)0x0)) ||
         (this_01 = (ReviveState *)
                    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
                    SpawnRoleVariable_1_System_Object__get_Value
                              (this_00,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                              ), this_01 == (ReviveState *)0x0)) goto code_?;
      winningCondition = (IWinningCondition *)&UNK_?;
      ReviveState::ReviveState_ResetSafePostions(this_01,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar4 = func_?();
    if (iVar4 == 0) {
      return;
    }
    if (winningCondition != (IWinningCondition *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) {
        piVar5 = (int *)func_?();
        if (piVar5 != (int *)0x0) {
          uVar6 = 0;
          uVar7 = *(ushort *)(*piVar5 + 0xb2);
          if (uVar7 != 0) {
            do {
              if (*(IWinningConditionBriefing__Class **)
                   (*(int *)(*piVar5 + 0x58) + (uint)uVar6 * 8) ==
                  TypeInfo__IWinningConditionBriefing) {
                (**(code **)(*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar6 * 8) * 8 + 0xc4 +
                            *piVar5))();
                return;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          puVar8 = (undefined4 *)func_?();
          (*(code *)*puVar8)();
          return;
        }
        goto code_?;
      }
      func_?();
    }
  }
  else {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Edit) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      winningCondition = (IWinningCondition *)0x1;
      cVar9 = func_?();
      if (cVar9 == '\0') {
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  this_03 = (WinningConditionDebriefing *)
            func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  if (this_03 != (WinningConditionDebriefing *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_03,
               MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    iVar1 = 0;
    if (actorNrs != (List_1_System_Int32_ *)0x0) {
      for (; iVar1 < (actorNrs->fields)._size; iVar1 = iVar1 + 1) {
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
        bVar5 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                          (pMVar3,(int32_t)RVar4,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pMVar3 = (pMVar2->fields).playerContainer;
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             pMVar3,iVar1,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
          item = MVPlayerContainer::MVPlayerContainer_get_Item
                           (pMVar3,(int32_t)RVar4,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_03,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
          this = this_03;
        }
      }
      for (iVar1 = 0; iVar1 < (int)(this_03->fields).group; iVar1 = iVar1 + 1) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_03,iVar1,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        if (RVar4 == (RegexCharClass_SingleRange)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_03,iVar1,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
          iVar1 = iVar1 + -1;
        }
      }
      pCVar6 = (this_03->fields).group;
      if ((int)pCVar6 < 1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Winning_player_can_t_be_found__P,(MethodInfo *)0x0);
        return;
      }
      if (pCVar6 == (CanvasGroup *)0x1) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_03,0,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0x3c) == 0))
        goto code_?;
        pSVar7 = *(String **)(*(int *)((int)RVar4 + 0x3c) + 0xc);
      }
      else {
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                           (::StringLiteral__,StringLiteral_It_s_a_tie,(MethodInfo *)0x0);
        if ((int)(this_03->fields).group < 3) {
          pSVar7 = mscorlib.dll::System::String::String_Concat_3
                             (pSVar7,StringLiteral__between_,(MethodInfo *)0x0);
          for (iVar1 = 0; iVar1 < (int)(this_03->fields).group; iVar1 = iVar1 + 1) {
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_03,iVar1,
                               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                              );
            if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0x3c) == 0))
            goto code_?;
            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                               (pSVar7,*(String **)(*(int *)((int)RVar4 + 0x3c) + 0xc),
                                (MethodInfo *)0x0);
            if (iVar1 < (int)((int)&(this_03->fields).group[-1].fields._._._.m_CachedPtr + 3)) {
              this = (WinningConditionDebriefing *)0x0;
              pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                 (pSVar7,StringLiteral__and_,(MethodInfo *)0x0);
            }
          }
        }
        pSVar7 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar7,::StringLiteral__,(MethodInfo *)0x0);
      }
      pDVar8 = (this->fields).debriefing;
      if ((pDVar8 != (DebriefingWinnerGUI *)0x0) &&
         (pTVar9 = (pDVar8->fields).winnerName, pTVar9 != (Text *)0x0)) {
        (*(pTVar9->klass->vtable).set_text.methodPtr)
                  (pTVar9,pSVar7,(pTVar9->klass->vtable).set_text.method);
        pAVar10 = (this->fields).captureCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pAVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pAVar10 = (this->fields).captureCamera;
          if (pAVar10 == (AvatarCapture *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar10,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        pAVar10 = (this->fields).captureCameraPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pAVar10 = (AvatarCapture *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pAVar10,
                            AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                           );
        (this->fields).captureCamera = pAVar10;
        func_?(&(this->fields).captureCamera,pAVar10);
        pAVar10 = (this->fields).captureCamera;
        if (pAVar10 != (AvatarCapture *)0x0) {
          AvatarCapture::AvatarCapture_CapturePlayer
                    (pAVar10,(List_1_MVPlayer_ *)this_03,(MethodInfo *)0x0);
          pDVar8 = (this->fields).debriefing;
          if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Styles);
          }
          pCVar11 = Styles::Styles_GetTeamColor
                              ((Color *)&stack0xffffffe8,MVTeam__Enum_Blue,0,(MethodInfo *)0x0);
          fVar12 = pCVar11->r;
          fVar13 = pCVar11->g;
          fVar14 = pCVar11->b;
          fVar15 = pCVar11->a;
          pAVar10 = (this->fields).captureCamera;
          if ((pAVar10 != (AvatarCapture *)0x0) &&
             (this_00 = (pAVar10->fields).renderCam, this_00 != (Camera *)0x0)) {
            value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              (this_00,(MethodInfo *)0x0);
            if (pDVar8 != (DebriefingWinnerGUI *)0x0) {
              this_01 = (pDVar8->fields).backgroundImage;
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
                this_02 = (pDVar8->fields).winnerImage;
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
  pAVar1 = (this->fields).captureCameraPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar1 = (AvatarCapture *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar1,
                      AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                     );
  (this->fields).captureCamera = pAVar1;
  func_?();
  pAVar1 = (this->fields).captureCamera;
  if (pAVar1 != (AvatarCapture *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                     );
      cRam_? = '\x01';
    }
    AvatarCapture::AvatarCapture_InitializeCamera(pAVar1,(MethodInfo *)0x0);
    sortedList = (List_1_List_1_MVPlayer_ *)func_?();
    if (sortedList != (List_1_List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)sortedList,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                );
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
        source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
        item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                         ((IEnumerable_1_System_Object_ *)source,
                          System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                         );
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)sortedList,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                  );
        AvatarCapture::AvatarCapture_CapturePlayerGroup(pAVar1,sortedList,(MethodInfo *)0x0);
        this_01 = (this->fields).group;
        pDVar5 = (this->fields).noWinnerPrefab;
        if (this_01 != (CanvasGroup *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0);
            pDVar5 = (DebriefingWinnerGUI *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                               ((Object *)pDVar5,parent,0,
                                DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                               );
            (this->fields).debriefing = pDVar5;
            func_?();
            pDVar5 = (this->fields).debriefing;
            TM::TM__(StringLiteral_Time_s_Up_,(MethodInfo *)0x0);
            if ((pDVar5 != (DebriefingWinnerGUI *)0x0) &&
               (pTVar6 = (pDVar5->fields).winnerName, pTVar6 != (Text *)0x0)) {
              (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6);
              pDVar5 = (this->fields).debriefing;
              if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Styles);
              }
              pCVar7 = Styles::Styles_GetColor
                                 ((Color *)&stack0xffffffec,ColorStyle__Enum_DarkNavyBlue,
                                  (MethodInfo *)0x0);
              fVar8 = pCVar7->r;
              fVar9 = pCVar7->g;
              fVar10 = pCVar7->b;
              fVar11 = pCVar7->a;
              pAVar1 = (this->fields).captureCamera;
              if ((pAVar1 != (AvatarCapture *)0x0) &&
                 (this_02 = (pAVar1->fields).renderCam, this_02 != (Camera *)0x0)) {
                value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                                  (this_02,(MethodInfo *)0x0);
                if (pDVar5 != (DebriefingWinnerGUI *)0x0) {
                  this_03 = (pDVar5->fields).backgroundImage;
                  if (this_03 != (ImageAnimator *)0x0) {
                    start.g = fVar9;
                    start.r = fVar8;
                    start.b = fVar10;
                    start.a = fVar11;
                    end.g = fVar9 * _UNK_?;
                    end.r = fVar8 * _UNK_?;
                    end.b = fVar10 * _UNK_?;
                    end.a = 1.0;
                    ImageAnimator::ImageAnimator_SetColor(this_03,start,end,(MethodInfo *)0x0);
                    this_04 = (pDVar5->fields).winnerImage;
                    if (this_04 != (RawImage *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                (this_04,(Texture *)value,(MethodInfo *)0x0);
                      pDVar5 = (this->fields).debriefing;
                      if (pDVar5 != (DebriefingWinnerGUI *)0x0) {
                        DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                                  (pDVar5,WinningConditionType__Enum_None,(MethodInfo *)0x0);
                        routine = WinningConditionDebriefing_ShowDebriefingCoroutine
                                            (this,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_Auto
                                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
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
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
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
    func_?(&StringLiteral_No_winner);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  if (scoreActorEntries != (List_1_ScoreActorEntry_ *)0x0) {
    if ((scoreActorEntries->fields)._size == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_No_winner,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pDStack_7 = (this->fields).playerWinPrefab;
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
      pDVar8 = (DebriefingWinnerGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pDStack_7,parent,0,
                           DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                          );
      (this->fields).debriefing = pDVar8;
      func_?();
      this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
                          (this,scoreActorEntries,counterType,(MethodInfo *)0x0);
      actorNrs = (List_1_System_Int32_ *)func_?();
      if (actorNrs != (List_1_System_Int32_ *)0x0) {
        method_00 = (MVPlayer *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)actorNrs,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        iVar9 = 0;
        if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          while (iVar9 < (this_03->fields)._size) {
            RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_03,iVar9,
                                MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                               );
            pMVar11 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
            pDStack_7 = *(DebriefingWinnerGUI **)((int)RVar10 + 8);
            pIVar12 = (actorNrs->fields)._items;
            uVar13 = (actorNrs->fields)._size;
            piVar14 = &(actorNrs->fields)._version;
            *piVar14 = *piVar14 + 1;
            if (pIVar12 == (Int32__Array *)0x0) goto code_?;
            if (uVar13 < pIVar12->max_length) {
              (actorNrs->fields)._size = uVar13 + 1;
              if (pIVar12->max_length <= uVar13) {
                func_?();
                goto code_?;
              }
              iVar9 = iVar9 + 1;
              pIVar12->vector[uVar13] = (int32_t)pDStack_7;
            }
            else {
              (*(pMVar11->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                        (actorNrs,pDStack_7,pMVar11->klass->rgctx_data[0xb].rgctxDataDummy);
              iVar9 = iVar9 + 1;
            }
          }
          WinningConditionDebriefing_RenderPlayerToRenderTexture(this,actorNrs,(MethodInfo *)0x0);
          RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_03,0,
                              MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                             );
          if (RVar10 != (RegexCharClass_SingleRange)0x0) {
            pDVar8 = *(DebriefingWinnerGUI **)((int)RVar10 + 0xc);
            pDStack_7 = pDVar8;
            if (pDVar8 == (DebriefingWinnerGUI *)0x0) {
              pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar15 == (MVNetworkGame *)0x0) ||
                  (this_01 = (pMVar15->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)
                  ) || (this_04 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                               (this_01,(MethodInfo *)0x0),
                       this_04 ==
                       (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0)) goto code_?;
              pDVar16 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                        Regex+CachedCodeEntryKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                    *)(auStack_17 + 4),this_04,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                  );
              DStack_6._dictionary =
                   (Dictionary_2_System_Object_System_Object_ *)pDVar16->_dictionary;
              DStack_6._index = pDVar16->_index;
              DStack_6._version = pDVar16->_version;
              DStack_6._currentValue = pDVar16->_currentValue;
              uStack_1 = 1;
              pTStack_18 = (Text *)0x0;
              pDStack_19 = &DStack_6;
              while (bVar20 = mscorlib.dll::System::Collections::Generic::
                             Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                             ::Object,System::Object]::
                             Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                       (&DStack_6,
                                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                       ), this_06 = (MVPlayer *)DStack_6._currentValue, bVar20 != 0)
              {
                if ((MVPlayer *)DStack_6._currentValue == (MVPlayer *)0x0) goto code_?;
                iStack_21 = ((MVPlayer__Fields *)((int)DStack_6._currentValue + 8))->
                            _ActorNr_k__BackingField;
                RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_03,0,
                                    MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_
                                   );
                if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
                pDVar8 = pDStack_7;
                if (iStack_21 == *(int *)((int)RVar10 + 8)) {
                  if (this_06 == (MVPlayer *)0x0) goto code_?;
                  pDVar22 = (DebriefingWinnerGUI *)
                            MVPlayer::MVPlayer_GetGameStat(this_06,counterType,(MethodInfo *)0x0);
                  pDVar8 = pDStack_7;
                  method_00 = this_06;
                  if ((int)pDStack_7 < (int)pDVar22) {
                    pDVar8 = pDVar22;
                    pDStack_7 = pDVar22;
                  }
                }
              }
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,(MethodInfo *)method_00);
              uStack_1 = 0xffffffff;
            }
            a = ::StringLiteral__;
            pSVar23 = WinningConditionDebriefing_FormatCount
                                (counterType,(int32_t)pDVar8,(MethodInfo *)0x0);
            pDVar8 = (this->fields).debriefing;
            if ((pDVar8 != (DebriefingWinnerGUI *)0x0) &&
               (pTVar24 = (pDVar8->fields).winValue, pTVar24 != (Text *)0x0)) {
              (*(pTVar24->klass->vtable).set_text.methodPtr)
                        (pTVar24,pSVar23,(pTVar24->klass->vtable).set_text.method);
              pDVar8 = (this->fields).debriefing;
              if (pDVar8 != (DebriefingWinnerGUI *)0x0) {
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
                bVar20 = mscorlib.dll::System::String::String_op_Equality
                                  (a,::StringLiteral__,(MethodInfo *)0x0);
                if (bVar20 == 0) {
                  iVar9 = 0;
                  pLVar25 = (pDVar8->fields).winConImages;
                  while (pLVar25 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
                    if ((pLVar25->fields)._size <= iVar9) goto code_?;
                    pLVar25 = (pDVar8->fields).winConImages;
                    if (pLVar25 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                    pSVar26 = mscorlib.dll::System::Collections::Generic::
                              List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
                              List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__get_Item
                                        ((SpawnRoleTeamEditor_SpawnRoleTeamButton *)auStack_17,
                                         (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)pLVar25,
                                         iVar9,
                                         MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                                        );
                    pDStack_19 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                  *)pSVar26->team;
                    if (pSVar26->buttonSelected == (GameObject *)winType) {
                      if ((pDVar8->fields).winConImages ==
                          (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                      iVar27 = func_?();
                      if (*(GameObject **)(iVar27 + 0x10) == (GameObject *)0x0) break;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (*(GameObject **)(iVar27 + 0x10),1,(MethodInfo *)0x0);
                      pLVar25 = (pDVar8->fields).winConImages;
                      if (pLVar25 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
                      iVar27 = func_?(&stack0xffffff94,pLVar25,iVar9,
                                               MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                                              );
                      if (*(int *)(iVar27 + 0xc) == 0) break;
                      func_?(0x4b,*(int *)(iVar27 + 0xc),a);
                    }
                    iVar9 = iVar9 + 1;
                    pLVar25 = (pDVar8->fields).winConImages;
                  }
                }
                else {
code_?:
                  pDVar8 = (this->fields).debriefing;
                  if (pDVar8 != (DebriefingWinnerGUI *)0x0) {
                    DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                              (pDVar8,winType,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    this_05 = (SubscribableVariableBase_1_System_Int32Enum_ *)func_?();
                    if (this_05 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
                      SubscribableVariableBase`1[System::Int32Enum]::
                      SubscribableVariableBase_1_System_Int32Enum___ctor
                                (this_05,0,(MethodInfo *)0x0);
                      this_05[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this
                      ;
                      func_?(this_05 + 1,this);
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StartCoroutine_Auto
                                ((MonoBehaviour *)this,(IEnumerator *)this_05,(MethodInfo *)0x0);
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
code_?:
  uVar28 = func_?();
  func_?(uVar28);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
    ;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
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
    func_?(&StringLiteral_No_winner);
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_No_winner,(MethodInfo *)0x0);
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
        (this->fields).debriefing = pDVar13;
        func_?();
        this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
                            (this,scoreTeamEntries,counterType,(MethodInfo *)0x0);
        pDVar7 = DStack_8._dictionary;
        fVar9 = (float)DStack_8._index;
        fVar10 = (float)DStack_8._version;
        if (this_05 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          if ((this_05->fields)._size == 1) {
            pDStack_14 = (this->fields).debriefing;
            pMStack_11 = (MVPlayer *)TM::TM__(StringLiteral_Winner__,(MethodInfo *)0x0);
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if ((pMVar15 == (MVNetworkGame *)0x0) ||
               (pMVar16 = (pMVar15->fields).teamManager, pMVar16 == (MVTeamManager *)0x0))
            goto code_?;
            pDStack_17 = (pMVar16->fields).teamNames;
            RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_05,0,
                                MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                               );
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (pDStack_17 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
            goto code_?;
            pSVar19 = (String *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_17,
                                 *(Int32Enum__Enum *)((int)RVar18 + 8),
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                );
            pDStack_17 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                         mscorlib.dll::System::String::String_Concat_3
                                   ((String *)pMStack_11,pSVar19,(MethodInfo *)0x0);
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if (pDStack_14 == (DebriefingWinnerGUI *)0x0) goto code_?;
            pTVar20 = (pDStack_14->fields).winnerName;
          }
          else {
            pDVar13 = (DebriefingWinnerGUI *)StringLiteral_It_s_a_tie;
            if ((this_05->fields)._size < 3) {
              pDStack_14 = (DebriefingWinnerGUI *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_It_s_a_tie,StringLiteral__between_,
                                      (MethodInfo *)0x0);
              for (pMStack_11 = (MVPlayer *)0x0; pDVar13 = pDStack_14,
                  (int)pMStack_11 < (this_05->fields)._size;
                  pMStack_11 = (MVPlayer *)((int)&pMStack_11->klass + 1)) {
                pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if ((pMVar15 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = (pMVar15->fields).teamManager, pMVar16 == (MVTeamManager *)0x0))
                goto code_?;
                pDStack_17 = (pMVar16->fields).teamNames;
                RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_05,0,
                                    MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                   );
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
                if (pDStack_17 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
                goto code_?;
                pSVar19 = (String *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_17,
                                     *(Int32Enum__Enum *)((int)RVar18 + 8),
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                pDStack_14 = (DebriefingWinnerGUI *)
                             mscorlib.dll::System::String::String_Concat_3
                                       ((String *)pDStack_14,pSVar19,(MethodInfo *)0x0);
                if ((int)pMStack_11 < (this_05->fields)._size + -1) {
                  pDStack_14 = (DebriefingWinnerGUI *)
                               mscorlib.dll::System::String::String_Concat_3
                                         ((String *)pDStack_14,StringLiteral__and_,(MethodInfo *)0x0
                                         );
                }
              }
            }
            pDStack_17 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                         mscorlib.dll::System::String::String_Concat_3
                                   ((String *)pDVar13,::StringLiteral__,(MethodInfo *)0x0);
            pDVar13 = (this->fields).debriefing;
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if (pDVar13 == (DebriefingWinnerGUI *)0x0) goto code_?;
            pTVar20 = (pDVar13->fields).winnerName;
          }
          pDVar7 = DStack_8._dictionary;
          fVar9 = (float)DStack_8._index;
          fVar10 = (float)DStack_8._version;
          if (pTVar20 != (Text *)0x0) {
            (*(pTVar20->klass->vtable).set_text.methodPtr)
                      (pTVar20,pDStack_17,(pTVar20->klass->vtable).set_text.method);
            pDVar13 = (this->fields).debriefing;
            pDVar7 = DStack_8._dictionary;
            fVar9 = (float)DStack_8._index;
            fVar10 = (float)DStack_8._version;
            if (pDVar13 != (DebriefingWinnerGUI *)0x0) {
              DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                        (pDVar13,winType,(MethodInfo *)0x0);
              RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (this_05,0,
                                  MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                 );
              pDVar7 = DStack_8._dictionary;
              fVar9 = (float)DStack_8._index;
              fVar10 = (float)DStack_8._version;
              if (RVar18 != (RegexCharClass_SingleRange)0x0) {
                pDStack_14 = *(DebriefingWinnerGUI **)((int)RVar18 + 0xc);
                if (pDStack_14 == (DebriefingWinnerGUI *)0x0) {
                  pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if ((pMVar15 == (MVNetworkGame *)0x0) ||
                     (this_01 = (pMVar15->fields).playerContainer,
                     this_01 == (MVPlayerContainer *)0x0)) goto code_?;
                  this_06 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                         (this_01,(MethodInfo *)0x0);
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if (this_06 ==
                      (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) goto code_?;
                  pDVar21 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[System::Text::
                            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                      (&DStack_8,this_06,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                      );
                  pMVar22 = (MVPlayer *)pDVar21->_currentValue;
                  DStack_8._version = 0;
                  uStack_1 = 1;
                  DStack_8._currentValue = (Object *)&stack0xffffffbc;
                  while( true ) {
                    bVar23 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                            ::Object,System::Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                        *)&stack0xffffffbc,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                      );
                    if (bVar23 == 0) break;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    pMStack_11 = pMVar22;
                    if (pMVar22 == (MVPlayer *)0x0) goto code_?;
                    pDStack_17 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                 (pMVar22->fields)._Team_k__BackingField;
                    RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (this_05,0,
                                        MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                       );
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    if (pDStack_17 ==
                        *(Dictionary_2_MV_WorldObject_MVTeam_System_String_ **)((int)RVar18 + 8)) {
                      if (pMStack_11 == (MVPlayer *)0x0) goto code_?;
                      in_stack_6 = (MethodInfo **)pMStack_11;
                      pDVar13 = (DebriefingWinnerGUI *)
                               MVPlayer::MVPlayer_GetGameStat
                                         (pMStack_11,counterType,(MethodInfo *)0x0);
                      if ((int)pDStack_14 < (int)pDVar13) {
                        pDStack_14 = pDVar13;
                      }
                    }
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&stack0xffffffbc,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                             ,(MethodInfo *)in_stack_6);
                  uStack_1 = 0xffffffff;
                }
                pSVar19 = WinningConditionDebriefing_FormatCount
                                    (counterType,(int32_t)pDStack_14,(MethodInfo *)0x0);
                pDVar13 = (this->fields).debriefing;
                pDVar7 = DStack_8._dictionary;
                fVar9 = (float)DStack_8._index;
                fVar10 = (float)DStack_8._version;
                if ((pDVar13 != (DebriefingWinnerGUI *)0x0) &&
                   (pTVar20 = (pDVar13->fields).winValue, pTVar20 != (Text *)0x0)) {
                  (*(pTVar20->klass->vtable).set_text.methodPtr)
                            (pTVar20,pSVar19,(pTVar20->klass->vtable).set_text.method);
                  pAVar24 = (this->fields).captureCamera;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)pAVar24,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar23 != 0) {
                    pAVar24 = (this->fields).captureCamera;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if (pAVar24 == (AvatarCapture *)0x0) goto code_?;
                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pAVar24,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                              ((Object_1 *)pGVar12,(MethodInfo *)0x0);
                  }
                  pAVar24 = (this->fields).captureCameraPrefab;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pAVar24 = (AvatarCapture *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                      ((Object *)pAVar24,
                                       AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                                      );
                  (this->fields).captureCamera = pAVar24;
                  func_?(&(this->fields).captureCamera,pAVar24);
                  pAVar24 = (this->fields).captureCamera;
                  pDVar7 = DStack_8._dictionary;
                  fVar9 = (float)DStack_8._index;
                  fVar10 = (float)DStack_8._version;
                  if (pAVar24 != (AvatarCapture *)0x0) {
                    AvatarCapture::AvatarCapture_CapturePlayersInTeam
                              (pAVar24,(List_1_ScoreTeamEntry_ *)this_05,counterType,
                               (MethodInfo *)0x0);
                    if ((this_05->fields)._size == 1) {
                      RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (this_05,0,
                                          MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                                         );
                      pDVar7 = DStack_8._dictionary;
                      fVar9 = (float)DStack_8._index;
                      fVar10 = (float)DStack_8._version;
                      if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      team = *(MVTeam__Enum *)((int)RVar18 + 8);
                    }
                    else {
                      team = MVTeam__Enum_None;
                    }
                    pDVar13 = (this->fields).debriefing;
                    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Styles);
                    }
                    pCVar25 = Styles::Styles_GetTeamColor
                                        ((Color *)&DStack_8,team,0,(MethodInfo *)0x0);
                    DStack_8._dictionary =
                         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)pCVar25->r;
                    DStack_8._index = (int32_t)pCVar25->g;
                    DStack_8._version = (int32_t)pCVar25->b;
                    DStack_8._currentValue = (Object *)pCVar25->a;
                    pAVar24 = (this->fields).captureCamera;
                    pDVar7 = DStack_8._dictionary;
                    fVar9 = (float)DStack_8._index;
                    fVar10 = (float)DStack_8._version;
                    if ((pAVar24 != (AvatarCapture *)0x0) &&
                       (this_02 = (pAVar24->fields).renderCam, this_02 != (Camera *)0x0)) {
                      pDStack_17 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                   Camera_get_targetTexture(this_02,(MethodInfo *)0x0);
                      pOVar26 = DStack_8._currentValue;
                      pDVar7 = DStack_8._dictionary;
                      fVar9 = (float)DStack_8._index;
                      fVar10 = (float)DStack_8._version;
                      if (pDVar13 != (DebriefingWinnerGUI *)0x0) {
                        pDVar7 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)((float)DStack_8._dictionary * _UNK_?);
                        fVar9 = (float)DStack_8._index * _UNK_?;
                        fVar10 = (float)DStack_8._version * _UNK_?;
                        this_03 = (pDVar13->fields).backgroundImage;
                        DStack_8._currentValue = (Object *)0x3f800000;
                        if (this_03 != (ImageAnimator *)0x0) {
                          start.g = (float)DStack_8._index;
                          start.r = (float)DStack_8._dictionary;
                          start.b = (float)DStack_8._version;
                          start.a = (float)pOVar26;
                          end.g = fVar9;
                          end.r = (float)pDVar7;
                          end.b = fVar10;
                          end.a = 1.0;
                          DStack_8._dictionary = pDVar7;
                          DStack_8._index = (int32_t)fVar9;
                          DStack_8._version = (int32_t)fVar10;
                          ImageAnimator::ImageAnimator_SetColor(this_03,start,end,(MethodInfo *)0x0)
                          ;
                          this_04 = (pDVar13->fields).winnerImage;
                          pDVar7 = DStack_8._dictionary;
                          fVar9 = (float)DStack_8._index;
                          fVar10 = (float)DStack_8._version;
                          if (this_04 != (RawImage *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                      (this_04,(Texture *)pDStack_17,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            this_07 = (SubscribableVariableBase_1_System_Int32Enum_ *)
                                      func_?();
                            pDVar7 = DStack_8._dictionary;
                            fVar9 = (float)DStack_8._index;
                            fVar10 = (float)DStack_8._version;
                            if (this_07 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
                              SubscribableVariableBase`1[System::Int32Enum]::
                              SubscribableVariableBase_1_System_Int32Enum___ctor
                                        (this_07,0,(MethodInfo *)0x0);
                              this_07[1].klass =
                                   (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
                              func_?(this_07 + 1,this);
                              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_StartCoroutine_Auto
                                        ((MonoBehaviour *)this,(IEnumerator *)this_07,
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
  }
code_?:
  DStack_8._version = (int32_t)fVar10;
  DStack_8._index = (int32_t)fVar9;
  DStack_8._dictionary = pDVar7;
  uVar27 = func_?();
  func_?(uVar27);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
  this_00 = (SubscribableVariableBase_1_System_Int32Enum_ *)
            func_?(TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16);
  if (this_00 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    SubscribableVariableBase`1[System::Int32Enum]::
    SubscribableVariableBase_1_System_Int32Enum___ctor(this_00,0,(MethodInfo *)0x0);
    this_00[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    unaff_EBX = (Action_1_IWinningCondition___Class *)(pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    if (this_00 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar2 == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
        func_?();
        return;
      }
      pAStack3 = TypeInfo__System__Action<IWinningCondition>;
      pAVar4 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar4;
        unaff_EBX = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = TypeInfo__System__Action<IWinningCondition>;
        pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pAStack3 = unaff_EBX;
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
  this_00 = (SubscribableVariableBase_1_System_Int32Enum_ *)
            func_?(TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
  if (this_00 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    SubscribableVariableBase`1[System::Int32Enum]::
    SubscribableVariableBase_1_System_Int32Enum___ctor(this_00,0,(MethodInfo *)0x0);
    this_00[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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

