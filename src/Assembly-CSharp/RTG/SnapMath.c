
/* NumSnapSteps CalculateNumSnapSteps(Single, Single) */

NumSnapSteps *
Assembly-CSharp.dll::RTG::SnapMath::SnapMath_CalculateNumSnapSteps
          (NumSnapSteps *__return_storage_ptr__,float snapStep,float total,MethodInfo *method)

{
  __return_storage_ptr__->AbsFltNumSteps = 0.0;
  __return_storage_ptr__->IntNumSteps = 0;
  __return_storage_ptr__->AbsIntNumSteps = 0;
  __return_storage_ptr__->AbsFracSteps = 0.0;
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->FltNumSteps = total / snapStep;
  __return_storage_ptr__->AbsFltNumSteps =
       (float)((uint)__return_storage_ptr__->FltNumSteps & _UNK_?);
  __return_storage_ptr__->IntNumSteps = (int)__return_storage_ptr__->FltNumSteps;
  uVar2 = __return_storage_ptr__->IntNumSteps;
  if (bVar1) {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uVar3 = (int)uVar2 >> 0x1f;
  __return_storage_ptr__->AbsIntNumSteps = (uVar2 ^ uVar3) - uVar3;
  __return_storage_ptr__->AbsFracSteps =
       __return_storage_ptr__->AbsFltNumSteps - (float)__return_storage_ptr__->AbsIntNumSteps;
  return __return_storage_ptr__;
}


/* Boolean CanExtractSnap(Single, Single) */

bool Assembly-CSharp.dll::RTG::SnapMath::SnapMath_CanExtractSnap
               (float snapStep,float accumulated,MethodInfo *method)

{
  return snapStep <= (float)((uint)accumulated & _UNK_?);
}


/* Single ExtractSnap(Single, Single ByRef) */

float Assembly-CSharp.dll::RTG::SnapMath::SnapMath_ExtractSnap
                (float snapStep,float *accumulated,MethodInfo *method)

{
  fVar1 = (float)(int)(*accumulated / snapStep) * snapStep;
  *accumulated = *accumulated - fVar1;
  return fVar1;
}


/* Single ExtractSnap(Single, Single) */

float Assembly-CSharp.dll::RTG::SnapMath::SnapMath_ExtractSnap_1
                (float snapStep,float accumulated,MethodInfo *method)

{
  return (float)(int)(accumulated / snapStep) * snapStep;
}

