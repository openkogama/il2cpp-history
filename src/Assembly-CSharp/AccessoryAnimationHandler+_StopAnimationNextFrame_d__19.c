
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>d__19::
     AccessoryAnimationHandler_StopAnimationNextFrame_d_19_MoveNext
               (AccessoryAnimationHandler_StopAnimationNextFrame_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._hasFramePassed_5__2 = 0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((this->fields)._hasFramePassed_5__2 != 0) {
    if ((pAVar2 != (AccessoryAnimationHandler *)0x0) &&
       (this_00 = (pAVar2->fields).animations, this_00 != (Animation *)0x0)) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Stop
                (this_00,(MethodInfo *)0x0);
      ppSVar3 = &(pAVar2->fields).currentCrossFadedAnimation;
      *ppSVar3 = ::StringLiteral__;
      func_?(ppSVar3,::StringLiteral__);
      return 0;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  ppOVar6 = &(this->fields).__2__current;
  (this->fields)._hasFramePassed_5__2 = 1;
  *ppOVar6 = (Object *)0x0;
  func_?(ppOVar6,0);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>d__19::
     AccessoryAnimationHandler_StopAnimationNextFrame_d_19_System_Collections_IEnumerator_Reset
               (AccessoryAnimationHandler_StopAnimationNextFrame_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AccessoryAnimationHandler___StopAnimationNextFrame_d__19__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

