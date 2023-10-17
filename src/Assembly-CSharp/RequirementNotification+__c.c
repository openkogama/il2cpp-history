
/* Void <Initialize>b__11_0(GameObject) */

void Assembly-CSharp.dll::RequirementNotification+<>c::RequirementNotification_c__Initialize_b__11_0
               (RequirementNotification_c *this,GameObject *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)x,(MethodInfo *)0x0);
  return;
}


/* RequirementNotification+<>c() */

void Assembly-CSharp.dll::RequirementNotification+<>c::RequirementNotification_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RequirementNotification____c);
    cRam_? = '\x01';
  }
  value = (RequirementNotification_c *)func_?(TypeInfo__RequirementNotification____c);
  if (value != (RequirementNotification_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__RequirementNotification____c->static_fields->__9 = value;
    func_?(TypeInfo__RequirementNotification____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

