
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
       (this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
       this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    team_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,0,
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
    (*(pTVar3->klass->vtable).set_text.methodPtr)();
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
    (*(pTVar3->klass->vtable).set_text.methodPtr)();
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
    (*(pTVar3->klass->vtable).set_text.methodPtr)();
    button = (this->fields).button;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    Styles::Styles_SetStyle_4
              (button,ButtonStyle__Enum_TabButton,team,SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
    this_00 = (this->fields).teamImage;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                     );
      func_?(&TypeInfo__Styles);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    this_01 = TypeInfo__Styles->static_fields->teamIconStylesDictionary;
    if (((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_Styles_TeamIconStyleDef_ *)0x0) &&
        (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_Styles::TeamIconStyleDef>__get_Item_MV__WorldObject__MVTeam_
                            ), pOVar5 != (Object *)0x0)) && (this_00 != (Image *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (this_00,(Sprite *)pOVar5[1].monitor,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

