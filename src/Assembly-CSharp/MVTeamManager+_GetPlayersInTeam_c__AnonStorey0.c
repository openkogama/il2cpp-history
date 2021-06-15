
/* Boolean <>m__0(MVPlayer) */

bool Assembly-CSharp.dll::MVTeamManager+<GetPlayersInTeam>c__AnonStorey0::
     MVTeamManager_GetPlayersInTeam_c_AnonStorey0___m__0
               (MVTeamManager_GetPlayersInTeam_c_AnonStorey0 *this,MVPlayer *player,
               MethodInfo *method)

{
  if (player != (MVPlayer *)0x0) {
    pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)player,(MethodInfo *)0x0);
    return pIVar1 == (IKogamaSetting *)(this->fields).team;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

