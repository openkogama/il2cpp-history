
/* Void <>m__0() */

void Assembly-CSharp.dll::PlayerListSelector+<Setup>c__AnonStorey0::
     PlayerListSelector_Setup_c_AnonStorey0___m__0
               (PlayerListSelector_Setup_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Set_active,(MethodInfo *)0x0);
  this_00 = (this->fields)._this;
  if (this_00 != (PlayerListSelector *)0x0) {
    PlayerListSelector::PlayerListSelector_SetActiveTeam
              (this_00,(this->fields).teamCallbackVal,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

