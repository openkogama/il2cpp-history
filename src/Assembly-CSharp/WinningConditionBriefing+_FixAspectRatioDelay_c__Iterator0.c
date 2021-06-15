
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>c__Iterator0::
     WinningConditionBriefing_FixAspectRatioDelay_c_Iterator0_MoveNext
               (WinningConditionBriefing_FixAspectRatioDelay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)this_00;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      pWVar2 = (this->fields)._this;
      if ((pWVar2 != (WinningConditionBriefing *)0x0) &&
         (pIVar3 = (pWVar2->fields).winConImage, pIVar3 != (Image *)0x0)) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pIVar3,(MethodInfo *)0x0);
        pWVar2 = (this->fields)._this;
        if ((pWVar2 != (WinningConditionBriefing *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pWVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar4,parent,1,(MethodInfo *)0x0);
          pWVar2 = (this->fields)._this;
          if (((pWVar2 != (WinningConditionBriefing *)0x0) &&
              (pIVar3 = (pWVar2->fields).winConImage, pIVar3 != (Image *)0x0)) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pIVar3,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar4,(MethodInfo *)0x0);
            (this->fields)._PC = -1;
            return 0;
          }
        }
      }
      func_?(0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 2;
      return 1;
    }
  }
  return 1;
}


/* Void Reset() */

void Assembly-CSharp.dll::WinningConditionBriefing+<FixAspectRatioDelay>c__Iterator0::
     WinningConditionBriefing_FixAspectRatioDelay_c_Iterator0_Reset
               (WinningConditionBriefing_FixAspectRatioDelay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

