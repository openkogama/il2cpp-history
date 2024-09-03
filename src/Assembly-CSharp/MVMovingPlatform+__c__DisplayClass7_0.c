
/* IModelingConstraint <Initialize>b__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVMovingPlatform+<>c__DisplayClass7_0::
MVMovingPlatform_c_DisplayClass7_0__Initialize_b__0
          (MVMovingPlatform_c_DisplayClass7_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingBoxCountConstraint);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).__4__this;
  if (pMVar1 != (MVMovingPlatform *)0x0) {
    cubeModel = (pMVar1->fields)._._CubeModel_k__BackingField;
    minCorner = (this->fields).min;
    maxCorner = (this->fields).max;
    this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
    ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
              (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,1,(MethodInfo *)0x0);
    return (IModelingConstraint *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IModelingConstraint *)(*pcVar2)();
  return pIVar3;
}

