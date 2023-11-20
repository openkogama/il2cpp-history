
/* MVOrientation MapFromResolution(Int32, Int32) */

MVOrientation__Enum
Assembly-CSharp.dll::Misc::OrientationControl::OrientationControl_MapFromResolution
          (int32_t width,int32_t height,MethodInfo *method)

{
  return (uint)(height <= width);
}


/* MVOrientation MapFromScreenOrientation(ScreenOrientation) */

MVOrientation__Enum
Assembly-CSharp.dll::Misc::OrientationControl::OrientationControl_MapFromScreenOrientation
          (ScreenOrientation__Enum screenOrientation,MethodInfo *method)

{
  if (screenOrientation == ScreenOrientation__Enum_Landscape) {
    return MVOrientation__Enum_LandscapeLeft;
  }
  MVar1 = MVOrientation__Enum_Portrait;
  if (screenOrientation == ScreenOrientation__Enum_LandscapeRight) {
    MVar1 = MVOrientation__Enum_LandscapeRight;
  }
  return MVar1;
}


/* Void PrintLog(String) */

void Assembly-CSharp.dll::Misc::OrientationControl::OrientationControl_PrintLog
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Misc__OrientationControl);
    func_?(&StringLiteral_OrientationControl__);
    cRam_? = '\x01';
  }
  if (TypeInfo__Misc__OrientationControl->static_fields->debugging != 0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_OrientationControl__,s,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
  }
  return;
}


/* MVOrientation get_CurrentOrientation() */

MVOrientation__Enum
Assembly-CSharp.dll::Misc::OrientationControl::OrientationControl_get_CurrentOrientation
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Misc__MVOrientation);
    func_?(&StringLiteral_Calculated_orientation__);
    cRam_? = '\x01';
  }
  SVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_orientation((MethodInfo *)0x0)
  ;
  if (SVar1 == ScreenOrientation__Enum_Landscape) {
    MVar2 = MVOrientation__Enum_LandscapeLeft;
  }
  else {
    MVar2 = MVOrientation__Enum_Portrait;
    if (SVar1 == ScreenOrientation__Enum_LandscapeRight) {
      MVar2 = MVOrientation__Enum_LandscapeRight;
    }
  }
  pMStack_3 = TypeInfo__Misc__MVOrientation;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pMStack_3,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Calculated_orientation__,pSVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__Misc__OrientationControl->static_fields->debugging != 0) {
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_OrientationControl__,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
  }
  return MVar2;
}

