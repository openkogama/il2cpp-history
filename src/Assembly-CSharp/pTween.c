
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
  method_00 = TypeInfo__pTween___RealtimeTo_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)duration;
  value[3].klass = (Object__Class *)startValue;
  value[1].klass = (Object__Class *)0x0;
  value[3].monitor = (MonitorData *)endValue;
  value[2].monitor = (MonitorData *)callback;
  func_?(&value[2].monitor,callback);
  return (IEnumerator *)value;
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
  method_00 = TypeInfo__pTween___To_d__0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)duration;
  value[3].klass = (Object__Class *)startValue;
  value[1].klass = (Object__Class *)0x0;
  value[3].monitor = (MonitorData *)endValue;
  value[2].monitor = (MonitorData *)callback;
  func_?(&value[2].monitor,callback);
  return (IEnumerator *)value;
}


/* IEnumerator To(Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To_1
          (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__pTween___To_d__0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__pTween___To_d__0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)duration;
  value[3].klass = (Object__Class *)0x0;
  value[3].monitor = (MonitorData *)0x3f800000;
  value[2].monitor = (MonitorData *)callback;
  func_?(&value[2].monitor,callback);
  return (IEnumerator *)value;
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
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    this_00 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__Worker___DoTo_d__1;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = this_00;
      func_?(value + 2,this_00);
      value[2].monitor = (MonitorData *)duration;
      value[3].klass = (Object__Class *)startValue;
      value[3].monitor = (MonitorData *)endValue;
      value[4].klass = (Object__Class *)callback;
      func_?(value + 4,callback);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
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
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(this,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    this_00 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__Worker___DoTo_d__1;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = this_00;
      func_?(value + 2,this_00);
      value[2].monitor = (MonitorData *)duration;
      value[3].klass = (Object__Class *)0x0;
      value[3].monitor = (MonitorData *)0x3f800000;
      value[4].klass = (Object__Class *)callback;
      func_?(value + 4,callback);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this_00,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

