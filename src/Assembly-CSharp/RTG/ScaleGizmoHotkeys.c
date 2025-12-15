
/* ScaleGizmoHotkeys() */

void Assembly-CSharp.dll::RTG::ScaleGizmoHotkeys::ScaleGizmoHotkeys__ctor
               (ScaleGizmoHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Change_multi_axis_mode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Hotkeys *)FUN_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1
            (this_00,StringLiteral_Change_multi_axis_mode,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (this_00 == (Hotkeys *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Hotkeys::Hotkeys_set_Key(this_00,KeyCode__Enum_None,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this_00->fields)._lShift = 1;
  (this->fields)._changeMultiAxisMode = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._changeMultiAxisMode >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

