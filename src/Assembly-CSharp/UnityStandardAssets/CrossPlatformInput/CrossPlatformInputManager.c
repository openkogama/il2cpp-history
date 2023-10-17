
/* Boolean AxisExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_AxisExists(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                     );
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pVVar1->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean ButtonExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_ButtonExists(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                     );
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           (pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Single GetAxis(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  fVar1 = CrossPlatformInputManager_GetAxis_1(name,0,(MethodInfo *)0x0);
  return fVar1;
}


/* Single GetAxisRaw(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxisRaw(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  fVar1 = CrossPlatformInputManager_GetAxis_1(name,1,(MethodInfo *)0x0);
  return fVar1;
}


/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis_1(String *name,bool raw,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    fVar2 = (float10)(*(pVVar1->klass->vtable).__unknown.methodPtr)
                               (pVVar1,name,_raw,(pVVar1->klass->vtable).__unknown.method);
    return (float)fVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButton(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_1.method;
    pSStack_3 = name;
    bVar4 = (*(pVStack_2->klass->vtable).__unknown_1.methodPtr)();
    return bVar4;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pVStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonDown(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_2.method;
    pSStack_3 = name;
    bVar4 = (*(pVStack_2->klass->vtable).__unknown_2.methodPtr)();
    return bVar4;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pVStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonUp(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_3.method;
    pSStack_3 = name;
    bVar4 = (*(pVStack_2->klass->vtable).__unknown_3.methodPtr)();
    return bVar4;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pVStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void RegisterVirtualAxis(CrossPlatformInputManager+VirtualAxis) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualAxis
               (CrossPlatformInputManager_VirtualAxis *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
      cRam_? = '\x01';
    }
    if ((axis != (CrossPlatformInputManager_VirtualAxis *)0x0) &&
       (this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (pVVar1->fields).m_VirtualAxes,
       this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)(axis->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        pDVar3 = (pVVar1->fields).m_VirtualAxes;
        if (pDVar3 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                   (Object *)(axis->fields)._name_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar3 = (pVVar1->fields).m_VirtualAxes;
      if (pDVar3 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                   (Object *)(axis->fields)._name_k__BackingField,(Object *)axis,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                  );
        if ((axis->fields)._matchWithInputManager_k__BackingField == 0) {
          this_00 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_00 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)(axis->fields)._name_k__BackingField
                     ,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterVirtualButton(CrossPlatformInputManager+VirtualButton) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualButton
               (CrossPlatformInputManager_VirtualButton *button,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
      func_?(&StringLiteral_There_is_already_a_virtual_butto);
      func_?(&StringLiteral__registered_);
      cRam_? = '\x01';
    }
    if ((button != (CrossPlatformInputManager_VirtualButton *)0x0) &&
       (this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (pVVar1->fields).m_VirtualButtons,
       this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)(button->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        message = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_There_is_already_a_virtual_butto,
                             (button->fields)._name_k__BackingField,StringLiteral__registered_,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      this_00 = (pVVar1->fields).m_VirtualButtons;
      if (this_00 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)(button->fields)._name_k__BackingField,(Object *)button,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                  );
        if ((button->fields)._matchWithInputManager_k__BackingField == 0) {
          this_01 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (this_01 == (List_1_System_String_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,
                     (Object *)(button->fields)._name_k__BackingField,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxis(String *name,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVVar2->klass->vtable).__unknown_9.method;
    puStack_3 = (undefined *)value;
    pSStack_4 = name;
    (*(pVVar2->klass->vtable).__unknown_9.methodPtr)(pVVar2);
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pSStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisNegative(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_7.method;
    pSStack_3 = name;
    (*(pVStack_2->klass->vtable).__unknown_7.methodPtr)();
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar4 = func_?(&pVStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisPositive(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_6.method;
    pSStack_3 = name;
    (*(pVStack_2->klass->vtable).__unknown_6.methodPtr)();
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar4 = func_?(&pVStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisZero(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_8.method;
    pSStack_3 = name;
    (*(pVStack_2->klass->vtable).__unknown_8.methodPtr)();
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar4 = func_?(&pVStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonDown(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_4.method;
    pSStack_3 = name;
    (*(pVStack_2->klass->vtable).__unknown_4.methodPtr)();
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar4 = func_?(&pVStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonUp(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CrossPlatformInputManager__Class *)
                &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager;
    func_?();
  }
  pVStack_2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
  if (pVStack_2 != (VirtualInput *)0x0) {
    pCStack_1 = (CrossPlatformInputManager__Class *)(pVStack_2->klass->vtable).__unknown_5.method;
    pSStack_3 = name;
    (*(pVStack_2->klass->vtable).__unknown_5.methodPtr)();
    return;
  }
  pCStack_1 = (CrossPlatformInputManager__Class *)&stack0xfffffffc;
  uVar4 = func_?(&pVStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetVirtualMousePositionX(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionX(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    uVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.y;
    fVar3 = (pVVar1->fields)._virtualMousePosition_k__BackingField.z;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = f;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = (float)uVar2;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVirtualMousePositionY(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionY(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    uVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.x;
    fVar3 = (pVVar1->fields)._virtualMousePosition_k__BackingField.z;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = (float)uVar2;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = f;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVirtualMousePositionZ(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionZ(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    fVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.y;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x =
         (pVVar1->fields)._virtualMousePosition_k__BackingField.x;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = fVar2;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = f;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SwitchActiveInputMethod(CrossPlatformInputManager+ActiveInputMethod) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SwitchActiveInputMethod
               (CrossPlatformInputManager_ActiveInputMethod__Enum activeInputMethod,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if (activeInputMethod == CrossPlatformInputManager_ActiveInputMethod__Enum_Hardware) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    pCVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
             static_fields;
    pVVar2 = pCVar1->s_HardwareInput;
  }
  else {
    if (activeInputMethod != CrossPlatformInputManager_ActiveInputMethod__Enum_Touch) {
      return;
    }
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    pCVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
             static_fields;
    pVVar2 = pCVar1->s_TouchInput;
  }
  pCVar1->activeInput = pVVar2;
  func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                  static_fields,pVVar2);
  return;
}


/* Void UnRegisterVirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualAxis(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if (name == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_01);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_name);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,method_00);
    uVar1 = func_?(&
                            MethodInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__UnRegisterVirtualAxis_System__String_
                           );
    func_?(this_01,uVar1);
  }
  else {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
             static_fields->activeInput;
    if (pVVar2 != (VirtualInput *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                       );
        cRam_? = '\x01';
      }
      this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             (pVVar2->fields).m_VirtualAxes;
      if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this,(Object *)name,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          );
        if (bVar3 != 0) {
          this_00 = (pVVar2->fields).m_VirtualAxes;
          if (this_00 ==
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)name,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnRegisterVirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualButton(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                     );
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           (pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        this_00 = (pVVar1->fields).m_VirtualButtons;
        if (this_00 ==
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)name,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                  );
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CrossPlatformInputManager+VirtualAxis VirtualAxisReference(String) */

