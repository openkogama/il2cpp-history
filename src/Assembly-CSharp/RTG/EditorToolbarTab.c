
/* Void AddTargetSettings(Settings) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_AddTargetSettings
               (EditorToolbarTab *this,Settings *targetSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Settings>__Add_RTG__Settings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::Settings>__Contains_RTG__Settings_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetSettings;
  if (pLVar1 != (List_1_RTG_Settings_ *)0x0) {
    if (((pLVar1->fields)._size != 0) &&
       (iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                          ((Object__Array *)(pLVar1->fields)._items,(Object *)targetSettings,0,
                           (pLVar1->fields)._size,
                           (MethodInfo__System__Collections__Generic__List<RTG::Settings>__Contains_RTG__Settings_
                            ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
       iVar2 != -1)) {
      return;
    }
    pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::Settings>__Add_RTG__Settings_;
    pLVar1 = (this->fields)._targetSettings;
    if (pLVar1 != (List_1_RTG_Settings_ *)0x0) {
      piVar4 = &(pLVar1->fields)._version;
      *piVar4 = *piVar4 + 1;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (Settings__Array *)0x0) {
        uVar6 = (pLVar1->fields)._size;
        if ((uint)pSVar5->max_length <= uVar6) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar1,(Object *)targetSettings,
                     pMVar3->klass->rgctx_data[0xe].method);
          return;
        }
        (pLVar1->fields)._size = uVar6 + 1;
        if (uVar6 < (uint)pSVar5->max_length) {
          bVar7 = iRam_? != 0;
          pSVar5->vector[(int)uVar6] = targetSettings;
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* EditorToolbarTab(String, String) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab__ctor
               (EditorToolbarTab *this,String *text,String *tooltip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Settings>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Settings>);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields)._tooltip = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._text = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._text >> 0xc);
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
  this_00 = (List_1_RTG_Settings_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Settings>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Settings>__List__);
  iVar1 = iRam_?;
  (this->fields)._targetSettings = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._targetSettings >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  if ((text != (String *)0x0) && ((this->fields)._text = text, iVar1 != 0)) {
    uVar2 = (uint)((ulonglong)&(this->fields)._text >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  if ((tooltip != (String *)0x0) && ((this->fields)._tooltip = tooltip, iVar1 != 0)) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* Int32 get_NumTargetSettings() */

int32_t Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_get_NumTargetSettings
                  (EditorToolbarTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Settings>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetSettings;
  if (pLVar1 != (List_1_RTG_Settings_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_TargetToolbar(EditorToolbar) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_set_TargetToolbar
               (EditorToolbarTab *this,EditorToolbar *value,MethodInfo *method)

{
  if ((value != (EditorToolbar *)0x0) &&
     (bVar1 = iRam_? != 0, (this->fields)._targetToolbar = value, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this->fields)._targetToolbar >> 0xc);
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


/* Void set_Tooltip(String) */

void Assembly-CSharp.dll::RTG::EditorToolbarTab::EditorToolbarTab_set_Tooltip
               (EditorToolbarTab *this,String *value,MethodInfo *method)

{
  if ((value != (String *)0x0) &&
     (bVar1 = iRam_? != 0, (this->fields)._tooltip = value, bVar1)) {
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
  }
  return;
}

