
/* XZGridLookAndFeel() */

void Assembly-CSharp.dll::RTG::XZGridLookAndFeel::XZGridLookAndFeel__ctor
               (XZGridLookAndFeel *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._lineColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields)._lineColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields)._lineColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._lineColor.a = (float)uVar2;
  (this->fields)._useCellFading = 1;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar4 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}

