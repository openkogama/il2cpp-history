
/* Void Initialize(SettingsWrapper, String, Int32) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_Initialize
               (ThemeAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._Key_k__BackingField = key;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._Groups_k__BackingField = groups;
  (this->fields).themeSettings = settings;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).themeSettings >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pSVar7 = (this->fields).themeSettings;
  if (pSVar7 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
    ;
    pLVar9 = (pSVar7->fields).attributes;
    if (pLVar9 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
      pTVar10 = (pLVar9->fields)._items;
      piVar11 = &(pLVar9->fields)._version;
      *piVar11 = *piVar11 + 1;
      if (pTVar10 == (ThemeAttribute__Array *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar2 = (pLVar9->fields)._size;
      if (uVar2 < (uint)pTVar10->max_length) {
        (pLVar9->fields)._size = uVar2 + 1;
      }
      else {
        uVar2 = (pLVar9->fields)._size;
        FUN_?(pLVar9,uVar2 + 1,
                      (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pTVar10,unaff_RDI);
        pTVar10 = (pLVar9->fields)._items;
        (pLVar9->fields)._size = uVar2 + 1;
        if (pTVar10 == (ThemeAttribute__Array *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if ((uint)pTVar10->max_length <= uVar2) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar6 = iRam_? != 0;
      pTVar10->vector[(int)uVar2] = this;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)(pTVar10->vector + (int)uVar2) >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar5;
          LOCK();
          uVar4 = *puVar5;
          if (uVar13 == uVar4) {
            *puVar5 = uVar13 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar4);
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateSettings(String, Object) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute::ThemeAttribute_UpdateSettings
               (ThemeAttribute *this,String *key,Object *value,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  pSVar2 = (this->fields).themeSettings;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    ,key,value,uVar1);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pSVar2->fields).settingsData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)key,value,CONCAT31((int3)((uint)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

