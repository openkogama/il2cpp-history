
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::TimedObjectDestructor::TimedObjectDestructor_Awake
               (TimedObjectDestructor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_Invoke
            ((MonoBehaviour *)this,StringLiteral_DestroyNow,(this->fields).timeOut,(MethodInfo *)0x0
            );
  return;
}


/* Void DestroyNow() */

void Assembly-CSharp-firstpass.dll::TimedObjectDestructor::TimedObjectDestructor_DestroyNow
               (TimedObjectDestructor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).detachChildren != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_DetachChildren
              (this_00,(MethodInfo *)0x0);
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}

