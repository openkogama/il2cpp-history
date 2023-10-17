
/* Void Remove() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis_Remove
               (CrossPlatformInputManager_VirtualAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._name_k__BackingField;
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar2);
    func_?(this_02);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_name);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,pSVar1,method_00);
    uVar2 = func_?(&
                            MethodInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__UnRegisterVirtualAxis_System__String_
                           );
    func_?(this_02,uVar2);
  }
  else {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    pVVar3 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
             static_fields->activeInput;
    if (pVVar3 != (VirtualInput *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pVVar3->fields).m_VirtualAxes;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,(Object *)pSVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          );
        if (bVar4 != 0) {
          this_01 = (pVVar3->fields).m_VirtualAxes;
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
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CrossPlatformInputManager+VirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor
               (CrossPlatformInputManager_VirtualAxis *this,String *name,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  func_?(&this->fields,name);
  (this->fields)._matchWithInputManager_k__BackingField = 1;
  return;
}


/* CrossPlatformInputManager+VirtualAxis(String, Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::
     CrossPlatformInputManager+VirtualAxis::CrossPlatformInputManager_VirtualAxis__ctor_1
               (CrossPlatformInputManager_VirtualAxis *this,String *name,bool matchToInputSettings,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._name_k__BackingField = name;
  func_?(&this->fields,name);
  (this->fields)._matchWithInputManager_k__BackingField = matchToInputSettings;
  return;
}

