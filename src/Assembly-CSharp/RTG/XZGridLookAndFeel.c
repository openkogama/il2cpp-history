
/* XZGridLookAndFeel() */

void Assembly-CSharp.dll::RTG::XZGridLookAndFeel::XZGridLookAndFeel__ctor
               (XZGridLookAndFeel *this,MethodInfo *method)

{
  pCVar1 = ColorEx::ColorEx_FromByteValues(&CStack_2,0x80,0x80,0x80,0x66,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._lineColor.r = pCVar1->r;
  (this->fields)._lineColor.g = fVar3;
  (this->fields)._lineColor.b = fVar4;
  (this->fields)._lineColor.a = fVar5;
  (this->fields)._useCellFading = 1;
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  return;
}

