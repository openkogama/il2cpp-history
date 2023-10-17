
/* Void DoAction() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_DoAction
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  if ((this->fields).finishedAction != (Action_1_UnityEngine_GameObject_ *)0x0) {
    pAVar1 = (this->fields).finishedAction;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).targetGameObject,
               (pAVar1->fields)._._.method);
  }
  (this->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
  func_?(&(this->fields).finishedAction,0);
  (this->fields).targetGameObject = (GameObject *)0x0;
  func_?(&(this->fields).targetGameObject,0);
  return;
}


/* Void StartFadeIn() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeIn
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  (this->fields).fadingIn = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this->fields).currentFadeInTime = 0.0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartFadeOut(Action`1[UnityEngine.GameObject], GameObject) */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
               (FirstTimeFadeHandler *this,Action_1_UnityEngine_GameObject_ *finishedAction,
               GameObject *targetGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  (this->fields).currentFadeOutTime = (this->fields).fadeOutTime;
  this_00 = (this->fields).canvasGroup;
  (this->fields).fadingOut = 1;
  if (this_00 == (CanvasGroup *)0x0) {
    func_?();
  }
  else {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,1.0,(MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)(this->fields).finishedAction,(Delegate *)finishedAction,
                        (MethodInfo *)0x0);
    if (pDVar1 == (Delegate *)0x0) {
      (this->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
code_?:
      func_?();
      (this->fields).targetGameObject = targetGameObject;
      func_?(&(this->fields).targetGameObject,targetGameObject);
      return;
    }
    pAVar2 = (Action_1_UnityEngine_GameObject_ *)func_?();
    if (pAVar2 != (Action_1_UnityEngine_GameObject_ *)0x0) {
      (this->fields).finishedAction = pAVar2;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_Update
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  if ((this->fields).fadingOut == 0) {
    if ((this->fields).fadingIn != 0) {
      fVar1 = (this->fields).currentFadeInTime;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar2 = fVar2 + fVar1;
      pCVar3 = (this->fields).canvasGroup;
      (this->fields).currentFadeInTime = fVar2;
      if (pCVar3 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar3,fVar2 / (this->fields).fadeInTime,(MethodInfo *)0x0);
      if ((this->fields).fadeInTime <= (this->fields).currentFadeInTime) {
        (this->fields).fadingIn = 0;
      }
    }
  }
  else {
    fVar1 = (this->fields).currentFadeOutTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    pCVar3 = (this->fields).canvasGroup;
    (this->fields).currentFadeOutTime = fVar1;
    if (pCVar3 == (CanvasGroup *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,fVar1 / (this->fields).fadeOutTime,(MethodInfo *)0x0);
    if ((this->fields).currentFadeOutTime <= 0.0) {
      (this->fields).fadingOut = 0;
      if ((this->fields).finishedAction != (Action_1_UnityEngine_GameObject_ *)0x0) {
        pAVar5 = (this->fields).finishedAction;
        (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code);
      }
      (this->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
      func_?();
      (this->fields).targetGameObject = (GameObject *)0x0;
      func_?(&(this->fields).targetGameObject,0);
      return;
    }
  }
  return;
}


/* FirstTimeFadeHandler() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler__ctor
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  (this->fields).fadeOutTime = 0.3;
  (this->fields).fadeInTime = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

