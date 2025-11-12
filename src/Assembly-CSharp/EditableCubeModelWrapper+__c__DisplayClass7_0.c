
/* IModelingConstraint <SetConstraints>b__0() */

IModelingConstraint *
Assembly-CSharp.dll::EditableCubeModelWrapper+<>c__DisplayClass7_0::
EditableCubeModelWrapper_c_DisplayClass7_0__SetConstraints_b__0
          (EditableCubeModelWrapper_c_DisplayClass7_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingBoxCountConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).__4__this;
  if (pEVar1 == (EditableCubeModelWrapper *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IModelingConstraint *)(*pcVar2)();
    return pIVar3;
  }
  pMVar4 = (ModelingBoxConstraint__Class *)(pEVar1->fields).cubeModelBase;
  uVar5._0_2_ = (this->fields).max.x;
  uVar5._2_2_ = (this->fields).max.y;
  iVar6 = (this->fields).min.z;
  uVar7._0_2_ = (this->fields).min.x;
  uVar7._2_2_ = (this->fields).min.y;
  iVar8 = (this->fields).max.z;
  iVar9 = (this->fields).minCubeCount;
  this_00 = (ModelingBoxConstraint *)FUN_?(TypeInfo__ModelingBoxCountConstraint);
  IStackX_8._0_4_ = uVar5;
  IStackX_8.z = iVar8;
  IStackX_18._0_4_ = uVar7;
  IStackX_18.z = iVar6;
  ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
            (this_00,&IStackX_18,&IStackX_8,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  this_00[1].klass = pMVar4;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)(this_00 + 1) >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar13 == *puVar14;
      if (bVar10) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  *(int32_t *)&this_00[1].monitor = iVar9;
  return (IModelingConstraint *)this_00;
}

