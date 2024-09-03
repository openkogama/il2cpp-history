
/* Int32 <SortByHitDistance>b__18_0(GameObjectRayHit, GameObjectRayHit) */

int32_t Assembly-CSharp.dll::RTG::GameObjectRayHit+<>c::
        GameObjectRayHit_c__SortByHitDistance_b__18_0
                  (GameObjectRayHit_c *this,GameObjectRayHit *h0,GameObjectRayHit *h1,
                  MethodInfo *method)

{
  if (h0 != (GameObjectRayHit *)0x0) {
    h0 = (GameObjectRayHit *)(h0->fields)._hitEnter;
    if (h1 != (GameObjectRayHit *)0x0) {
      iVar1 = mscorlib.dll::System::Single::Single_CompareTo_1
                        ((Single *)&h0,(h1->fields)._hitEnter,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* GameObjectRayHit+<>c() */

void Assembly-CSharp.dll::RTG::GameObjectRayHit+<>c::GameObjectRayHit_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectRayHit____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GameObjectRayHit____c;
  value = (GameObjectRayHit_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9 = value;
  func_?(TypeInfo__RTG__GameObjectRayHit____c->static_fields,value);
  return;
}

