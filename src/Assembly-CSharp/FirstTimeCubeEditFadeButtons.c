
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
  if (this_00 != (CanvasGroup *)0x0) {
    bVar1 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_interactable
                      (this_00,(MethodInfo *)0x0);
    bVar2 = 1;
    if (bVar1 == 0) {
      bVar2 = (this->fields).doFading;
    }
    return bVar2 != 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_Update
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).doFading == 0) {
    return;
  }
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pCVar3 = (this->fields).canvasGroup;
  fVar1 = (this->fields).fadeIn;
  (this->fields).currentTime = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                    (fVar2 / fVar1,(MethodInfo *)0x0);
  if (pCVar3 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,fVar1,(MethodInfo *)0x0);
    if ((this->fields).currentTime < (this->fields).fadeIn) {
      return;
    }
    pCVar3 = (this->fields).canvasGroup;
    (this->fields).doFading = 0;
    if (pCVar3 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar3,1.0,(MethodInfo *)0x0);
      pCVar3 = (this->fields).canvasGroup;
      if (pCVar3 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
                  (pCVar3,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FirstTimeCubeEditFadeButtons() */

void Assembly-CSharp.dll::FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons__ctor
               (FirstTimeCubeEditFadeButtons *this,MethodInfo *method)

{
  (this->fields).fadeIn = 0.2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

