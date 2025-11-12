
/* NullableAttribute(Byte) */

void Assembly-CSharp.dll::System::Runtime::CompilerServices::NullableAttribute::
     NullableAttribute__ctor(NullableAttribute *this,uint8_t param_2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
  if (pBVar1 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pBVar1->max_length == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  pBVar1->vector[0] = param_2;
  (this->fields).NullableFlags = pBVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

