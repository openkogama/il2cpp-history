
/* GizmoCap2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor(GizmoCap2DLookAndFeel *this,MethodInfo *method)

{
  (this->fields)._fillMode = 2;
  (this->fields)._scale = 1.0;
  (this->fields)._circleRadius = 12.0;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._arrowBaseRadius = 5.0;
  (this->fields)._arrowHeight = 20.0;
  (this->fields)._color.r = 1.0;
  (this->fields)._color.g = 1.0;
  (this->fields)._color.b = 1.0;
  (this->fields)._color.a = 1.0;
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._hoveredColor.r = pCVar1->r;
  (this->fields)._hoveredColor.g = fVar3;
  (this->fields)._hoveredColor.b = fVar4;
  (this->fields)._hoveredColor.a = fVar5;
  (this->fields)._borderColor.r = 1.0;
  (this->fields)._borderColor.g = 1.0;
  (this->fields)._borderColor.b = 1.0;
  (this->fields)._borderColor.a = 1.0;
  pCVar1 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._hoveredBorderColor.r = pCVar1->r;
  (this->fields)._hoveredBorderColor.g = fVar3;
  (this->fields)._hoveredBorderColor.b = fVar4;
  (this->fields)._hoveredBorderColor.a = fVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}

