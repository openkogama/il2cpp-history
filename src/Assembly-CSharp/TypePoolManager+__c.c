
/* Type <Awake>b__2_0(Pool) */

Type * Assembly-CSharp.dll::TypePoolManager+<>c::TypePoolManager_c__Awake_b__2_0
                 (TypePoolManager_c *this,Pool *p,MethodInfo *method)

{
  if ((p != (Pool *)0x0) && (this_00 = (p->fields).prefab, this_00 != (MonoBehaviour *)0x0)) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
    return pTVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar4)();
  return pTVar1;
}


/* TypePoolManager+<>c() */

void Assembly-CSharp.dll::TypePoolManager+<>c::TypePoolManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TypePoolManager____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TypePoolManager____c;
  value = (TypePoolManager_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__TypePoolManager____c->static_fields->__9 = value;
  func_?(TypeInfo__TypePoolManager____c->static_fields,value);
  return;
}

