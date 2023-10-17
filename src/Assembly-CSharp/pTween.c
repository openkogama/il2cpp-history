
/* IEnumerator RealtimeTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_RealtimeTo
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__pTween___RealtimeTo_d__1);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__pTween___RealtimeTo_d__1);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[2].klass = (Object__Class *)duration;
    value[2].monitor = (MonitorData *)callback;
    value[3].klass = (Object__Class *)startValue;
    value[1].klass = (Object__Class *)0x0;
    value[3].monitor = (MonitorData *)endValue;
    func_?(&value[2].monitor,callback);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator To(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__pTween___To_d__0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__pTween___To_d__0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[2].klass = (Object__Class *)duration;
    value[2].monitor = (MonitorData *)callback;
    value[3].klass = (Object__Class *)startValue;
    value[1].klass = (Object__Class *)0x0;
    value[3].monitor = (MonitorData *)endValue;
    func_?(&value[2].monitor,callback);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator To(Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To_1
          (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  pIVar1 = pTween_To(duration,0.0,1.0,callback,(MethodInfo *)0x0);
  return pIVar1;
}


/* Void WorkerTo(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo
               (float duration,float startValue,float endValue,Action_1_Single_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (this != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
    this_00 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)duration);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = this_00;
        func_?(value + 2);
        value[2].monitor = (MonitorData *)duration;
        value[4].klass = (Object__Class *)callback;
        value[3].klass = (Object__Class *)startValue;
        value[3].monitor = (MonitorData *)endValue;
        func_?(value + 4,callback);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WorkerTo(Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo_1
               (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    func_?(&TypeInfo__UnityEngine__GameObject);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (this != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
    this_00 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)duration);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = this_00;
        func_?(value + 2);
        value[4].klass = (Object__Class *)callback;
        value[2].monitor = (MonitorData *)duration;
        value[3].klass = (Object__Class *)0x0;
        value[3].monitor = (MonitorData *)0x3f800000;
        func_?(value + 4,callback);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

