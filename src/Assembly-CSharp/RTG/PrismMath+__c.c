
/* PrismMath+<>c() */

void Assembly-CSharp.dll::RTG::PrismMath+<>c::PrismMath_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PrismMath____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__PrismMath____c;
  value = (PrismMath_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__RTG__PrismMath____c->static_fields->__9 = value;
  func_?(TypeInfo__RTG__PrismMath____c->static_fields,value);
  return;
}

