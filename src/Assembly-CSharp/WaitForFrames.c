
/* IEnumerator Frames(Int32, UnityAction) */

IEnumerator *
Assembly-CSharp.dll::WaitForFrames::WaitForFrames_Frames
          (int32_t frameCount,UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WaitForFrames___Frames_d__0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WaitForFrames___Frames_d__0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)frameCount;
  value[1].klass = (Object__Class *)0x0;
  value[2].monitor = (MonitorData *)callback;
  func_?(&value[2].monitor,callback);
  return (IEnumerator *)value;
}

