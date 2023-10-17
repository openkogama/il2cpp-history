
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_MoveNext
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_
                   );
    func_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 != (WinningConditionDebriefing *)0x0) &&
       (this_01 = (this_00->fields).debriefing, this_01 != (DebriefingWinnerGUI *)0x0)) {
      DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
                (this_01,::StringLiteral__,(MethodInfo *)0x0);
      this_02 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
      unaff_EBX = (UnityAction_1_System_Single_ *)0x0;
      if (this_02 != (UnityAction_1_System_Single_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (this_02,(Object *)this_00,
                   MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_,
                   (MethodInfo *)0x0);
        pIVar1 = pTween::pTween_To(0.3,0.0,1.0,(Action_1_Single_ *)this_02,(MethodInfo *)0x0);
        pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                 MonoBehaviour_StartCoroutine_Auto
                           ((MonoBehaviour *)this_00,pIVar1,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)pCVar2;
        func_?(&(this->fields).__2__current,pCVar2);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (WinningConditionDebriefing *)0x0) {
      pIVar1 = WinningConditionDebriefing::WinningConditionDebriefing_WaitForFadeOut
                         (this_00,(MethodInfo *)0x0);
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,pIVar1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar2;
      func_?(&(this->fields).__2__current,pCVar2);
      (this->fields).__1__state = 2;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    unaff_EBX = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    if (unaff_EBX != (UnityAction_1_System_Single_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (unaff_EBX,(Object *)this_00,
                 MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_,
                 (MethodInfo *)0x0);
      pIVar1 = pTween::pTween_To(0.3,1.0,0.0,(Action_1_Single_ *)unaff_EBX,(MethodInfo *)0x0);
      if (this_00 != (WinningConditionDebriefing *)0x0) {
        pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                 MonoBehaviour_StartCoroutine_Auto
                           ((MonoBehaviour *)this_00,pIVar1,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)pCVar2;
        func_?(&(this->fields).__2__current,pCVar2);
        (this->fields).__1__state = 3;
        return 1;
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar3 = '\0';
  func_?();
  cRam_? = cRam_? + extraout_CL + cVar3;
  pcVar4 = (code *)swi(3);
  pURam55104298 = unaff_EBX;
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

