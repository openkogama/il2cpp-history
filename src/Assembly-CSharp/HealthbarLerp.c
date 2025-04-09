
/* Void ExecuteEffect() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_ExecuteEffect
               (HealthbarLerp *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if ((bVar1 == 0) || ((this->fields).isInitialized == 0)) {
      return;
    }
    this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
    if ((this_00 != (ProgressBarAndroid *)0x0) &&
       (pPVar2 = (this->fields).targetProgressBar, pPVar2 != (ProgressBar *)0x0)) {
      fVar3 = (pPVar2->fields).progress;
      pfVar4 = &(this_00->fields).progress;
      if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,fVar3,(MethodInfo *)0x0);
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      pPVar2 = (this->fields).progressBar;
      (this->fields).lerpStart = fVar3;
      if (pPVar2 != (ProgressBar *)0x0) {
        (this->fields).startProgress = (pPVar2->fields).progress;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__HealthbarLerp___LerpProgress_d__10;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__HealthbarLerp___LerpProgress_d__10);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HealthbarLerp___LerpProgress_d__10;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnDisable
               (HealthbarLerp *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  pPVar1 = (this->fields).targetProgressBar;
  if ((pPVar1 != (ProgressBar *)0x0) &&
     (pPVar2 = (this->fields).progressBar, pPVar2 != (ProgressBar *)0x0)) {
    value = (pPVar1->fields).progress;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    (pPVar2->fields).progress = value;
    this_00 = (pPVar2->fields).progressBar;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp_OnEnable
               (HealthbarLerp *this,MethodInfo *method)

{
  pPVar1 = (this->fields).targetProgressBar;
  if ((pPVar1 != (ProgressBar *)0x0) &&
     (pPVar2 = (this->fields).progressBar, pPVar2 != (ProgressBar *)0x0)) {
    value = (pPVar1->fields).progress;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    (pPVar2->fields).progress = value;
    this_00 = (pPVar2->fields).progressBar;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,value,(MethodInfo *)0x0);
      (this->fields).isInitialized = 1;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* HealthbarLerp() */

void Assembly-CSharp.dll::HealthbarLerp::HealthbarLerp__ctor(HealthbarLerp *this,MethodInfo *method)

{
  (this->fields).lerpForSeconds = 1.0;
  (this->fields).lerpDelay = 0.4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

