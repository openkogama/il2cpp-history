
/* IEnumerator CheckIfAlive() */

IEnumerator *
Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_CheckIfAlive
          (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_OnEnable
               (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CheckIfAlive);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
            ((MonoBehaviour *)this,StringLiteral_CheckIfAlive,(MethodInfo *)0x0);
  return;
}

