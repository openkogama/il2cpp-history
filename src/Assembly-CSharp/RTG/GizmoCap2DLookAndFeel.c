
/* GizmoCap2DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoCap2DLookAndFeel::GizmoCap2DLookAndFeel__ctor
               (GizmoCap2DLookAndFeel *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._fillMode = 2;
  (this->fields)._scale = 1.0;
  (this->fields)._circleRadius = 12.0;
  (this->fields)._quadWidth = 25.0;
  (this->fields)._quadHeight = 25.0;
  (this->fields)._arrowBaseRadius = 5.0;
  (this->fields)._arrowHeight = 20.0;
  (this->fields)._color.r = fVar4;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar2;
  (this->fields)._color.a = fVar1;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->g;
  fVar3 = pCVar5->b;
  fVar2 = pCVar5->a;
  (this->fields)._hoveredColor.r = pCVar5->r;
  (this->fields)._hoveredColor.g = fVar4;
  (this->fields)._hoveredColor.b = fVar3;
  (this->fields)._hoveredColor.a = fVar2;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._borderColor.r = _UNK_?;
  (this->fields)._borderColor.g = fVar4;
  (this->fields)._borderColor.b = fVar3;
  (this->fields)._borderColor.a = fVar2;
  pCVar5 = RTSystemValues::RTSystemValues_get_HoveredAxisColor(&CStack_6,(MethodInfo *)0x0);
  fVar4 = pCVar5->g;
  fVar3 = pCVar5->b;
  fVar2 = pCVar5->a;
  (this->fields)._hoveredBorderColor.r = pCVar5->r;
  (this->fields)._hoveredBorderColor.g = fVar4;
  (this->fields)._hoveredBorderColor.b = fVar3;
  (this->fields)._hoveredBorderColor.a = fVar2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}

