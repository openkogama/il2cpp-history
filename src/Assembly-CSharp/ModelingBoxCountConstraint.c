
/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CanAddCubeAt
               (ModelingBoxCountConstraint *this,IntVector *pos,MethodInfo *method)

{
  aIStack_1[0].x = pos->x;
  aIStack_1[0].y = pos->y;
  aIStack_1[0].z = pos->z;
  bVar2 = ModelingBoxConstraint::ModelingBoxConstraint_CanAddCubeAt
                    ((ModelingBoxConstraint *)this,aIStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean CanRemoveCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CanRemoveCubeAt
               (ModelingBoxCountConstraint *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Constraint_violited__min__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__current_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cubeModel;
  iVar2 = (this->fields).minCubesCount;
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pRVar3 = (pMVar1->fields).prototypeCubeModel, pRVar3 != (RuntimePrototypeCubeModel *)0x0)) {
    iVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                      (pRVar3,(MethodInfo *)0x0);
    if (iVar4 <= iVar2) {
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).minCubesCount,(MethodInfo *)0x0);
      pMVar1 = (this->fields).cubeModel;
      if ((pMVar1 == (MVCubeModelBase *)0x0) ||
         (pRVar3 = (pMVar1->fields).prototypeCubeModel, pRVar3 == (RuntimePrototypeCubeModel *)0x0))
      goto code_?;
      value = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                        (pRVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_6[0]._pointer._value = (void *)0x0;
      aRStack_6[0]._length = 0;
      aRStack_6[0]._12_4_ = 0;
      str3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_6
                         (StringLiteral_Constraint_violited__min__,pSVar5,StringLiteral__current_,
                          str3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
    }
    return iVar2 < iVar4;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void CubeModel_Changed(Object, CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint_CubeModel_Changed
               (ModelingBoxCountConstraint *this,Object *sender,CubeModelChangedEventArgs *e,
               MethodInfo *method)

{
  if (e != (CubeModelChangedEventArgs *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ModelingBoxCountConstraint(MVCubeModelBase, IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
               (ModelingBoxCountConstraint *this,MVCubeModelBase *cubeModel,IntVector *minCorner,
               IntVector *maxCorner,int32_t minCubeCount,MethodInfo *method)

{
  IStackX_8.x = maxCorner->x;
  IStackX_8.y = maxCorner->y;
  IStackX_8.z = maxCorner->z;
  aIStackX_18[0].x = minCorner->x;
  aIStackX_18[0].y = minCorner->y;
  aIStackX_18[0].z = minCorner->z;
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            ((ModelingBoxConstraint *)this,aIStackX_18,&IStackX_8,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cubeModel = cubeModel;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModel >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).minCubesCount = minCubeCount;
  return;
}

