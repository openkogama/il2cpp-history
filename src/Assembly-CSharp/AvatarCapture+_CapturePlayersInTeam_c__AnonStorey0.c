
/* Int32 <>m__0(MVPlayer) */

int32_t Assembly-CSharp.dll::AvatarCapture+<CapturePlayersInTeam>c__AnonStorey0::
        AvatarCapture_CapturePlayersInTeam_c_AnonStorey0___m__0
                  (AvatarCapture_CapturePlayersInTeam_c_AnonStorey0 *this,MVPlayer *o,
                  MethodInfo *method)

{
  this = (AvatarCapture_CapturePlayersInTeam_c_AnonStorey0 *)
         CONCAT31(this._1_3_,(this->fields).counterType);
  if (o != (MVPlayer *)0x0) {
    iVar1 = MVPlayer::MVPlayer_GetGameStat(o,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
    return iVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}

