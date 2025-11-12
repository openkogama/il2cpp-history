
/* Void Add(ThemeAttribute) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Add
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
  ;
  pLVar2 = (this->fields).attributes;
  if (pLVar2 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = (pLVar2->fields)._items;
  piVar5 = &(pLVar2->fields)._version;
  *piVar5 = *piVar5 + 1;
  if (pTVar4 == (ThemeAttribute__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (pLVar2->fields)._size;
  if (uVar6 < (uint)pTVar4->max_length) {
    (pLVar2->fields)._size = uVar6 + 1;
  }
  else {
    uVar6 = (pLVar2->fields)._size;
    FUN_?(pLVar2,uVar6 + 1,
                  (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,
                  pTVar4,unaff_RDI);
    pTVar4 = (pLVar2->fields)._items;
    (pLVar2->fields)._size = uVar6 + 1;
    if (pTVar4 == (ThemeAttribute__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)pTVar4->max_length <= uVar6) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pTVar4->vector[(int)uVar6] = attrib;
  if (bVar7) {
    uVar6 = (uint)((ulonglong)(pTVar4->vector + (int)uVar6) >> 0xc);
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


/* Void DisableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = (this->fields).activeAttributeGroup & ~groupsFlag;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                  ,uVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSettings__IMenu);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_ThemeAttributes_ThemeAttribute_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                        );
  pvVar3 = MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pTVar4 = (ThemeAttribute__Array *)FUN_?(pvVar3,2);
  (pLVar2->fields)._items = pTVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pLVar10 = (this->fields).attributes;
  if (pLVar10 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_11 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar10->fields)._version << 0x20);
    uStack_13 = 0;
    LStack_14._8_8_ = pLStack_12;
    LStack_14._current = (Object *)0x0;
    uStack_11 = 0;
    pLStack_12 = &LStack_14;
    LStack_14._list = (List_1_System_Object_ *)pLVar10;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_14,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                             ), bVar15 != 0) {
      if (LStack_14._current == (Object *)0x0) goto code_?;
      uVar5 = *(uint *)&LStack_14._current[1].monitor;
      if ((uVar5 & uVar1) == *(uint *)&LStack_14._current[1].monitor &&
          ((this->fields).activeAttributeGroup & uVar5) != uVar5) {
        if (pLVar2 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) goto code_?;
        FUN_?(pLVar2);
      }
    }
    (this->fields).activeAttributeGroup = uVar1;
    if (pLVar2 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&uStack_11 >> 0xc);
        lVar6 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_13 = 0;
      LStack_14._8_8_ = pLStack_12;
      LStack_14._current = (Object *)0x0;
      uStack_11 = 0;
      pLStack_12 = &LStack_14;
      LStack_14._list = (List_1_System_Object_ *)pLVar2;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_14,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar15 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            FUN_?(0,TypeInfo__ThemeSettings__IMenu,(this->fields).menu);
          }
          return;
        }
        if (LStack_14._current == (Object *)0x0) break;
        pOVar16 = (LStack_14._current)->klass;
        uVar17._0_2_ = pOVar16[1]._0.byval_arg.attrs;
        uVar17._2_1_ = pOVar16[1]._0.byval_arg.type;
        uVar17._3_5_ = *(undefined5 *)&pOVar16[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar16[1]._0.byval_arg.data)(LStack_14._current,uVar17);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void EnableAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  uVar1 = groupsFlag | (this->fields).activeAttributeGroup;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                  ,uVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSettings__IMenu);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_ThemeAttributes_ThemeAttribute_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                        );
  pvVar3 = MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pTVar4 = (ThemeAttribute__Array *)FUN_?(pvVar3,2);
  (pLVar2->fields)._items = pTVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pLVar10 = (this->fields).attributes;
  if (pLVar10 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_11 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar10->fields)._version << 0x20);
    uStack_13 = 0;
    LStack_14._8_8_ = pLStack_12;
    LStack_14._current = (Object *)0x0;
    uStack_11 = 0;
    pLStack_12 = &LStack_14;
    LStack_14._list = (List_1_System_Object_ *)pLVar10;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_14,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                             ), bVar15 != 0) {
      if (LStack_14._current == (Object *)0x0) goto code_?;
      uVar5 = *(uint *)&LStack_14._current[1].monitor;
      if ((uVar5 & uVar1) == *(uint *)&LStack_14._current[1].monitor &&
          ((this->fields).activeAttributeGroup & uVar5) != uVar5) {
        if (pLVar2 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) goto code_?;
        FUN_?(pLVar2);
      }
    }
    (this->fields).activeAttributeGroup = uVar1;
    if (pLVar2 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&uStack_11 >> 0xc);
        lVar6 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_13 = 0;
      LStack_14._8_8_ = pLStack_12;
      LStack_14._current = (Object *)0x0;
      uStack_11 = 0;
      pLStack_12 = &LStack_14;
      LStack_14._list = (List_1_System_Object_ *)pLVar2;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_14,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar15 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            FUN_?(0,TypeInfo__ThemeSettings__IMenu,(this->fields).menu);
          }
          return;
        }
        if (LStack_14._current == (Object *)0x0) break;
        pOVar16 = (LStack_14._current)->klass;
        uVar17._0_2_ = pOVar16[1]._0.byval_arg.attrs;
        uVar17._2_1_ = pOVar16[1]._0.byval_arg.type;
        uVar17._3_5_ = *(undefined5 *)&pOVar16[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar16[1]._0.byval_arg.data)(LStack_14._current,uVar17);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean GetValueForAttribute[Boolean](ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).settingsData,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pOVar2 = (Object *)
               (*(attrib->klass->vtable).__unknown.methodPtr)
                         (attrib,(attrib->klass->vtable).__unknown.method);
      lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_?(lVar3);
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
          FUN_?(pOVar2,lVar3);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
code_?:
        return *(bool *)&pOVar2[1].klass;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_?(lVar3);
        }
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
            FUN_?(pOVar2,lVar3);
            pcVar4 = (code *)swi(3);
            bVar5 = (*pcVar4)();
            return bVar5;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 GetValueForAttribute[Int32](ThemeAttribute) */

