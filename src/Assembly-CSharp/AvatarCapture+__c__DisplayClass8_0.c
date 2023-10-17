
/* Int32 <CapturePlayersInTeam>b__0(MVPlayer) */

int32_t Assembly-CSharp.dll::AvatarCapture+<>c__DisplayClass8_0::
        AvatarCapture_c_DisplayClass8_0__CapturePlayersInTeam_b__0
                  (AvatarCapture_c_DisplayClass8_0 *this,MVPlayer *o,MethodInfo *method)

{
  this = (AvatarCapture_c_DisplayClass8_0 *)CONCAT31(this._1_3_,(this->fields).counterType);
  if (o != (MVPlayer *)0x0) {
    iVar1 = MVPlayer::MVPlayer_GetGameStat(o,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
    return iVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}

