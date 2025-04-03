
/* Void Activate() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Activate
               (NotificationFade *this,MethodInfo *method)

{
  (this->fields).pauseAt = (this->fields).duration;
  this_00 = (this->fields).group;
  (this->fields).playing = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this->fields).currentTime = 0.0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_OnDisable
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).playing != 0) {
    (this->fields).playing = 0;
    if ((this->fields).shouldHideWhenDone != 0) {
      this_00 = (this->fields).group;
      if (this_00 == (CanvasGroup *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
    }
    pAVar2 = (this->fields).OnFinished;
    (this->fields).currentTime = 0.0;
    if (pAVar2 != (Action *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
    }
  }
  return;
}


/* Void Unpause() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Unpause
               (NotificationFade *this,MethodInfo *method)

{
  fVar1 = (this->fields).pauseAt;
  fVar2 = (this->fields).duration;
  if (fVar1 != fVar2) {
    (this->fields).currentTime = fVar1;
    (this->fields).pauseAt = fVar2;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade_Update
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).playing == 0) {
    return;
  }
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).pauseAt;
  (this->fields).currentTime = fVar2;
  if (fVar1 < fVar2) {
    (this->fields).currentTime = fVar1;
  }
  this_00 = (this->fields).textVisibilityCurve;
  this_01 = (this->fields).group;
  if ((this_00 != (AnimationCurve *)0x0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (this_00,(this->fields).currentTime / (this->fields).duration,
                         (MethodInfo *)0x0), this_01 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_01,fVar1,(MethodInfo *)0x0);
    if ((this->fields).currentTime < (this->fields).duration) {
      return;
    }
    NotificationFade_OnDisable(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* NotificationFade() */

void Assembly-CSharp.dll::NotificationFade::NotificationFade__ctor
               (NotificationFade *this,MethodInfo *method)

{
  (this->fields).duration = 1.0;
  (this->fields).playing = 1;
  (this->fields).pauseAt = 1.0;
  (this->fields).shouldHideWhenDone = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsPaused() */

bool Assembly-CSharp.dll::NotificationFade::NotificationFade_get_IsPaused
               (NotificationFade *this,MethodInfo *method)

{
  if ((this->fields).pauseAt == (this->fields).duration) {
    return 0;
  }
  return 1;
}