int32_t Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_1
                  (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).settingsData,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pOVar2 = (Object *)
               (*(attrib->klass->vtable).__unknown.methodPtr)
                         (attrib,(attrib->klass->vtable).__unknown.method);
      lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_?(lVar3);
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
          FUN_?(pOVar2,lVar3);
          pcVar4 = (code *)swi(3);
          iVar1 = (*pcVar4)();
          return iVar1;
        }
code_?:
        return *(int32_t *)&pOVar2[1].klass;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_?(lVar3);
        }
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
            FUN_?(pOVar2,lVar3);
            pcVar4 = (code *)swi(3);
            iVar1 = (*pcVar4)();
            return iVar1;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Object GetValueForAttribute[Object](ThemeAttribute) */

Object * Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                   (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).settingsData,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      lVar2 = (*(attrib->klass->vtable).__unknown.methodPtr)
                        (attrib,(attrib->klass->vtable).__unknown.method);
      pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if (lVar2 != 0) {
        pOVar4 = (Object *)FUN_?(lVar2,pvVar3);
        if (pOVar4 != (Object *)0x0) {
          return pOVar4;
        }
        FUN_?(lVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar5)();
        return pOVar4;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if (pOVar4 != (Object *)0x0) {
        pOVar6 = (Object *)FUN_?(pOVar4,pvVar3);
        if (pOVar6 != (Object *)0x0) {
          return pOVar6;
        }
        FUN_?(pOVar4,pvVar3);
        pcVar5 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar5)();
        return pOVar4;
      }
    }
    return (Object *)0x0;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Single GetValueForAttribute[Single](ThemeAttribute) */

float Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_3
                (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if ((attrib != (ThemeAttribute *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).settingsData,
     this_00 !=
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)(attrib->fields)._Key_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pOVar2 = (Object *)
               (*(attrib->klass->vtable).__unknown.methodPtr)
                         (attrib,(attrib->klass->vtable).__unknown.method);
      lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_?(lVar3);
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
          FUN_?(pOVar2,lVar3);
          pcVar4 = (code *)swi(3);
          fVar5 = (float)(*pcVar4)();
          return fVar5;
        }
code_?:
        return *(float *)&pOVar2[1].klass;
      }
    }
    else {
      this_01 = (this->fields).settingsData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)(attrib->fields)._Key_k__BackingField,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_?(lVar3);
        }
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lVar3 + 0x40)) {
            FUN_?(pOVar2,lVar3);
            pcVar4 = (code *)swi(3);
            fVar5 = (float)(*pcVar4)();
            return fVar5;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* __Il2CppFullySharedGenericType
   GetValueForAttribute[__Il2CppFullySharedGenericType](ThemeAttribute) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_4
          (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (*(longlong *)(in_R9 + 0x38) == 0) {
    apuStack_1[0] = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if (*(longlong *)(in_R9 + 0x38) == 0) {
      apuStack_1[0] = &UNK_?;
      FUN_?();
    }
  }
  uVar2 = *(undefined4 *)(**(longlong **)(in_R9 + 0x38) + 0xfc);
  apuStack_1[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pOVar4 = (Object *)(&stack0xffffffffffffffe8 + lVar3);
  if ((attrib == (ThemeAttribute *)0x0) ||
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields).settingsData,
     this_00 ==
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
code_?:
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?();
    pcVar5 = (code *)swi(3);
    p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
    return p_Var12;
  }
  pSVar6 = (attrib->fields)._Key_k__BackingField;
  pMVar7 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
           ->klass->rgctx_data[0x21].method;
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)pSVar6,pMVar7);
  if (iVar8 < 0) {
    pIVar9 = (attrib->klass->vtable).__unknown.methodPtr;
    pMVar7 = (attrib->klass->vtable).__unknown.method;
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    pOVar10 = (Object *)(*pIVar9)(attrib,pMVar7);
    lVar11 = **(longlong **)(in_R9 + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      lVar11 = FUN_?(lVar11);
    }
    if (-1 < *(int *)(lVar11 + 0x28)) {
      if (pOVar10 == (Object *)0x0) {
code_?:
        pOVar12 = (Object__Class *)0x0;
      }
      else {
        *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
        pOVar12 = (Object__Class *)FUN_?(pOVar10,lVar11);
        if (pOVar12 == (Object__Class *)0x0) {
code_?:
          *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
          FUN_?(pOVar10,lVar11);
          pcVar5 = (code *)swi(3);
          p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
          return p_Var12;
        }
      }
code_?:
      pOVar4->klass = pOVar12;
      goto code_?;
    }
    if ((*(longlong *)(lVar11 + 0x60) == 0) || ((*(byte *)(lVar11 + 0x135) & 8) == 0)) {
      if (pOVar10 == (Object *)0x0) goto code_?;
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lVar11 + 0x40))
      goto code_?;
      pOVar4 = pOVar10 + 1;
      goto code_?;
    }
    if ((pOVar10 != (Object *)0x0) &&
       (pOVar12 = *(Object__Class **)(lVar11 + 0x40), pOVar10->klass != pOVar12)) {
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      FUN_?(pOVar10,pOVar12);
      pcVar5 = (code *)swi(3);
      p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
      return p_Var12;
    }
  }
  else {
    this_01 = (this->fields).settingsData;
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pSVar6 = (attrib->fields)._Key_k__BackingField;
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)pSVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    lVar11 = **(longlong **)(in_R9 + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      lVar11 = FUN_?(lVar11);
    }
    if (-1 < *(int *)(lVar11 + 0x28)) {
      if (pOVar10 == (Object *)0x0) goto code_?;
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      pOVar12 = (Object__Class *)FUN_?(pOVar10,lVar11);
      if (pOVar12 == (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    if ((*(longlong *)(lVar11 + 0x60) == 0) || ((*(byte *)(lVar11 + 0x135) & 8) == 0)) {
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class == *(Il2CppClass **)(lVar11 + 0x40)) {
          pOVar4 = pOVar10 + 1;
          goto code_?;
        }
code_?:
        *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
        FUN_?(pOVar10,lVar11);
        pcVar5 = (code *)swi(3);
        p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
        return p_Var12;
      }
      goto code_?;
    }
    if ((pOVar10 != (Object *)0x0) &&
       (pOVar12 = *(Object__Class **)(lVar11 + 0x40), pOVar10->klass != pOVar12)) {
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      FUN_?(pOVar10,pOVar12);
      pcVar5 = (code *)swi(3);
      p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
      return p_Var12;
    }
  }
  lVar13 = (longlong)&pOVar4->klass + (longlong)*(int *)(*(longlong *)(lVar11 + 0x80) + 0x38);
  lVar14 = lVar13 + -0x10;
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x80) + 0x30) + 0x28)) {
    lVar14 = lVar13;
  }
  iVar15 = *(int *)(*(longlong *)(lVar11 + 0x40) + 0xf8);
  if (pOVar10 == (Object *)0x0) {
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?(lVar14,0);
    *(undefined1 *)&pOVar4->klass = 0;
  }
  else {
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?(lVar14,pOVar10 + 1,iVar15 + -0x10);
    *(undefined1 *)&pOVar4->klass = 1;
  }
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  p_Var12 = (_Il2CppFullySharedGenericType *)FUN_?(method,pOVar4,uVar2);
  return p_Var12;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize
               (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).attributes;
  if ((List_1_ThemeAttributes_ThemeAttribute_ *)LStack_1._list ==
      (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_ThemeAttributes_ThemeAttribute_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    if (*(int *)&LStack_1._current[1].monitor == 0) {
      pOVar11 = (LStack_1._current)->klass;
      uVar12._0_2_ = pOVar11[1]._0.byval_arg.attrs;
      uVar12._2_1_ = pOVar11[1]._0.byval_arg.type;
      uVar12._3_5_ = *(undefined5 *)&pOVar11[1]._0.byval_arg.field_0xb;
      (*(code *)pOVar11[1]._0.byval_arg.data)(LStack_1._current,uVar12);
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAttributeGroups(Int32) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SetAttributeGroups
               (SettingsWrapper *this,int32_t groupsFlag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSettings__IMenu);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ThemeAttributes_ThemeAttribute_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                        );
  pvVar2 = MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
            ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pTVar3 = (ThemeAttribute__Array *)FUN_?(pvVar2,2);
  (pLVar1->fields)._items = pTVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLVar9 = (this->fields).attributes;
  if (pLVar9 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar9->fields)._version << 0x20);
    uStack_12 = 0;
    LStack_13._8_8_ = pLStack_11;
    LStack_13._current = (Object *)0x0;
    uStack_10 = 0;
    pLStack_11 = &LStack_13;
    LStack_13._list = (List_1_System_Object_ *)pLVar9;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_13,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                             ), bVar14 != 0) {
      if (LStack_13._current == (Object *)0x0) goto code_?;
      uVar4 = *(uint *)&LStack_13._current[1].monitor;
      if ((uVar4 & groupsFlag) == *(uint *)&LStack_13._current[1].monitor &&
          ((this->fields).activeAttributeGroup & uVar4) != uVar4) {
        if (pLVar1 == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) goto code_?;
        FUN_?(pLVar1);
      }
    }
    (this->fields).activeAttributeGroup = groupsFlag;
    if (pLVar1 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_12 = 0;
      LStack_13._8_8_ = pLStack_11;
      LStack_13._current = (Object *)0x0;
      uStack_10 = 0;
      pLStack_11 = &LStack_13;
      LStack_13._list = (List_1_System_Object_ *)pLVar1;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                          );
        if (bVar14 == 0) {
          if ((this->fields).menu != (IMenu *)0x0) {
            FUN_?(0,TypeInfo__ThemeSettings__IMenu,(this->fields).menu);
          }
          return;
        }
        if (LStack_13._current == (Object *)0x0) break;
        pOVar15 = (LStack_13._current)->klass;
        uVar16._0_2_ = pOVar15[1]._0.byval_arg.attrs;
        uVar16._2_1_ = pOVar15[1]._0.byval_arg.type;
        uVar16._3_5_ = *(undefined5 *)&pOVar15[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar15[1]._0.byval_arg.data)(LStack_13._current,uVar16);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SubscribeToSettingsUI(IMenu) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_SubscribeToSettingsUI
               (SettingsWrapper *this,IMenu *menu,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).menu = menu;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).menu >> 0xc);
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
  if (menu == (IMenu *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar7 = 0;
  pIVar8 = menu->klass;
  uVar9._0_1_ = (pIVar8->_1).rank;
  uVar9._1_1_ = (pIVar8->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pIVar8->interfaceOffsets[uVar7].interfaceType ==
          (Il2CppClass *)TypeInfo__ThemeSettings__IMenu) {
        UNRECOVERED_JUMPTABLE =
             (&pIVar8->vtable)[pIVar8->interfaceOffsets[uVar7].offset].Refresh.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (menu,(&pIVar8->vtable)[pIVar8->interfaceOffsets[uVar7].offset].Refresh.method,
                   UNRECOVERED_JUMPTABLE);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  puVar10 = (undefined8 *)FUN_?(menu);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(menu,puVar10[1],(code *)*puVar10);
  return;
}


/* Void UpdateData(String, Object) */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_UpdateData
               (SettingsWrapper *this,String *key,Object *val,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ,key,val,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)key,val,CONCAT31((int3)((uint)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SettingsWrapper() */

void Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__ctor
               (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ThemeAttributes_ThemeAttribute_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                        );
  pvVar2 = MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
           ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pTVar3 = (ThemeAttribute__Array *)FUN_?(pvVar2,8);
  (pLVar1->fields)._items = pTVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields).attributes = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).attributes >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Boolean <get_SettingsUI>b__9_0(ThemeAttribute) */

bool Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper__get_SettingsUI_b__9_0
               (SettingsWrapper *this,ThemeAttribute *attrib,MethodInfo *method)

{
  if (attrib != (ThemeAttribute *)0x0) {
    return ((this->fields).activeAttributeGroup & (attrib->fields)._Groups_k__BackingField) ==
           (attrib->fields)._Groups_k__BackingField;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* RectTransform[] get_SettingsUI() */

RectTransform__Array *
Assembly-CSharp.dll::ThemeSettings::SettingsWrapper::SettingsWrapper_get_SettingsUI
          (SettingsWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<ThemeAttributes::ThemeAttribute>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_b__9_0_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).attributes;
  this_01 = (Predicate_1_Object_ *)
            FUN_?(TypeInfo__System__Predicate<ThemeAttributes::ThemeAttribute>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_b__9_0_ThemeAttributes__ThemeAttribute_
             ,(MethodInfo *)0x0);
  if ((this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) &&
     (pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
               List_1_System_Object__FindAll
                         ((List_1_System_Object_ *)this_00,this_01,
                          MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                         ), pLVar1 != (List_1_System_Object_ *)0x0)) {
    pRVar2 = (RectTransform__Array *)
             FUN_?(TypeInfo__UnityEngine__RectTransform,(pLVar1->fields)._size);
    uVar3 = 0;
    lVar4 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar3) {
        return pRVar2;
      }
      if ((uint)(pLVar1->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pRVar2 = (RectTransform__Array *)(*pcVar5)();
        return pRVar2;
      }
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (Object__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        pRVar2 = (RectTransform__Array *)(*pcVar5)();
        return pRVar2;
      }
      plVar7 = *(longlong **)((longlong)pOVar6->vector + lVar4 + -0x20);
      if ((plVar7 == (longlong *)0x0) ||
         (uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
         pRVar2 == (RectTransform__Array *)0x0)) break;
      if ((uint)pRVar2->max_length <= uVar3) goto code_?;
      bVar9 = iRam_? != 0;
      *(undefined8 *)((longlong)pRVar2->vector + lVar4 + -0x20) = uVar8;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)(pRVar2->vector + (int)uVar3) >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pRVar2 = (RectTransform__Array *)(*pcVar5)();
  return pRVar2;
}

