
/* Void Awake() */

void Assembly-CSharp.dll::Coroutines::Coroutines_Awake(Coroutines *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__Coroutines->static_fields->instance = this;
  return;
}


/* Void Start(IEnumerator) */

void Assembly-CSharp.dll::Coroutines::Coroutines_Start(IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (this != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              (this,coroutine,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

