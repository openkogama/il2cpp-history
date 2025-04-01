
/* IEnumerator Run(IEnumerator) */

IEnumerator *
Assembly-CSharp.dll::CoroutineWorker::CoroutineWorker_Run
          (CoroutineWorker *this,IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CoroutineWorker___Run_d__1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CoroutineWorker___Run_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)coroutine;
  func_?(&value[2].monitor,coroutine);
  return (IEnumerator *)value;
}


/* Void RunCoroutineAndDestroy(IEnumerator) */

void Assembly-CSharp.dll::CoroutineWorker::CoroutineWorker_RunCoroutineAndDestroy
               (CoroutineWorker *this,IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_RunCoroutineAndDestroy);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,coroutine,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_RunCoroutineAndDestroy,(MethodInfo *)0x0);
  return;
}

