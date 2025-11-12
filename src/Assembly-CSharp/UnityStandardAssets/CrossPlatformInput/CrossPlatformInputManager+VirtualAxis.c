
/* Void Remove() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_Remove
               (CrossPlatformInputManager_VirtualAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._name_k__BackingField;
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
  if (pSVar1 == (String *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar2);
    pSVar1 = (String *)func_?(&StringLiteral_name);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__UnRegisterVirtualAxis_System__String_
                               );
    FUN_?(this_02,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar4 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar4 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(pVVar4->fields).m_VirtualAxes;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)pSVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        this_01 = (pVVar4->fields).m_VirtualAxes;
        if (this_01 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)pSVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
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


/* CrossPlatformInputManager+VirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor
               (CrossPlatformInputManager_VirtualAxis *this,String *name,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
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


/* CrossPlatformInputManager+VirtualAxis(String, Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor_1
               (CrossPlatformInputManager_VirtualAxis *this,String *name,bool matchToInputSettings,
               MethodInfo *method)

{
  bVar1 = iRam_? == 0;
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

