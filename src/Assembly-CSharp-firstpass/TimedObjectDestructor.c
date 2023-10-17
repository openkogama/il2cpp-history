
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::TimedObjectDestructor::TimedObjectDestructor_Awake
               (TimedObjectDestructor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_DestroyNow);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).detachChildren != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_DetachChildren
              (this_00,(MethodInfo *)0x0);
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* TimedObjectDestructor() */

void Assembly-CSharp-firstpass.dll::TimedObjectDestructor::TimedObjectDestructor__ctor
               (TimedObjectDestructor *this,MethodInfo *method)

{
  (this->fields).timeOut = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

