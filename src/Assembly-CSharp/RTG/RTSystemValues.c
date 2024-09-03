
/* Single get_AxisAlpha() */

float Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_AxisAlpha(MethodInfo *method)

{
  return _UNK_?;
}


/* Color get_CameraBkGradientFirstColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_CameraBkGradientFirstColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x47,0x47,0x47,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_CameraBkGradientSecondColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_CameraBkGradientSecondColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  __return_storage_ptr__->r = _UNK_?;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar1;
  return __return_storage_ptr__;
}


/* Color get_CenterAxisColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_CenterAxisColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xcc,0xcc,0xcc,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_GridLineColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_GridLineColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x80,0x80,0x80,0x66,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_GuideBorderColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_GuideBorderColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->r = 0.8;
  __return_storage_ptr__->g = 0.8;
  __return_storage_ptr__->b = 0.8;
  __return_storage_ptr__->a = 0.8;
  return __return_storage_ptr__;
}


/* Color get_GuideFillColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_GuideFillColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->r = 0.5;
  __return_storage_ptr__->g = 0.5;
  __return_storage_ptr__->b = 0.5;
  __return_storage_ptr__->a = 0.1;
  return __return_storage_ptr__;
}


/* Color get_HoveredAxisColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_HoveredAxisColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xf6,0xf2,0x32,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_XAxisColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_XAxisColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0xdb,0x3e,0x1d,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_YAxisColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_YAxisColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x9a,0xf3,0x48,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Color get_ZAxisColor() */

Color * Assembly-CSharp.dll::RTG::RTSystemValues::RTSystemValues_get_ZAxisColor
                  (Color *__return_storage_ptr__,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x3a,0x7a,0xf8,0xff,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}

