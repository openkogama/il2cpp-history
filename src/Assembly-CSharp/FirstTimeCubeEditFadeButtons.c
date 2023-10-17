
/* Void Activate() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_Activate
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  pCVar1 = (this->fields).canvasGroup;
  (this->fields).currentTime = 0.0;
  (this->fields).doFading = 1;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,0.0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                (pCVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ActivateImmediate() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::
     FirstTimeCubeEditFadeButtons_ActivateImmediate
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  pCVar1 = (this->fields).canvasGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,1.0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                (pCVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_Awake
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  pCVar1 = (this->fields).canvasGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
              (pCVar1,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar1,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsEnabled() */

bool Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_IsEnabled
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 == (CanvasGroup *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_interactable
                    (this_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return 1;
  }
  return (this->fields).doFading;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_Update
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  if ((this->fields).doFading == 0) {
    return;
  }
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = _UNK_?;
  fVar2 = fVar2 + fVar1;
  pCVar4 = (this->fields).canvasGroup;
  (this->fields).currentTime = fVar2;
  fVar2 = fVar2 / (this->fields).fadeIn;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  if (pCVar4 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar4,fVar2,(MethodInfo *)0x0);
    if ((this->fields).currentTime < (this->fields).fadeIn) {
      return;
    }
    pCVar4 = (this->fields).canvasGroup;
    (this->fields).doFading = 0;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar4,1.0,(MethodInfo *)0x0);
      pCVar4 = (this->fields).canvasGroup;
      if (pCVar4 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                  (pCVar4,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeCubeEditFadeButtons() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons__ctor
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  (this->fields).fadeIn = 0.2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

