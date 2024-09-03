
/* GizmoRotationArc3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoRotationArc3DLookAndFeel::GizmoRotationArc3DLookAndFeel__ctor
               (GizmoRotationArc3DLookAndFeel *this,MethodInfo *method)

{
  (this->fields)._useShortestRotation = 1;
  (this->fields)._fillFlags = 3;
  pCVar1 = RTSystemValues::RTSystemValues_get_GuideFillColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._color.r = pCVar1->r;
  (this->fields)._color.g = fVar3;
  (this->fields)._color.b = fVar4;
  (this->fields)._color.a = fVar5;
  pCVar1 = RTSystemValues::RTSystemValues_get_GuideBorderColor(&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._borderColor.r = pCVar1->r;
  (this->fields)._borderColor.g = fVar3;
  (this->fields)._borderColor.b = fVar4;
  (this->fields)._borderColor.a = fVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}

