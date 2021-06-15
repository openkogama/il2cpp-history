
/* Void Initialize(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelectorButton::PlayerListSelectorButton_Initialize
               (PlayerListSelectorButton *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_None) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) goto code_?;
    this_00 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
    if (this_00 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]::
    List_1_MV_WorldObject_MVTeam__get_Item
              (this_00,0,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
              );
    pTVar3 = (this->fields).playerCount;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) goto code_?;
    pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                       ((MVTeamManager *)pSVar2,MVTeam__Enum_Blue,(MethodInfo *)0x0);
    if (pLVar4 == (List_1_MVPlayer_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?();
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    pTVar3 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) goto code_?;
    MVTeamManager::MVTeamManager_GetScore
              ((MVTeamManager *)pSVar2,(MVTeam__Enum)pMVar1,GameStatCounterType__Enum_Kill,
               (MethodInfo *)0x0);
  }
  else {
    pTVar3 = (this->fields).playerCount;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) goto code_?;
    pLVar4 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                       ((MVTeamManager *)pSVar2,team,(MethodInfo *)0x0);
    if (pLVar4 == (List_1_MVPlayer_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?();
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    pTVar3 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) goto code_?;
    MVTeamManager::MVTeamManager_GetScore
              ((MVTeamManager *)pSVar2,team,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
  }
  func_?();
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    button = (this->fields).button;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
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

