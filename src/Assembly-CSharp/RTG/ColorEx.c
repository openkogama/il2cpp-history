
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
          (int32_t arrayLength,Color fillValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  pCVar1 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,arrayLength);
  uVar2 = 0;
  pCVar3 = pCVar1;
  if (0 < arrayLength) {
    do {
      if (pCVar1 == (Color__Array *)0x0) {
        func_?();
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        pCVar3 = (Color__Array *)(*pcVar4)();
        return pCVar3;
      }
      if (pCVar1->max_length <= uVar2) goto code_?;
      pCVar3->vector[0].r = fillValue.r;
      pCVar3->vector[0].g = fillValue.g;
      pCVar3->vector[0].b = fillValue.b;
      pCVar3->vector[0].a = fillValue.a;
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    } while ((int)uVar2 < arrayLength);
  }
  return pCVar1;
}


/* Color KeepAllButAlpha(Color, Single) */

Color * Assembly-CSharp.dll::RTG::ColorEx::ColorEx_KeepAllButAlpha
                  (Color *__return_storage_ptr__,Color color,float newAlpha,MethodInfo *method)

{
  __return_storage_ptr__->r = color.r;
  __return_storage_ptr__->g = color.g;
  __return_storage_ptr__->b = color.b;
  __return_storage_ptr__->a = newAlpha;
  return __return_storage_ptr__;
}

