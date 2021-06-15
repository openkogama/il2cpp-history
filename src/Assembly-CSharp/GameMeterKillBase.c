
/* Int32 GetCount(GameStatCounterType) */

int32_t Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_GetCount
                  (GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                     ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this != (SkyParam *)0x0) {
      iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this,(MethodInfo *)0x0);
      if (iVar2 < 2) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar3 != (MVLocalPlayer *)0x0) {
            iVar2 = MVPlayer::MVPlayer_GetGameStat
                              ((MVPlayer *)pMVar3,GameStatCounterType__Enum_None,(MethodInfo *)0x0);
            return iVar2;
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          this_00 = (GameStatCounterManager *)
                    DayNightCycle::DayNightCycle_get_CurrentStarsParam
                              ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                (MethodInfo *)0x0);
              if (this_00 != (GameStatCounterManager *)0x0) {
                iVar2 = MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_GetTeamCount
                                  (this_00,0xADDR,(MVTeam__Enum)team,(MethodInfo *)0x0);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_Initialize
               (GameMeterKillBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).killsText;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,TypeInfo__System__String->static_fields->Empty,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCount(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_SetCount
               (GameMeterKillBase *this,GameStatCounterType__Enum gameStatCounterType,int32_t limit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (SkyParam *)0x0) {
      iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_00,(MethodInfo *)0x0);
      if (iVar2 < 2) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
        MVPlayer::MVPlayer_GetGameStat
                  ((MVPlayer *)pMVar3,GameStatCounterType__Enum_None,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
        team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0);
        if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                  (this_01,(GameStatCounterType__Enum)pMVar1,(MVTeam__Enum)team,(MethodInfo *)0x0);
      }
      arg0 = (Object *)func_?();
      arg2 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::String::String_Concat_1
                (arg0,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
      if (piRam_? != (int *)0x0) {
        (**(code **)(*piRam_? + 0x308))();
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

