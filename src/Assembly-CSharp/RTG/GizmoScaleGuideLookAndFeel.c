
/* GizmoScaleGuideLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoScaleGuideLookAndFeel::GizmoScaleGuideLookAndFeel__ctor
               (GizmoScaleGuideLookAndFeel *this,MethodInfo *method)

{
  (this->fields)._useZoomFactor = 1;
  pCVar1 = RTSystemValues::RTSystemValues_get_XAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._xAxisColor.r = pCVar1->r;
  (this->fields)._xAxisColor.g = fVar3;
  (this->fields)._xAxisColor.b = fVar4;
  (this->fields)._xAxisColor.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_YAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._yAxisColor.r = pCVar1->r;
  (this->fields)._yAxisColor.g = fVar3;
  (this->fields)._yAxisColor.b = fVar4;
  (this->fields)._yAxisColor.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_ZAxisColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->r;
  fVar4 = pCVar1->g;
  fVar5 = pCVar1->b;
  fVar6 = pCVar1->a;
  (this->fields)._axisLength = 2.0;
  (this->fields)._zAxisColor.r = fVar3;
  (this->fields)._zAxisColor.g = fVar4;
  (this->fields)._zAxisColor.b = fVar5;
  (this->fields)._zAxisColor.a = fVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}

