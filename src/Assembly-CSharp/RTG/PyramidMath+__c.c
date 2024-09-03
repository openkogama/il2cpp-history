
/* Int32 <Raycast>b__1_0(Single, Single) */

int32_t Assembly-CSharp.dll::RTG::PyramidMath+<>c::PyramidMath_c__Raycast_b__1_0
                  (PyramidMath_c *this,float t0,float t1,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Single::Single_CompareTo_1((Single *)&t0,t1,(MethodInfo *)0x0);
  return iVar1;
}


/* PyramidMath+<>c() */

void Assembly-CSharp.dll::RTG::PyramidMath+<>c::PyramidMath_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PyramidMath____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PyramidMath____c;
  value = (PyramidMath_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__RTG__PyramidMath____c->static_fields->__9 = value;
  func_?(TypeInfo__RTG__PyramidMath____c->static_fields,value);
  return;
}

