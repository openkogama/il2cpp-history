
/* Void Awake() */

void Assembly-CSharp.dll::Coroutines::Coroutines_Awake(Coroutines *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Coroutines);
    cRam_? = '\x01';
  }
  TypeInfo__Coroutines->static_fields->instance = this;
  func_?(TypeInfo__Coroutines->static_fields,this);
  return;
}


/* Void Start(IEnumerator) */

void Assembly-CSharp.dll::Coroutines::Coroutines_Start(IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (this != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              (this,coroutine,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Stop(IEnumerator) */

void Assembly-CSharp.dll::Coroutines::Coroutines_Stop(IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (this != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this,coroutine,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

