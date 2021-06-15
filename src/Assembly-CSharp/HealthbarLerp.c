
/* Void ExecuteEffect() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_ExecuteEffect
               (HealthbarLerp *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if ((bVar1 == 0) || ((this->fields).isInitialized == 0)) {
      return;
    }
    pPVar2 = (ProgressBarAndroid *)(this->fields).progressBar;
    if (pPVar2 != (ProgressBarAndroid *)0x0) {
      fVar3 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar2,(MethodInfo *)0x0);
      pPVar2 = (ProgressBarAndroid *)(this->fields).targetProgressBar;
      if (pPVar2 != (ProgressBarAndroid *)0x0) {
        fVar4 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar2,(MethodInfo *)0x0);
        if (fVar3 < fVar4) {
          pPVar2 = (ProgressBarAndroid *)(this->fields).targetProgressBar;
          this_00 = (this->fields).progressBar;
          if ((pPVar2 == (ProgressBarAndroid *)0x0) ||
             (fVar3 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar2,(MethodInfo *)0x0),
             this_00 == (ProgressBar *)0x0)) goto code_?;
          ProgressBar::ProgressBar_set_Progress(this_00,fVar3,(MethodInfo *)0x0);
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
        pPVar2 = (ProgressBarAndroid *)(this->fields).progressBar;
        (this->fields).lerpStart = fVar3;
        if (pPVar2 != (ProgressBarAndroid *)0x0) {
          fVar3 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar2,(MethodInfo *)0x0);
          (this->fields).startProgress = fVar3;
          method_00 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                    ((MonoBehaviour *)this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_02 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
          if (this_02 != (ScaleAnimationBase *)0x0) {
            (this_02->fields).state = (int32_t)this;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this,(IEnumerator *)this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator LerpProgress() */

IEnumerator *
Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_LerpProgress
          (HealthbarLerp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HealthbarLerp___LerpProgress_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnDisable
               (HealthbarLerp *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  this_00 = (ProgressBarAndroid *)(this->fields).targetProgressBar;
  this_01 = (this->fields).progressBar;
  if (this_00 != (ProgressBarAndroid *)0x0) {
    value = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_00,(MethodInfo *)0x0);
    if (this_01 != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnEnable
               (HealthbarLerp *this,MethodInfo *method)

{
  this_00 = (ProgressBarAndroid *)(this->fields).targetProgressBar;
  this_01 = (this->fields).progressBar;
  if (this_00 != (ProgressBarAndroid *)0x0) {
    value = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_00,(MethodInfo *)0x0);
    if (this_01 != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress(this_01,value,(MethodInfo *)0x0);
      (this->fields).isInitialized = 1;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* HealthbarLerp() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp__ctor(HealthbarLerp *this,MethodInfo *method)

{
  (this->fields).lerpForSeconds = 1.0;
  (this->fields).lerpDelay = 0.4;
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

