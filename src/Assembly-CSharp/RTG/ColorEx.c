
/* Color FromByteValues(Byte, Byte, Byte, Byte) */

Color * Assembly-CSharp.dll::RTG::ColorEx::ColorEx_FromByteValues
                  (Color *__return_storage_ptr__,uint8_t r,uint8_t g,uint8_t b,uint8_t a,
                  MethodInfo *method)

{
  fVar1 = _UNK_?;
  __return_storage_ptr__->r = (float)r * _UNK_?;
  __return_storage_ptr__->g = (float)g * fVar1;
  __return_storage_ptr__->b = (float)b * fVar1;
  __return_storage_ptr__->a = (float)a * fVar1;
  return __return_storage_ptr__;
}


/* Color[] GetFilledColorArray(Int32, Color) */

Color__Array *
Assembly-CSharp.dll::RTG::ColorEx::ColorEx_GetFilledColorArray
          (int32_t arrayLength,Color *fillValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,arrayLength);
  if (0 < arrayLength) {
    uVar2 = 0;
    pCVar3 = pCVar1->vector;
    uVar4 = uVar2;
    if (pCVar1 == (Color__Array *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      pCVar1 = (Color__Array *)(*pcVar5)();
      return pCVar1;
    }
    do {
      if ((uint)pCVar1->max_length <= (uint)uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        pCVar1 = (Color__Array *)(*pcVar5)();
        return pCVar1;
      }
      fVar6 = fillValue->g;
      fVar7 = fillValue->b;
      fVar8 = fillValue->a;
      uVar2 = (ulonglong)((uint)uVar2 + 1);
      uVar4 = uVar4 + 1;
      pCVar3->r = fillValue->r;
      pCVar3->g = fVar6;
      pCVar3->b = fVar7;
      pCVar3->a = fVar8;
      pCVar3 = pCVar3 + 1;
    } while ((longlong)uVar4 < (longlong)arrayLength);
  }
  return pCVar1;
}

