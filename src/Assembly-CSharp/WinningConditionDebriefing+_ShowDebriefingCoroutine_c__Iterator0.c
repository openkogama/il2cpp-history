
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>c__Iterator0::
     WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0_MoveNext
               (WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar1) {
  case 0:
    pWVar2 = (this->fields)._this;
    if (pWVar2 != (WinningConditionDebriefing *)0x0) {
      this_00 = (pWVar2->fields).debriefing;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      if (this_00 != (DebriefingWinnerGUI *)0x0) {
        DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
                  (this_00,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
        pWVar2 = (this->fields)._this;
        if (pWVar2 != (WinningConditionDebriefing *)0x0) {
          fVar3 = (pWVar2->fields).fadeTime;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<float>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_c__Iterator0____m__0_float_
                     ,MethodInfo__System__Action<float>__Action_System__Object__void__);
          pIVar5 = pTween::pTween_To(fVar3,0.0,1.0,(Action_1_Single_ *)pUVar4,(MethodInfo *)0x0);
          pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                   MonoBehaviour_StartCoroutine_Auto
                             ((MonoBehaviour *)pWVar2,pIVar5,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)pCVar6;
          if ((this->fields)._disposing != 0) {
            return 1;
          }
          (this->fields)._PC = 1;
          return 1;
        }
      }
    }
    break;
  case 1:
    pWVar2 = (this->fields)._this;
    if (pWVar2 != (WinningConditionDebriefing *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = (ScaleAnimationBase *)
                func_?(TypeInfo__WinningConditionDebriefing___WaitForFadeOut_c__Iterator1);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_7);
      if ((this_01 != (ScaleAnimationBase *)0x0) &&
         ((this_01->fields)._._._._.m_CachedPtr = pWVar2,
         pWVar2 != (WinningConditionDebriefing *)0x0)) {
        pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                 MonoBehaviour_StartCoroutine_Auto
                           ((MonoBehaviour *)pWVar2,(IEnumerator *)this_01,(MethodInfo *)0x0);
        (this->fields)._current = (Object *)pCVar6;
        if ((this->fields)._disposing != 0) {
          return 1;
        }
        (this->fields)._PC = 2;
        return 1;
      }
    }
    break;
  case 2:
    pWVar2 = (this->fields)._this;
    if (pWVar2 != (WinningConditionDebriefing *)0x0) {
      fVar3 = (pWVar2->fields).fadeTime;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<float>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_c__Iterator0____m__1_float_
                 ,MethodInfo__System__Action<float>__Action_System__Object__void__);
      pIVar5 = pTween::pTween_To(fVar3,1.0,0.0,(Action_1_Single_ *)pUVar4,(MethodInfo *)0x0);
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pWVar2,pIVar5,(MethodInfo *)0x0);
      (this->fields)._current = (Object *)pCVar6;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 3;
      }
      return 1;
    }
    break;
  default:
    return 0;
  }
  func_?(0);
  pcVar8 = (code *)swi(1);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>c__Iterator0::
     WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0_Reset
               (WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0 *this,
               MethodInfo *method)

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


/* Void <>m__0(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>c__Iterator0::
     WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0___m__0
               (WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0 *this,float t,
               MethodInfo *method)

{
  pWVar1 = (this->fields)._this;
  if ((pWVar1 != (WinningConditionDebriefing *)0x0) &&
     (this_00 = (pWVar1->fields).group, this_00 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>c__Iterator0::
     WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0___m__1
               (WinningConditionDebriefing_ShowDebriefingCoroutine_c_Iterator0 *this,float t,
               MethodInfo *method)

{
  pWVar1 = (this->fields)._this;
  if ((pWVar1 != (WinningConditionDebriefing *)0x0) &&
     (this_00 = (pWVar1->fields).group, this_00 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == _UNK_?) {
      pWVar1 = (this->fields)._this;
      if (pWVar1 == (WinningConditionDebriefing *)0x0) goto code_?;
      WinningConditionDebriefing::WinningConditionDebriefing_Clear(pWVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

