
/* IEnumerator WithCallback(Int32, UnityAction) */

IEnumerator *
Assembly-CSharp.dll::WaitForFrames::WaitForFrames_WithCallback
          (int32_t frameCount,UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WaitForFrames___WithCallback_d__4);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WaitForFrames___WithCallback_d__4;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)frameCount;
  value[1].klass = (Object__Class *)0x0;
  value[2].monitor = (MonitorData *)callback;
  func_?(&value[2].monitor,callback);
  return (IEnumerator *)value;
}


/* WaitForFrames(Int32) */

void Assembly-CSharp.dll::WaitForFrames::WaitForFrames__ctor
               (WaitForFrames *this,int32_t frameCount,MethodInfo *method)

{
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  (this->fields).targetFrameCount = iVar1 + frameCount;
  return;
}


/* Boolean get_keepWaiting() */

bool Assembly-CSharp.dll::WaitForFrames::WaitForFrames_get_keepWaiting
               (WaitForFrames *this,MethodInfo *method)

{
  iVar1 = (this->fields).targetFrameCount;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  return iVar1 < iVar2;
}

