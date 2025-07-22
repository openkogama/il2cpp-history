
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
  EStack_3.klass = (Enum__Class *)TypeInfo__Misc__MVOrientation;
  EStack_3.monitor = (MonitorData *)0xffffffff;
  MStack_4 = MVar2;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_Calculated_orientation__,str1,(MethodInfo *)0x0);
  return MVar2;
}

