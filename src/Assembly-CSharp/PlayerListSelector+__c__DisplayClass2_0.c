
/* Void <Setup>b__0() */

void Assembly-CSharp.dll::PlayerListSelector+<>c__DisplayClass2_0::
     PlayerListSelector_c_DisplayClass2_0__Setup_b__0
               (PlayerListSelector_c_DisplayClass2_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_Set_active);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Set_active,(MethodInfo *)0x0);
  this_00 = (this->fields).__4__this;
  if (this_00 != (PlayerListSelector *)0x0) {
    PlayerListSelector::PlayerListSelector_SetActiveTeam
              (this_00,(this->fields).teamCallbackVal,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

