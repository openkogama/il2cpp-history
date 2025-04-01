
/* IEnumerator CheckIfAlive() */

IEnumerator *
Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_CheckIfAlive
          (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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

