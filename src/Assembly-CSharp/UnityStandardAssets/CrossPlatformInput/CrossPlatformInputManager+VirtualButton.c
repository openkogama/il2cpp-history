
/* Void Pressed() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Pressed
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((this->fields).m_Pressed == 0) {
    (this->fields).m_Pressed = 1;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcVar1)();
    (this->fields).m_LastPressedFrame = iVar4;
  }
  return;
}


/* Void Released() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Released
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).m_Pressed = 0;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcVar1)();
  (this->fields).m_ReleasedFrame = iVar4;
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton_Remove
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = (this->fields)._name_k__BackingField;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(pVVar1->fields).m_VirtualButtons;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
        this_01 = (pVVar1->fields).m_VirtualButtons;
        if (this_01 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CrossPlatformInputManager+VirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton__ctor
               (CrossPlatformInputManager_VirtualButton *this,String *name,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).m_LastPressedFrame = -5;
  (this->fields).m_ReleasedFrame = -5;
  (this->fields)._name_k__BackingField = name;
  if (bVar1) {
    (this->fields)._matchWithInputManager_k__BackingField = 1;
    return;
  }
  uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields)._matchWithInputManager_k__BackingField = 1;
  return;
}


/* CrossPlatformInputManager+VirtualButton(String, Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::CrossPlatformInputManager_VirtualButton__ctor_1
               (CrossPlatformInputManager_VirtualButton *this,String *name,bool matchToInputSettings
               ,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).m_LastPressedFrame = -5;
  (this->fields).m_ReleasedFrame = -5;
  (this->fields)._name_k__BackingField = name;
  if (bVar1) {
    (this->fields)._matchWithInputManager_k__BackingField = matchToInputSettings;
    return;
  }
  uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields)._matchWithInputManager_k__BackingField = matchToInputSettings;
  return;
}


/* Boolean get_GetButtonDown() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_get_GetButtonDown
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  iVar1 = (this->fields).m_LastPressedFrame;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  return iVar1 - iVar5 == -1;
}


/* Boolean get_GetButtonUp() */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualButton::
     CrossPlatformInputManager_VirtualButton_get_GetButtonUp
               (CrossPlatformInputManager_VirtualButton *this,MethodInfo *method)

{
  iVar1 = (this->fields).m_ReleasedFrame;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  return iVar1 == iVar5 + -1;
}

