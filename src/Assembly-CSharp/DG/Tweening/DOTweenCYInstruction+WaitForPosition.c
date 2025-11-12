
/* Boolean get_keepWaiting() */

bool Assembly-CSharp.dll::DG::Tweening::DOTweenCYInstruction+WaitForPosition::
     DOTweenCYInstruction_WaitForPosition_get_keepWaiting
               (DOTweenCYInstruction_WaitForPosition *this,MethodInfo *method)

{
  pTVar1 = (this->fields).t;
  if (pTVar1 == (Tween *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pTVar1->fields)._active_k__BackingField == 0) {
    return 0;
  }
  return (float)((pTVar1->fields).completedLoops + 1) * (pTVar1->fields)._position_k__BackingField <
         (this->fields).position;
}

