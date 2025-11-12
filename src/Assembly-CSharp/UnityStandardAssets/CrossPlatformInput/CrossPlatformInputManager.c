
/* Boolean AxisExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_AxisExists(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(pVVar1->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar2 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean ButtonExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_ButtonExists(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
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
      cRam_? = '\x01';
    }
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar2 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Single GetAxis(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis(String *name,MethodInfo *method)

{
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0,0)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pVVar1->klass->vtable).__unknown.methodPtr)
                             (pVVar1,name,0,(pVVar1->klass->vtable).__unknown.method);
    return fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Single GetAxisRaw(String) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxisRaw(String *name,MethodInfo *method)

{
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,1,0)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pVVar1->klass->vtable).__unknown.methodPtr)
                             (pVVar1,name,1,(pVVar1->klass->vtable).__unknown.method);
    return fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
      CrossPlatformInputManager_GetAxis_1(String *name,bool raw,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,
                  CONCAT71(in_register_00000011,raw));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(pVVar1->klass->vtable).__unknown.methodPtr)
                             (pVVar1,name,(ulonglong)raw,(pVVar1->klass->vtable).__unknown.method);
    return fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButton(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pVVar1->klass->vtable).__unknown_1.methodPtr)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonDown(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pVVar1->klass->vtable).__unknown_2.methodPtr)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_2.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_GetButtonUp(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pVVar1->klass->vtable).__unknown_3.methodPtr)
                      (pVVar1,name,(pVVar1->klass->vtable).__unknown_3.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void RegisterVirtualAxis(CrossPlatformInputManager+VirtualAxis) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualAxis
               (CrossPlatformInputManager_VirtualAxis *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   );
      LOCK();
      UNLOCK();
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
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((axis != (CrossPlatformInputManager_VirtualAxis *)0x0) &&
       (this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(pVVar1->fields).m_VirtualAxes,
       this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)0x0)) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this,(Object *)(axis->fields)._name_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
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
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                   (Object *)(axis->fields)._name_k__BackingField,(Object *)axis,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   ->klass->rgctx_data[0x22].method);
        pMVar4 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        if ((axis->fields)._matchWithInputManager_k__BackingField != 0) {
          return;
        }
        this_00 = (pVVar1->fields).m_AlwaysUseVirtual;
        item = (axis->fields)._name_k__BackingField;
        if (this_00 != (List_1_System_String_ *)0x0) {
          piVar5 = &(this_00->fields)._version;
          *piVar5 = *piVar5 + 1;
          pSVar6 = (this_00->fields)._items;
          if (pSVar6 != (String__Array *)0x0) {
            uVar7 = (this_00->fields)._size;
            if ((uint)pSVar6->max_length <= uVar7) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         pMVar4->klass->rgctx_data[0xe].method);
              return;
            }
            (this_00->fields)._size = uVar7 + 1;
            if (uVar7 < (uint)pSVar6->max_length) {
              bVar8 = iRam_? != 0;
              pSVar6->vector[(int)uVar7] = item;
              if (bVar8) {
                uVar7 = (uint)((ulonglong)(pSVar6->vector + (int)uVar7) >> 0xc);
                puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar10 = *puVar9;
                  LOCK();
                  uVar11 = *puVar9;
                  if (uVar10 == uVar11) {
                    *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar10 != uVar11);
              }
              return;
            }
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RegisterVirtualButton(CrossPlatformInputManager+VirtualButton) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_RegisterVirtualButton
               (CrossPlatformInputManager_VirtualButton *button,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_There_is_already_a_virtual_butto);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__registered_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((button != (CrossPlatformInputManager_VirtualButton *)0x0) &&
       (this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(pVVar1->fields).m_VirtualButtons,
       this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)0x0)) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)(button->fields)._name_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
        pSVar3 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_There_is_already_a_virtual_butto,
                            (button->fields)._name_k__BackingField,StringLiteral__registered_,
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (pVVar1->fields).m_VirtualButtons;
      if (this_00 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)(button->fields)._name_k__BackingField,(Object *)button,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                   ->klass->rgctx_data[0x22].method);
        if ((button->fields)._matchWithInputManager_k__BackingField == 0) {
          pLVar6 = (pVVar1->fields).m_AlwaysUseVirtual;
          if (pLVar6 == (List_1_System_String_ *)0x0) goto code_?;
          FUN_?(pLVar6,(button->fields)._name_k__BackingField,
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                       );
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxis(String *name,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_9.methodPtr)
              (pVVar1,name,value,(pVVar1->klass->vtable).__unknown_9.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisNegative(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_7.methodPtr)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_7.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisPositive(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_6.methodPtr)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_6.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetAxisZero(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_8.methodPtr)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_8.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonDown(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_4.methodPtr)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_4.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetButtonUp(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar1->klass->vtable).__unknown_5.methodPtr)
              (pVVar1,name,(pVVar1->klass->vtable).__unknown_5.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetVirtualMousePositionX(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionX(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    fVar2 = (pVVar1->fields)._virtualMousePosition_k__BackingField.y;
    fVar3 = (pVVar1->fields)._virtualMousePosition_k__BackingField.z;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.x = f;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.y = fVar2;
    (pVVar1->fields)._virtualMousePosition_k__BackingField.z = fVar3;
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVirtualMousePositionY(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionY(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVirtualMousePositionZ(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_SetVirtualMousePositionZ(float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
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
  FUN_?();
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
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (activeInputMethod == CrossPlatformInputManager_ActiveInputMethod__Enum_Hardware) {
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
    activeInput = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                  static_fields->s_HardwareInput;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     static_fields >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
      return;
    }
  }
  else if (activeInputMethod == CrossPlatformInputManager_ActiveInputMethod__Enum_Touch) {
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
    activeInput = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                  static_fields->s_TouchInput;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     static_fields >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  return;
}


/* Void UnRegisterVirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualAxis(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (name == (String *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar1);
    paramName = (String *)func_?(&StringLiteral_name);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                MethodInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__UnRegisterVirtualAxis_System__String_
                               );
    FUN_?(this_01,uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar3 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar3 != (VirtualInput *)0x0) {
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
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(pVVar3->fields).m_VirtualAxes;
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
        this_00 = (pVVar3->fields).m_VirtualAxes;
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnRegisterVirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager_UnRegisterVirtualButton(String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
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
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(pVVar1->fields).m_VirtualButtons;
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
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
  FUN_?();
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
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar1 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar1 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(pVVar1->fields).m_VirtualAxes;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar2,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        return (CrossPlatformInputManager_VirtualAxis *)0x0;
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(pVVar1->fields).m_VirtualAxes;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar2,(Object *)name,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar4 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    ((Object *)name,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pCVar6 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar5)();
          return pCVar6;
        }
        pDVar7 = (pDVar2->fields)._entries;
        if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                       *)0x0) {
          if (uVar4 < (uint)pDVar7->max_length) {
            return (CrossPlatformInputManager_VirtualAxis *)pDVar7->vector[(int)uVar4].value;
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          pCVar6 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar5)();
          return pCVar6;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pCVar6 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar5)();
        return pCVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar5)();
  return pCVar6;
}


/* CrossPlatformInputManager() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
     CrossPlatformInputManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__TouchInput);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (VirtualInput *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__TouchInput
                        );
  VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
  s_TouchInput = pVVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                    static_fields->s_TouchInput >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pVVar1 = (VirtualInput *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__PlatformSpecific__StandaloneInput
                        );
  VirtualInput::VirtualInput__ctor(pVVar1,(MethodInfo *)0x0);
  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->static_fields->
  s_HardwareInput = pVVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                    static_fields->s_HardwareInput >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar7 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pCVar7->activeInput = pCVar7->s_HardwareInput;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
      return;
    }
  }
  else {
    pCVar7->activeInput = pCVar7->s_TouchInput;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  return;
}


/* Vector3 get_mousePosition() */

Vector3 * Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_get_mousePosition
                    (Vector3 *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

