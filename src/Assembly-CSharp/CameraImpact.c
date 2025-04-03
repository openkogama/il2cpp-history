
/* CameraImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::CameraImpact::CameraImpact__ctor
               (CameraImpact *this,Vector3 impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).impactCurve;
  (this->fields).impactDirection.x = impactDirection.x;
  (this->fields).impactDirection.y = impactDirection.y;
  (this->fields).impactDirection.z = impactDirection.z;
  *ppAVar1 = impactCurve;
  func_?(ppAVar1,impactCurve);
  (this->fields).forceMultiplier = forceMultiplier;
  (this->fields).impactSpace = impactSpace;
  return;
}

