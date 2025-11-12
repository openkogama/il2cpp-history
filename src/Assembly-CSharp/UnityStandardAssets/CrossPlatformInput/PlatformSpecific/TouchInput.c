
/* Void AddAxes(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_AddAxes(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Object *)
          FUN_?(
                       TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                       );
  bVar1 = iRam_? != 0;
  value[1].klass = (Object__Class *)name;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
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
  }
  *(undefined1 *)((longlong)&value[1].monitor + 4) = 1;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar6 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar6 != (VirtualInput *)0x0) {
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
    if ((value != (Object *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pVVar6->fields).m_VirtualAxes,
       this_00 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
       0x0)) {
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)value[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar7) {
        pDVar8 = (pVVar6->fields).m_VirtualAxes;
        if (pDVar8 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar8,(Object *)value[1].klass,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar8 = (pVVar6->fields).m_VirtualAxes;
      if (pDVar8 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar8,(Object *)value[1].klass,
                   value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   ->klass->rgctx_data[0x22].method);
        pMVar9 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        if (*(char *)((longlong)&value[1].monitor + 4) != '\0') {
          return;
        }
        this_01 = (pVVar6->fields).m_AlwaysUseVirtual;
        item = value[1].klass;
        if (this_01 != (List_1_System_String_ *)0x0) {
          piVar10 = &(this_01->fields)._version;
          *piVar10 = *piVar10 + 1;
          pSVar11 = (this_01->fields)._items;
          if (pSVar11 != (String__Array *)0x0) {
            uVar2 = (this_01->fields)._size;
            if ((uint)pSVar11->max_length <= uVar2) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_01,(Object *)item,
                         pMVar9->klass->rgctx_data[0xe].method);
              return;
            }
            (this_01->fields)._size = uVar2 + 1;
            if (uVar2 < (uint)pSVar11->max_length) {
              bVar1 = iRam_? != 0;
              pSVar11->vector[(int)uVar2] = (String *)item;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)(pSVar11->vector + (int)uVar2) >> 0xc);
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


/* Void AddButton(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_AddButton(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Object *)
          FUN_?(
                       TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton
                       );
  bVar1 = iRam_? != 0;
  *(undefined4 *)((longlong)&value[1].monitor + 4) = 0xfffffffb;
  *(undefined4 *)&value[2].klass = 0xfffffffb;
  value[1].klass = (Object__Class *)name;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
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
  }
  *(undefined1 *)&value[1].monitor = 1;
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
  pVVar6 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar6 != (VirtualInput *)0x0) {
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
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(pVVar6->fields).m_VirtualButtons;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)value[1].klass,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar7) {
        pSVar8 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_There_is_already_a_virtual_butto,(String *)value[1].klass,
                            StringLiteral__registered_,(MethodInfo *)0x0);
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
        pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar9 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,0,pSVar8);
        return;
      }
      this_01 = (pVVar6->fields).m_VirtualButtons;
      if (this_01 !=
          (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)value[1].klass,
                   value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualButton_
                   ->klass->rgctx_data[0x22].method);
        if (*(char *)&value[1].monitor == '\0') {
          pLVar11 = (pVVar6->fields).m_AlwaysUseVirtual;
          if (pLVar11 == (List_1_System_String_ *)0x0) goto code_?;
          FUN_?(pLVar11,value[1].klass,
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                       );
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
      TouchInput_GetAxis(TouchInput *this,String *name,bool raw,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                  ,name,CONCAT71(in_register_00000081,raw));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualAxes;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(float *)&pOVar2[1].monitor;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_GetButton(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualButtons;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(bool *)((longlong)&pOVar2[2].klass + 4);
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_GetButtonDown(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddButton(this,name,(MethodInfo *)0x0);
      pDVar2 = (this->fields)._.m_VirtualButtons;
      if ((pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      iVar4 = *(int *)((longlong)&pOVar3[1].monitor + 4);
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        bVar7 = (*pcVar5)();
        return bVar7;
      }
    }
    else {
      pDVar2 = (this->fields)._.m_VirtualButtons;
      if ((pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      iVar4 = *(int *)((longlong)&pOVar3[1].monitor + 4);
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        bVar7 = (*pcVar5)();
        return bVar7;
      }
    }
    pcRam_? = pcVar5;
    iVar8 = (*pcRam_?)();
    return iVar4 - iVar8 == -1;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar7 = (*pcVar5)();
  return bVar7;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_GetButtonUp(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddButton(this,name,(MethodInfo *)0x0);
      pDVar2 = (this->fields)._.m_VirtualButtons;
      if ((pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      iVar4 = *(int *)&pOVar3[2].klass;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        bVar7 = (*pcVar5)();
        return bVar7;
      }
    }
    else {
      pDVar2 = (this->fields)._.m_VirtualButtons;
      if ((pDVar2 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)name,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      iVar4 = *(int *)&pOVar3[2].klass;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        bVar7 = (*pcVar5)();
        return bVar7;
      }
    }
    pcRam_? = pcVar5;
    iVar8 = (*pcRam_?)();
    return iVar4 == iVar8 + -1;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar7 = (*pcVar5)();
  return bVar7;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetAxis(TouchInput *this,String *name,float value,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualAxes;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        *(float *)&pOVar2[1].monitor = value;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetAxisNegative(TouchInput *this,String *name,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualAxes;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        *(undefined4 *)&pOVar2[1].monitor = 0xbf800000;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetAxisPositive(TouchInput *this,String *name,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualAxes;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        *(undefined4 *)&pOVar2[1].monitor = 0x3f800000;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetAxisZero(TouchInput *this,String *name,MethodInfo *method)

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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualAxes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddAxes(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualAxes;
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
         *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__get_Item_System__String_
                         );
      if (pOVar2 != (Object *)0x0) {
        *(undefined4 *)&pOVar2[1].monitor = 0;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetButtonDown(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualButtons;
    if ((this_01 !=
         (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
          *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                           ), pOVar2 != (Object *)0x0)) {
      if (*(char *)((longlong)&pOVar2[2].klass + 4) == '\0') {
        *(undefined1 *)((longlong)&pOVar2[2].klass + 4) = 1;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        uVar5 = (*pcRam_?)();
        *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = uVar5;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput_SetButtonUp(TouchInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.m_VirtualButtons;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)name,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      TouchInput_AddButton(this,name,(MethodInfo *)0x0);
    }
    this_01 = (this->fields)._.m_VirtualButtons;
    if ((this_01 !=
         (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
          *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)name,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__get_Item_System__String_
                           ), pOVar2 != (Object *)0x0)) {
      *(undefined1 *)((longlong)&pOVar2[2].klass + 4) = 0;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      uVar5 = (*pcRam_?)();
      *(undefined4 *)&pOVar2[2].klass = uVar5;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TouchInput() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::TouchInput::
     TouchInput__ctor(TouchInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Dictionary__
                  ,0);
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
  (this->fields)._.m_VirtualAxes =
       (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
        *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.m_VirtualAxes >> 0xc);
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
  (this->fields)._.m_VirtualButtons =
       (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
        *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.m_VirtualButtons >> 0xc);
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
  (this->fields)._.m_AlwaysUseVirtual = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.m_AlwaysUseVirtual >> 0xc);
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

