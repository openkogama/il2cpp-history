
/* IEnumerator DoTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::Worker::Worker_DoTo
          (Worker *this,float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Worker___DoTo_d__1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Worker___DoTo_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)duration;
  value[4].klass = (Object__Class *)callback;
  value[3].klass = (Object__Class *)startValue;
  value[3].monitor = (MonitorData *)endValue;
  func_?(value + 4,callback);
  return (IEnumerator *)value;
}


/* Void To(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::Worker::Worker_To
               (Worker *this,float duration,float startValue,float endValue,
               Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Worker___DoTo_d__1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Worker___DoTo_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)duration;
  value[4].klass = (Object__Class *)callback;
  value[3].klass = (Object__Class *)startValue;
  value[3].monitor = (MonitorData *)endValue;
  func_?(value + 4,callback);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}

