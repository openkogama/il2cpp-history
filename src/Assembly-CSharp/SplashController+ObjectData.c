
/* SplashController+ObjectData() */

void Assembly-CSharp.dll::SplashController+ObjectData::SplashController_ObjectData__ctor
               (SplashController_ObjectData *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._TimeSinceLastRingEmission_k__BackingField = INFINITY;
  (this->fields)._IsInWater_k__BackingField = 0;
  return;
}

