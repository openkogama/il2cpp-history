
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__34::
     WinningConditionBriefing_FixAspectRatioDelay_d_34_MoveNext
               (WinningConditionBriefing_FixAspectRatioDelay_d_34 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__UnityEngine__WaitForEndOfFrame)
    ;
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 2;
      return 1;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((this_00 != (WinningConditionBriefing *)0x0) &&
       (pIVar2 = (this_00->fields).winConImage, pIVar2 != (Image *)0x0)) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pIVar2,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar3,parent,1,(MethodInfo *)0x0);
        pIVar2 = (this_00->fields).winConImage;
        if ((pIVar2 != (Image *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar3,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>d__34::
     WinningConditionBriefing_FixAspectRatioDelay_d_34_System_Collections_IEnumerator_Reset
               (WinningConditionBriefing_FixAspectRatioDelay_d_34 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WinningConditionBriefing___FixAspectRatioDelay_d__34__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

