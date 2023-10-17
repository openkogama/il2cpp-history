
/* Boolean <Initialize>b__0(SoundTabInfo) */

bool Assembly-CSharp.dll::SoundInventoryController+<>c__DisplayClass13_0::
     SoundInventoryController_c_DisplayClass13_0__Initialize_b__0
               (SoundInventoryController_c_DisplayClass13_0 *this,SoundTabInfo *soundTabInfo,
               MethodInfo *method)

{
  if (soundTabInfo != (SoundTabInfo *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_op_Inequality
                      ((soundTabInfo->fields).name,(this->fields).soundName,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

