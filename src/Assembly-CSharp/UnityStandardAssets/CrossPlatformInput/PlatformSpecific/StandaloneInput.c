
/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
      StandaloneInput::StandaloneInput_GetAxis
                (StandaloneInput *this,String *name,bool raw,MethodInfo *method)

{
  if (raw != 0) {
    fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetAxisRaw(name,(MethodInfo *)0x0);
    return fVar1;
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(name,(MethodInfo *)0x0);
  return fVar1;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButton(StandaloneInput *this,String *name,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetButton(name,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButtonUp(StandaloneInput *this,String *name,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetButtonUp(name,(MethodInfo *)0x0);
  return bVar1;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxis(StandaloneInput *this,String *name,float value,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxis_System__String__float_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisNegative(StandaloneInput *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisNegative_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisPositive(StandaloneInput *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisPositive_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisZero(StandaloneInput *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisZero_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetButtonDown(StandaloneInput *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetButtonDown_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetButtonUp(StandaloneInput *this,String *name,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetButtonUp_System__String_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