CrossPlatformInputManager_VirtualAxis *
Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
CrossPlatformInputManager_VirtualAxisReference(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                     );
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pVVar1->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                        );
      if (bVar2 == 0) {
        return (CrossPlatformInputManager_VirtualAxis *)0x0;
      }
      this_00 = (pVVar1->fields).m_VirtualAxes;
      if (this_00 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
           *)0x0) {
        pCVar3 = (CrossPlatformInputManager_VirtualAxis *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)name,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                           );
        return pCVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pCVar3 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
  return pCVar3;
}


/* CrossPlatformInputManager() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&
                    TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput
                   );
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__TouchInput
                   );
    cRam_? = '\x01';
  }
  pVVar1 = (VirtualInput *)
           func_?(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__TouchInput
                          );
  if (pVVar1 != (VirtualInput *)0x0) {
    VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
    s_TouchInput = pVVar1;
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     static_fields->s_TouchInput,pVVar1);
    pVVar1 = (VirtualInput *)
             func_?(
                            TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput
                            );
    if (pVVar1 != (VirtualInput *)0x0) {
      VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
      TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
      s_HardwareInput = pVVar1;
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       ->static_fields->s_HardwareInput,pVVar1);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pCVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields;
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
        pCVar2->activeInput = pCVar2->s_HardwareInput;
        func_?();
        return;
      }
      pCVar2->activeInput = pCVar2->s_TouchInput;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 get_mousePosition() */

Vector3 * Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_get_mousePosition
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    puVar2 = (undefined8 *)
             (*(pVVar1->klass->vtable).__unknown_10.methodPtr)
                       (auStack_3,pVVar1,(pVVar1->klass->vtable).__unknown_10.method);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

