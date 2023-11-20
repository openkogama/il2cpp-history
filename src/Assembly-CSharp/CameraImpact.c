
/* CameraImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::CameraImpact::CameraImpact__ctor
               (CameraImpact *this,Vector3 impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).impactDirection.x = impactDirection.x;
  (this->fields).impactDirection.y = impactDirection.y;
  (this->fields).impactDirection.z = impactDirection.z;
  (this->fields).impactCurve = impactCurve;
  func_?(&(this->fields).impactCurve,impactCurve);
  (this->fields).forceMultiplier = forceMultiplier;
  (this->fields).impactSpace = impactSpace;
  return;
}

