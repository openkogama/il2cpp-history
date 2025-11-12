
/* Boolean get_keepWaiting() */

bool Assembly-CSharp.dll::DG::Tweening::DOTweenCYInstruction+WaitForKill::
     DOTweenCYInstruction_WaitForKill_get_keepWaiting
               (DOTweenCYInstruction_WaitForKill *this,MethodInfo *method)

{
  pTVar1 = (this->fields).t;
  if (pTVar1 != (Tween *)0x0) {
    return (pTVar1->fields)._active_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

