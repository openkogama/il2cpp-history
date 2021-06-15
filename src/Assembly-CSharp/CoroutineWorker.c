
/* IEnumerator Run(IEnumerator) */

IEnumerator *
Assembly-CSharp.dll::CoroutineWorker::CoroutineWorker_Run
          (CoroutineWorker *this,IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CoroutineWorker___Run_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    (this_00->fields)._._._._.m_CachedPtr = coroutine;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void RunCoroutineAndDestroy(IEnumerator) */

void Assembly-CSharp.dll::CoroutineWorker::CoroutineWorker_RunCoroutineAndDestroy
               (CoroutineWorker *this,IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,coroutine,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_RunCoroutineAndDestroy,(MethodInfo *)0x0);
  return;
}

