
/* Void FadeIn() */

void Assembly-CSharp.dll::FirstTimeEventMessage::FirstTimeEventMessage_FadeIn
               (FirstTimeEventMessage *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  if (pFVar1 != (FirstTimeFadeHandler *)0x0) {
    this_00 = (pFVar1->fields).canvasGroup;
    (pFVar1->fields).fadingIn = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pFVar1->fields).currentFadeInTime = 0.0;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FadeOut(Action`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::FirstTimeEventMessage::FirstTimeEventMessage_FadeOut
               (FirstTimeEventMessage *this,Action_1_UnityEngine_GameObject_ *onFinished,
               MethodInfo *method)

{
  this_00 = (this->fields).fader;
  targetGameObject =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                 ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (FirstTimeFadeHandler *)0x0) {
    FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
              (this_00,onFinished,targetGameObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

