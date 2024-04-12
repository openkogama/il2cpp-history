
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
  this_00 = (Object__Class *)(this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if (((this_00 != (Object__Class *)0x0) &&
        (pIVar1 = (this_00->_0).castClass, pIVar1 != (Il2CppClass *)0x0)) &&
       (piVar2 = *(int **)&(pIVar1->byval_arg).attrs, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x318))(piVar2,::StringLiteral__,*(undefined4 *)(*piVar2 + 0x31c));
      pUVar3 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_,
                 (MethodInfo *)0x0);
      pIVar4 = pTween::pTween_To(0.3,0.0,1.0,(Action_1_Single_ *)pUVar3,(MethodInfo *)0x0);
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,pIVar4,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar5;
      func_?(&(this->fields).__2__current,pCVar5);
      (this->fields).__1__state = 1;
      return 1;
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = this_00;
      func_?(value + 2,this_00);
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto
                         ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar5;
      func_?(&(this->fields).__2__current,pCVar5);
      (this->fields).__1__state = 2;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    pUVar3 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar3,(Object *)this_00,
               MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_,
               (MethodInfo *)0x0);
    pIVar4 = pTween::pTween_To(0.3,1.0,0.0,(Action_1_Single_ *)pUVar3,(MethodInfo *)0x0);
    if (this_00 != (Object__Class *)0x0) {
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,pIVar4,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar5;
      func_?(&(this->fields).__2__current,pCVar5);
      (this->fields).__1__state = 3;
      return 1;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar6 = func_?();
  *(char *)&this->klass = (char)iVar6;
  *(char *)(iVar6 + 0x35) = *(char *)(iVar6 + 0x35) + (char)iVar6;
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
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

