
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
    bVar1 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (Object__Class *)0x0) {
      pIVar2 = (this_00->_0).castClass;
      bVar1 = (POPCOUNT((uint)pIVar2 & 0xff) & 1U) == 0;
      if (pIVar2 != (Il2CppClass *)0x0) {
        piVar3 = *(int **)&(pIVar2->byval_arg).attrs;
        bVar1 = (POPCOUNT((uint)piVar3 & 0xff) & 1U) == 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x318))(piVar3,::StringLiteral__,*(undefined4 *)(*piVar3 + 0x31c));
          this_01 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>)
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_
                     ,(MethodInfo *)0x0);
          pIVar4 = pTween::pTween_To(0.3,0.0,1.0,(Action_1_Single_ *)this_01,(MethodInfo *)0x0);
          pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                   MonoBehaviour_StartCoroutine_Auto
                             ((MonoBehaviour *)this_00,pIVar4,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)pCVar5;
          func_?(&(this->fields).__2__current,pCVar5);
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    bVar1 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    unaff_ESI = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (unaff_ESI,(Object *)this_00,
               MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_,
               (MethodInfo *)0x0);
    pIVar4 = pTween::pTween_To(0.3,1.0,0.0,(Action_1_Single_ *)unaff_ESI,(MethodInfo *)0x0);
    bVar1 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 != (Object__Class *)0x0) {
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,pIVar4,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar5;
      func_?(&(this->fields).__2__current,pCVar5);
      goto code_?;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar6 = '\0';
  uVar7 = 0x104b;
  fVar8 = (float10)func_?();
  if (!bVar1) {
    *(char *)&unaff_ESI->klass = *(char *)&unaff_ESI->klass + (char)this_00 + -1 + cVar6;
    *(longlong *)((int)&(this_00->_0).namespaze + 3) = (longlong)fVar8;
    func_?(CONCAT22(uVar7,in_CS));
    pcVar9 = (code *)swi(3);
    bVar10 = (*pcVar9)();
    return bVar10;
  }
code_?:
  (this->fields).__1__state = 3;
  return 1;
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

