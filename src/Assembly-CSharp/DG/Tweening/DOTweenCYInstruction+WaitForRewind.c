
/* Boolean get_keepWaiting() */

bool Assembly-CSharp.dll::DG::Tweening::DOTweenCYInstruction+WaitForRewind::
     DOTweenCYInstruction_WaitForRewind_get_keepWaiting
               (DOTweenCYInstruction_WaitForRewind *this,MethodInfo *method)

{
  t = (this->fields).t;
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    return 0;
  }
  if ((t->fields)._playedOnce_k__BackingField == 0) {
    return 1;
  }
  fVar3 = (t->fields)._position_k__BackingField;
  iVar4 = DOTween.dll::DG::Tweening::TweenExtensions::TweenExtensions_CompletedLoops
                    (t,(MethodInfo *)0x0);
  return 0.0 < (float)(iVar4 + 1) * fVar3;
}

