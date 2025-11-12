
/* NumSnapSteps CalculateNumSnapSteps(Single, Single) */

NumSnapSteps * Assembly-CSharp.dll::RTG::SnapMath::SnapMath_CalculateNumSnapSteps(NumSnapSteps *__return_storage_ptr__,float snapStep,float total,MethodInfo *method)

{
  __return_storage_ptr__->AbsFltNumSteps = 0.0;
  __return_storage_ptr__->IntNumSteps = 0;
  __return_storage_ptr__->AbsIntNumSteps = 0;
  __return_storage_ptr__->AbsFracSteps = 0.0;
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->FltNumSteps = total / snapStep;
  __return_storage_ptr__->AbsFltNumSteps = __return_storage_ptr__->AbsFltNumSteps;
  __return_storage_ptr__->IntNumSteps = __return_storage_ptr__->IntNumSteps;
  __return_storage_ptr__->AbsIntNumSteps = __return_storage_ptr__->AbsIntNumSteps;
  fVar2 = __return_storage_ptr__->FltNumSteps;
  __return_storage_ptr__->FltNumSteps = fVar2;
  __return_storage_ptr__->AbsFltNumSteps = ABS(total / snapStep);
  __return_storage_ptr__->IntNumSteps = __return_storage_ptr__->IntNumSteps;
  __return_storage_ptr__->AbsIntNumSteps = __return_storage_ptr__->AbsIntNumSteps;
  __return_storage_ptr__->IntNumSteps = (int)fVar2;
  iVar3 = __return_storage_ptr__->IntNumSteps;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar3;
  }
  __return_storage_ptr__->AbsIntNumSteps = iVar4;
  uVar5 = __return_storage_ptr__->AbsIntNumSteps;
  __return_storage_ptr__->AbsFracSteps = __return_storage_ptr__->AbsFltNumSteps - (float)(int)uVar5;
  return __return_storage_ptr__;
}


/* Boolean CanExtractSnap(Single, Single) */

bool Assembly-CSharp.dll::RTG::SnapMath::SnapMath_CanExtractSnap(float snapStep,float accumulated,MethodInfo *method)

{
  return snapStep <= ABS(accumulated);
}


/* Single ExtractSnap(Single, Single ByRef) */

float Assembly-CSharp.dll::RTG::SnapMath::SnapMath_ExtractSnap(float snapStep,float *accumulated,MethodInfo *method)

{
  fVar1 = (float)(int)(*accumulated / snapStep) * snapStep;
  *accumulated = *accumulated - fVar1;
  return fVar1;
}


/* Single ExtractSnap(Single, Single) */

float Assembly-CSharp.dll::RTG::SnapMath::SnapMath_ExtractSnap_1(float snapStep,float accumulated,MethodInfo *method)

{
  return (float)(int)(accumulated / snapStep) * snapStep;
}

