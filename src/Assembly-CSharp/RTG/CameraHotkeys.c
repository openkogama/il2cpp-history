
/* CameraHotkeys() */

void Assembly-CSharp.dll::RTG::CameraHotkeys::CameraHotkeys__ctor
               (CameraHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Strafe_right);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_down);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Strafe_left);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_up);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Orbit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_forward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Move_back);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Look_around);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (Hotkeys *)FUN_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_forward,(MethodInfo *)0x0);
  if (pHVar1 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_W,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (pHVar1->fields)._useStrictModifierCheck = 0;
    (pHVar1->fields)._rMouseBtn = 1;
    (this->fields)._moveForward = pHVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._moveForward >> 0xc);
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
    Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_back,(MethodInfo *)0x0);
    if (pHVar1 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_S,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (pHVar1->fields)._useStrictModifierCheck = 0;
      (pHVar1->fields)._rMouseBtn = 1;
      (this->fields)._moveBack = pHVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._moveBack >> 0xc);
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
      Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Strafe_left,(MethodInfo *)0x0);
      if (pHVar1 != (Hotkeys *)0x0) {
        Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_A,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (pHVar1->fields)._useStrictModifierCheck = 0;
        (pHVar1->fields)._rMouseBtn = 1;
        (this->fields)._strafeLeft = pHVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields)._strafeLeft >> 0xc);
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
        Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Strafe_right,(MethodInfo *)0x0);
        if (pHVar1 != (Hotkeys *)0x0) {
          Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_D,(MethodInfo *)0x0);
          bVar2 = iRam_? != 0;
          (pHVar1->fields)._useStrictModifierCheck = 0;
          (pHVar1->fields)._rMouseBtn = 1;
          (this->fields)._strafeRight = pHVar1;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields)._strafeRight >> 0xc);
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
          Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_up,(MethodInfo *)0x0);
          if (pHVar1 != (Hotkeys *)0x0) {
            Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_E,(MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (pHVar1->fields)._useStrictModifierCheck = 0;
            (pHVar1->fields)._rMouseBtn = 1;
            (this->fields)._moveUp = pHVar1;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields)._moveUp >> 0xc);
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
            Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_down,(MethodInfo *)0x0);
            if (pHVar1 != (Hotkeys *)0x0) {
              Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_Q,(MethodInfo *)0x0);
              bVar2 = iRam_? != 0;
              (pHVar1->fields)._useStrictModifierCheck = 0;
              (pHVar1->fields)._rMouseBtn = 1;
              (this->fields)._moveDown = pHVar1;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(this->fields)._moveDown >> 0xc);
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
              Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Pan,(MethodInfo *)0x0);
              if (pHVar1 != (Hotkeys *)0x0) {
                bVar2 = iRam_? != 0;
                (pHVar1->fields)._useStrictModifierCheck = 0;
                (pHVar1->fields)._mMouseBtn = 1;
                (this->fields)._pan = pHVar1;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&(this->fields)._pan >> 0xc);
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
                Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Look_around,(MethodInfo *)0x0);
                if (pHVar1 != (Hotkeys *)0x0) {
                  bVar2 = iRam_? != 0;
                  (pHVar1->fields)._useStrictModifierCheck = 0;
                  (pHVar1->fields)._rMouseBtn = 1;
                  (this->fields)._lookAround = pHVar1;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(this->fields)._lookAround >> 0xc);
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
                  Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Orbit,(MethodInfo *)0x0);
                  if (pHVar1 != (Hotkeys *)0x0) {
                    bVar2 = iRam_? != 0;
                    (pHVar1->fields)._useStrictModifierCheck = 0;
                    (pHVar1->fields)._lAlt = 1;
                    (pHVar1->fields)._rMouseBtn = 1;
                    (this->fields)._orbit = pHVar1;
                    if (bVar2) {
                      uVar3 = (uint)((ulonglong)&(this->fields)._orbit >> 0xc);
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
                      puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR)
                      ;
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

