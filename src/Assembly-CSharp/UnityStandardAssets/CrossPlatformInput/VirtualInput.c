
/* Boolean AxisExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_AxisExists(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ButtonExists(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_ButtonExists(VirtualInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void RegisterVirtualAxis(CrossPlatformInputManager+VirtualAxis) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_RegisterVirtualAxis
               (VirtualInput *this,CrossPlatformInputManager_VirtualAxis *axis,MethodInfo *method)

{
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
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).m_VirtualAxes,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(axis->fields)._name_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      pDVar2 = (this->fields).m_VirtualAxes;
      if (pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                 (Object *)(axis->fields)._name_k__BackingField,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                );
    }
    pDVar2 = (this->fields).m_VirtualAxes;
    if (pDVar2 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                 (Object *)(axis->fields)._name_k__BackingField,(Object *)axis,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                 ->klass->rgctx_data[0x22].method);
      pMVar3 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      if ((axis->fields)._matchWithInputManager_k__BackingField != 0) {
        return;
      }
      this_01 = (this->fields).m_AlwaysUseVirtual;
      item = (axis->fields)._name_k__BackingField;
      if (this_01 != (List_1_System_String_ *)0x0) {
        piVar4 = &(this_01->fields)._version;
        *piVar4 = *piVar4 + 1;
        pSVar5 = (this_01->fields)._items;
        if (pSVar5 != (String__Array *)0x0) {
          uVar6 = (this_01->fields)._size;
          if ((uint)pSVar5->max_length <= uVar6) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)item,
                       pMVar3->klass->rgctx_data[0xe].method);
            return;
          }
          (this_01->fields)._size = uVar6 + 1;
          if (uVar6 < (uint)pSVar5->max_length) {
            bVar7 = iRam_? != 0;
            pSVar5->vector[(int)uVar6] = item;
            if (bVar7) {
              uVar6 = (uint)((ulonglong)(pSVar5->vector + (int)uVar6) >> 0xc);
              puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar9 = *puVar8;
                LOCK();
                uVar10 = *puVar8;
                if (uVar9 == uVar10) {
                  *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (uVar9 != uVar10);
            }
            return;
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RegisterVirtualButton(CrossPlatformInputManager+VirtualButton) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_RegisterVirtualButton
               (VirtualInput *this,CrossPlatformInputManager_VirtualButton *button,
               MethodInfo *method)

{
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
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).m_VirtualButtons,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(button->fields)._name_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields).m_VirtualButtons;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)(button->fields)._name_k__BackingField,(Object *)button,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                 ->klass->rgctx_data[0x22].method);
      if ((button->fields)._matchWithInputManager_k__BackingField == 0) {
        pLVar5 = (this->fields).m_AlwaysUseVirtual;
        if (pLVar5 == (List_1_System_String_ *)0x0) goto code_?;
        FUN_?(pLVar5,(button->fields)._name_k__BackingField,
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetVirtualMousePositionX(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionX(VirtualInput *this,float f,MethodInfo *method)

{
  fVar1 = (this->fields)._virtualMousePosition_k__BackingField.y;
  fVar2 = (this->fields)._virtualMousePosition_k__BackingField.z;
  (this->fields)._virtualMousePosition_k__BackingField.x = f;
  (this->fields)._virtualMousePosition_k__BackingField.y = fVar1;
  (this->fields)._virtualMousePosition_k__BackingField.z = fVar2;
  return;
}


/* Void SetVirtualMousePositionY(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionY(VirtualInput *this,float f,MethodInfo *method)

{
  uVar1 = (this->fields)._virtualMousePosition_k__BackingField.x;
  fVar2 = (this->fields)._virtualMousePosition_k__BackingField.z;
  (this->fields)._virtualMousePosition_k__BackingField.x = (float)uVar1;
  (this->fields)._virtualMousePosition_k__BackingField.y = f;
  (this->fields)._virtualMousePosition_k__BackingField.z = fVar2;
  return;
}


/* Void SetVirtualMousePositionZ(Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_SetVirtualMousePositionZ(VirtualInput *this,float f,MethodInfo *method)

{
  fVar1 = (this->fields)._virtualMousePosition_k__BackingField.y;
  (this->fields)._virtualMousePosition_k__BackingField.x =
       (this->fields)._virtualMousePosition_k__BackingField.x;
  (this->fields)._virtualMousePosition_k__BackingField.y = fVar1;
  (this->fields)._virtualMousePosition_k__BackingField.z = f;
  return;
}


/* Void UnRegisterVirtualAxis(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_UnRegisterVirtualAxis(VirtualInput *this,String *name,MethodInfo *method)

{
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
             *)(this->fields).m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      this_01 = (this->fields).m_VirtualAxes;
      if (this_01 ==
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnRegisterVirtualButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
     VirtualInput_UnRegisterVirtualButton(VirtualInput *this,String *name,MethodInfo *method)

{
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
             *)(this->fields).m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      this_01 = (this->fields).m_VirtualButtons;
      if (this_01 ==
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Remove_System__String_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CrossPlatformInputManager+VirtualAxis VirtualAxisReference(String) */

CrossPlatformInputManager_VirtualAxis *
Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::
VirtualInput_VirtualAxisReference(VirtualInput *this,String *name,MethodInfo *method)

{
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).m_VirtualAxes;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return (CrossPlatformInputManager_VirtualAxis *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields).m_VirtualAxes;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar3 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)name,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pCVar5 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
        return pCVar5;
      }
      pDVar6 = (pDVar1->fields)._entries;
      if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar3 < (uint)pDVar6->max_length) {
          return (CrossPlatformInputManager_VirtualAxis *)pDVar6->vector[(int)uVar3].value;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pCVar5 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
        return pCVar5;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      pCVar5 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
      return pCVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pCVar5 = (CrossPlatformInputManager_VirtualAxis *)(*pcVar4)();
  return pCVar5;
}


/* VirtualInput() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::VirtualInput::VirtualInput__ctor
               (VirtualInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).m_VirtualAxes =
       (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
        *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).m_VirtualAxes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).m_VirtualButtons =
       (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
        *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).m_VirtualButtons >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (List_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).m_AlwaysUseVirtual = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).m_AlwaysUseVirtual >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

