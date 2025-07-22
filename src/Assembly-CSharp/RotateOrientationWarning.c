
/* Void Awake() */

void Assembly-CSharp.dll::RotateOrientationWarning::RotateOrientationWarning_Awake
               (RotateOrientationWarning *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                   );
    cRam_? = '\x01';
  }
  pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                              );
  (this->fields).image = pIVar1;
  func_?(&(this->fields).image,pIVar1);
  return;
}


/* IEnumerator RotationAnimationCoroutine() */

IEnumerator *
Assembly-CSharp.dll::RotateOrientationWarning::RotateOrientationWarning_RotationAnimationCoroutine
          (RotateOrientationWarning *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void SetAnimationState(Boolean) */

void Assembly-CSharp.dll::RotateOrientationWarning::RotateOrientationWarning_SetAnimationState
               (RotateOrientationWarning *this,bool isAnimating,MethodInfo *method)

{
  if (isAnimating == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8;
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


/* RotateOrientationWarning() */

void Assembly-CSharp.dll::RotateOrientationWarning::RotateOrientationWarning__ctor
               (RotateOrientationWarning *this,MethodInfo *method)

{
  (this->fields).targetRotationTime = 1.0;
  (this->fields).targetPauseTime = 0.4;
  (this->fields).targetFadeTime = 0.2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

