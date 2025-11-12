
/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
      StandaloneInput::StandaloneInput_GetAxis
                (StandaloneInput *this,String *name,bool raw,MethodInfo *method)

{
  if (raw != 0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    apuStackX_18[0] = (uint16_t *)0x0;
    puStack_1 = (uint16_t *)0x0;
    uStack_2 = 0;
    uStack_3 = 0;
    ppuStack_4 = apuStackX_18;
    if (name != (String *)0x0) {
      if ((name->fields)._stringLength == 0) {
        puStack_1 = (uint16_t *)0x1;
        uStack_2 = 0;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar5 = (name->fields)._stringLength;
        apuStackX_18[0] = &(name->fields)._firstChar;
        if (iVar5 == 0) {
          apuStackX_18[0] = (uint16_t *)0x0;
        }
        uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
        puStack_1 = apuStackX_18[0];
      }
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      FUN_?();
      pcVar6 = (code *)swi(3);
      fVar8 = (float)(*pcVar6)();
      return fVar8;
    }
    pcRam_? = pcVar6;
    fVar8 = (float)(*pcRam_?)(&puStack_1);
    return fVar8;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_1 = (uint16_t *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  ppuStack_4 = apuStackX_18;
  if (name != (String *)0x0) {
    if ((name->fields)._stringLength == 0) {
      puStack_1 = (uint16_t *)0x1;
      uStack_2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar5 = (name->fields)._stringLength;
      apuStackX_18[0] = &(name->fields)._firstChar;
      if (iVar5 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
      puStack_1 = apuStackX_18[0];
    }
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    fVar8 = (float)(*pcVar6)();
    return fVar8;
  }
  pcRam_? = pcVar6;
  fVar8 = (float)(*pcRam_?)(&puStack_1);
  return fVar8;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButton(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_1 = (uint16_t *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  ppuStack_4 = apuStackX_18;
  if (name != (String *)0x0) {
    if ((name->fields)._stringLength == 0) {
      puStack_1 = (uint16_t *)0x1;
      uStack_2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar5 = (name->fields)._stringLength;
      apuStackX_18[0] = &(name->fields)._firstChar;
      if (iVar5 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
      puStack_1 = apuStackX_18[0];
    }
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar8 = (*pcVar6)();
    return bVar8;
  }
  pcRam_? = pcVar6;
  bVar8 = (*pcRam_?)(&puStack_1);
  return bVar8;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButtonUp(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_1 = (uint16_t *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  ppuStack_4 = apuStackX_18;
  if (name != (String *)0x0) {
    if ((name->fields)._stringLength == 0) {
      puStack_1 = (uint16_t *)0x1;
      uStack_2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar5 = (name->fields)._stringLength;
      apuStackX_18[0] = &(name->fields)._firstChar;
      if (iVar5 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
      puStack_1 = apuStackX_18[0];
    }
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar8 = (*pcVar6)();
    return bVar8;
  }
  pcRam_? = pcVar6;
  bVar8 = (*pcRam_?)(&puStack_1);
  return bVar8;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxis(StandaloneInput *this,String *name,float value,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxis_System__String__float_
                             );
  FUN_?(this_00,uVar1);
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
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisNegative_System__String_
                             );
  FUN_?(this_00,uVar1);
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
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisPositive_System__String_
                             );
  FUN_?(this_00,uVar1);
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
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetAxisZero_System__String_
                             );
  FUN_?(this_00,uVar1);
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
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetButtonDown_System__String_
                             );
  FUN_?(this_00,uVar1);
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
  message = (String *)func_?(&StringLiteral__This_is_not_possible_to_be_call);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput__SetButtonUp_System__String_
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

