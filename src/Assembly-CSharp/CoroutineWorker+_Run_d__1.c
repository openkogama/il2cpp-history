
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CoroutineWorker+<Run>d__1::CoroutineWorker_Run_d_1_MoveNext
               (CoroutineWorker_Run_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Destroyed_coroutine_worker_);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (MonoBehaviour *)(this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (MonoBehaviour *)0x0) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto(this_00,(this->fields).coroutine,(MethodInfo *)0x0)
      ;
      ppOVar3 = &(this->fields).__2__current;
      *ppOVar3 = (Object *)pCVar2;
      func_?(ppOVar3,pCVar2);
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 == (MonoBehaviour *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Destroyed_coroutine_worker_,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::CoroutineWorker+<Run>d__1::
     CoroutineWorker_Run_d_1_System_Collections_IEnumerator_Reset
               (CoroutineWorker_Run_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__CoroutineWorker___Run_d__1__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

