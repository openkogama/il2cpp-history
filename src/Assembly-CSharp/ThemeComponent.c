
/* Void Initialize(Theme) */

void Assembly-CSharp.dll::ThemeComponent::ThemeComponent_Initialize
               (ThemeComponent *this,Theme *theme,MethodInfo *method)

{
  if (theme != (Theme *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_;
    pLVar2 = (theme->fields).components;
    if (pLVar2 != (List_1_ThemeComponent_ *)0x0) {
      piVar3 = &(pLVar2->fields)._version;
      *piVar3 = *piVar3 + 1;
      pTVar4 = (pLVar2->fields)._items;
      if (pTVar4 != (ThemeComponent__Array *)0x0) {
        uVar5 = (pLVar2->fields)._size;
        if (uVar5 < (uint)pTVar4->max_length) {
          (pLVar2->fields)._size = uVar5 + 1;
        }
        else {
          uVar5 = (pLVar2->fields)._size;
          FUN_?(pLVar2,uVar5 + 1,
                        (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,pTVar4,unaff_RDI);
          pTVar4 = (pLVar2->fields)._items;
          (pLVar2->fields)._size = uVar5 + 1;
          if (pTVar4 == (ThemeComponent__Array *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((uint)pTVar4->max_length <= uVar5) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar7 = iRam_? != 0;
        pTVar4->vector[(int)uVar5] = this;
        if (bVar7) {
          uVar5 = (uint)((ulonglong)(pTVar4->vector + (int)uVar5) >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

