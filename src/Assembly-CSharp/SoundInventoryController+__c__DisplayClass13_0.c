
/* Boolean <Initialize>b__0(SoundTabInfo) */

bool Assembly-CSharp.dll::SoundInventoryController+<>c__DisplayClass13_0::
     SoundInventoryController_c_DisplayClass13_0__Initialize_b__0
               (SoundInventoryController_c_DisplayClass13_0 *this,SoundTabInfo *soundTabInfo,
               MethodInfo *method)

{
  if (soundTabInfo == (SoundTabInfo *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pSVar3 = (soundTabInfo->fields).name;
  pSVar4 = (this->fields).soundName;
  if (pSVar3 != pSVar4) {
    if (((pSVar3 != (String *)0x0) && (pSVar4 != (String *)0x0)) &&
       ((pSVar3->fields)._stringLength == (pSVar4->fields)._stringLength)) {
      bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(pSVar4->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      return bVar2 ^ 1;
    }
    return 1;
  }
  return 0;
}

