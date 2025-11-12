
/* IModelingConstraint <Initialize>b__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVRotator+<>c__DisplayClass17_0::MVRotator_c_DisplayClass17_0__Initialize_b__0
          (MVRotator_c_DisplayClass17_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingBoxCountConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).__4__this;
  if (pMVar1 == (MVRotator *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IModelingConstraint *)(*pcVar2)();
    return pIVar3;
  }
  pMVar4 = (ModelingBoxConstraint__Class *)(pMVar1->fields)._._CubeModel_k__BackingField;
  uVar5._0_2_ = (this->fields).max.x;
  uVar5._2_2_ = (this->fields).max.y;
  iVar6 = (this->fields).min.z;
  uVar7._0_2_ = (this->fields).min.x;
  uVar7._2_2_ = (this->fields).min.y;
  iVar8 = (this->fields).max.z;
  this_00 = (ModelingBoxConstraint *)FUN_?(TypeInfo__ModelingBoxCountConstraint);
  IStackX_8._0_4_ = uVar5;
  IStackX_8.z = iVar8;
  aIStackX_18[0]._0_4_ = uVar7;
  aIStackX_18[0].z = iVar6;
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            (this_00,aIStackX_18,&IStackX_8,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  this_00[1].klass = pMVar4;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)(this_00 + 1) >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  *(undefined4 *)&this_00[1].monitor = 1;
  return (IModelingConstraint *)this_00;
}

