
/* MVOrientation MapFromResolution(Int32, Int32) */

MVOrientation__Enum
Assembly-CSharp.dll::Misc::OrientationControl::OrientationControl_MapFromResolution
          (int32_t width,int32_t height,MethodInfo *method)

{
  return (MVOrientation__Enum)(height <= width);
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
    FUN_?(&TypeInfo__Misc__MVOrientation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Calculated_orientation__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    MVar3 = (*pcVar1)();
    return MVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (iVar4 == 3) {
    MVar3 = MVOrientation__Enum_LandscapeLeft;
  }
  else {
    MVar3 = MVOrientation__Enum_Portrait;
    if (iVar4 == 4) {
      MVar3 = MVOrientation__Enum_LandscapeRight;
    }
  }
  EStack_5.klass = (Enum__Class *)TypeInfo__Misc__MVOrientation;
  EStack_5.monitor = (MonitorData *)0xffffffffffffffff;
  MStack_6 = MVar3;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_Calculated_orientation__,str1,(MethodInfo *)0x0);
  return MVar3;
}

