
/* Settings() */

void Assembly-CSharp.dll::RTG::Settings::Settings__ctor(Settings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._canBeDisplayed = 1;
  (this->fields)._isExpanded = 1;
  (this->fields)._foldoutLabel = StringLiteral_Settings;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._foldoutLabel >> 0xc);
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


/* Void set_FoldoutLabel(String) */

void Assembly-CSharp.dll::RTG::Settings::Settings_set_FoldoutLabel
               (Settings *this,String *value,MethodInfo *method)

{
  if ((value != (String *)0x0) &&
     (bVar1 = iRam_? != 0, (this->fields)._foldoutLabel = value, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this->fields)._foldoutLabel >> 0xc);
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

