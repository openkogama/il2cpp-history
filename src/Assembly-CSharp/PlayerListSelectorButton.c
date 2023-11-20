
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelectorButton::PlayerListSelectorButton_Initialize
               (PlayerListSelectorButton *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_None) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
       (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
       this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    team_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,0,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                        );
    pTVar3 = (this->fields).playerCount;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
       ((pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                            (pMVar2,(MVTeam__Enum)team_00,(MethodInfo *)0x0),
        pLVar4 == (List_1_MVPlayer_ *)0x0 ||
        (mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0),
        pTVar3 == (Text *)0x0)))) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    pTVar3 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0))
    goto code_?;
    team_01 = &UNK_?;
  }
  else {
    pTVar3 = (this->fields).playerCount;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
        (pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar2,team,(MethodInfo *)0x0),
        pLVar4 == (List_1_MVPlayer_ *)0x0)) ||
       (mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0),
       pTVar3 == (Text *)0x0)) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    pTVar3 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = (pMVar1->fields).teamManager, team_01 = (undefined *)team,
       pMVar2 == (MVTeamManager *)0x0)) goto code_?;
  }
  MVTeamManager::MVTeamManager_GetScore
            (pMVar2,(MVTeam__Enum)team_01,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    button = (this->fields).button;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Styles::Styles_SetStyle_4
              (button,ButtonStyle__Enum_TabButton,team,SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
    Styles::Styles_TeamToSprite((this->fields).teamImage,team,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

