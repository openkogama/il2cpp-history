
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Worker+<DoTo>d__1::Worker_DoTo_d_1_MoveNext
               (Worker_DoTo_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (MonoBehaviour *)(this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    routine = pTween::pTween_To((this->fields).duration,(this->fields).startValue,
                                (this->fields).endValue,(this->fields).callback,(MethodInfo *)0x0);
    if (this_00 != (MonoBehaviour *)0x0) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto(this_00,routine,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pCVar2;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
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
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Worker+<DoTo>d__1::Worker_DoTo_d_1_System_Collections_IEnumerator_Reset
               (Worker_DoTo_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__Worker___DoTo_d__1__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

