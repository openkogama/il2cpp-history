
/* WebGLWindow+<>c() */

void Assembly-CSharp.dll::WebGLSupport::WebGLWindow+<>c::WebGLWindow_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLWindow____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WebGLSupport__WebGLWindow____c);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__WebGLSupport__WebGLWindow____c->static_fields->__9 = (WebGLWindow_c *)value;
    func_?(TypeInfo__WebGLSupport__WebGLWindow____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

