
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CoroutineWorker+<Run>c__Iterator0::
     CoroutineWorker_Run_c_Iterator0_MoveNext
               (CoroutineWorker_Run_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pCVar2 = (this->fields)._this;
      if (pCVar2 == (CoroutineWorker *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pCVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Destroyed_coroutine_worker_,(MethodInfo *)0x0);
      (this->fields)._PC = -1;
    }
    return 0;
  }
  pCVar2 = (this->fields)._this;
  if (pCVar2 != (CoroutineWorker *)0x0) {
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
             MonoBehaviour_StartCoroutine_Auto
                       ((MonoBehaviour *)pCVar2,(this->fields).coroutine,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)pCVar3;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Reset() */

void Assembly-CSharp.dll::CoroutineWorker+<Run>c__Iterator0::CoroutineWorker_Run_c_Iterator0_Reset
               (CoroutineWorker_Run_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

