
/* SceneGridHotkeys() */

void Assembly-CSharp.dll::RTG::SceneGridHotkeys::SceneGridHotkeys__ctor
               (SceneGridHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Grid_down);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Grid_up);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Snap_to_cursor_pick_point);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (Hotkeys *)FUN_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(pHVar1,StringLiteral_Grid_up,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (pHVar1 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_RightBracket,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._gridUp = pHVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._gridUp >> 0xc);
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
    pHVar1 = (Hotkeys *)FUN_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor_1
              (pHVar1,StringLiteral_Grid_down,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
    if (pHVar1 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_LeftBracket,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._gridDown = pHVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._gridDown >> 0xc);
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
      pHVar1 = (Hotkeys *)FUN_?(TypeInfo__RTG__Hotkeys);
      Hotkeys::Hotkeys__ctor_1
                (pHVar1,StringLiteral_Snap_to_cursor_pick_point,(HotkeysStaticData)0x0,
                 (MethodInfo *)0x0);
      if (pHVar1 != (Hotkeys *)0x0) {
        bVar2 = iRam_? != 0;
        (pHVar1->fields)._lAlt = 1;
        (this->fields)._snapToCursorPickPoint = pHVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields)._snapToCursorPickPoint >> 0xc);
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
          puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar5 = *puVar6;
            if (uVar7 == uVar5) {
              *puVar6 = uVar7 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar5);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

